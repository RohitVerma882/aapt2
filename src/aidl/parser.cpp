/*
 * Copyright (C) 2019, The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "parser.h"
#include "aidl_language_y.h"
#include "logging.h"

void yylex_init(void**);
void yylex_destroy(void*);
void yyset_in(FILE* f, void*);
int yyparse(Parser*);
YY_BUFFER_STATE yy_scan_buffer(char*, size_t, void*);
void yy_delete_buffer(YY_BUFFER_STATE, void*);

const AidlDocument* Parser::Parse(const std::string& filename,
                                  const android::aidl::IoDelegate& io_delegate,
                                  AidlTypenames& typenames, bool is_preprocessed) {
  auto clean_path = android::aidl::IoDelegate::CleanPath(filename);
  // reuse pre-parsed document from typenames
  for (auto& doc : typenames.AllDocuments()) {
    if (doc->GetLocation().GetFile() == clean_path) {
      return doc.get();
    }
  }
  // Make sure we can read the file first, before trashing previous state.
  unique_ptr<string> raw_buffer = io_delegate.GetFileContents(clean_path);
  if (raw_buffer == nullptr) {
    AIDL_ERROR(clean_path) << "Error while opening file for parsing";
    return nullptr;
  }

  // We're going to scan this buffer in place, and yacc demands we put two
  // nulls at the end.
  raw_buffer->append(2u, '\0');

  Parser parser(clean_path, *raw_buffer, is_preprocessed);

  if (yy::parser(&parser).parse() != 0 || parser.HasError()) {
    return nullptr;
  }

  // transfer ownership to AidlTypenames and return the raw pointer
  const AidlDocument* result = parser.document_.get();
  if (!typenames.AddDocument(std::move(parser.document_))) {
    return nullptr;
  }
  return result;
}

void Parser::SetTypeParameters(AidlTypeSpecifier* type,
                               std::vector<std::unique_ptr<AidlTypeSpecifier>>* type_args) {
  if (type->IsArray()) {
    AIDL_ERROR(type) << "Must specify type parameters (<>) before array ([]).";
    AddError();
  }
  if (!type->SetTypeParameters(type_args)) {
    AIDL_ERROR(type) << "Can only specify one set of type parameters.";
    AddError();
    delete type_args;
  }
}

void Parser::CheckValidTypeName(const AidlToken& token, const AidlLocation& loc) {
  if (!is_preprocessed_ && token.GetText().find('.') != std::string::npos) {
    AIDL_ERROR(loc) << "Type name can't be qualified. Use `package`.";
    AddError();
  }
}

void Parser::SetPackage(const AidlPackage& package) {
  if (is_preprocessed_) {
    AIDL_ERROR(package) << "Preprocessed file can't declare package.";
    AddError();
  }
  package_ = package.GetName();
}

class ReferenceResolver : public AidlVisitor {
 public:
  ReferenceResolver(const AidlDefinedType* scope, TypeResolver& resolver, bool* success)
      : scope_(scope), resolver_(resolver), success_(success) {}

  void Visit(const AidlTypeSpecifier& t) override {
    // We're visiting the same node again. This can happen when two constant references
    // point to an ancestor of this node.
    if (t.IsResolved()) {
      return;
    }

    AidlTypeSpecifier& type = const_cast<AidlTypeSpecifier&>(t);
    if (!resolver_(scope_, &type)) {
      AIDL_ERROR(type) << "Failed to resolve '" << type.GetUnresolvedName() << "'";
      *success_ = false;
    }
  }

  void Visit(const AidlConstantReference& v) override {
    if (IsCircularReference(&v)) {
      *success_ = false;
      return;
    }

    const AidlConstantValue* resolved = v.Resolve(scope_);
    if (!resolved) {
      AIDL_ERROR(v) << "Unknown reference '" << v.Literal() << "'";
      *success_ = false;
      return;
    }

    // On error, skip recursive visiting to avoid redundant messages
    if (!*success_) {
      return;
    }
    // resolve recursive references
    Push(&v);
    VisitBottomUp(*this, *resolved);
    Pop();
  }

 private:
  struct StackElem {
    const AidlDefinedType* scope;
    const AidlConstantReference* ref;
  };

  void Push(const AidlConstantReference* ref) {
    stack_.push_back({scope_, ref});
    if (ref->GetRefType()) {
      scope_ = ref->GetRefType()->GetDefinedType();
    }
  }

  void Pop() {
    scope_ = stack_.back().scope;
    stack_.pop_back();
  }

  bool IsCircularReference(const AidlConstantReference* ref) {
    auto it = std::find_if(stack_.begin(), stack_.end(),
                           [&](const auto& elem) { return elem.ref == ref; });
    if (it == stack_.end()) {
      return false;
    }
    std::vector<std::string> path;
    while (it != stack_.end()) {
      path.push_back(it->ref->Literal());
      ++it;
    }
    path.push_back(ref->Literal());
    AIDL_ERROR(ref) << "Found a circular reference: " << android::base::Join(path, " -> ");
    return true;
  }

  const AidlDefinedType* scope_;
  TypeResolver& resolver_;
  bool* success_;
  std::vector<StackElem> stack_ = {};
};

// Resolve "unresolved" types in the "main" document.
bool ResolveReferences(const AidlDocument& document, TypeResolver& type_resolver) {
  bool success = true;

  for (const auto& type : document.DefinedTypes()) {
    ReferenceResolver ref_resolver{type.get(), type_resolver, &success};
    VisitBottomUp(ref_resolver, *type);
  }

  return success;
}

Parser::Parser(const std::string& filename, std::string& raw_buffer, bool is_preprocessed)
    : filename_(filename), is_preprocessed_(is_preprocessed) {
  yylex_init(&scanner_);
  buffer_ = yy_scan_buffer(&raw_buffer[0], raw_buffer.length(), scanner_);
}

Parser::~Parser() {
  yy_delete_buffer(buffer_, scanner_);
  yylex_destroy(scanner_);
}

void Parser::MakeDocument(const AidlLocation& location, const Comments& comments,
                          std::vector<std::unique_ptr<AidlImport>> imports,
                          std::vector<std::unique_ptr<AidlDefinedType>> defined_types) {
  AIDL_FATAL_IF(document_.get(), location);
  document_ = std::make_unique<AidlDocument>(location, comments, std::move(imports),
                                             std::move(defined_types), is_preprocessed_);
}