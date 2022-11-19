// A Bison parser, made by GNU Bison 3.8.2.

// Skeleton interface for Bison GLR parsers in C++

// Copyright (C) 2002-2015, 2018-2021 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// C++ GLR parser skeleton written by Akim Demaille.

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.

#ifndef YY_YY_STORAGE_EMULATED_0_APPPROJECTS_AAPT_SRC_AIDL_AIDL_LANGUAGE_Y_H_INCLUDED
# define YY_YY_STORAGE_EMULATED_0_APPPROJECTS_AAPT_SRC_AIDL_AIDL_LANGUAGE_Y_H_INCLUDED

#include <iostream>
#include <stdexcept>
#include <string>

#if defined __cplusplus
# define YY_CPLUSPLUS __cplusplus
#else
# define YY_CPLUSPLUS 199711L
#endif

// Support move semantics when possible.
#if 201103L <= YY_CPLUSPLUS
# define YY_MOVE           std::move
# define YY_MOVE_OR_COPY   move
# define YY_MOVE_REF(Type) Type&&
# define YY_RVREF(Type)    Type&&
# define YY_COPY(Type)     Type
#else
# define YY_MOVE
# define YY_MOVE_OR_COPY   copy
# define YY_MOVE_REF(Type) Type&
# define YY_RVREF(Type)    const Type&
# define YY_COPY(Type)     const Type&
#endif

// Support noexcept when possible.
#if 201103L <= YY_CPLUSPLUS
# define YY_NOEXCEPT noexcept
# define YY_NOTHROW
#else
# define YY_NOEXCEPT
# define YY_NOTHROW throw ()
#endif

// Support constexpr when possible.
#if 201703 <= YY_CPLUSPLUS
# define YY_CONSTEXPR constexpr
#else
# define YY_CONSTEXPR
#endif
# include "location.hh"


// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
# if defined __GNUC__ && !defined __EXCEPTIONS
#  define YY_EXCEPTIONS 0
# else
#  define YY_EXCEPTIONS 1
# endif
#endif

/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

namespace yy {
#line 101 "/storage/emulated/0/AppProjects/aapt/src/aidl/aidl_language_y.h"




  /// A Bison parser.
  class parser
  {
  public:
#ifdef YYSTYPE
# ifdef __GNUC__
#  pragma GCC message "bison: do not #define YYSTYPE in C++, use %define api.value.type"
# endif
    typedef YYSTYPE value_type;
#else
    /// Symbol semantic values.
    union value_type
    {
#line 70 "/storage/emulated/0/AppProjects/aapt/src/aidl/aidl_language_y.yy"

    AidlToken* token;
    char character;
    std::string *str;
    AidlAnnotation* annotation;
    AidlAnnotationParameter* param;
    std::map<std::string, std::shared_ptr<AidlConstantValue>>* param_list;
    std::vector<AidlAnnotation>* annotation_list;
    AidlTypeSpecifier* type;
    AidlArgument* arg;
    AidlArgument::Direction direction;
    AidlConstantValue* const_expr;
    AidlEnumerator* enumerator;
    std::vector<std::unique_ptr<AidlEnumerator>>* enumerators;
    std::vector<std::unique_ptr<AidlConstantValue>>* constant_value_list;
    std::vector<std::unique_ptr<AidlArgument>>* arg_list;
    AidlVariableDeclaration* variable;
    AidlMethod* method;
    AidlMember* constant;
    std::vector<std::unique_ptr<AidlMember>>* members;
    AidlDefinedType* declaration;
    std::vector<std::unique_ptr<AidlTypeSpecifier>>* type_args;
    std::vector<std::string>* type_params;
    std::vector<std::unique_ptr<AidlImport>>* imports;
    AidlImport* import;
    AidlPackage* package;
    std::vector<std::unique_ptr<AidlDefinedType>>* declarations;

#line 148 "/storage/emulated/0/AppProjects/aapt/src/aidl/aidl_language_y.h"

    };
#endif
    /// Backward compatibility (Bison 3.8).
    typedef value_type semantic_type;

    /// Symbol locations.
    typedef location location_type;

    /// Syntax errors thrown from user actions.
    struct syntax_error : std::runtime_error
    {
      syntax_error (const location_type& l, const std::string& m)
        : std::runtime_error (m)
        , location (l)
      {}

      syntax_error (const syntax_error& s)
        : std::runtime_error (s.what ())
        , location (s.location)
      {}

      ~syntax_error () YY_NOEXCEPT YY_NOTHROW;

      location_type location;
    };

    /// Token kinds.
    struct token
    {
      enum token_kind_type
      {
        YYEMPTY = -2,
    YYEOF = 0,                     // "end of file"
    YYerror = 256,                 // error
    YYUNDEF = 257,                 // "invalid token"
    PACKAGE = 258,                 // "package"
    IMPORT = 259,                  // "import"
    ANNOTATION = 260,              // "annotation"
    C_STR = 261,                   // "string literal"
    IDENTIFIER = 262,              // "identifier"
    INTERFACE = 263,               // "interface"
    PARCELABLE = 264,              // "parcelable"
    ONEWAY = 265,                  // "oneway"
    ENUM = 266,                    // "enum"
    UNION = 267,                   // "union"
    CONST = 268,                   // "const"
    CHARVALUE = 269,               // "char literal"
    FLOATVALUE = 270,              // "float literal"
    HEXVALUE = 271,                // "hex literal"
    INTVALUE = 272,                // "int literal"
    UNKNOWN = 273,                 // "unrecognized character"
    CPP_HEADER = 274,              // "cpp_header (which can also be used as an identifier)"
    IN = 275,                      // "in"
    INOUT = 276,                   // "inout"
    OUT = 277,                     // "out"
    TRUE_LITERAL = 278,            // "true"
    FALSE_LITERAL = 279,           // "false"
    LOGICAL_OR = 280,              // LOGICAL_OR
    LOGICAL_AND = 281,             // LOGICAL_AND
    EQUALITY = 282,                // EQUALITY
    NEQ = 283,                     // NEQ
    LEQ = 284,                     // LEQ
    GEQ = 285,                     // GEQ
    LSHIFT = 286,                  // LSHIFT
    RSHIFT = 287,                  // RSHIFT
    UNARY_PLUS = 288,              // UNARY_PLUS
    UNARY_MINUS = 289              // UNARY_MINUS
      };
      /// Backward compatibility alias (Bison 3.6).
      typedef token_kind_type yytokentype;
    };

    /// Token kind, as returned by yylex.
    typedef token::token_kind_type token_kind_type;

    /// Backward compatibility alias (Bison 3.6).
    typedef token_kind_type token_type;

    /// Symbol kinds.
    struct symbol_kind
    {
      enum symbol_kind_type
      {
        YYNTOKENS = 57, ///< Number of tokens.
        S_YYEMPTY = -2,
        S_YYEOF = 0,                             // "end of file"
        S_YYerror = 1,                           // error
        S_YYUNDEF = 2,                           // "invalid token"
        S_PACKAGE = 3,                           // "package"
        S_IMPORT = 4,                            // "import"
        S_ANNOTATION = 5,                        // "annotation"
        S_C_STR = 6,                             // "string literal"
        S_IDENTIFIER = 7,                        // "identifier"
        S_INTERFACE = 8,                         // "interface"
        S_PARCELABLE = 9,                        // "parcelable"
        S_ONEWAY = 10,                           // "oneway"
        S_ENUM = 11,                             // "enum"
        S_UNION = 12,                            // "union"
        S_CONST = 13,                            // "const"
        S_CHARVALUE = 14,                        // "char literal"
        S_FLOATVALUE = 15,                       // "float literal"
        S_HEXVALUE = 16,                         // "hex literal"
        S_INTVALUE = 17,                         // "int literal"
        S_18_ = 18,                              // '('
        S_19_ = 19,                              // ')'
        S_20_ = 20,                              // ','
        S_21_ = 21,                              // '='
        S_22_ = 22,                              // '['
        S_23_ = 23,                              // ']'
        S_24_ = 24,                              // '.'
        S_25_ = 25,                              // '{'
        S_26_ = 26,                              // '}'
        S_27_ = 27,                              // ';'
        S_UNKNOWN = 28,                          // "unrecognized character"
        S_CPP_HEADER = 29,                       // "cpp_header (which can also be used as an identifier)"
        S_IN = 30,                               // "in"
        S_INOUT = 31,                            // "inout"
        S_OUT = 32,                              // "out"
        S_TRUE_LITERAL = 33,                     // "true"
        S_FALSE_LITERAL = 34,                    // "false"
        S_LOGICAL_OR = 35,                       // LOGICAL_OR
        S_LOGICAL_AND = 36,                      // LOGICAL_AND
        S_37_ = 37,                              // '|'
        S_38_ = 38,                              // '^'
        S_39_ = 39,                              // '&'
        S_EQUALITY = 40,                         // EQUALITY
        S_NEQ = 41,                              // NEQ
        S_42_ = 42,                              // '<'
        S_43_ = 43,                              // '>'
        S_LEQ = 44,                              // LEQ
        S_GEQ = 45,                              // GEQ
        S_LSHIFT = 46,                           // LSHIFT
        S_RSHIFT = 47,                           // RSHIFT
        S_48_ = 48,                              // '+'
        S_49_ = 49,                              // '-'
        S_50_ = 50,                              // '*'
        S_51_ = 51,                              // '/'
        S_52_ = 52,                              // '%'
        S_UNARY_PLUS = 53,                       // UNARY_PLUS
        S_UNARY_MINUS = 54,                      // UNARY_MINUS
        S_55_ = 55,                              // '!'
        S_56_ = 56,                              // '~'
        S_YYACCEPT = 57,                         // $accept
        S_document = 58,                         // document
        S_identifier = 59,                       // identifier
        S_package = 60,                          // package
        S_imports = 61,                          // imports
        S_import = 62,                           // import
        S_qualified_name = 63,                   // qualified_name
        S_decls = 64,                            // decls
        S_decl = 65,                             // decl
        S_unannotated_decl = 66,                 // unannotated_decl
        S_type_params = 67,                      // type_params
        S_optional_type_params = 68,             // optional_type_params
        S_parcelable_decl = 69,                  // parcelable_decl
        S_parcelable_members = 70,               // parcelable_members
        S_variable_decl = 71,                    // variable_decl
        S_interface_decl = 72,                   // interface_decl
        S_interface_members = 73,                // interface_members
        S_const_expr = 74,                       // const_expr
        S_constant_value_list = 75,              // constant_value_list
        S_constant_value_non_empty_list = 76,    // constant_value_non_empty_list
        S_constant_decl = 77,                    // constant_decl
        S_enumerator = 78,                       // enumerator
        S_enumerators = 79,                      // enumerators
        S_enum_decl_body = 80,                   // enum_decl_body
        S_enum_decl = 81,                        // enum_decl
        S_union_decl = 82,                       // union_decl
        S_method_decl = 83,                      // method_decl
        S_arg_non_empty_list = 84,               // arg_non_empty_list
        S_arg_list = 85,                         // arg_list
        S_arg = 86,                              // arg
        S_non_array_type = 87,                   // non_array_type
        S_type = 88,                             // type
        S_type_args = 89,                        // type_args
        S_annotation_list = 90,                  // annotation_list
        S_parameter = 91,                        // parameter
        S_parameter_list = 92,                   // parameter_list
        S_parameter_non_empty_list = 93,         // parameter_non_empty_list
        S_annotation = 94,                       // annotation
        S_direction = 95                         // direction
      };
    };

    /// (Internal) symbol kind.
    typedef symbol_kind::symbol_kind_type symbol_kind_type;

    /// The number of tokens.
    static const symbol_kind_type YYNTOKENS = symbol_kind::YYNTOKENS;


    /// Build a parser object.
    parser (Parser* ps_yyarg);
    virtual ~parser ();

    /// Parse.  An alias for parse ().
    /// \returns  0 iff parsing succeeded.
    int operator() ();

    /// Parse.
    /// \returns  0 iff parsing succeeded.
    virtual int parse ();

#if YYDEBUG
    /// The current debugging stream.
    std::ostream& debug_stream () const;
    /// Set the current debugging stream.
    void set_debug_stream (std::ostream &);

    /// Type for debugging levels.
    typedef int debug_level_type;
    /// The current debugging level.
    debug_level_type debug_level () const;
    /// Set the current debugging level.
    void set_debug_level (debug_level_type l);
#endif

    /// Report a syntax error.
    /// \param loc    where the syntax error is found.
    /// \param msg    a description of the syntax error.
    virtual void error (const location_type& loc, const std::string& msg);

# if YYDEBUG
  public:
    /// \brief Report a symbol value on the debug stream.
    /// \param yykind       The symbol kind.
    /// \param yyvaluep     Its semantic value.
    /// \param yylocationp  Its location.
    virtual void yy_symbol_value_print_ (symbol_kind_type yykind,
                                         const value_type* yyvaluep,
                                         const location_type* yylocationp) const;
    /// \brief Report a symbol on the debug stream.
    /// \param yykind       The symbol kind.
    /// \param yyvaluep     Its semantic value.
    /// \param yylocationp  Its location.
    virtual void yy_symbol_print_ (symbol_kind_type yykind,
                                   const value_type* yyvaluep,
                                   const location_type* yylocationp) const;
  private:
    /// Debug stream.
    std::ostream* yycdebug_;
#endif


    // User arguments.
    Parser* ps;
  };

} // yy
#line 399 "/storage/emulated/0/AppProjects/aapt/src/aidl/aidl_language_y.h"




#endif // !YY_YY_STORAGE_EMULATED_0_APPPROJECTS_AAPT_SRC_AIDL_AIDL_LANGUAGE_Y_H_INCLUDED
