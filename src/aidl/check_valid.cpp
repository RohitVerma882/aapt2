/*
 * Copyright (C) 2021, The Android Open Source Project
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

#include "check_valid.h"
#include "aidl.h"

#include <vector>

namespace android {
namespace aidl {

using TypePredicate = std::function<bool(const AidlTypeSpecifier&)>;

namespace {
bool IsListOf(const AidlTypeSpecifier& type, TypePredicate pred) {
  return type.GetName() == "List" && type.IsGeneric() && type.GetTypeParameters().size() == 1 &&
         pred(*type.GetTypeParameters().at(0));
}
bool IsArrayOf(const AidlTypeSpecifier& type, TypePredicate pred) {
  return type.IsArray() && pred(type);
}
bool IsInterface(const AidlTypeSpecifier& type) {
  return type.GetDefinedType() && type.GetDefinedType()->AsInterface();
}
}  // namespace

struct CheckTypeVisitor : AidlVisitor {
  bool success = true;
  std::vector<TypePredicate> checkers;

  void Visit(const AidlTypeSpecifier& type) override {
    for (auto& checker : checkers) {
      if (!checker(type)) {
        success = false;
      }
    }
  }

  void Check(TypePredicate checker) { checkers.push_back(std::move(checker)); }
};

bool CheckValid(const AidlDocument& doc, const Options& options) {
  const auto lang = options.TargetLanguage();
  const auto min_sdk_version = options.GetMinSdkVersion();

  CheckTypeVisitor v;

  v.Check([&](const AidlTypeSpecifier& type) {
    const auto valid_version = MinSdkVersionFromString("Tiramisu").value();
    if ((IsListOf(type, IsInterface) || IsArrayOf(type, IsInterface)) &&
        lang == Options::Language::JAVA && min_sdk_version < valid_version) {
      const auto kind = IsListOf(type, IsInterface) ? "List" : "Array";
      AIDL_ERROR(type) << kind << " of interfaces is available since SDK = " << valid_version
                       << " in Java. Current min_sdk_version is " << min_sdk_version << ".";
      return false;
    }
    return true;
  });

  v.Check([&](const AidlTypeSpecifier& type) {
    const auto valid_version = MinSdkVersionFromString("S").value();
    if (type.GetName() == "ParcelableHolder" && min_sdk_version < valid_version) {
      AIDL_ERROR(type) << " ParcelableHolder is available since SDK = " << valid_version
                       << ". Current min_sdk_version is " << min_sdk_version << ".";
      return false;
    }
    return true;
  });

  VisitTopDown(v, doc);
  return v.success;
}

}  // namespace aidl
}  // namespace android
