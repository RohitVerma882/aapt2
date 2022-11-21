// A Bison parser, made by GNU Bison 3.8.2.

// Skeleton implementation for Bison GLR parsers in C

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

/* C GLR parser skeleton written by Paul Hilfinger.  */

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "glr.cc"

/* Pure parsers.  */
#define YYPURE 1






// First part of user prologue.
#line 17 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"

#include "aidl_language.h"
#include "parser.h"
#include "aidl_language_y.h"
#include "logging.h"
#include <android-base/parseint.h>
#include <set>
#include <map>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int yylex(yy::parser::semantic_type *, yy::parser::location_type *, void *);

AidlLocation loc(const yy::parser::location_type& begin, const yy::parser::location_type& end) {
  AIDL_FATAL_IF(begin.begin.filename != begin.end.filename, AIDL_LOCATION_HERE);
  AIDL_FATAL_IF(begin.end.filename != end.begin.filename, AIDL_LOCATION_HERE);
  AIDL_FATAL_IF(end.begin.filename != end.end.filename, AIDL_LOCATION_HERE);
  AidlLocation::Point begin_point {
    .line = begin.begin.line,
    .column = begin.begin.column,
  };
  AidlLocation::Point end_point {
    .line = end.end.line,
    .column = end.end.column,
  };
  return AidlLocation(*begin.begin.filename, begin_point, end_point, AidlLocation::Source::EXTERNAL);
}

AidlLocation loc(const yy::parser::location_type& l) {
  return loc(l, l);
}

#define lex_scanner ps->Scanner()


#line 95 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "aidl_language_y.h"

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif

# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

// This skeleton is based on C, yet compiles it as C++.
// So expect warnings about C style casts.
#if defined __clang__ && 306 <= __clang_major__ * 100 + __clang_minor__
# pragma clang diagnostic ignored "-Wold-style-cast"
#elif defined __GNUC__ && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# pragma GCC diagnostic ignored "-Wold-style-cast"
#endif

// On MacOS, PTRDIFF_MAX is defined as long long, which Clang's
// -pedantic reports as being a C++11 extension.
#if defined __APPLE__ && YY_CPLUSPLUS < 201103L \
    && defined __clang__ && 4 <= __clang_major__
# pragma clang diagnostic ignored "-Wc++11-long-long"
#endif

#undef YYEMPTY
#define YYEMPTY yy::parser::token::YYEMPTY
#undef YYEOF
#define YYEOF yy::parser::token::YYEOF
#undef YYerror
#define YYerror yy::parser::token::YYerror

#ifndef YYSTYPE
# define YYSTYPE yy::parser::value_type
#endif
#ifndef YYLTYPE
# define YYLTYPE yy::parser::location_type
#endif

typedef yy::parser::symbol_kind_type yysymbol_kind_t;

// Expose C++ symbol kinds to C.
#define S_YYEMPTY       yy::parser::symbol_kind::S_YYEMPTY
#define S_YYEOF         yy::parser::symbol_kind::S_YYEOF
#define S_YYerror       yy::parser::symbol_kind::S_YYerror
#define S_YYUNDEF       yy::parser::symbol_kind::S_YYUNDEF
#define S_PACKAGE       yy::parser::symbol_kind::S_PACKAGE
#define S_IMPORT        yy::parser::symbol_kind::S_IMPORT
#define S_ANNOTATION    yy::parser::symbol_kind::S_ANNOTATION
#define S_C_STR         yy::parser::symbol_kind::S_C_STR
#define S_IDENTIFIER    yy::parser::symbol_kind::S_IDENTIFIER
#define S_INTERFACE     yy::parser::symbol_kind::S_INTERFACE
#define S_PARCELABLE    yy::parser::symbol_kind::S_PARCELABLE
#define S_ONEWAY        yy::parser::symbol_kind::S_ONEWAY
#define S_ENUM          yy::parser::symbol_kind::S_ENUM
#define S_UNION         yy::parser::symbol_kind::S_UNION
#define S_CONST         yy::parser::symbol_kind::S_CONST
#define S_CHARVALUE     yy::parser::symbol_kind::S_CHARVALUE
#define S_FLOATVALUE    yy::parser::symbol_kind::S_FLOATVALUE
#define S_HEXVALUE      yy::parser::symbol_kind::S_HEXVALUE
#define S_INTVALUE      yy::parser::symbol_kind::S_INTVALUE
#define S_18_           yy::parser::symbol_kind::S_18_
#define S_19_           yy::parser::symbol_kind::S_19_
#define S_20_           yy::parser::symbol_kind::S_20_
#define S_21_           yy::parser::symbol_kind::S_21_
#define S_22_           yy::parser::symbol_kind::S_22_
#define S_23_           yy::parser::symbol_kind::S_23_
#define S_24_           yy::parser::symbol_kind::S_24_
#define S_25_           yy::parser::symbol_kind::S_25_
#define S_26_           yy::parser::symbol_kind::S_26_
#define S_27_           yy::parser::symbol_kind::S_27_
#define S_UNKNOWN       yy::parser::symbol_kind::S_UNKNOWN
#define S_CPP_HEADER    yy::parser::symbol_kind::S_CPP_HEADER
#define S_IN            yy::parser::symbol_kind::S_IN
#define S_INOUT         yy::parser::symbol_kind::S_INOUT
#define S_OUT           yy::parser::symbol_kind::S_OUT
#define S_TRUE_LITERAL  yy::parser::symbol_kind::S_TRUE_LITERAL
#define S_FALSE_LITERAL yy::parser::symbol_kind::S_FALSE_LITERAL
#define S_LOGICAL_OR    yy::parser::symbol_kind::S_LOGICAL_OR
#define S_LOGICAL_AND   yy::parser::symbol_kind::S_LOGICAL_AND
#define S_37_           yy::parser::symbol_kind::S_37_
#define S_38_           yy::parser::symbol_kind::S_38_
#define S_39_           yy::parser::symbol_kind::S_39_
#define S_EQUALITY      yy::parser::symbol_kind::S_EQUALITY
#define S_NEQ           yy::parser::symbol_kind::S_NEQ
#define S_42_           yy::parser::symbol_kind::S_42_
#define S_43_           yy::parser::symbol_kind::S_43_
#define S_LEQ           yy::parser::symbol_kind::S_LEQ
#define S_GEQ           yy::parser::symbol_kind::S_GEQ
#define S_LSHIFT        yy::parser::symbol_kind::S_LSHIFT
#define S_RSHIFT        yy::parser::symbol_kind::S_RSHIFT
#define S_48_           yy::parser::symbol_kind::S_48_
#define S_49_           yy::parser::symbol_kind::S_49_
#define S_50_           yy::parser::symbol_kind::S_50_
#define S_51_           yy::parser::symbol_kind::S_51_
#define S_52_           yy::parser::symbol_kind::S_52_
#define S_UNARY_PLUS    yy::parser::symbol_kind::S_UNARY_PLUS
#define S_UNARY_MINUS   yy::parser::symbol_kind::S_UNARY_MINUS
#define S_55_           yy::parser::symbol_kind::S_55_
#define S_56_           yy::parser::symbol_kind::S_56_
#define S_YYACCEPT      yy::parser::symbol_kind::S_YYACCEPT
#define S_document      yy::parser::symbol_kind::S_document
#define S_identifier    yy::parser::symbol_kind::S_identifier
#define S_optional_package yy::parser::symbol_kind::S_optional_package
#define S_imports       yy::parser::symbol_kind::S_imports
#define S_import        yy::parser::symbol_kind::S_import
#define S_qualified_name yy::parser::symbol_kind::S_qualified_name
#define S_decls         yy::parser::symbol_kind::S_decls
#define S_decl          yy::parser::symbol_kind::S_decl
#define S_unannotated_decl yy::parser::symbol_kind::S_unannotated_decl
#define S_type_params   yy::parser::symbol_kind::S_type_params
#define S_optional_type_params yy::parser::symbol_kind::S_optional_type_params
#define S_parcelable_decl yy::parser::symbol_kind::S_parcelable_decl
#define S_parcelable_members yy::parser::symbol_kind::S_parcelable_members
#define S_variable_decl yy::parser::symbol_kind::S_variable_decl
#define S_interface_decl yy::parser::symbol_kind::S_interface_decl
#define S_interface_members yy::parser::symbol_kind::S_interface_members
#define S_const_expr    yy::parser::symbol_kind::S_const_expr
#define S_constant_value_list yy::parser::symbol_kind::S_constant_value_list
#define S_constant_value_non_empty_list yy::parser::symbol_kind::S_constant_value_non_empty_list
#define S_constant_decl yy::parser::symbol_kind::S_constant_decl
#define S_enumerator    yy::parser::symbol_kind::S_enumerator
#define S_enumerators   yy::parser::symbol_kind::S_enumerators
#define S_enum_decl_body yy::parser::symbol_kind::S_enum_decl_body
#define S_enum_decl     yy::parser::symbol_kind::S_enum_decl
#define S_union_decl    yy::parser::symbol_kind::S_union_decl
#define S_method_decl   yy::parser::symbol_kind::S_method_decl
#define S_arg_non_empty_list yy::parser::symbol_kind::S_arg_non_empty_list
#define S_arg_list      yy::parser::symbol_kind::S_arg_list
#define S_arg           yy::parser::symbol_kind::S_arg
#define S_non_array_type yy::parser::symbol_kind::S_non_array_type
#define S_type          yy::parser::symbol_kind::S_type
#define S_type_args     yy::parser::symbol_kind::S_type_args
#define S_annotation_list yy::parser::symbol_kind::S_annotation_list
#define S_parameter     yy::parser::symbol_kind::S_parameter
#define S_parameter_list yy::parser::symbol_kind::S_parameter_list
#define S_parameter_non_empty_list yy::parser::symbol_kind::S_parameter_non_empty_list
#define S_annotation    yy::parser::symbol_kind::S_annotation
#define S_direction     yy::parser::symbol_kind::S_direction


/* Default (constant) value used for initialization for null
   right-hand sides.  Unlike the standard yacc.c template, here we set
   the default value of $$ to a zeroed-out value.  Since the default
   value is undefined, this behavior is technically correct.  */
static YYSTYPE yyval_default;
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;

// Second part of user prologue.
#line 335 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
static void
yyerror (const yy::parser::location_type *yylocationp,
         yy::parser& yyparser, Parser* ps,
         const char* msg);
#line 340 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"


#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif
#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YYFREE
# define YYFREE free
#endif
#ifndef YYMALLOC
# define YYMALLOC malloc
#endif
#ifndef YYREALLOC
# define YYREALLOC realloc
#endif

#ifdef __cplusplus
  typedef bool yybool;
# define yytrue true
# define yyfalse false
#else
  /* When we move to stdbool, get rid of the various casts to yybool.  */
  typedef signed char yybool;
# define yytrue 1
# define yyfalse 0
#endif

#ifndef YYSETJMP
# include <setjmp.h>
# define YYJMP_BUF jmp_buf
# define YYSETJMP(Env) setjmp (Env)
/* Pacify Clang and ICC.  */
# define YYLONGJMP(Env, Val)                    \
 do {                                           \
   longjmp (Env, Val);                          \
   YY_ASSERT (0);                               \
 } while (yyfalse)
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* The _Noreturn keyword of C11.  */
#ifndef _Noreturn
# if (defined __cplusplus \
      && ((201103 <= __cplusplus && !(__GNUC__ == 4 && __GNUC_MINOR__ == 7)) \
          || (defined _MSC_VER && 1900 <= _MSC_VER)))
#  define _Noreturn [[noreturn]]
# elif ((!defined __cplusplus || defined __clang__) \
        && (201112 <= (defined __STDC_VERSION__ ? __STDC_VERSION__ : 0) \
            || (!defined __STRICT_ANSI__ \
                && (4 < __GNUC__ + (7 <= __GNUC_MINOR__) \
                    || (defined __apple_build_version__ \
                        ? 6000000 <= __apple_build_version__ \
                        : 3 < __clang_major__ + (5 <= __clang_minor__))))))
   /* _Noreturn works as-is.  */
# elif (2 < __GNUC__ + (8 <= __GNUC_MINOR__) || defined __clang__ \
        || 0x5110 <= __SUNPRO_C)
#  define _Noreturn __attribute__ ((__noreturn__))
# elif 1200 <= (defined _MSC_VER ? _MSC_VER : 0)
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   622

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  121
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  235
/* YYMAXRHS -- Maximum number of symbols on right-hand side of rule.  */
#define YYMAXRHS 10
/* YYMAXLEFT -- Maximum number of symbols to the left of a handle
   accessed by $0, $-1, etc., in any rule.  */
#define YYMAXLEFT 0

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   289

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : S_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    55,     2,     2,     2,    52,    39,     2,
      18,    19,    50,    48,    20,    49,    24,    51,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    27,
      42,    21,    43,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    22,     2,    23,    38,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    25,    37,    26,    56,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    40,    41,    44,    45,    46,    47,    53,    54
};

#if YYDEBUG
/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   183,   183,   207,   208,   212,   215,   223,   224,   231,
     239,   242,   250,   256,   264,   279,   280,   281,   282,   286,
     291,   298,   299,   304,   310,   316,   324,   331,   334,   338,
     342,   346,   352,   356,   364,   370,   376,   383,   392,   393,
     395,   397,   402,   408,   409,   410,   414,   424,   428,   438,
     442,   446,   449,   452,   455,   458,   461,   464,   467,   470,
     473,   476,   479,   482,   485,   488,   491,   494,   497,   500,
     503,   506,   509,   512,   515,   519,   529,   532,   535,   541,
     545,   552,   568,   572,   579,   583,   590,   591,   595,   605,
     614,   618,   626,   636,   652,   656,   663,   664,   668,   672,
     678,   687,   691,   698,   706,   707,   719,   734,   742,   749,
     750,   759,   765,   768,   773,   778,   789,   797,   806,   818,
     820,   822
};
#endif

#define YYPACT_NINF (-177)
#define YYTABLE_NINF (-110)

// YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
// STATE-NUM.
static const yytype_int16 yypact[] =
{
      17,    38,    18,  -177,  -177,  -177,  -177,    85,  -177,    13,
      38,  -177,    38,  -177,    58,  -177,   146,  -177,   107,  -177,
      73,    14,    15,   108,    38,    38,  -177,  -177,  -177,  -177,
    -177,  -177,  -177,   241,    98,    90,   113,    66,    38,    25,
      23,  -177,  -177,  -177,  -177,  -177,   104,   241,  -177,  -177,
     241,   241,   241,   241,   114,   122,   263,  -177,   142,   148,
    -177,  -177,  -177,  -177,   160,    38,   105,   147,    38,  -177,
     152,   154,   297,   510,   156,   158,  -177,  -177,  -177,  -177,
     241,  -177,   241,   241,   241,   241,   241,   241,   241,   241,
     241,   241,   241,   241,   241,   241,   241,   241,   241,   241,
    -177,    38,   379,   402,   159,  -177,     5,  -177,  -177,  -177,
     164,  -177,    34,  -177,  -177,  -177,  -177,   241,   510,   527,
     543,   279,   557,   570,   309,   309,   395,   395,   395,   395,
      76,    76,   -42,   -42,  -177,  -177,  -177,   114,  -177,   165,
    -177,  -177,  -177,  -177,   153,    38,   388,  -177,  -177,    38,
    -177,   425,   448,   241,    27,  -177,   471,   510,  -177,  -177,
     176,    82,   108,  -177,   122,  -177,   169,  -177,  -177,  -177,
    -177,    38,   411,  -177,   510,  -177,  -177,  -177,   155,    84,
      43,     6,    69,   205,    38,    38,  -177,    71,  -177,  -177,
    -177,  -177,  -177,  -177,   179,   182,  -177,    38,  -177,  -177,
     327,   185,   183,   241,  -177,    -1,   163,    84,   133,    75,
    -177,    38,  -177,    69,   241,   466,  -177,  -177,  -177,   189,
    -177,  -177,   190,   492,  -177,     8,   181,    86,  -177,  -177,
    -177,   196,  -177,   187,  -177
};

// YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
// Performed when YYTABLE does not specify something else to do.  Zero
// means the default is an error.
static const yytype_int8 yydefact[] =
{
       5,     0,     0,     7,     3,     4,    10,     0,     1,   109,
       0,     6,     0,     8,   109,    12,     0,    11,     0,    13,
     116,     0,     0,     0,     0,     0,    14,    15,    16,    17,
      18,   110,     9,   112,     0,     0,     0,    21,     0,     0,
      21,    49,    45,    47,    48,    46,     0,    76,    43,    44,
       0,     0,     0,     0,    10,    50,     0,   114,     0,   113,
      38,    38,    34,    26,     0,     0,     0,     0,     0,    88,
       0,     0,     0,    79,     0,    77,    70,    71,    72,    73,
       0,   117,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     118,     0,     0,     0,     0,    19,     0,    27,    23,    38,
      83,    84,     0,    27,    75,    74,    51,    78,   111,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,     0,   115,     0,
      37,    41,    40,    39,   104,   109,     0,    35,    25,     0,
      22,     0,     0,     0,     0,    86,     0,    80,    42,   109,
       0,     0,   109,   109,   100,    20,     0,    24,    30,    28,
      29,   109,     0,    36,    82,    87,    85,    89,   104,   107,
       0,     0,   109,     0,   109,   109,    31,     0,   109,   109,
     101,   119,   121,   120,    97,     0,    94,   109,   109,   105,
       0,     0,     0,     0,    32,     0,   104,   108,   109,     0,
      99,   109,   106,   109,     0,     0,   102,   109,    95,     0,
      90,    98,     0,     0,    33,     0,     0,     0,    81,   103,
      92,     0,    91,     0,    93
};

// YYPGOTO[NTERM-NUM].
static const yytype_int16 yypgoto[] =
{
    -177,  -177,    -4,  -177,  -177,  -177,     2,  -177,    -7,  -177,
    -177,   175,  -177,   111,  -177,  -177,   -57,   -14,  -177,  -177,
     -94,    64,  -177,  -177,  -177,  -177,  -177,  -177,    12,    19,
    -158,    28,  -176,    -9,   128,  -177,  -177,  -177,  -177
};

// YYDEFGOTO[NTERM-NUM].
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     6,     3,     9,    13,    55,    14,   141,    26,
     106,    66,    27,   151,   169,    28,   102,    56,    74,    75,
     142,   111,   112,    69,    29,    30,   143,   194,   195,   196,
     144,   145,   180,   181,    57,    58,    59,    31,   198
};

// YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
// positive, shift that token.  If negative, reduce the rule whose
// number is the opposite.  If YYTABLE_NINF, syntax error.
static const yytype_int16 yytable[] =
{
      16,   178,    15,     7,   103,    16,    17,    19,    97,    98,
      99,    20,   205,     4,    18,    34,    36,    12,     8,   189,
       1,     4,     4,    35,    37,   149,    39,    40,   189,    54,
     178,   206,    72,    73,     4,     5,    76,    77,    78,    79,
      67,   225,   190,     5,     5,     4,   216,    10,   150,    10,
      68,   190,   152,   175,   154,   229,     5,   170,    -2,   178,
     155,   105,   170,   189,   110,    65,   118,     5,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   190,    20,   -96,  -109,
      10,    33,   203,   146,   146,    64,   219,   137,   204,   191,
     192,   193,   220,   157,   183,    71,  -109,   231,    65,    10,
      41,     4,    11,   232,    10,    61,    38,    62,    42,    43,
      44,    45,    46,    60,    95,    96,    97,    98,    99,    47,
     107,    10,   108,     5,    32,    80,   161,    48,    49,   174,
      63,   160,   172,   146,   168,   165,    10,   172,   164,   168,
     110,    20,    50,    51,    21,    22,    23,    24,    25,    52,
      53,   100,   161,   191,   192,   193,   104,   187,   101,   200,
     161,    10,   109,   114,   164,   161,   161,   113,   117,   171,
     201,   202,   116,   164,   171,   153,   148,   179,   161,   215,
     184,   185,   158,   210,   182,   159,   186,   188,   161,   208,
     223,   209,   161,   213,   214,   217,   226,   221,   230,   227,
     197,    41,     4,   233,   234,    70,   179,   207,   176,    42,
      43,    44,    45,    46,   156,   222,   211,   218,   199,   138,
      47,     0,     0,     0,     5,     0,   197,     0,    48,    49,
       0,   197,     0,     0,     0,   179,     0,    41,     4,     0,
       0,     0,     0,    50,    51,    42,    43,    44,    45,    46,
      52,    53,     0,     0,     0,     0,    47,     0,     0,     0,
       5,     0,     0,     0,    48,    49,     0,     0,     0,     0,
       0,     0,    81,     0,     0,     0,     0,     0,     0,    50,
      51,     0,     0,     0,     0,     0,    52,    53,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   115,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     212,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     139,     0,     0,     0,  -109,     0,  -109,  -109,  -109,  -109,
    -109,  -109,  -109,    20,     0,     4,    21,    22,   162,    24,
      25,   163,     0,   139,     0,   140,     0,  -109,  -109,  -109,
    -109,  -109,  -109,  -109,  -109,  -109,    20,     5,     4,    21,
      22,    23,    24,    25,   163,     0,   166,     0,   147,     0,
    -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,     0,
       5,    93,    94,    95,    96,    97,    98,    99,     0,   139,
       0,   167,     0,  -109,  -109,  -109,  -109,  -109,  -109,  -109,
    -109,  -109,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   166,     0,   173,     0,  -109,  -109,  -109,  -109,
    -109,  -109,  -109,  -109,  -109,     0,     0,     0,     0,     0,
       0,     0,     0,   224,     0,     0,     0,   177,     0,     0,
    -109,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   228,
       0,     0,     0,     0,     0,     0,     0,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99
};

static const yytype_int16 yycheck[] =
{
       9,   159,     9,     1,    61,    14,    10,    14,    50,    51,
      52,     5,   188,     7,    12,     1,     1,     4,     0,    20,
       3,     7,     7,    21,    22,    20,    24,    25,    20,    33,
     188,   189,    46,    47,     7,    29,    50,    51,    52,    53,
      38,   217,    43,    29,    29,     7,    47,    24,    43,    24,
      25,    43,   109,    26,    20,    47,    29,   151,     0,   217,
      26,    65,   156,    20,    68,    42,    80,    29,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,    43,     5,    19,     5,
      24,    18,    21,   102,   103,    29,    21,   101,    27,    30,
      31,    32,    27,   117,    22,     1,    22,    21,    42,    24,
       6,     7,    27,    27,    24,    25,     8,    27,    14,    15,
      16,    17,    18,    25,    48,    49,    50,    51,    52,    25,
      25,    24,    27,    29,    27,    21,   145,    33,    34,   153,
      27,   145,   151,   152,   151,   149,    24,   156,   146,   156,
     154,     5,    48,    49,     8,     9,    10,    11,    12,    55,
      56,    19,   171,    30,    31,    32,     6,   171,    20,   183,
     179,    24,    25,    19,   172,   184,   185,    25,    20,   151,
     184,   185,    26,   181,   156,    21,    27,   159,   197,   203,
     162,   163,    27,   197,    18,    42,    27,    42,   207,    20,
     214,    19,   211,    18,    21,    42,    17,   211,    27,    19,
     182,     6,     7,    17,    27,    40,   188,   189,   154,    14,
      15,    16,    17,    18,   113,   213,   198,   208,    23,   101,
      25,    -1,    -1,    -1,    29,    -1,   208,    -1,    33,    34,
      -1,   213,    -1,    -1,    -1,   217,    -1,     6,     7,    -1,
      -1,    -1,    -1,    48,    49,    14,    15,    16,    17,    18,
      55,    56,    -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,
      29,    -1,    -1,    -1,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      49,    -1,    -1,    -1,    -1,    -1,    55,    56,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    19,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      23,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
       1,    -1,    -1,    -1,     5,    -1,     7,     8,     9,    10,
      11,    12,    13,     5,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,     1,    -1,    26,    -1,     5,    29,     7,
       8,     9,    10,    11,    12,    13,     5,    29,     7,     8,
       9,    10,    11,    12,    13,    -1,     1,    -1,    26,    -1,
       5,    29,     7,     8,     9,    10,    11,    12,    13,    -1,
      29,    46,    47,    48,    49,    50,    51,    52,    -1,     1,
      -1,    26,    -1,     5,    29,     7,     8,     9,    10,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,    26,    -1,     5,    29,     7,     8,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    26,    -1,    -1,
      29,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52
};

// YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
// state STATE-NUM.
static const yytype_int8 yystos[] =
{
       0,     3,    58,    60,     7,    29,    59,    63,     0,    61,
      24,    27,     4,    62,    64,    65,    90,    59,    63,    65,
       5,     8,     9,    10,    11,    12,    66,    69,    72,    81,
      82,    94,    27,    18,     1,    63,     1,    63,     8,    63,
      63,     6,    14,    15,    16,    17,    18,    25,    33,    34,
      48,    49,    55,    56,    59,    63,    74,    91,    92,    93,
      25,    25,    27,    27,    29,    42,    68,    63,    25,    80,
      68,     1,    74,    74,    75,    76,    74,    74,    74,    74,
      21,    19,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      19,    20,    73,    73,     6,    59,    67,    25,    27,    25,
      59,    78,    79,    25,    19,    19,    26,    20,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    59,    91,     1,
      26,    65,    77,    83,    87,    88,    90,    26,    27,    20,
      43,    70,    73,    21,    20,    26,    70,    74,    27,    42,
      59,    90,    10,    13,    63,    59,     1,    26,    65,    71,
      77,    88,    90,    26,    74,    26,    78,    26,    87,    88,
      89,    90,    18,    22,    88,    88,    27,    59,    42,    20,
      43,    30,    31,    32,    84,    85,    86,    88,    95,    23,
      74,    59,    59,    21,    27,    89,    87,    88,    20,    19,
      59,    88,    23,    18,    21,    74,    47,    42,    86,    21,
      27,    59,    85,    74,    27,    89,    17,    19,    27,    47,
      27,    21,    27,    17,    27
};

// YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.
static const yytype_int8 yyr1[] =
{
       0,    57,    58,    59,    59,    60,    60,    61,    61,    62,
      63,    63,    64,    64,    65,    66,    66,    66,    66,    67,
      67,    68,    68,    69,    69,    69,    69,    70,    70,    70,
      70,    70,    71,    71,    72,    72,    72,    72,    73,    73,
      73,    73,    73,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    75,    75,    75,    76,
      76,    77,    78,    78,    79,    79,    80,    80,    81,    82,
      83,    83,    83,    83,    84,    84,    85,    85,    86,    86,
      87,    87,    87,    87,    88,    88,    88,    89,    89,    90,
      90,    91,    92,    92,    93,    93,    94,    94,    94,    95,
      95,    95
};

// YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     1,     1,     0,     3,     0,     2,     3,
       1,     3,     1,     2,     2,     1,     1,     1,     1,     1,
       3,     0,     3,     4,     6,     5,     3,     0,     2,     2,
       2,     3,     3,     5,     3,     5,     6,     5,     0,     2,
       2,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     2,     2,     3,     3,     0,     1,     2,     1,
       3,     7,     3,     1,     1,     3,     3,     4,     3,     6,
       6,     8,     8,    10,     1,     3,     0,     1,     3,     2,
       2,     4,     6,     8,     1,     4,     5,     1,     3,     0,
       2,     3,     0,     1,     1,     3,     1,     4,     4,     1,
       1,     1
};


/* YYDPREC[RULE-NUM] -- Dynamic precedence of rule #RULE-NUM (0 if none).  */
static const yytype_int8 yydprec[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0
};

/* YYMERGER[RULE-NUM] -- Index of merging function for rule #RULE-NUM.  */
static const yytype_int8 yymerger[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0
};

/* YYIMMEDIATE[RULE-NUM] -- True iff rule #RULE-NUM is not to be deferred, as
   in the case of predicates.  */
static const yybool yyimmediate[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0
};

/* YYCONFLP[YYPACT[STATE-NUM]] -- Pointer into YYCONFL of start of
   list of conflicting reductions corresponding to action entry for
   state STATE-NUM in yytable.  0 means no conflicts.  The list in
   yyconfl is terminated by a rule number of 0.  */
static const yytype_int8 yyconflp[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0
};

/* YYCONFL[I] -- lists of conflicting rule numbers, each terminated by
   0, pointed into by YYCONFLP.  */
static const short yyconfl[] =
{
       0
};


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (false)
# endif

# define YYRHSLOC(Rhs, K) ((Rhs)[K].yystate.yyloc)



#undef yynerrs
#define yynerrs (yystackp->yyerrcnt)
#undef yychar
#define yychar (yystackp->yyrawchar)
#undef yylval
#define yylval (yystackp->yyval)
#undef yylloc
#define yylloc (yystackp->yyloc)


enum { YYENOMEM = -2 };

typedef enum { yyok, yyaccept, yyabort, yyerr, yynomem } YYRESULTTAG;

#define YYCHK(YYE)                              \
  do {                                          \
    YYRESULTTAG yychk_flag = YYE;               \
    if (yychk_flag != yyok)                     \
      return yychk_flag;                        \
  } while (0)

/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYMAXDEPTH * sizeof (GLRStackItem)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif

/* Minimum number of free items on the stack allowed after an
   allocation.  This is to allow allocation and initialization
   to be completed by functions that call yyexpandGLRStack before the
   stack is expanded, thus insuring that all necessary pointers get
   properly redirected to new data.  */
#define YYHEADROOM 2

#ifndef YYSTACKEXPANDABLE
#  define YYSTACKEXPANDABLE 1
#endif

#if YYSTACKEXPANDABLE
# define YY_RESERVE_GLRSTACK(Yystack)                   \
  do {                                                  \
    if (Yystack->yyspaceLeft < YYHEADROOM)              \
      yyexpandGLRStack (Yystack);                       \
  } while (0)
#else
# define YY_RESERVE_GLRSTACK(Yystack)                   \
  do {                                                  \
    if (Yystack->yyspaceLeft < YYHEADROOM)              \
      yyMemoryExhausted (Yystack);                      \
  } while (0)
#endif

/** State numbers. */
typedef int yy_state_t;

/** Rule numbers. */
typedef int yyRuleNum;

/** Item references. */
typedef short yyItemNum;

typedef struct yyGLRState yyGLRState;
typedef struct yyGLRStateSet yyGLRStateSet;
typedef struct yySemanticOption yySemanticOption;
typedef union yyGLRStackItem yyGLRStackItem;
typedef struct yyGLRStack yyGLRStack;

struct yyGLRState
{
  /** Type tag: always true.  */
  yybool yyisState;
  /** Type tag for yysemantics.  If true, yyval applies, otherwise
   *  yyfirstVal applies.  */
  yybool yyresolved;
  /** Number of corresponding LALR(1) machine state.  */
  yy_state_t yylrState;
  /** Preceding state in this stack */
  yyGLRState* yypred;
  /** Source position of the last token produced by my symbol */
  YYPTRDIFF_T yyposn;
  union {
    /** First in a chain of alternative reductions producing the
     *  nonterminal corresponding to this state, threaded through
     *  yynext.  */
    yySemanticOption* yyfirstVal;
    /** Semantic value for this state.  */
    YYSTYPE yyval;
  } yysemantics;
  /** Source location for this state.  */
  YYLTYPE yyloc;
};

struct yyGLRStateSet
{
  yyGLRState** yystates;
  /** During nondeterministic operation, yylookaheadNeeds tracks which
   *  stacks have actually needed the current lookahead.  During deterministic
   *  operation, yylookaheadNeeds[0] is not maintained since it would merely
   *  duplicate yychar != YYEMPTY.  */
  yybool* yylookaheadNeeds;
  YYPTRDIFF_T yysize;
  YYPTRDIFF_T yycapacity;
};

struct yySemanticOption
{
  /** Type tag: always false.  */
  yybool yyisState;
  /** Rule number for this reduction */
  yyRuleNum yyrule;
  /** The last RHS state in the list of states to be reduced.  */
  yyGLRState* yystate;
  /** The lookahead for this reduction.  */
  int yyrawchar;
  YYSTYPE yyval;
  YYLTYPE yyloc;
  /** Next sibling in chain of options.  To facilitate merging,
   *  options are chained in decreasing order by address.  */
  yySemanticOption* yynext;
};

/** Type of the items in the GLR stack.  The yyisState field
 *  indicates which item of the union is valid.  */
union yyGLRStackItem {
  yyGLRState yystate;
  yySemanticOption yyoption;
};

struct yyGLRStack {
  int yyerrState;
  /* To compute the location of the error token.  */
  yyGLRStackItem yyerror_range[3];

  int yyerrcnt;
  int yyrawchar;
  YYSTYPE yyval;
  YYLTYPE yyloc;

  YYJMP_BUF yyexception_buffer;
  yyGLRStackItem* yyitems;
  yyGLRStackItem* yynextFree;
  YYPTRDIFF_T yyspaceLeft;
  yyGLRState* yysplitPoint;
  yyGLRState* yylastDeleted;
  yyGLRStateSet yytops;
};

#if YYSTACKEXPANDABLE
static void yyexpandGLRStack (yyGLRStack* yystackp);
#endif

_Noreturn static void
yyFail (yyGLRStack* yystackp, YYLTYPE *yylocp, yy::parser& yyparser, Parser* ps, const char* yymsg)
{
  if (yymsg != YY_NULLPTR)
    yyerror (yylocp, yyparser, ps, yymsg);
  YYLONGJMP (yystackp->yyexception_buffer, 1);
}

_Noreturn static void
yyMemoryExhausted (yyGLRStack* yystackp)
{
  YYLONGJMP (yystackp->yyexception_buffer, 2);
}

/** Accessing symbol of state YYSTATE.  */
static inline yysymbol_kind_t
yy_accessing_symbol (yy_state_t yystate)
{
  return YY_CAST (yysymbol_kind_t, yystos[yystate]);
}

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "\"package\"",
  "\"import\"", "\"annotation\"", "\"string literal\"", "\"identifier\"",
  "\"interface\"", "\"parcelable\"", "\"oneway\"", "\"enum\"", "\"union\"",
  "\"const\"", "\"char literal\"", "\"float literal\"", "\"hex literal\"",
  "\"int literal\"", "'('", "')'", "','", "'='", "'['", "']'", "'.'",
  "'{'", "'}'", "';'", "\"unrecognized character\"",
  "\"cpp_header (which can also be used as an identifier)\"", "\"in\"",
  "\"inout\"", "\"out\"", "\"true\"", "\"false\"", "LOGICAL_OR",
  "LOGICAL_AND", "'|'", "'^'", "'&'", "EQUALITY", "NEQ", "'<'", "'>'",
  "LEQ", "GEQ", "LSHIFT", "RSHIFT", "'+'", "'-'", "'*'", "'/'", "'%'",
  "UNARY_PLUS", "UNARY_MINUS", "'!'", "'~'", "$accept", "document",
  "identifier", "optional_package", "imports", "import", "qualified_name",
  "decls", "decl", "unannotated_decl", "type_params",
  "optional_type_params", "parcelable_decl", "parcelable_members",
  "variable_decl", "interface_decl", "interface_members", "const_expr",
  "constant_value_list", "constant_value_non_empty_list", "constant_decl",
  "enumerator", "enumerators", "enum_decl_body", "enum_decl", "union_decl",
  "method_decl", "arg_non_empty_list", "arg_list", "arg", "non_array_type",
  "type", "type_args", "annotation_list", "parameter", "parameter_list",
  "parameter_non_empty_list", "annotation", "direction", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

/** Left-hand-side symbol for rule #YYRULE.  */
static inline yysymbol_kind_t
yylhsNonterm (yyRuleNum yyrule)
{
  return YY_CAST (yysymbol_kind_t, yyr1[yyrule]);
}

#if YYDEBUG

# ifndef YYFPRINTF
#  define YYFPRINTF fprintf
# endif

# define YY_FPRINTF                             \
  YY_IGNORE_USELESS_CAST_BEGIN YY_FPRINTF_

# define YY_FPRINTF_(Args)                      \
  do {                                          \
    YYFPRINTF Args;                             \
    YY_IGNORE_USELESS_CAST_END                  \
  } while (0)

# define YY_DPRINTF                             \
  YY_IGNORE_USELESS_CAST_BEGIN YY_DPRINTF_

# define YY_DPRINTF_(Args)                      \
  do {                                          \
    if (yydebug)                                \
      YYFPRINTF Args;                           \
    YY_IGNORE_USELESS_CAST_END                  \
  } while (0)


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


/*--------------------.
| Print this symbol.  |
`--------------------*/

static void
yy_symbol_print (FILE *, yy::parser::symbol_kind_type yytoken,
                 const yy::parser::value_type *yyvaluep,
                 const yy::parser::location_type *yylocationp, yy::parser& yyparser, Parser* ps)
{
  YY_USE (yyparser);
  YY_USE (ps);
  yyparser.yy_symbol_print_ (yytoken, yyvaluep, yylocationp);
}


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                  \
  do {                                                                  \
    if (yydebug)                                                        \
      {                                                                 \
        YY_FPRINTF ((stderr, "%s ", Title));                            \
        yy_symbol_print (stderr, Kind, Value, Location, yyparser, ps);        \
        YY_FPRINTF ((stderr, "\n"));                                    \
      }                                                                 \
  } while (0)

static inline void
yy_reduce_print (yybool yynormal, yyGLRStackItem* yyvsp, YYPTRDIFF_T yyk,
                 yyRuleNum yyrule, yy::parser& yyparser, Parser* ps);

# define YY_REDUCE_PRINT(Args)          \
  do {                                  \
    if (yydebug)                        \
      yy_reduce_print Args;             \
  } while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;

static void yypstack (yyGLRStack* yystackp, YYPTRDIFF_T yyk)
  YY_ATTRIBUTE_UNUSED;
static void yypdumpstack (yyGLRStack* yystackp)
  YY_ATTRIBUTE_UNUSED;

#else /* !YYDEBUG */

# define YY_DPRINTF(Args) do {} while (yyfalse)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_REDUCE_PRINT(Args)

#endif /* !YYDEBUG */

#ifndef yystrlen
# define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


/** Fill in YYVSP[YYLOW1 .. YYLOW0-1] from the chain of states starting
 *  at YYVSP[YYLOW0].yystate.yypred.  Leaves YYVSP[YYLOW1].yystate.yypred
 *  containing the pointer to the next state in the chain.  */
static void yyfillin (yyGLRStackItem *, int, int) YY_ATTRIBUTE_UNUSED;
static void
yyfillin (yyGLRStackItem *yyvsp, int yylow0, int yylow1)
{
  int i;
  yyGLRState *s = yyvsp[yylow0].yystate.yypred;
  for (i = yylow0-1; i >= yylow1; i -= 1)
    {
#if YYDEBUG
      yyvsp[i].yystate.yylrState = s->yylrState;
#endif
      yyvsp[i].yystate.yyresolved = s->yyresolved;
      if (s->yyresolved)
        yyvsp[i].yystate.yysemantics.yyval = s->yysemantics.yyval;
      else
        /* The effect of using yyval or yyloc (in an immediate rule) is
         * undefined.  */
        yyvsp[i].yystate.yysemantics.yyfirstVal = YY_NULLPTR;
      yyvsp[i].yystate.yyloc = s->yyloc;
      s = yyvsp[i].yystate.yypred = s->yypred;
    }
}


/** If yychar is empty, fetch the next token.  */
static inline yysymbol_kind_t
yygetToken (int *yycharp, yyGLRStack* yystackp, yy::parser& yyparser, Parser* ps)
{
  yysymbol_kind_t yytoken;
  YY_USE (yyparser);
  YY_USE (ps);
  if (*yycharp == YYEMPTY)
    {
      YY_DPRINTF ((stderr, "Reading a token\n"));
#if YY_EXCEPTIONS
      try
        {
#endif // YY_EXCEPTIONS
          *yycharp = yylex (&yylval, &yylloc, lex_scanner);
#if YY_EXCEPTIONS
        }
      catch (const yy::parser::syntax_error& yyexc)
        {
          YY_DPRINTF ((stderr, "Caught exception: %s\n", yyexc.what()));
          yylloc = yyexc.location;
          yyerror (&yylloc, yyparser, ps, yyexc.what ());
          // Map errors caught in the scanner to the undefined token,
          // so that error handling is started.  However, record this
          // with this special value of yychar.
          *yycharp = YYerror;
        }
#endif // YY_EXCEPTIONS
    }
  if (*yycharp <= YYEOF)
    {
      *yycharp = YYEOF;
      yytoken = S_YYEOF;
      YY_DPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (*yycharp);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }
  return yytoken;
}

/* Do nothing if YYNORMAL or if *YYLOW <= YYLOW1.  Otherwise, fill in
 * YYVSP[YYLOW1 .. *YYLOW-1] as in yyfillin and set *YYLOW = YYLOW1.
 * For convenience, always return YYLOW1.  */
static inline int yyfill (yyGLRStackItem *, int *, int, yybool)
     YY_ATTRIBUTE_UNUSED;
static inline int
yyfill (yyGLRStackItem *yyvsp, int *yylow, int yylow1, yybool yynormal)
{
  if (!yynormal && yylow1 < *yylow)
    {
      yyfillin (yyvsp, *yylow, yylow1);
      *yylow = yylow1;
    }
  return yylow1;
}

/** Perform user action for rule number YYN, with RHS length YYRHSLEN,
 *  and top stack item YYVSP.  YYLVALP points to place to put semantic
 *  value ($$), and yylocp points to place for location information
 *  (@$).  Returns yyok for normal return, yyaccept for YYACCEPT,
 *  yyerr for YYERROR, yyabort for YYABORT, yynomem for YYNOMEM.  */
static YYRESULTTAG
yyuserAction (yyRuleNum yyrule, int yyrhslen, yyGLRStackItem* yyvsp,
              yyGLRStack* yystackp, YYPTRDIFF_T yyk,
              YYSTYPE* yyvalp, YYLTYPE *yylocp, yy::parser& yyparser, Parser* ps)
{
  const yybool yynormal YY_ATTRIBUTE_UNUSED = yystackp->yysplitPoint == YY_NULLPTR;
  int yylow = 1;
  YY_USE (yyvalp);
  YY_USE (yylocp);
  YY_USE (yyparser);
  YY_USE (ps);
  YY_USE (yyk);
  YY_USE (yyrhslen);
# undef yyerrok
# define yyerrok (yystackp->yyerrState = 0)
# undef YYACCEPT
# define YYACCEPT return yyaccept
# undef YYABORT
# define YYABORT return yyabort
# undef YYNOMEM
# define YYNOMEM return yynomem
# undef YYERROR
# define YYERROR return yyerrok, yyerr
# undef YYRECOVERING
# define YYRECOVERING() (yystackp->yyerrState != 0)
# undef yyclearin
# define yyclearin (yychar = YYEMPTY)
# undef YYFILL
# define YYFILL(N) yyfill (yyvsp, &yylow, (N), yynormal)
# undef YYBACKUP
# define YYBACKUP(Token, Value)                                              \
  return yyerror (yylocp, yyparser, ps, YY_("syntax error: cannot back up")),     \
         yyerrok, yyerr

  if (yyrhslen == 0)
    *yyvalp = yyval_default;
  else
    *yyvalp = yyvsp[YYFILL (1-yyrhslen)].yystate.yysemantics.yyval;
  /* Default location. */
  YYLLOC_DEFAULT ((*yylocp), (yyvsp - yyrhslen), yyrhslen);
  yystackp->yyerror_range[1].yystate.yyloc = *yylocp;
  /* If yyk == -1, we are running a deferred action on a temporary
     stack.  In that case, YY_REDUCE_PRINT must not play with YYFILL,
     so pretend the stack is "normal". */
  YY_REDUCE_PRINT ((yynormal || yyk == -1, yyvsp, yyk, yyrule, yyparser, ps));
#if YY_EXCEPTIONS
  typedef yy::parser::syntax_error syntax_error;
  try
  {
#endif // YY_EXCEPTIONS
  switch (yyrule)
    {
  case 2: // document: optional_package imports decls
#line 183 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                                  {
    Comments comments;
    if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.token)) {
      comments = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.token)->GetComments();
    } else if (!(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.token_list)->empty()) {
      comments = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.token_list)->front()->GetComments();
    }
    std::vector<std::string> imports;
    for (const auto& import : *(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.token_list)) {
      imports.push_back(import->GetText());
    }
    ps->MakeDocument(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yyloc)), comments, std::move(imports), std::move(*(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.declarations)));
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.token);
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.token_list);
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.declarations);
  }
#line 1718 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 3: // identifier: "identifier"
#line 207 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
   { ((*yyvalp).token) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.token); }
#line 1724 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 4: // identifier: "cpp_header (which can also be used as an identifier)"
#line 208 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
   { ((*yyvalp).token) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.token); }
#line 1730 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 5: // optional_package: %empty
#line 212 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
   {
    ((*yyvalp).token) = nullptr;
 }
#line 1738 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 6: // optional_package: "package" qualified_name ';'
#line 215 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                              {
    ps->SetPackage((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.token)->GetText());
    ((*yyvalp).token) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.token); // for comments
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.token);
  }
#line 1748 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 7: // imports: %empty
#line 223 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
   { ((*yyvalp).token_list) = new std::vector<std::unique_ptr<AidlToken>>(); }
#line 1754 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 8: // imports: imports import
#line 225 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
  {
    ((*yyvalp).token_list) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.token_list);
    ((*yyvalp).token_list)->emplace_back((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.token));
  }
#line 1763 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 9: // import: "import" qualified_name ';'
#line 231 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                             {
    // carry the comments before "import" token
    ((*yyvalp).token) = new AidlToken((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.token)->GetText(), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.token)->GetComments());
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.token);
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.token);
  }
#line 1774 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 10: // qualified_name: identifier
#line 239 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
              {
    ((*yyvalp).token) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.token);
  }
#line 1782 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 11: // qualified_name: qualified_name '.' identifier
#line 243 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
  { ((*yyvalp).token) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.token);
    ((*yyvalp).token)->Append('.');
    ((*yyvalp).token)->Append((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.token)->GetText());
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.token);
  }
#line 1792 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 12: // decls: decl
#line 251 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
  { ((*yyvalp).declarations) = new std::vector<std::unique_ptr<AidlDefinedType>>();
    if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.declaration) != nullptr) {
      ((*yyvalp).declarations)->emplace_back((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.declaration));
    }
  }
#line 1802 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 13: // decls: decls decl
#line 257 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
  { ((*yyvalp).declarations) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.declarations);
    if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.declaration) != nullptr) {
      ((*yyvalp).declarations)->emplace_back((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.declaration));
    }
  }
#line 1812 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 14: // decl: annotation_list unannotated_decl
#line 265 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
   {
    ((*yyvalp).declaration) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.declaration);

    if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.annotation_list)->size() > 0 && ((*yyvalp).declaration) != nullptr) {
      // copy comments from annotation to decl
      ((*yyvalp).declaration)->SetComments((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.annotation_list)->begin()->get()->GetComments());
      ((*yyvalp).declaration)->Annotate(std::move(*(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.annotation_list)));
    }

    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.annotation_list);
   }
#line 1828 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 15: // unannotated_decl: parcelable_decl
#line 279 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
   { ((*yyvalp).declaration) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.declaration); }
#line 1834 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 16: // unannotated_decl: interface_decl
#line 280 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
   { ((*yyvalp).declaration) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.declaration); }
#line 1840 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 17: // unannotated_decl: enum_decl
#line 281 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
   { ((*yyvalp).declaration) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.declaration); }
#line 1846 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 18: // unannotated_decl: union_decl
#line 282 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
   { ((*yyvalp).declaration) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.declaration); }
#line 1852 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 19: // type_params: identifier
#line 286 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
              {
    ((*yyvalp).type_params) = new std::vector<std::string>();
    ((*yyvalp).type_params)->emplace_back((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.token)->GetText());
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.token);
  }
#line 1862 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 20: // type_params: type_params ',' identifier
#line 291 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                              {
    (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.type_params)->emplace_back((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.token)->GetText());
    ((*yyvalp).type_params) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.type_params);
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.token);
  }
#line 1872 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 21: // optional_type_params: %empty
#line 298 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
               { ((*yyvalp).type_params) = nullptr; }
#line 1878 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 22: // optional_type_params: '<' type_params '>'
#line 299 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                        {
    ((*yyvalp).type_params) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.type_params);
  }
#line 1886 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 23: // parcelable_decl: "parcelable" qualified_name optional_type_params ';'
#line 304 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                                                      {
    // No check for type name here. We allow nested types for unstructured parcelables.
    ((*yyvalp).declaration) = new AidlParcelable(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yyloc)), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.token)->GetText(), ps->Package(), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.token)->GetComments(), "", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.type_params));
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.token);
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.token);
 }
#line 1897 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 24: // parcelable_decl: "parcelable" qualified_name optional_type_params '{' parcelable_members '}'
#line 310 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                                                                             {
    ps->CheckValidTypeName(*(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.token), loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yyloc)));
    ((*yyvalp).declaration) = new AidlStructuredParcelable(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yyloc)), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.token)->GetText(), ps->Package(), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.token)->GetComments(), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.type_params), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.members));
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.token);
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.token);
 }
#line 1908 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 25: // parcelable_decl: "parcelable" qualified_name "cpp_header (which can also be used as an identifier)" "string literal" ';'
#line 316 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                                                  {
    // No check for type name here. We allow nested types for unstructured parcelables.
    ((*yyvalp).declaration) = new AidlParcelable(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yyloc)), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.token)->GetText(), ps->Package(), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.token)->GetComments(), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.token)->GetText());
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.token);
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.token);
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.token);
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.token);
  }
#line 1921 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 26: // parcelable_decl: "parcelable" error ';'
#line 324 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                        {
    ps->AddError();
    ((*yyvalp).declaration) = nullptr;
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.token);
  }
#line 1931 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 27: // parcelable_members: %empty
#line 331 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
               {
    ((*yyvalp).members) = new std::vector<std::unique_ptr<AidlMember>>();
  }
#line 1939 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 28: // parcelable_members: parcelable_members variable_decl
#line 334 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                                    {
    (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.members)->emplace_back((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.variable));
    ((*yyvalp).members) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.members);
  }
#line 1948 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 29: // parcelable_members: parcelable_members constant_decl
#line 338 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                                    {
    (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.members)->emplace_back((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.constant));
    ((*yyvalp).members) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.members);
  }
#line 1957 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 30: // parcelable_members: parcelable_members decl
#line 342 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                           {
    if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.declaration)) (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.members)->emplace_back((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.declaration));  // decl may be nullptr on error
    ((*yyvalp).members) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.members);
  }
#line 1966 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 31: // parcelable_members: parcelable_members error ';'
#line 346 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                                {
    ps->AddError();
    ((*yyvalp).members) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.members);
  }
#line 1975 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 32: // variable_decl: type identifier ';'
#line 352 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                       {
   ((*yyvalp).variable) = new AidlVariableDeclaration(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc)), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.token)->GetText());
   delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.token);
 }
#line 1984 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 33: // variable_decl: type identifier '=' const_expr ';'
#line 356 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                                      {
   // TODO(b/123321528): Support enum type default assignments (TestEnum foo = TestEnum.FOO).
   ((*yyvalp).variable) = new AidlVariableDeclaration(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yyloc)), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.token)->GetText(),  (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.const_expr));
   delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.token);
 }
#line 1994 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 34: // interface_decl: "interface" qualified_name ';'
#line 364 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                                {
    ps->CheckValidTypeName(*(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.token), loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc)));
    ((*yyvalp).declaration) = new AidlInterface(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yyloc)), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.token)->GetText(), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.token)->GetComments(), false, ps->Package(), nullptr);
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.token);
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.token);
  }
#line 2005 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 35: // interface_decl: "interface" qualified_name '{' interface_members '}'
#line 370 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                                                      {
    ps->CheckValidTypeName(*(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.token), loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yyloc)));
    ((*yyvalp).declaration) = new AidlInterface(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yyloc)), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.token)->GetText(), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.token)->GetComments(), false, ps->Package(), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.members));
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.token);
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.token);
  }
#line 2016 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 36: // interface_decl: "oneway" "interface" qualified_name '{' interface_members '}'
#line 376 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                                                             {
    ps->CheckValidTypeName(*(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.token), loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yyloc)));
    ((*yyvalp).declaration) = new AidlInterface(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yyloc)), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.token)->GetText(), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.token)->GetComments(), true, ps->Package(), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.members));
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.token);
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.token);
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.token);
  }
#line 2028 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 37: // interface_decl: "interface" error '{' interface_members '}'
#line 383 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                                             {
    ps->AddError();
    ((*yyvalp).declaration) = nullptr;
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.token);
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.members);
  }
#line 2039 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 38: // interface_members: %empty
#line 392 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
  { ((*yyvalp).members) = new std::vector<std::unique_ptr<AidlMember>>(); }
#line 2045 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 39: // interface_members: interface_members method_decl
#line 394 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
  { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.members)->push_back(std::unique_ptr<AidlMember>((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.method))); ((*yyvalp).members) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.members); }
#line 2051 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 40: // interface_members: interface_members constant_decl
#line 396 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
  { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.members)->push_back(std::unique_ptr<AidlMember>((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.constant))); ((*yyvalp).members) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.members); }
#line 2057 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 41: // interface_members: interface_members decl
#line 398 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
  {
    if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.declaration)) (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.members)->emplace_back((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.declaration));  // decl may be nullptr on error
    ((*yyvalp).members) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.members);
  }
#line 2066 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 42: // interface_members: interface_members error ';'
#line 402 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                               {
    ps->AddError();
    ((*yyvalp).members) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.members);
  }
#line 2075 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 43: // const_expr: "true"
#line 408 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                { ((*yyvalp).const_expr) = AidlConstantValue::Boolean(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc)), true); }
#line 2081 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 44: // const_expr: "false"
#line 409 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                 { ((*yyvalp).const_expr) = AidlConstantValue::Boolean(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc)), false); }
#line 2087 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 45: // const_expr: "char literal"
#line 410 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
             {
    ((*yyvalp).const_expr) = AidlConstantValue::Character(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc)), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.token)->GetText());
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.token);
  }
#line 2096 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 46: // const_expr: "int literal"
#line 414 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
            {
    ((*yyvalp).const_expr) = AidlConstantValue::Integral(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc)), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.token)->GetText());
    if (((*yyvalp).const_expr) == nullptr) {
      AIDL_ERROR(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc))) << "Could not parse integer: "
                << (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.token)->GetText();
      ps->AddError();
      ((*yyvalp).const_expr) = AidlConstantValue::Integral(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc)), "0");
    }
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.token);
  }
#line 2111 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 47: // const_expr: "float literal"
#line 424 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
              {
    ((*yyvalp).const_expr) = AidlConstantValue::Floating(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc)), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.token)->GetText());
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.token);
  }
#line 2120 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 48: // const_expr: "hex literal"
#line 428 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
            {
    ((*yyvalp).const_expr) = AidlConstantValue::Integral(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc)), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.token)->GetText());
    if (((*yyvalp).const_expr) == nullptr) {
      AIDL_ERROR(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc))) << "Could not parse hexvalue: "
                << (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.token)->GetText();
      ps->AddError();
      ((*yyvalp).const_expr) = AidlConstantValue::Integral(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc)), "0");
    }
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.token);
  }
#line 2135 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 49: // const_expr: "string literal"
#line 438 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
         {
    ((*yyvalp).const_expr) = AidlConstantValue::String(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc)), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.token)->GetText());
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.token);
  }
#line 2144 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 50: // const_expr: qualified_name
#line 442 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                  {
    ((*yyvalp).const_expr) = new AidlConstantReference(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc)), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.token)->GetText());
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.token);
 }
#line 2153 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 51: // const_expr: '{' constant_value_list '}'
#line 446 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                               {
    ((*yyvalp).const_expr) = AidlConstantValue::Array(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yyloc)), std::unique_ptr<vector<unique_ptr<AidlConstantValue>>>((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.constant_value_list)));
  }
#line 2161 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 52: // const_expr: const_expr LOGICAL_OR const_expr
#line 449 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                                    {
    ((*yyvalp).const_expr) = new AidlBinaryConstExpression(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yyloc)), std::unique_ptr<AidlConstantValue>((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.const_expr)), "||", std::unique_ptr<AidlConstantValue>((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.const_expr)));
  }
#line 2169 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 53: // const_expr: const_expr LOGICAL_AND const_expr
#line 452 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                                     {
    ((*yyvalp).const_expr) = new AidlBinaryConstExpression(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yyloc)), std::unique_ptr<AidlConstantValue>((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.const_expr)), "&&", std::unique_ptr<AidlConstantValue>((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.const_expr)));
  }
#line 2177 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 54: // const_expr: const_expr '|' const_expr
#line 455 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                             {
    ((*yyvalp).const_expr) = new AidlBinaryConstExpression(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yyloc)), std::unique_ptr<AidlConstantValue>((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.const_expr)), "|" , std::unique_ptr<AidlConstantValue>((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.const_expr)));
  }
#line 2185 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 55: // const_expr: const_expr '^' const_expr
#line 458 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                             {
    ((*yyvalp).const_expr) = new AidlBinaryConstExpression(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yyloc)), std::unique_ptr<AidlConstantValue>((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.const_expr)), "^" , std::unique_ptr<AidlConstantValue>((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.const_expr)));
  }
#line 2193 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 56: // const_expr: const_expr '&' const_expr
#line 461 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                             {
    ((*yyvalp).const_expr) = new AidlBinaryConstExpression(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yyloc)), std::unique_ptr<AidlConstantValue>((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.const_expr)), "&" , std::unique_ptr<AidlConstantValue>((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.const_expr)));
  }
#line 2201 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 57: // const_expr: const_expr EQUALITY const_expr
#line 464 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                                  {
    ((*yyvalp).const_expr) = new AidlBinaryConstExpression(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yyloc)), std::unique_ptr<AidlConstantValue>((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.const_expr)), "==", std::unique_ptr<AidlConstantValue>((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.const_expr)));
  }
#line 2209 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 58: // const_expr: const_expr NEQ const_expr
#line 467 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                             {
    ((*yyvalp).const_expr) = new AidlBinaryConstExpression(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yyloc)), std::unique_ptr<AidlConstantValue>((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.const_expr)), "!=", std::unique_ptr<AidlConstantValue>((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.const_expr)));
  }
#line 2217 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 59: // const_expr: const_expr '<' const_expr
#line 470 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                             {
    ((*yyvalp).const_expr) = new AidlBinaryConstExpression(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yyloc)), std::unique_ptr<AidlConstantValue>((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.const_expr)), "<" , std::unique_ptr<AidlConstantValue>((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.const_expr)));
  }
#line 2225 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 60: // const_expr: const_expr '>' const_expr
#line 473 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                             {
    ((*yyvalp).const_expr) = new AidlBinaryConstExpression(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yyloc)), std::unique_ptr<AidlConstantValue>((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.const_expr)), ">" , std::unique_ptr<AidlConstantValue>((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.const_expr)));
  }
#line 2233 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 61: // const_expr: const_expr LEQ const_expr
#line 476 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                             {
    ((*yyvalp).const_expr) = new AidlBinaryConstExpression(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yyloc)), std::unique_ptr<AidlConstantValue>((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.const_expr)), "<=", std::unique_ptr<AidlConstantValue>((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.const_expr)));
  }
#line 2241 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 62: // const_expr: const_expr GEQ const_expr
#line 479 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                             {
    ((*yyvalp).const_expr) = new AidlBinaryConstExpression(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yyloc)), std::unique_ptr<AidlConstantValue>((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.const_expr)), ">=", std::unique_ptr<AidlConstantValue>((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.const_expr)));
  }
#line 2249 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 63: // const_expr: const_expr LSHIFT const_expr
#line 482 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                                {
    ((*yyvalp).const_expr) = new AidlBinaryConstExpression(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yyloc)), std::unique_ptr<AidlConstantValue>((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.const_expr)), "<<", std::unique_ptr<AidlConstantValue>((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.const_expr)));
  }
#line 2257 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 64: // const_expr: const_expr RSHIFT const_expr
#line 485 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                                {
    ((*yyvalp).const_expr) = new AidlBinaryConstExpression(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yyloc)), std::unique_ptr<AidlConstantValue>((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.const_expr)), ">>", std::unique_ptr<AidlConstantValue>((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.const_expr)));
  }
#line 2265 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 65: // const_expr: const_expr '+' const_expr
#line 488 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                             {
    ((*yyvalp).const_expr) = new AidlBinaryConstExpression(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yyloc)), std::unique_ptr<AidlConstantValue>((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.const_expr)), "+" , std::unique_ptr<AidlConstantValue>((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.const_expr)));
  }
#line 2273 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 66: // const_expr: const_expr '-' const_expr
#line 491 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                             {
    ((*yyvalp).const_expr) = new AidlBinaryConstExpression(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yyloc)), std::unique_ptr<AidlConstantValue>((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.const_expr)), "-" , std::unique_ptr<AidlConstantValue>((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.const_expr)));
  }
#line 2281 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 67: // const_expr: const_expr '*' const_expr
#line 494 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                             {
    ((*yyvalp).const_expr) = new AidlBinaryConstExpression(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yyloc)), std::unique_ptr<AidlConstantValue>((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.const_expr)), "*" , std::unique_ptr<AidlConstantValue>((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.const_expr)));
  }
#line 2289 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 68: // const_expr: const_expr '/' const_expr
#line 497 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                             {
    ((*yyvalp).const_expr) = new AidlBinaryConstExpression(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yyloc)), std::unique_ptr<AidlConstantValue>((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.const_expr)), "/" , std::unique_ptr<AidlConstantValue>((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.const_expr)));
  }
#line 2297 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 69: // const_expr: const_expr '%' const_expr
#line 500 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                             {
    ((*yyvalp).const_expr) = new AidlBinaryConstExpression(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yyloc)), std::unique_ptr<AidlConstantValue>((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.const_expr)), "%" , std::unique_ptr<AidlConstantValue>((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.const_expr)));
  }
#line 2305 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 70: // const_expr: '+' const_expr
#line 503 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                                    {
    ((*yyvalp).const_expr) = new AidlUnaryConstExpression(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc)), "+", std::unique_ptr<AidlConstantValue>((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.const_expr)));
  }
#line 2313 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 71: // const_expr: '-' const_expr
#line 506 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                                    {
    ((*yyvalp).const_expr) = new AidlUnaryConstExpression(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc)), "-", std::unique_ptr<AidlConstantValue>((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.const_expr)));
  }
#line 2321 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 72: // const_expr: '!' const_expr
#line 509 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                  {
    ((*yyvalp).const_expr) = new AidlUnaryConstExpression(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc)), "!", std::unique_ptr<AidlConstantValue>((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.const_expr)));
  }
#line 2329 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 73: // const_expr: '~' const_expr
#line 512 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                  {
    ((*yyvalp).const_expr) = new AidlUnaryConstExpression(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc)), "~", std::unique_ptr<AidlConstantValue>((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.const_expr)));
  }
#line 2337 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 74: // const_expr: '(' const_expr ')'
#line 516 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
  {
    ((*yyvalp).const_expr) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.const_expr);
  }
#line 2345 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 75: // const_expr: '(' error ')'
#line 520 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
   {
     AIDL_ERROR(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yyloc))) << "invalid const expression within parenthesis";
     ps->AddError();
     // to avoid segfaults
     ((*yyvalp).const_expr) = AidlConstantValue::Integral(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yyloc)), "0");
   }
#line 2356 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 76: // constant_value_list: %empty
#line 529 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
               {
    ((*yyvalp).constant_value_list) = new std::vector<std::unique_ptr<AidlConstantValue>>;
 }
#line 2364 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 77: // constant_value_list: constant_value_non_empty_list
#line 532 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                                 {
    ((*yyvalp).constant_value_list) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.constant_value_list);
 }
#line 2372 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 78: // constant_value_list: constant_value_non_empty_list ','
#line 535 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                                      {
    ((*yyvalp).constant_value_list) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.constant_value_list);
 }
#line 2380 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 79: // constant_value_non_empty_list: const_expr
#line 541 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
              {
    ((*yyvalp).constant_value_list) = new std::vector<std::unique_ptr<AidlConstantValue>>;
    ((*yyvalp).constant_value_list)->push_back(std::unique_ptr<AidlConstantValue>((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.const_expr)));
 }
#line 2389 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 80: // constant_value_non_empty_list: constant_value_non_empty_list ',' const_expr
#line 545 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                                                {
    ((*yyvalp).constant_value_list) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.constant_value_list);
    ((*yyvalp).constant_value_list)->push_back(std::unique_ptr<AidlConstantValue>((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.const_expr)));
 }
#line 2398 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 81: // constant_decl: annotation_list "const" type identifier '=' const_expr ';'
#line 552 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                                                            {
    if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.annotation_list)->size() > 0) {
      (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.type)->SetComments((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.annotation_list)->begin()->get()->GetComments());
    } else {
      (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.type)->SetComments((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.token)->GetComments());
    }
    // TODO(b/151102494) do not merge annotations.
    (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.type)->Annotate(std::move(*(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.annotation_list)));
    ((*yyvalp).constant) = new AidlConstantDeclaration(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yyloc)), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.token)->GetText(), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.const_expr));
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.annotation_list);
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.token);
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.token);
   }
#line 2416 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 82: // enumerator: identifier '=' const_expr
#line 568 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                             {
    ((*yyvalp).enumerator) = new AidlEnumerator(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yyloc)), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.token)->GetText(), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.const_expr), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.token)->GetComments());
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.token);
   }
#line 2425 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 83: // enumerator: identifier
#line 572 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
              {
    ((*yyvalp).enumerator) = new AidlEnumerator(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc)), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.token)->GetText(), nullptr, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.token)->GetComments());
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.token);
   }
#line 2434 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 84: // enumerators: enumerator
#line 579 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
              {
    ((*yyvalp).enumerators) = new std::vector<std::unique_ptr<AidlEnumerator>>();
    ((*yyvalp).enumerators)->push_back(std::unique_ptr<AidlEnumerator>((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.enumerator)));
   }
#line 2443 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 85: // enumerators: enumerators ',' enumerator
#line 583 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                              {
    (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.enumerators)->push_back(std::unique_ptr<AidlEnumerator>((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.enumerator)));
    ((*yyvalp).enumerators) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.enumerators);
   }
#line 2452 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 86: // enum_decl_body: '{' enumerators '}'
#line 590 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                       { ((*yyvalp).enumerators) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.enumerators); }
#line 2458 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 87: // enum_decl_body: '{' enumerators ',' '}'
#line 591 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                           { ((*yyvalp).enumerators) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.enumerators); }
#line 2464 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 88: // enum_decl: "enum" qualified_name enum_decl_body
#line 595 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                                      {
    ps->CheckValidTypeName(*(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.token), loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc)));
    ((*yyvalp).declaration) = new AidlEnumDeclaration(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc)), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.token)->GetText(), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.enumerators), ps->Package(), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.token)->GetComments());
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.token);
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.token);
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.enumerators);
   }
#line 2476 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 89: // union_decl: "union" qualified_name optional_type_params '{' parcelable_members '}'
#line 605 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                                                                        {
    ps->CheckValidTypeName(*(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.token), loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yyloc)));
    ((*yyvalp).declaration) = new AidlUnionDecl(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yyloc)), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.token)->GetText(), ps->Package(), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.token)->GetComments(), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.type_params), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.members));
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.token);
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.token);
  }
#line 2487 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 90: // method_decl: type identifier '(' arg_list ')' ';'
#line 614 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                                        {
    ((*yyvalp).method) = new AidlMethod(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yyloc)), false, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.token)->GetText(), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.arg_list), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.type)->GetComments());
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.token);
  }
#line 2496 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 91: // method_decl: annotation_list "oneway" type identifier '(' arg_list ')' ';'
#line 618 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                                                               {
    const auto& comments = ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.annotation_list)->size() > 0) ? (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.annotation_list)->begin()->get()->GetComments() : (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.token)->GetComments();
    ((*yyvalp).method) = new AidlMethod(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yyloc)), true, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.token)->GetText(), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.arg_list), comments);
    (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.type)->Annotate(std::move(*(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.annotation_list)));
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.annotation_list);
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.token);
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.token);
  }
#line 2509 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 92: // method_decl: type identifier '(' arg_list ')' '=' "int literal" ';'
#line 626 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                                                     {
    int32_t serial = 0;
    if (!android::base::ParseInt((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.token)->GetText(), &serial)) {
        AIDL_ERROR(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc))) << "Could not parse int value: " << (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.token)->GetText();
        ps->AddError();
    }
    ((*yyvalp).method) = new AidlMethod(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yyloc)), false, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.token)->GetText(), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.arg_list), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.type)->GetComments(), serial);
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.token);
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.token);
  }
#line 2524 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 93: // method_decl: annotation_list "oneway" type identifier '(' arg_list ')' '=' "int literal" ';'
#line 636 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                                                                            {
    const auto& comments = ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.annotation_list)->size() > 0) ? (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.annotation_list)->begin()->get()->GetComments() : (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.token)->GetComments();
    int32_t serial = 0;
    if (!android::base::ParseInt((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.token)->GetText(), &serial)) {
        AIDL_ERROR(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc))) << "Could not parse int value: " << (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.token)->GetText();
        ps->AddError();
    }
    ((*yyvalp).method) = new AidlMethod(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yyloc)), true, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.token)->GetText(), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.arg_list), comments, serial);
    (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.type)->Annotate(std::move(*(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.annotation_list)));
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.annotation_list);
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.token);
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.token);
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.token);
  }
#line 2543 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 94: // arg_non_empty_list: arg
#line 652 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
       {
    ((*yyvalp).arg_list) = new std::vector<std::unique_ptr<AidlArgument>>();
    ((*yyvalp).arg_list)->push_back(std::unique_ptr<AidlArgument>((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.arg)));
  }
#line 2552 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 95: // arg_non_empty_list: arg_non_empty_list ',' arg
#line 656 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                              {
    ((*yyvalp).arg_list) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.arg_list);
    ((*yyvalp).arg_list)->push_back(std::unique_ptr<AidlArgument>((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.arg)));
  }
#line 2561 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 96: // arg_list: %empty
#line 663 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
   { ((*yyvalp).arg_list) = new std::vector<std::unique_ptr<AidlArgument>>(); }
#line 2567 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 97: // arg_list: arg_non_empty_list
#line 664 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                      { ((*yyvalp).arg_list) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.arg_list); }
#line 2573 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 98: // arg: direction type identifier
#line 668 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                             {
    ((*yyvalp).arg) = new AidlArgument(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc)), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.direction), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.token)->GetText());
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.token);
  }
#line 2582 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 99: // arg: type identifier
#line 672 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                   {
    ((*yyvalp).arg) = new AidlArgument(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc)), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.token)->GetText());
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.token);
  }
#line 2591 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 100: // non_array_type: annotation_list qualified_name
#line 678 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                                  {
    ((*yyvalp).type) = new AidlTypeSpecifier(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc)), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.token)->GetText(), /*array=*/std::nullopt, nullptr, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.token)->GetComments());
    if (!(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.annotation_list)->empty()) {
      ((*yyvalp).type)->SetComments((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.annotation_list)->begin()->get()->GetComments());
      ((*yyvalp).type)->Annotate(std::move(*(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.annotation_list)));
    }
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.annotation_list);
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.token);
  }
#line 2605 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 101: // non_array_type: non_array_type '<' type_args '>'
#line 687 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                                    {
    ps->SetTypeParameters((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.type_args));
    ((*yyvalp).type) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.type);
  }
#line 2614 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 102: // non_array_type: non_array_type '<' non_array_type '<' type_args RSHIFT
#line 691 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                                                          {
    ps->SetTypeParameters((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.type_args));
    auto params = new std::vector<std::unique_ptr<AidlTypeSpecifier>>();
    params->emplace_back((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.type));
    ps->SetTypeParameters((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.type), params);
    ((*yyvalp).type) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.type);
  }
#line 2626 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 103: // non_array_type: non_array_type '<' type_args ',' non_array_type '<' type_args RSHIFT
#line 698 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                                                                        {
    ps->SetTypeParameters((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.type_args));
    (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.type_args)->emplace_back((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.type));
    ps->SetTypeParameters((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.type_args));
    ((*yyvalp).type) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.type);
  }
#line 2637 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 104: // type: non_array_type
#line 706 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
   { ((*yyvalp).type) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.type); }
#line 2643 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 105: // type: type annotation_list '[' ']'
#line 707 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                                {
    if (!(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.annotation_list)->empty()) {
      AIDL_ERROR(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yyloc))) << "Annotations for arrays are not supported.";
      ps->AddError();
    }
    if (!(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.type)->MakeArray(DynamicArray{})) {
      AIDL_ERROR(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yyloc))) << "Multi-dimensional arrays must be fixed size.";
      ps->AddError();
    }
    ((*yyvalp).type) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.type);
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.annotation_list);
  }
#line 2660 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 106: // type: type annotation_list '[' const_expr ']'
#line 719 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                                           {
    if (!(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.annotation_list)->empty()) {
      AIDL_ERROR(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yyloc))) << "Annotations for arrays are not supported.";
      ps->AddError();
    }
    if (!(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.type)->MakeArray(FixedSizeArray{std::unique_ptr<AidlConstantValue>((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.const_expr))})) {
      AIDL_ERROR(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yyloc))) << "Multi-dimensional arrays must be fixed size.";
      ps->AddError();
    }
    ((*yyvalp).type) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.type);
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.annotation_list);
  }
#line 2677 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 107: // type_args: type
#line 734 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
        {
    if (!(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.type)->GetAnnotations().empty()) {
      AIDL_ERROR(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc))) << "Annotations for type arguments are not supported.";
      ps->AddError();
    }
    ((*yyvalp).type_args) = new std::vector<std::unique_ptr<AidlTypeSpecifier>>();
    ((*yyvalp).type_args)->emplace_back((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.type));
  }
#line 2690 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 108: // type_args: type_args ',' type
#line 742 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                      {
    (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.type_args)->emplace_back((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.type));
    ((*yyvalp).type_args) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.type_args);
  }
#line 2699 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 109: // annotation_list: %empty
#line 749 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
  { ((*yyvalp).annotation_list) = new std::vector<std::unique_ptr<AidlAnnotation>>(); }
#line 2705 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 110: // annotation_list: annotation_list annotation
#line 751 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
  {
    if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.annotation) != nullptr) {
      (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.annotation_list)->emplace_back(std::unique_ptr<AidlAnnotation>((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.annotation)));
    }
    ((*yyvalp).annotation_list) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.annotation_list);
  }
#line 2716 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 111: // parameter: identifier '=' const_expr
#line 759 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                              {
    ((*yyvalp).param) = new AidlAnnotationParameter{(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.token)->GetText(), std::unique_ptr<AidlConstantValue>((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.const_expr))};
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.token);
  }
#line 2725 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 112: // parameter_list: %empty
#line 765 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
             {
    ((*yyvalp).param_list) = new std::map<std::string, std::shared_ptr<AidlConstantValue>>();
  }
#line 2733 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 113: // parameter_list: parameter_non_empty_list
#line 768 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                              {
    ((*yyvalp).param_list) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.param_list);
  }
#line 2741 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 114: // parameter_non_empty_list: parameter
#line 773 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
              {
    ((*yyvalp).param_list) = new std::map<std::string, std::shared_ptr<AidlConstantValue>>();
    ((*yyvalp).param_list)->emplace(std::move((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.param)->name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.param)->value.release());
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.param);
  }
#line 2751 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 115: // parameter_non_empty_list: parameter_non_empty_list ',' parameter
#line 778 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                                           {
    ((*yyvalp).param_list) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.param_list);
    if (((*yyvalp).param_list)->find((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.param)->name) != ((*yyvalp).param_list)->end()) {
      AIDL_ERROR(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc))) << "Trying to redefine parameter " << (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.param)->name << ".";
      ps->AddError();
    }
    ((*yyvalp).param_list)->emplace(std::move((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.param)->name), std::move((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.param)->value));
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.param);
  }
#line 2765 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 116: // annotation: "annotation"
#line 789 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
              {
    // release() returns nullptr if unique_ptr is empty.
    ((*yyvalp).annotation) = AidlAnnotation::Parse(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc)), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.token)->GetText(), {}, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.token)->GetComments()).release();
    if (!((*yyvalp).annotation)) {
      ps->AddError();
    }
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.token);
  }
#line 2778 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 117: // annotation: "annotation" '(' const_expr ')'
#line 797 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                                 {
    auto value = std::shared_ptr<AidlConstantValue>((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.const_expr));
    std::map<std::string, std::shared_ptr<AidlConstantValue>> parameter_list {{"value" , value}};
    ((*yyvalp).annotation) = AidlAnnotation::Parse(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yyloc), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc)), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.token)->GetText(), std::move(parameter_list), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.token)->GetComments()).release();
    if (!((*yyvalp).annotation)) {
      ps->AddError();
    }
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.token);
  }
#line 2792 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 118: // annotation: "annotation" '(' parameter_list ')'
#line 806 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
                                     {
    // release() returns nullptr if unique_ptr is empty.
    ((*yyvalp).annotation) = AidlAnnotation::Parse(loc((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yyloc), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc)), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.token)->GetText(), std::move(*(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.param_list)), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.token)->GetComments()).release();
    if (!((*yyvalp).annotation)) {
      ps->AddError();
    }
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.token);
    delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.param_list);
  }
#line 2806 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 119: // direction: "in"
#line 819 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
  { ((*yyvalp).direction) = AidlArgument::IN_DIR; }
#line 2812 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 120: // direction: "out"
#line 821 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
  { ((*yyvalp).direction) = AidlArgument::OUT_DIR; }
#line 2818 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;

  case 121: // direction: "inout"
#line 823 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
  { ((*yyvalp).direction) = AidlArgument::INOUT_DIR; }
#line 2824 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
    break;


#line 2828 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"

      default: break;
    }
#if YY_EXCEPTIONS
  }
  catch (const syntax_error& yyexc)
    {
      YY_DPRINTF ((stderr, "Caught exception: %s\n", yyexc.what()));
      *yylocp = yyexc.location;
      yyerror (yylocp, yyparser, ps, yyexc.what ());
      YYERROR;
    }
#endif // YY_EXCEPTIONS
  YY_SYMBOL_PRINT ("-> $$ =", yylhsNonterm (yyrule), yyvalp, yylocp);

  return yyok;
# undef yyerrok
# undef YYABORT
# undef YYACCEPT
# undef YYNOMEM
# undef YYERROR
# undef YYBACKUP
# undef yyclearin
# undef YYRECOVERING
}


static void
yyuserMerge (int yyn, YYSTYPE* yy0, YYSTYPE* yy1)
{
  YY_USE (yy0);
  YY_USE (yy1);

  switch (yyn)
    {

      default: break;
    }
}

                              /* Bison grammar-table manipulation.  */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, yy::parser& yyparser, Parser* ps)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  YY_USE (yyparser);
  YY_USE (ps);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yykind)
    {
    case S_PACKAGE: // "package"
#line 98 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
            { delete (((*yyvaluep).token)); }
#line 2893 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
        break;

    case S_IMPORT: // "import"
#line 98 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
            { delete (((*yyvaluep).token)); }
#line 2899 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
        break;

    case S_ANNOTATION: // "annotation"
#line 98 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
            { delete (((*yyvaluep).token)); }
#line 2905 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
        break;

    case S_C_STR: // "string literal"
#line 98 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
            { delete (((*yyvaluep).token)); }
#line 2911 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
        break;

    case S_IDENTIFIER: // "identifier"
#line 98 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
            { delete (((*yyvaluep).token)); }
#line 2917 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
        break;

    case S_INTERFACE: // "interface"
#line 98 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
            { delete (((*yyvaluep).token)); }
#line 2923 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
        break;

    case S_PARCELABLE: // "parcelable"
#line 98 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
            { delete (((*yyvaluep).token)); }
#line 2929 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
        break;

    case S_ONEWAY: // "oneway"
#line 98 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
            { delete (((*yyvaluep).token)); }
#line 2935 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
        break;

    case S_ENUM: // "enum"
#line 98 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
            { delete (((*yyvaluep).token)); }
#line 2941 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
        break;

    case S_UNION: // "union"
#line 98 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
            { delete (((*yyvaluep).token)); }
#line 2947 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
        break;

    case S_CONST: // "const"
#line 98 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
            { delete (((*yyvaluep).token)); }
#line 2953 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
        break;

    case S_CHARVALUE: // "char literal"
#line 98 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
            { delete (((*yyvaluep).token)); }
#line 2959 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
        break;

    case S_FLOATVALUE: // "float literal"
#line 98 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
            { delete (((*yyvaluep).token)); }
#line 2965 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
        break;

    case S_HEXVALUE: // "hex literal"
#line 98 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
            { delete (((*yyvaluep).token)); }
#line 2971 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
        break;

    case S_INTVALUE: // "int literal"
#line 98 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
            { delete (((*yyvaluep).token)); }
#line 2977 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
        break;

    case S_CPP_HEADER: // "cpp_header (which can also be used as an identifier)"
#line 98 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
            { delete (((*yyvaluep).token)); }
#line 2983 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
        break;

    case S_identifier: // identifier
#line 98 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
            { delete (((*yyvaluep).token)); }
#line 2989 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
        break;

    case S_optional_package: // optional_package
#line 98 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
            { delete (((*yyvaluep).token)); }
#line 2995 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
        break;

    case S_imports: // imports
#line 98 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
            { delete (((*yyvaluep).token_list)); }
#line 3001 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
        break;

    case S_import: // import
#line 98 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
            { delete (((*yyvaluep).token)); }
#line 3007 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
        break;

    case S_qualified_name: // qualified_name
#line 98 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
            { delete (((*yyvaluep).token)); }
#line 3013 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
        break;

    case S_decls: // decls
#line 98 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
            { delete (((*yyvaluep).declarations)); }
#line 3019 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
        break;

    case S_decl: // decl
#line 98 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
            { delete (((*yyvaluep).declaration)); }
#line 3025 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
        break;

    case S_unannotated_decl: // unannotated_decl
#line 98 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
            { delete (((*yyvaluep).declaration)); }
#line 3031 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
        break;

    case S_type_params: // type_params
#line 98 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
            { delete (((*yyvaluep).type_params)); }
#line 3037 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
        break;

    case S_optional_type_params: // optional_type_params
#line 98 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
            { delete (((*yyvaluep).type_params)); }
#line 3043 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
        break;

    case S_parcelable_decl: // parcelable_decl
#line 98 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
            { delete (((*yyvaluep).declaration)); }
#line 3049 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
        break;

    case S_parcelable_members: // parcelable_members
#line 98 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
            { delete (((*yyvaluep).members)); }
#line 3055 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
        break;

    case S_variable_decl: // variable_decl
#line 98 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
            { delete (((*yyvaluep).variable)); }
#line 3061 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
        break;

    case S_interface_decl: // interface_decl
#line 98 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
            { delete (((*yyvaluep).declaration)); }
#line 3067 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
        break;

    case S_interface_members: // interface_members
#line 98 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
            { delete (((*yyvaluep).members)); }
#line 3073 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
        break;

    case S_const_expr: // const_expr
#line 98 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
            { delete (((*yyvaluep).const_expr)); }
#line 3079 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
        break;

    case S_constant_value_list: // constant_value_list
#line 98 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
            { delete (((*yyvaluep).constant_value_list)); }
#line 3085 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
        break;

    case S_constant_value_non_empty_list: // constant_value_non_empty_list
#line 98 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
            { delete (((*yyvaluep).constant_value_list)); }
#line 3091 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
        break;

    case S_constant_decl: // constant_decl
#line 98 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
            { delete (((*yyvaluep).constant)); }
#line 3097 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
        break;

    case S_enumerator: // enumerator
#line 98 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
            { delete (((*yyvaluep).enumerator)); }
#line 3103 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
        break;

    case S_enumerators: // enumerators
#line 98 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
            { delete (((*yyvaluep).enumerators)); }
#line 3109 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
        break;

    case S_enum_decl_body: // enum_decl_body
#line 98 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
            { delete (((*yyvaluep).enumerators)); }
#line 3115 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
        break;

    case S_enum_decl: // enum_decl
#line 98 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
            { delete (((*yyvaluep).declaration)); }
#line 3121 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
        break;

    case S_union_decl: // union_decl
#line 98 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
            { delete (((*yyvaluep).declaration)); }
#line 3127 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
        break;

    case S_method_decl: // method_decl
#line 98 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
            { delete (((*yyvaluep).method)); }
#line 3133 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
        break;

    case S_arg_non_empty_list: // arg_non_empty_list
#line 98 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
            { delete (((*yyvaluep).arg_list)); }
#line 3139 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
        break;

    case S_arg_list: // arg_list
#line 98 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
            { delete (((*yyvaluep).arg_list)); }
#line 3145 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
        break;

    case S_arg: // arg
#line 98 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
            { delete (((*yyvaluep).arg)); }
#line 3151 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
        break;

    case S_non_array_type: // non_array_type
#line 98 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
            { delete (((*yyvaluep).type)); }
#line 3157 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
        break;

    case S_type: // type
#line 98 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
            { delete (((*yyvaluep).type)); }
#line 3163 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
        break;

    case S_type_args: // type_args
#line 98 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
            { delete (((*yyvaluep).type_args)); }
#line 3169 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
        break;

    case S_annotation_list: // annotation_list
#line 98 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
            { delete (((*yyvaluep).annotation_list)); }
#line 3175 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
        break;

    case S_parameter: // parameter
#line 98 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
            { delete (((*yyvaluep).param)); }
#line 3181 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
        break;

    case S_parameter_list: // parameter_list
#line 98 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
            { delete (((*yyvaluep).param_list)); }
#line 3187 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
        break;

    case S_parameter_non_empty_list: // parameter_non_empty_list
#line 98 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
            { delete (((*yyvaluep).param_list)); }
#line 3193 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
        break;

    case S_annotation: // annotation
#line 98 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
            { delete (((*yyvaluep).annotation)); }
#line 3199 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
        break;

    case S_direction: // direction
#line 97 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
            { }
#line 3205 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"
        break;

      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}

/** Number of symbols composing the right hand side of rule #RULE.  */
static inline int
yyrhsLength (yyRuleNum yyrule)
{
  return yyr2[yyrule];
}

static void
yydestroyGLRState (char const *yymsg, yyGLRState *yys, yy::parser& yyparser, Parser* ps)
{
  if (yys->yyresolved)
    yydestruct (yymsg, yy_accessing_symbol (yys->yylrState),
                &yys->yysemantics.yyval, &yys->yyloc, yyparser, ps);
  else
    {
#if YYDEBUG
      if (yydebug)
        {
          if (yys->yysemantics.yyfirstVal)
            YY_FPRINTF ((stderr, "%s unresolved", yymsg));
          else
            YY_FPRINTF ((stderr, "%s incomplete", yymsg));
          YY_SYMBOL_PRINT ("", yy_accessing_symbol (yys->yylrState), YY_NULLPTR, &yys->yyloc);
        }
#endif

      if (yys->yysemantics.yyfirstVal)
        {
          yySemanticOption *yyoption = yys->yysemantics.yyfirstVal;
          yyGLRState *yyrh;
          int yyn;
          for (yyrh = yyoption->yystate, yyn = yyrhsLength (yyoption->yyrule);
               yyn > 0;
               yyrh = yyrh->yypred, yyn -= 1)
            yydestroyGLRState (yymsg, yyrh, yyparser, ps);
        }
    }
}

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

/** True iff LR state YYSTATE has only a default reduction (regardless
 *  of token).  */
static inline yybool
yyisDefaultedState (yy_state_t yystate)
{
  return yypact_value_is_default (yypact[yystate]);
}

/** The default reduction for YYSTATE, assuming it has one.  */
static inline yyRuleNum
yydefaultAction (yy_state_t yystate)
{
  return yydefact[yystate];
}

#define yytable_value_is_error(Yyn) \
  0

/** The action to take in YYSTATE on seeing YYTOKEN.
 *  Result R means
 *    R < 0:  Reduce on rule -R.
 *    R = 0:  Error.
 *    R > 0:  Shift to state R.
 *  Set *YYCONFLICTS to a pointer into yyconfl to a 0-terminated list
 *  of conflicting reductions.
 */
static inline int
yygetLRActions (yy_state_t yystate, yysymbol_kind_t yytoken, const short** yyconflicts)
{
  int yyindex = yypact[yystate] + yytoken;
  if (yytoken == S_YYerror)
    {
      // This is the error token.
      *yyconflicts = yyconfl;
      return 0;
    }
  else if (yyisDefaultedState (yystate)
           || yyindex < 0 || YYLAST < yyindex || yycheck[yyindex] != yytoken)
    {
      *yyconflicts = yyconfl;
      return -yydefact[yystate];
    }
  else if (! yytable_value_is_error (yytable[yyindex]))
    {
      *yyconflicts = yyconfl + yyconflp[yyindex];
      return yytable[yyindex];
    }
  else
    {
      *yyconflicts = yyconfl + yyconflp[yyindex];
      return 0;
    }
}

/** Compute post-reduction state.
 * \param yystate   the current state
 * \param yysym     the nonterminal to push on the stack
 */
static inline yy_state_t
yyLRgotoState (yy_state_t yystate, yysymbol_kind_t yysym)
{
  int yyr = yypgoto[yysym - YYNTOKENS] + yystate;
  if (0 <= yyr && yyr <= YYLAST && yycheck[yyr] == yystate)
    return yytable[yyr];
  else
    return yydefgoto[yysym - YYNTOKENS];
}

static inline yybool
yyisShiftAction (int yyaction)
{
  return 0 < yyaction;
}

static inline yybool
yyisErrorAction (int yyaction)
{
  return yyaction == 0;
}

                                /* GLRStates */

/** Return a fresh GLRStackItem in YYSTACKP.  The item is an LR state
 *  if YYISSTATE, and otherwise a semantic option.  Callers should call
 *  YY_RESERVE_GLRSTACK afterwards to make sure there is sufficient
 *  headroom.  */

static inline yyGLRStackItem*
yynewGLRStackItem (yyGLRStack* yystackp, yybool yyisState)
{
  yyGLRStackItem* yynewItem = yystackp->yynextFree;
  yystackp->yyspaceLeft -= 1;
  yystackp->yynextFree += 1;
  yynewItem->yystate.yyisState = yyisState;
  return yynewItem;
}

/** Add a new semantic action that will execute the action for rule
 *  YYRULE on the semantic values in YYRHS to the list of
 *  alternative actions for YYSTATE.  Assumes that YYRHS comes from
 *  stack #YYK of *YYSTACKP. */
static void
yyaddDeferredAction (yyGLRStack* yystackp, YYPTRDIFF_T yyk, yyGLRState* yystate,
                     yyGLRState* yyrhs, yyRuleNum yyrule)
{
  yySemanticOption* yynewOption =
    &yynewGLRStackItem (yystackp, yyfalse)->yyoption;
  YY_ASSERT (!yynewOption->yyisState);
  yynewOption->yystate = yyrhs;
  yynewOption->yyrule = yyrule;
  if (yystackp->yytops.yylookaheadNeeds[yyk])
    {
      yynewOption->yyrawchar = yychar;
      yynewOption->yyval = yylval;
      yynewOption->yyloc = yylloc;
    }
  else
    yynewOption->yyrawchar = YYEMPTY;
  yynewOption->yynext = yystate->yysemantics.yyfirstVal;
  yystate->yysemantics.yyfirstVal = yynewOption;

  YY_RESERVE_GLRSTACK (yystackp);
}

                                /* GLRStacks */

/** Initialize YYSET to a singleton set containing an empty stack.  */
static yybool
yyinitStateSet (yyGLRStateSet* yyset)
{
  yyset->yysize = 1;
  yyset->yycapacity = 16;
  yyset->yystates
    = YY_CAST (yyGLRState**,
               YYMALLOC (YY_CAST (YYSIZE_T, yyset->yycapacity)
                         * sizeof yyset->yystates[0]));
  if (! yyset->yystates)
    return yyfalse;
  yyset->yystates[0] = YY_NULLPTR;
  yyset->yylookaheadNeeds
    = YY_CAST (yybool*,
               YYMALLOC (YY_CAST (YYSIZE_T, yyset->yycapacity)
                         * sizeof yyset->yylookaheadNeeds[0]));
  if (! yyset->yylookaheadNeeds)
    {
      YYFREE (yyset->yystates);
      return yyfalse;
    }
  memset (yyset->yylookaheadNeeds,
          0,
          YY_CAST (YYSIZE_T, yyset->yycapacity) * sizeof yyset->yylookaheadNeeds[0]);
  return yytrue;
}

static void yyfreeStateSet (yyGLRStateSet* yyset)
{
  YYFREE (yyset->yystates);
  YYFREE (yyset->yylookaheadNeeds);
}

/** Initialize *YYSTACKP to a single empty stack, with total maximum
 *  capacity for all stacks of YYSIZE.  */
static yybool
yyinitGLRStack (yyGLRStack* yystackp, YYPTRDIFF_T yysize)
{
  yystackp->yyerrState = 0;
  yynerrs = 0;
  yystackp->yyspaceLeft = yysize;
  yystackp->yyitems
    = YY_CAST (yyGLRStackItem*,
               YYMALLOC (YY_CAST (YYSIZE_T, yysize)
                         * sizeof yystackp->yynextFree[0]));
  if (!yystackp->yyitems)
    return yyfalse;
  yystackp->yynextFree = yystackp->yyitems;
  yystackp->yysplitPoint = YY_NULLPTR;
  yystackp->yylastDeleted = YY_NULLPTR;
  return yyinitStateSet (&yystackp->yytops);
}


#if YYSTACKEXPANDABLE
# define YYRELOC(YYFROMITEMS, YYTOITEMS, YYX, YYTYPE)                   \
  &((YYTOITEMS)                                                         \
    - ((YYFROMITEMS) - YY_REINTERPRET_CAST (yyGLRStackItem*, (YYX))))->YYTYPE

/** If *YYSTACKP is expandable, extend it.  WARNING: Pointers into the
    stack from outside should be considered invalid after this call.
    We always expand when there are 1 or fewer items left AFTER an
    allocation, so that we can avoid having external pointers exist
    across an allocation.  */
static void
yyexpandGLRStack (yyGLRStack* yystackp)
{
  yyGLRStackItem* yynewItems;
  yyGLRStackItem* yyp0, *yyp1;
  YYPTRDIFF_T yynewSize;
  YYPTRDIFF_T yyn;
  YYPTRDIFF_T yysize = yystackp->yynextFree - yystackp->yyitems;
  if (YYMAXDEPTH - YYHEADROOM < yysize)
    yyMemoryExhausted (yystackp);
  yynewSize = 2*yysize;
  if (YYMAXDEPTH < yynewSize)
    yynewSize = YYMAXDEPTH;
  yynewItems
    = YY_CAST (yyGLRStackItem*,
               YYMALLOC (YY_CAST (YYSIZE_T, yynewSize)
                         * sizeof yynewItems[0]));
  if (! yynewItems)
    yyMemoryExhausted (yystackp);
  for (yyp0 = yystackp->yyitems, yyp1 = yynewItems, yyn = yysize;
       0 < yyn;
       yyn -= 1, yyp0 += 1, yyp1 += 1)
    {
      *yyp1 = *yyp0;
      if (*YY_REINTERPRET_CAST (yybool *, yyp0))
        {
          yyGLRState* yys0 = &yyp0->yystate;
          yyGLRState* yys1 = &yyp1->yystate;
          if (yys0->yypred != YY_NULLPTR)
            yys1->yypred =
              YYRELOC (yyp0, yyp1, yys0->yypred, yystate);
          if (! yys0->yyresolved && yys0->yysemantics.yyfirstVal != YY_NULLPTR)
            yys1->yysemantics.yyfirstVal =
              YYRELOC (yyp0, yyp1, yys0->yysemantics.yyfirstVal, yyoption);
        }
      else
        {
          yySemanticOption* yyv0 = &yyp0->yyoption;
          yySemanticOption* yyv1 = &yyp1->yyoption;
          if (yyv0->yystate != YY_NULLPTR)
            yyv1->yystate = YYRELOC (yyp0, yyp1, yyv0->yystate, yystate);
          if (yyv0->yynext != YY_NULLPTR)
            yyv1->yynext = YYRELOC (yyp0, yyp1, yyv0->yynext, yyoption);
        }
    }
  if (yystackp->yysplitPoint != YY_NULLPTR)
    yystackp->yysplitPoint = YYRELOC (yystackp->yyitems, yynewItems,
                                      yystackp->yysplitPoint, yystate);

  for (yyn = 0; yyn < yystackp->yytops.yysize; yyn += 1)
    if (yystackp->yytops.yystates[yyn] != YY_NULLPTR)
      yystackp->yytops.yystates[yyn] =
        YYRELOC (yystackp->yyitems, yynewItems,
                 yystackp->yytops.yystates[yyn], yystate);
  YYFREE (yystackp->yyitems);
  yystackp->yyitems = yynewItems;
  yystackp->yynextFree = yynewItems + yysize;
  yystackp->yyspaceLeft = yynewSize - yysize;
}
#endif

static void
yyfreeGLRStack (yyGLRStack* yystackp)
{
  YYFREE (yystackp->yyitems);
  yyfreeStateSet (&yystackp->yytops);
}

/** Assuming that YYS is a GLRState somewhere on *YYSTACKP, update the
 *  splitpoint of *YYSTACKP, if needed, so that it is at least as deep as
 *  YYS.  */
static inline void
yyupdateSplit (yyGLRStack* yystackp, yyGLRState* yys)
{
  if (yystackp->yysplitPoint != YY_NULLPTR && yystackp->yysplitPoint > yys)
    yystackp->yysplitPoint = yys;
}

/** Invalidate stack #YYK in *YYSTACKP.  */
static inline void
yymarkStackDeleted (yyGLRStack* yystackp, YYPTRDIFF_T yyk)
{
  if (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
    yystackp->yylastDeleted = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yystates[yyk] = YY_NULLPTR;
}

/** Undelete the last stack in *YYSTACKP that was marked as deleted.  Can
    only be done once after a deletion, and only when all other stacks have
    been deleted.  */
static void
yyundeleteLastStack (yyGLRStack* yystackp)
{
  if (yystackp->yylastDeleted == YY_NULLPTR || yystackp->yytops.yysize != 0)
    return;
  yystackp->yytops.yystates[0] = yystackp->yylastDeleted;
  yystackp->yytops.yysize = 1;
  YY_DPRINTF ((stderr, "Restoring last deleted stack as stack #0.\n"));
  yystackp->yylastDeleted = YY_NULLPTR;
}

static inline void
yyremoveDeletes (yyGLRStack* yystackp)
{
  YYPTRDIFF_T yyi, yyj;
  yyi = yyj = 0;
  while (yyj < yystackp->yytops.yysize)
    {
      if (yystackp->yytops.yystates[yyi] == YY_NULLPTR)
        {
          if (yyi == yyj)
            YY_DPRINTF ((stderr, "Removing dead stacks.\n"));
          yystackp->yytops.yysize -= 1;
        }
      else
        {
          yystackp->yytops.yystates[yyj] = yystackp->yytops.yystates[yyi];
          /* In the current implementation, it's unnecessary to copy
             yystackp->yytops.yylookaheadNeeds[yyi] since, after
             yyremoveDeletes returns, the parser immediately either enters
             deterministic operation or shifts a token.  However, it doesn't
             hurt, and the code might evolve to need it.  */
          yystackp->yytops.yylookaheadNeeds[yyj] =
            yystackp->yytops.yylookaheadNeeds[yyi];
          if (yyj != yyi)
            YY_DPRINTF ((stderr, "Rename stack %ld -> %ld.\n",
                        YY_CAST (long, yyi), YY_CAST (long, yyj)));
          yyj += 1;
        }
      yyi += 1;
    }
}

/** Shift to a new state on stack #YYK of *YYSTACKP, corresponding to LR
 * state YYLRSTATE, at input position YYPOSN, with (resolved) semantic
 * value *YYVALP and source location *YYLOCP.  */
static inline void
yyglrShift (yyGLRStack* yystackp, YYPTRDIFF_T yyk, yy_state_t yylrState,
            YYPTRDIFF_T yyposn,
            YYSTYPE* yyvalp, YYLTYPE* yylocp)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yytrue;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yyval = *yyvalp;
  yynewState->yyloc = *yylocp;
  yystackp->yytops.yystates[yyk] = yynewState;

  YY_RESERVE_GLRSTACK (yystackp);
}

/** Shift stack #YYK of *YYSTACKP, to a new state corresponding to LR
 *  state YYLRSTATE, at input position YYPOSN, with the (unresolved)
 *  semantic value of YYRHS under the action for YYRULE.  */
static inline void
yyglrShiftDefer (yyGLRStack* yystackp, YYPTRDIFF_T yyk, yy_state_t yylrState,
                 YYPTRDIFF_T yyposn, yyGLRState* yyrhs, yyRuleNum yyrule)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;
  YY_ASSERT (yynewState->yyisState);

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yyfalse;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yyfirstVal = YY_NULLPTR;
  yystackp->yytops.yystates[yyk] = yynewState;

  /* Invokes YY_RESERVE_GLRSTACK.  */
  yyaddDeferredAction (yystackp, yyk, yynewState, yyrhs, yyrule);
}

#if YYDEBUG

/*----------------------------------------------------------------------.
| Report that stack #YYK of *YYSTACKP is going to be reduced by YYRULE. |
`----------------------------------------------------------------------*/

static inline void
yy_reduce_print (yybool yynormal, yyGLRStackItem* yyvsp, YYPTRDIFF_T yyk,
                 yyRuleNum yyrule, yy::parser& yyparser, Parser* ps)
{
  int yynrhs = yyrhsLength (yyrule);
  int yylow = 1;
  int yyi;
  YY_FPRINTF ((stderr, "Reducing stack %ld by rule %d (line %d):\n",
               YY_CAST (long, yyk), yyrule - 1, yyrline[yyrule]));
  if (! yynormal)
    yyfillin (yyvsp, 1, -yynrhs);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YY_FPRINTF ((stderr, "   $%d = ", yyi + 1));
      yy_symbol_print (stderr,
                       yy_accessing_symbol (yyvsp[yyi - yynrhs + 1].yystate.yylrState),
                       &yyvsp[yyi - yynrhs + 1].yystate.yysemantics.yyval,
                       &(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL ((yyi + 1) - (yynrhs))].yystate.yyloc)                       , yyparser, ps);
      if (!yyvsp[yyi - yynrhs + 1].yystate.yyresolved)
        YY_FPRINTF ((stderr, " (unresolved)"));
      YY_FPRINTF ((stderr, "\n"));
    }
}
#endif

/** Pop the symbols consumed by reduction #YYRULE from the top of stack
 *  #YYK of *YYSTACKP, and perform the appropriate semantic action on their
 *  semantic values.  Assumes that all ambiguities in semantic values
 *  have been previously resolved.  Set *YYVALP to the resulting value,
 *  and *YYLOCP to the computed location (if any).  Return value is as
 *  for userAction.  */
static inline YYRESULTTAG
yydoAction (yyGLRStack* yystackp, YYPTRDIFF_T yyk, yyRuleNum yyrule,
            YYSTYPE* yyvalp, YYLTYPE *yylocp, yy::parser& yyparser, Parser* ps)
{
  int yynrhs = yyrhsLength (yyrule);

  if (yystackp->yysplitPoint == YY_NULLPTR)
    {
      /* Standard special case: single stack.  */
      yyGLRStackItem* yyrhs
        = YY_REINTERPRET_CAST (yyGLRStackItem*, yystackp->yytops.yystates[yyk]);
      YY_ASSERT (yyk == 0);
      yystackp->yynextFree -= yynrhs;
      yystackp->yyspaceLeft += yynrhs;
      yystackp->yytops.yystates[0] = & yystackp->yynextFree[-1].yystate;
      return yyuserAction (yyrule, yynrhs, yyrhs, yystackp, yyk,
                           yyvalp, yylocp, yyparser, ps);
    }
  else
    {
      yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
      yyGLRState* yys = yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred
        = yystackp->yytops.yystates[yyk];
      int yyi;
      if (yynrhs == 0)
        /* Set default location.  */
        yyrhsVals[YYMAXRHS + YYMAXLEFT - 1].yystate.yyloc = yys->yyloc;
      for (yyi = 0; yyi < yynrhs; yyi += 1)
        {
          yys = yys->yypred;
          YY_ASSERT (yys);
        }
      yyupdateSplit (yystackp, yys);
      yystackp->yytops.yystates[yyk] = yys;
      return yyuserAction (yyrule, yynrhs, yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
                           yystackp, yyk, yyvalp, yylocp, yyparser, ps);
    }
}

/** Pop items off stack #YYK of *YYSTACKP according to grammar rule YYRULE,
 *  and push back on the resulting nonterminal symbol.  Perform the
 *  semantic action associated with YYRULE and store its value with the
 *  newly pushed state, if YYFORCEEVAL or if *YYSTACKP is currently
 *  unambiguous.  Otherwise, store the deferred semantic action with
 *  the new state.  If the new state would have an identical input
 *  position, LR state, and predecessor to an existing state on the stack,
 *  it is identified with that existing state, eliminating stack #YYK from
 *  *YYSTACKP.  In this case, the semantic value is
 *  added to the options for the existing state's semantic value.
 */
static inline YYRESULTTAG
yyglrReduce (yyGLRStack* yystackp, YYPTRDIFF_T yyk, yyRuleNum yyrule,
             yybool yyforceEval, yy::parser& yyparser, Parser* ps)
{
  YYPTRDIFF_T yyposn = yystackp->yytops.yystates[yyk]->yyposn;

  if (yyforceEval || yystackp->yysplitPoint == YY_NULLPTR)
    {
      YYSTYPE yyval;
      YYLTYPE yyloc;

      YYRESULTTAG yyflag = yydoAction (yystackp, yyk, yyrule, &yyval, &yyloc, yyparser, ps);
      if (yyflag == yyerr && yystackp->yysplitPoint != YY_NULLPTR)
        YY_DPRINTF ((stderr,
                     "Parse on stack %ld rejected by rule %d (line %d).\n",
                     YY_CAST (long, yyk), yyrule - 1, yyrline[yyrule]));
      if (yyflag != yyok)
        return yyflag;
      yyglrShift (yystackp, yyk,
                  yyLRgotoState (yystackp->yytops.yystates[yyk]->yylrState,
                                 yylhsNonterm (yyrule)),
                  yyposn, &yyval, &yyloc);
    }
  else
    {
      YYPTRDIFF_T yyi;
      int yyn;
      yyGLRState* yys, *yys0 = yystackp->yytops.yystates[yyk];
      yy_state_t yynewLRState;

      for (yys = yystackp->yytops.yystates[yyk], yyn = yyrhsLength (yyrule);
           0 < yyn; yyn -= 1)
        {
          yys = yys->yypred;
          YY_ASSERT (yys);
        }
      yyupdateSplit (yystackp, yys);
      yynewLRState = yyLRgotoState (yys->yylrState, yylhsNonterm (yyrule));
      YY_DPRINTF ((stderr,
                   "Reduced stack %ld by rule %d (line %d); action deferred.  "
                   "Now in state %d.\n",
                   YY_CAST (long, yyk), yyrule - 1, yyrline[yyrule],
                   yynewLRState));
      for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
        if (yyi != yyk && yystackp->yytops.yystates[yyi] != YY_NULLPTR)
          {
            yyGLRState *yysplit = yystackp->yysplitPoint;
            yyGLRState *yyp = yystackp->yytops.yystates[yyi];
            while (yyp != yys && yyp != yysplit && yyp->yyposn >= yyposn)
              {
                if (yyp->yylrState == yynewLRState && yyp->yypred == yys)
                  {
                    yyaddDeferredAction (yystackp, yyk, yyp, yys0, yyrule);
                    yymarkStackDeleted (yystackp, yyk);
                    YY_DPRINTF ((stderr, "Merging stack %ld into stack %ld.\n",
                                 YY_CAST (long, yyk), YY_CAST (long, yyi)));
                    return yyok;
                  }
                yyp = yyp->yypred;
              }
          }
      yystackp->yytops.yystates[yyk] = yys;
      yyglrShiftDefer (yystackp, yyk, yynewLRState, yyposn, yys0, yyrule);
    }
  return yyok;
}

static YYPTRDIFF_T
yysplitStack (yyGLRStack* yystackp, YYPTRDIFF_T yyk)
{
  if (yystackp->yysplitPoint == YY_NULLPTR)
    {
      YY_ASSERT (yyk == 0);
      yystackp->yysplitPoint = yystackp->yytops.yystates[yyk];
    }
  if (yystackp->yytops.yycapacity <= yystackp->yytops.yysize)
    {
      YYPTRDIFF_T state_size = YYSIZEOF (yystackp->yytops.yystates[0]);
      YYPTRDIFF_T half_max_capacity = YYSIZE_MAXIMUM / 2 / state_size;
      if (half_max_capacity < yystackp->yytops.yycapacity)
        yyMemoryExhausted (yystackp);
      yystackp->yytops.yycapacity *= 2;

      {
        yyGLRState** yynewStates
          = YY_CAST (yyGLRState**,
                     YYREALLOC (yystackp->yytops.yystates,
                                (YY_CAST (YYSIZE_T, yystackp->yytops.yycapacity)
                                 * sizeof yynewStates[0])));
        if (yynewStates == YY_NULLPTR)
          yyMemoryExhausted (yystackp);
        yystackp->yytops.yystates = yynewStates;
      }

      {
        yybool* yynewLookaheadNeeds
          = YY_CAST (yybool*,
                     YYREALLOC (yystackp->yytops.yylookaheadNeeds,
                                (YY_CAST (YYSIZE_T, yystackp->yytops.yycapacity)
                                 * sizeof yynewLookaheadNeeds[0])));
        if (yynewLookaheadNeeds == YY_NULLPTR)
          yyMemoryExhausted (yystackp);
        yystackp->yytops.yylookaheadNeeds = yynewLookaheadNeeds;
      }
    }
  yystackp->yytops.yystates[yystackp->yytops.yysize]
    = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yylookaheadNeeds[yystackp->yytops.yysize]
    = yystackp->yytops.yylookaheadNeeds[yyk];
  yystackp->yytops.yysize += 1;
  return yystackp->yytops.yysize - 1;
}

/** True iff YYY0 and YYY1 represent identical options at the top level.
 *  That is, they represent the same rule applied to RHS symbols
 *  that produce the same terminal symbols.  */
static yybool
yyidenticalOptions (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  if (yyy0->yyrule == yyy1->yyrule)
    {
      yyGLRState *yys0, *yys1;
      int yyn;
      for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
           yyn = yyrhsLength (yyy0->yyrule);
           yyn > 0;
           yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
        if (yys0->yyposn != yys1->yyposn)
          return yyfalse;
      return yytrue;
    }
  else
    return yyfalse;
}

/** Assuming identicalOptions (YYY0,YYY1), destructively merge the
 *  alternative semantic values for the RHS-symbols of YYY1 and YYY0.  */
static void
yymergeOptionSets (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  yyGLRState *yys0, *yys1;
  int yyn;
  for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
       yyn = yyrhsLength (yyy0->yyrule);
       0 < yyn;
       yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
    {
      if (yys0 == yys1)
        break;
      else if (yys0->yyresolved)
        {
          yys1->yyresolved = yytrue;
          yys1->yysemantics.yyval = yys0->yysemantics.yyval;
        }
      else if (yys1->yyresolved)
        {
          yys0->yyresolved = yytrue;
          yys0->yysemantics.yyval = yys1->yysemantics.yyval;
        }
      else
        {
          yySemanticOption** yyz0p = &yys0->yysemantics.yyfirstVal;
          yySemanticOption* yyz1 = yys1->yysemantics.yyfirstVal;
          while (yytrue)
            {
              if (yyz1 == *yyz0p || yyz1 == YY_NULLPTR)
                break;
              else if (*yyz0p == YY_NULLPTR)
                {
                  *yyz0p = yyz1;
                  break;
                }
              else if (*yyz0p < yyz1)
                {
                  yySemanticOption* yyz = *yyz0p;
                  *yyz0p = yyz1;
                  yyz1 = yyz1->yynext;
                  (*yyz0p)->yynext = yyz;
                }
              yyz0p = &(*yyz0p)->yynext;
            }
          yys1->yysemantics.yyfirstVal = yys0->yysemantics.yyfirstVal;
        }
    }
}

/** Y0 and Y1 represent two possible actions to take in a given
 *  parsing state; return 0 if no combination is possible,
 *  1 if user-mergeable, 2 if Y0 is preferred, 3 if Y1 is preferred.  */
static int
yypreference (yySemanticOption* y0, yySemanticOption* y1)
{
  yyRuleNum r0 = y0->yyrule, r1 = y1->yyrule;
  int p0 = yydprec[r0], p1 = yydprec[r1];

  if (p0 == p1)
    {
      if (yymerger[r0] == 0 || yymerger[r0] != yymerger[r1])
        return 0;
      else
        return 1;
    }
  if (p0 == 0 || p1 == 0)
    return 0;
  if (p0 < p1)
    return 3;
  if (p1 < p0)
    return 2;
  return 0;
}

static YYRESULTTAG
yyresolveValue (yyGLRState* yys, yyGLRStack* yystackp, yy::parser& yyparser, Parser* ps);


/** Resolve the previous YYN states starting at and including state YYS
 *  on *YYSTACKP. If result != yyok, some states may have been left
 *  unresolved possibly with empty semantic option chains.  Regardless
 *  of whether result = yyok, each state has been left with consistent
 *  data so that yydestroyGLRState can be invoked if necessary.  */
static YYRESULTTAG
yyresolveStates (yyGLRState* yys, int yyn,
                 yyGLRStack* yystackp, yy::parser& yyparser, Parser* ps)
{
  if (0 < yyn)
    {
      YY_ASSERT (yys->yypred);
      YYCHK (yyresolveStates (yys->yypred, yyn-1, yystackp, yyparser, ps));
      if (! yys->yyresolved)
        YYCHK (yyresolveValue (yys, yystackp, yyparser, ps));
    }
  return yyok;
}

/** Resolve the states for the RHS of YYOPT on *YYSTACKP, perform its
 *  user action, and return the semantic value and location in *YYVALP
 *  and *YYLOCP.  Regardless of whether result = yyok, all RHS states
 *  have been destroyed (assuming the user action destroys all RHS
 *  semantic values if invoked).  */
static YYRESULTTAG
yyresolveAction (yySemanticOption* yyopt, yyGLRStack* yystackp,
                 YYSTYPE* yyvalp, YYLTYPE *yylocp, yy::parser& yyparser, Parser* ps)
{
  yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
  int yynrhs = yyrhsLength (yyopt->yyrule);
  YYRESULTTAG yyflag =
    yyresolveStates (yyopt->yystate, yynrhs, yystackp, yyparser, ps);
  if (yyflag != yyok)
    {
      yyGLRState *yys;
      for (yys = yyopt->yystate; yynrhs > 0; yys = yys->yypred, yynrhs -= 1)
        yydestroyGLRState ("Cleanup: popping", yys, yyparser, ps);
      return yyflag;
    }

  yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred = yyopt->yystate;
  if (yynrhs == 0)
    /* Set default location.  */
    yyrhsVals[YYMAXRHS + YYMAXLEFT - 1].yystate.yyloc = yyopt->yystate->yyloc;
  {
    int yychar_current = yychar;
    YYSTYPE yylval_current = yylval;
    YYLTYPE yylloc_current = yylloc;
    yychar = yyopt->yyrawchar;
    yylval = yyopt->yyval;
    yylloc = yyopt->yyloc;
    yyflag = yyuserAction (yyopt->yyrule, yynrhs,
                           yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
                           yystackp, -1, yyvalp, yylocp, yyparser, ps);
    yychar = yychar_current;
    yylval = yylval_current;
    yylloc = yylloc_current;
  }
  return yyflag;
}

#if YYDEBUG
static void
yyreportTree (yySemanticOption* yyx, int yyindent)
{
  int yynrhs = yyrhsLength (yyx->yyrule);
  int yyi;
  yyGLRState* yys;
  yyGLRState* yystates[1 + YYMAXRHS];
  yyGLRState yyleftmost_state;

  for (yyi = yynrhs, yys = yyx->yystate; 0 < yyi; yyi -= 1, yys = yys->yypred)
    yystates[yyi] = yys;
  if (yys == YY_NULLPTR)
    {
      yyleftmost_state.yyposn = 0;
      yystates[0] = &yyleftmost_state;
    }
  else
    yystates[0] = yys;

  if (yyx->yystate->yyposn < yys->yyposn + 1)
    YY_FPRINTF ((stderr, "%*s%s -> <Rule %d, empty>\n",
                 yyindent, "", yysymbol_name (yylhsNonterm (yyx->yyrule)),
                 yyx->yyrule - 1));
  else
    YY_FPRINTF ((stderr, "%*s%s -> <Rule %d, tokens %ld .. %ld>\n",
                 yyindent, "", yysymbol_name (yylhsNonterm (yyx->yyrule)),
                 yyx->yyrule - 1, YY_CAST (long, yys->yyposn + 1),
                 YY_CAST (long, yyx->yystate->yyposn)));
  for (yyi = 1; yyi <= yynrhs; yyi += 1)
    {
      if (yystates[yyi]->yyresolved)
        {
          if (yystates[yyi-1]->yyposn+1 > yystates[yyi]->yyposn)
            YY_FPRINTF ((stderr, "%*s%s <empty>\n", yyindent+2, "",
                         yysymbol_name (yy_accessing_symbol (yystates[yyi]->yylrState))));
          else
            YY_FPRINTF ((stderr, "%*s%s <tokens %ld .. %ld>\n", yyindent+2, "",
                         yysymbol_name (yy_accessing_symbol (yystates[yyi]->yylrState)),
                         YY_CAST (long, yystates[yyi-1]->yyposn + 1),
                         YY_CAST (long, yystates[yyi]->yyposn)));
        }
      else
        yyreportTree (yystates[yyi]->yysemantics.yyfirstVal, yyindent+2);
    }
}
#endif

static YYRESULTTAG
yyreportAmbiguity (yySemanticOption* yyx0,
                   yySemanticOption* yyx1, YYLTYPE *yylocp, yy::parser& yyparser, Parser* ps)
{
  YY_USE (yyx0);
  YY_USE (yyx1);

#if YYDEBUG
  YY_FPRINTF ((stderr, "Ambiguity detected.\n"));
  YY_FPRINTF ((stderr, "Option 1,\n"));
  yyreportTree (yyx0, 2);
  YY_FPRINTF ((stderr, "\nOption 2,\n"));
  yyreportTree (yyx1, 2);
  YY_FPRINTF ((stderr, "\n"));
#endif

  yyerror (yylocp, yyparser, ps, YY_("syntax is ambiguous"));
  return yyabort;
}

/** Resolve the locations for each of the YYN1 states in *YYSTACKP,
 *  ending at YYS1.  Has no effect on previously resolved states.
 *  The first semantic option of a state is always chosen.  */
static void
yyresolveLocations (yyGLRState *yys1, int yyn1,
                    yyGLRStack *yystackp, yy::parser& yyparser, Parser* ps)
{
  if (0 < yyn1)
    {
      yyresolveLocations (yys1->yypred, yyn1 - 1, yystackp, yyparser, ps);
      if (!yys1->yyresolved)
        {
          yyGLRStackItem yyrhsloc[1 + YYMAXRHS];
          int yynrhs;
          yySemanticOption *yyoption = yys1->yysemantics.yyfirstVal;
          YY_ASSERT (yyoption);
          yynrhs = yyrhsLength (yyoption->yyrule);
          if (0 < yynrhs)
            {
              yyGLRState *yys;
              int yyn;
              yyresolveLocations (yyoption->yystate, yynrhs,
                                  yystackp, yyparser, ps);
              for (yys = yyoption->yystate, yyn = yynrhs;
                   yyn > 0;
                   yys = yys->yypred, yyn -= 1)
                yyrhsloc[yyn].yystate.yyloc = yys->yyloc;
            }
          else
            {
              /* Both yyresolveAction and yyresolveLocations traverse the GSS
                 in reverse rightmost order.  It is only necessary to invoke
                 yyresolveLocations on a subforest for which yyresolveAction
                 would have been invoked next had an ambiguity not been
                 detected.  Thus the location of the previous state (but not
                 necessarily the previous state itself) is guaranteed to be
                 resolved already.  */
              yyGLRState *yyprevious = yyoption->yystate;
              yyrhsloc[0].yystate.yyloc = yyprevious->yyloc;
            }
          YYLLOC_DEFAULT ((yys1->yyloc), yyrhsloc, yynrhs);
        }
    }
}

/** Resolve the ambiguity represented in state YYS in *YYSTACKP,
 *  perform the indicated actions, and set the semantic value of YYS.
 *  If result != yyok, the chain of semantic options in YYS has been
 *  cleared instead or it has been left unmodified except that
 *  redundant options may have been removed.  Regardless of whether
 *  result = yyok, YYS has been left with consistent data so that
 *  yydestroyGLRState can be invoked if necessary.  */
static YYRESULTTAG
yyresolveValue (yyGLRState* yys, yyGLRStack* yystackp, yy::parser& yyparser, Parser* ps)
{
  yySemanticOption* yyoptionList = yys->yysemantics.yyfirstVal;
  yySemanticOption* yybest = yyoptionList;
  yySemanticOption** yypp;
  yybool yymerge = yyfalse;
  YYSTYPE yyval;
  YYRESULTTAG yyflag;
  YYLTYPE *yylocp = &yys->yyloc;

  for (yypp = &yyoptionList->yynext; *yypp != YY_NULLPTR; )
    {
      yySemanticOption* yyp = *yypp;

      if (yyidenticalOptions (yybest, yyp))
        {
          yymergeOptionSets (yybest, yyp);
          *yypp = yyp->yynext;
        }
      else
        {
          switch (yypreference (yybest, yyp))
            {
            case 0:
              yyresolveLocations (yys, 1, yystackp, yyparser, ps);
              return yyreportAmbiguity (yybest, yyp, yylocp, yyparser, ps);
              break;
            case 1:
              yymerge = yytrue;
              break;
            case 2:
              break;
            case 3:
              yybest = yyp;
              yymerge = yyfalse;
              break;
            default:
              /* This cannot happen so it is not worth a YY_ASSERT (yyfalse),
                 but some compilers complain if the default case is
                 omitted.  */
              break;
            }
          yypp = &yyp->yynext;
        }
    }

  if (yymerge)
    {
      yySemanticOption* yyp;
      int yyprec = yydprec[yybest->yyrule];
      yyflag = yyresolveAction (yybest, yystackp, &yyval, yylocp, yyparser, ps);
      if (yyflag == yyok)
        for (yyp = yybest->yynext; yyp != YY_NULLPTR; yyp = yyp->yynext)
          {
            if (yyprec == yydprec[yyp->yyrule])
              {
                YYSTYPE yyval_other;
                YYLTYPE yydummy;
                yyflag = yyresolveAction (yyp, yystackp, &yyval_other, &yydummy, yyparser, ps);
                if (yyflag != yyok)
                  {
                    yydestruct ("Cleanup: discarding incompletely merged value for",
                                yy_accessing_symbol (yys->yylrState),
                                &yyval, yylocp, yyparser, ps);
                    break;
                  }
                yyuserMerge (yymerger[yyp->yyrule], &yyval, &yyval_other);
              }
          }
    }
  else
    yyflag = yyresolveAction (yybest, yystackp, &yyval, yylocp, yyparser, ps);

  if (yyflag == yyok)
    {
      yys->yyresolved = yytrue;
      yys->yysemantics.yyval = yyval;
    }
  else
    yys->yysemantics.yyfirstVal = YY_NULLPTR;
  return yyflag;
}

static YYRESULTTAG
yyresolveStack (yyGLRStack* yystackp, yy::parser& yyparser, Parser* ps)
{
  if (yystackp->yysplitPoint != YY_NULLPTR)
    {
      yyGLRState* yys;
      int yyn;

      for (yyn = 0, yys = yystackp->yytops.yystates[0];
           yys != yystackp->yysplitPoint;
           yys = yys->yypred, yyn += 1)
        continue;
      YYCHK (yyresolveStates (yystackp->yytops.yystates[0], yyn, yystackp
                             , yyparser, ps));
    }
  return yyok;
}

/** Called when returning to deterministic operation to clean up the extra
 * stacks. */
static void
yycompressStack (yyGLRStack* yystackp)
{
  /* yyr is the state after the split point.  */
  yyGLRState *yyr;

  if (yystackp->yytops.yysize != 1 || yystackp->yysplitPoint == YY_NULLPTR)
    return;

  {
    yyGLRState *yyp, *yyq;
    for (yyp = yystackp->yytops.yystates[0], yyq = yyp->yypred, yyr = YY_NULLPTR;
         yyp != yystackp->yysplitPoint;
         yyr = yyp, yyp = yyq, yyq = yyp->yypred)
      yyp->yypred = yyr;
  }

  yystackp->yyspaceLeft += yystackp->yynextFree - yystackp->yyitems;
  yystackp->yynextFree = YY_REINTERPRET_CAST (yyGLRStackItem*, yystackp->yysplitPoint) + 1;
  yystackp->yyspaceLeft -= yystackp->yynextFree - yystackp->yyitems;
  yystackp->yysplitPoint = YY_NULLPTR;
  yystackp->yylastDeleted = YY_NULLPTR;

  while (yyr != YY_NULLPTR)
    {
      yystackp->yynextFree->yystate = *yyr;
      yyr = yyr->yypred;
      yystackp->yynextFree->yystate.yypred = &yystackp->yynextFree[-1].yystate;
      yystackp->yytops.yystates[0] = &yystackp->yynextFree->yystate;
      yystackp->yynextFree += 1;
      yystackp->yyspaceLeft -= 1;
    }
}

static YYRESULTTAG
yyprocessOneStack (yyGLRStack* yystackp, YYPTRDIFF_T yyk,
                   YYPTRDIFF_T yyposn, YYLTYPE *yylocp, yy::parser& yyparser, Parser* ps)
{
  while (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
    {
      yy_state_t yystate = yystackp->yytops.yystates[yyk]->yylrState;
      YY_DPRINTF ((stderr, "Stack %ld Entering state %d\n",
                   YY_CAST (long, yyk), yystate));

      YY_ASSERT (yystate != YYFINAL);

      if (yyisDefaultedState (yystate))
        {
          YYRESULTTAG yyflag;
          yyRuleNum yyrule = yydefaultAction (yystate);
          if (yyrule == 0)
            {
              YY_DPRINTF ((stderr, "Stack %ld dies.\n", YY_CAST (long, yyk)));
              yymarkStackDeleted (yystackp, yyk);
              return yyok;
            }
          yyflag = yyglrReduce (yystackp, yyk, yyrule, yyimmediate[yyrule], yyparser, ps);
          if (yyflag == yyerr)
            {
              YY_DPRINTF ((stderr,
                           "Stack %ld dies "
                           "(predicate failure or explicit user error).\n",
                           YY_CAST (long, yyk)));
              yymarkStackDeleted (yystackp, yyk);
              return yyok;
            }
          if (yyflag != yyok)
            return yyflag;
        }
      else
        {
          yysymbol_kind_t yytoken = yygetToken (&yychar, yystackp, yyparser, ps);
          const short* yyconflicts;
          const int yyaction = yygetLRActions (yystate, yytoken, &yyconflicts);
          yystackp->yytops.yylookaheadNeeds[yyk] = yytrue;

          for (/* nothing */; *yyconflicts; yyconflicts += 1)
            {
              YYRESULTTAG yyflag;
              YYPTRDIFF_T yynewStack = yysplitStack (yystackp, yyk);
              YY_DPRINTF ((stderr, "Splitting off stack %ld from %ld.\n",
                           YY_CAST (long, yynewStack), YY_CAST (long, yyk)));
              yyflag = yyglrReduce (yystackp, yynewStack,
                                    *yyconflicts,
                                    yyimmediate[*yyconflicts], yyparser, ps);
              if (yyflag == yyok)
                YYCHK (yyprocessOneStack (yystackp, yynewStack,
                                          yyposn, yylocp, yyparser, ps));
              else if (yyflag == yyerr)
                {
                  YY_DPRINTF ((stderr, "Stack %ld dies.\n", YY_CAST (long, yynewStack)));
                  yymarkStackDeleted (yystackp, yynewStack);
                }
              else
                return yyflag;
            }

          if (yyisShiftAction (yyaction))
            break;
          else if (yyisErrorAction (yyaction))
            {
              YY_DPRINTF ((stderr, "Stack %ld dies.\n", YY_CAST (long, yyk)));
              yymarkStackDeleted (yystackp, yyk);
              break;
            }
          else
            {
              YYRESULTTAG yyflag = yyglrReduce (yystackp, yyk, -yyaction,
                                                yyimmediate[-yyaction], yyparser, ps);
              if (yyflag == yyerr)
                {
                  YY_DPRINTF ((stderr,
                               "Stack %ld dies "
                               "(predicate failure or explicit user error).\n",
                               YY_CAST (long, yyk)));
                  yymarkStackDeleted (yystackp, yyk);
                  break;
                }
              else if (yyflag != yyok)
                return yyflag;
            }
        }
    }
  return yyok;
}

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYSTACKP, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  */
static int
yypcontext_expected_tokens (const yyGLRStack* yystackp,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[yystackp->yytops.yystates[0]->yylrState];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != S_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = S_YYEMPTY;
  return yycount;
}

static int
yy_syntax_error_arguments (const yyGLRStack* yystackp,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  yysymbol_kind_t yytoken = yychar == YYEMPTY ? S_YYEMPTY : YYTRANSLATE (yychar);
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != S_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yystackp,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}



static void
yyreportSyntaxError (yyGLRStack* yystackp, yy::parser& yyparser, Parser* ps)
{
  if (yystackp->yyerrState != 0)
    return;
  {
  yybool yysize_overflow = yyfalse;
  char* yymsg = YY_NULLPTR;
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount
    = yy_syntax_error_arguments (yystackp, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    yyMemoryExhausted (yystackp);

  switch (yycount)
    {
#define YYCASE_(N, S)                   \
      case N:                           \
        yyformat = S;                   \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysz
          = yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (YYSIZE_MAXIMUM - yysize < yysz)
          yysize_overflow = yytrue;
        else
          yysize += yysz;
      }
  }

  if (!yysize_overflow)
    yymsg = YY_CAST (char *, YYMALLOC (YY_CAST (YYSIZE_T, yysize)));

  if (yymsg)
    {
      char *yyp = yymsg;
      int yyi = 0;
      while ((*yyp = *yyformat))
        {
          if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
            {
              yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
              yyformat += 2;
            }
          else
            {
              ++yyp;
              ++yyformat;
            }
        }
      yyerror (&yylloc, yyparser, ps, yymsg);
      YYFREE (yymsg);
    }
  else
    {
      yyerror (&yylloc, yyparser, ps, YY_("syntax error"));
      yyMemoryExhausted (yystackp);
    }
  }
  yynerrs += 1;
}

/* Recover from a syntax error on *YYSTACKP, assuming that *YYSTACKP->YYTOKENP,
   yylval, and yylloc are the syntactic category, semantic value, and location
   of the lookahead.  */
static void
yyrecoverSyntaxError (yyGLRStack* yystackp, yy::parser& yyparser, Parser* ps)
{
  if (yystackp->yyerrState == 3)
    /* We just shifted the error token and (perhaps) took some
       reductions.  Skip tokens until we can proceed.  */
    while (yytrue)
      {
        yysymbol_kind_t yytoken;
        int yyj;
        if (yychar == YYEOF)
          yyFail (yystackp, &yylloc, yyparser, ps, YY_NULLPTR);
        if (yychar != YYEMPTY)
          {
            /* We throw away the lookahead, but the error range
               of the shifted error token must take it into account.  */
            yyGLRState *yys = yystackp->yytops.yystates[0];
            yyGLRStackItem yyerror_range[3];
            yyerror_range[1].yystate.yyloc = yys->yyloc;
            yyerror_range[2].yystate.yyloc = yylloc;
            YYLLOC_DEFAULT ((yys->yyloc), yyerror_range, 2);
            yytoken = YYTRANSLATE (yychar);
            yydestruct ("Error: discarding",
                        yytoken, &yylval, &yylloc, yyparser, ps);
            yychar = YYEMPTY;
          }
        yytoken = yygetToken (&yychar, yystackp, yyparser, ps);
        yyj = yypact[yystackp->yytops.yystates[0]->yylrState];
        if (yypact_value_is_default (yyj))
          return;
        yyj += yytoken;
        if (yyj < 0 || YYLAST < yyj || yycheck[yyj] != yytoken)
          {
            if (yydefact[yystackp->yytops.yystates[0]->yylrState] != 0)
              return;
          }
        else if (! yytable_value_is_error (yytable[yyj]))
          return;
      }

  /* Reduce to one stack.  */
  {
    YYPTRDIFF_T yyk;
    for (yyk = 0; yyk < yystackp->yytops.yysize; yyk += 1)
      if (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
        break;
    if (yyk >= yystackp->yytops.yysize)
      yyFail (yystackp, &yylloc, yyparser, ps, YY_NULLPTR);
    for (yyk += 1; yyk < yystackp->yytops.yysize; yyk += 1)
      yymarkStackDeleted (yystackp, yyk);
    yyremoveDeletes (yystackp);
    yycompressStack (yystackp);
  }

  /* Pop stack until we find a state that shifts the error token.  */
  yystackp->yyerrState = 3;
  while (yystackp->yytops.yystates[0] != YY_NULLPTR)
    {
      yyGLRState *yys = yystackp->yytops.yystates[0];
      int yyj = yypact[yys->yylrState];
      if (! yypact_value_is_default (yyj))
        {
          yyj += S_YYerror;
          if (0 <= yyj && yyj <= YYLAST && yycheck[yyj] == S_YYerror
              && yyisShiftAction (yytable[yyj]))
            {
              /* Shift the error token.  */
              int yyaction = yytable[yyj];
              /* First adjust its location.*/
              YYLTYPE yyerrloc;
              yystackp->yyerror_range[2].yystate.yyloc = yylloc;
              YYLLOC_DEFAULT (yyerrloc, (yystackp->yyerror_range), 2);
              YY_SYMBOL_PRINT ("Shifting", yy_accessing_symbol (yyaction),
                               &yylval, &yyerrloc);
              yyglrShift (yystackp, 0, yyaction,
                          yys->yyposn, &yylval, &yyerrloc);
              yys = yystackp->yytops.yystates[0];
              break;
            }
        }
      yystackp->yyerror_range[1].yystate.yyloc = yys->yyloc;
      if (yys->yypred != YY_NULLPTR)
        yydestroyGLRState ("Error: popping", yys, yyparser, ps);
      yystackp->yytops.yystates[0] = yys->yypred;
      yystackp->yynextFree -= 1;
      yystackp->yyspaceLeft += 1;
    }
  if (yystackp->yytops.yystates[0] == YY_NULLPTR)
    yyFail (yystackp, &yylloc, yyparser, ps, YY_NULLPTR);
}

#define YYCHK1(YYE)                             \
  do {                                          \
    switch (YYE) {                              \
    case yyok:     break;                       \
    case yyabort:  goto yyabortlab;             \
    case yyaccept: goto yyacceptlab;            \
    case yyerr:    goto yyuser_error;           \
    case yynomem:  goto yyexhaustedlab;         \
    default:       goto yybuglab;               \
    }                                           \
  } while (0)

/*----------.
| yyparse.  |
`----------*/

int
yy_parse_impl (yy::parser& yyparser, Parser* ps)
{
  int yyresult;
  yyGLRStack yystack;
  yyGLRStack* const yystackp = &yystack;
  YYPTRDIFF_T yyposn;

  YY_DPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY;
  yylval = yyval_default;
  yylloc = yyloc_default;

  // User initialization code.
yylloc.initialize ();
#line 54 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"
{
    yylloc.begin.filename = yylloc.end.filename =
        const_cast<std::string *>(&ps->FileName());
}

#line 4641 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"


  if (! yyinitGLRStack (yystackp, YYINITDEPTH))
    goto yyexhaustedlab;
  switch (YYSETJMP (yystack.yyexception_buffer))
    {
    case 0: break;
    case 1: goto yyabortlab;
    case 2: goto yyexhaustedlab;
    default: goto yybuglab;
    }
  yyglrShift (&yystack, 0, 0, 0, &yylval, &yylloc);
  yyposn = 0;

  while (yytrue)
    {
      /* For efficiency, we have two loops, the first of which is
         specialized to deterministic operation (single stack, no
         potential ambiguity).  */
      /* Standard mode. */
      while (yytrue)
        {
          yy_state_t yystate = yystack.yytops.yystates[0]->yylrState;
          YY_DPRINTF ((stderr, "Entering state %d\n", yystate));
          if (yystate == YYFINAL)
            goto yyacceptlab;
          if (yyisDefaultedState (yystate))
            {
              yyRuleNum yyrule = yydefaultAction (yystate);
              if (yyrule == 0)
                {
                  yystack.yyerror_range[1].yystate.yyloc = yylloc;
                  yyreportSyntaxError (&yystack, yyparser, ps);
                  goto yyuser_error;
                }
              YYCHK1 (yyglrReduce (&yystack, 0, yyrule, yytrue, yyparser, ps));
            }
          else
            {
              yysymbol_kind_t yytoken = yygetToken (&yychar, yystackp, yyparser, ps);
              const short* yyconflicts;
              int yyaction = yygetLRActions (yystate, yytoken, &yyconflicts);
              if (*yyconflicts)
                /* Enter nondeterministic mode.  */
                break;
              if (yyisShiftAction (yyaction))
                {
                  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
                  yychar = YYEMPTY;
                  yyposn += 1;
                  yyglrShift (&yystack, 0, yyaction, yyposn, &yylval, &yylloc);
                  if (0 < yystack.yyerrState)
                    yystack.yyerrState -= 1;
                }
              else if (yyisErrorAction (yyaction))
                {
                  yystack.yyerror_range[1].yystate.yyloc = yylloc;
                  /* Issue an error message unless the scanner already
                     did. */
                  if (yychar != YYerror)
                    yyreportSyntaxError (&yystack, yyparser, ps);
                  goto yyuser_error;
                }
              else
                YYCHK1 (yyglrReduce (&yystack, 0, -yyaction, yytrue, yyparser, ps));
            }
        }

      /* Nondeterministic mode. */
      while (yytrue)
        {
          yysymbol_kind_t yytoken_to_shift;
          YYPTRDIFF_T yys;

          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            yystackp->yytops.yylookaheadNeeds[yys] = yychar != YYEMPTY;

          /* yyprocessOneStack returns one of three things:

              - An error flag.  If the caller is yyprocessOneStack, it
                immediately returns as well.  When the caller is finally
                yyparse, it jumps to an error label via YYCHK1.

              - yyok, but yyprocessOneStack has invoked yymarkStackDeleted
                (&yystack, yys), which sets the top state of yys to NULL.  Thus,
                yyparse's following invocation of yyremoveDeletes will remove
                the stack.

              - yyok, when ready to shift a token.

             Except in the first case, yyparse will invoke yyremoveDeletes and
             then shift the next token onto all remaining stacks.  This
             synchronization of the shift (that is, after all preceding
             reductions on all stacks) helps prevent double destructor calls
             on yylval in the event of memory exhaustion.  */

          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            YYCHK1 (yyprocessOneStack (&yystack, yys, yyposn, &yylloc, yyparser, ps));
          yyremoveDeletes (&yystack);
          if (yystack.yytops.yysize == 0)
            {
              yyundeleteLastStack (&yystack);
              if (yystack.yytops.yysize == 0)
                yyFail (&yystack, &yylloc, yyparser, ps, YY_("syntax error"));
              YYCHK1 (yyresolveStack (&yystack, yyparser, ps));
              YY_DPRINTF ((stderr, "Returning to deterministic operation.\n"));
              yystack.yyerror_range[1].yystate.yyloc = yylloc;
              yyreportSyntaxError (&yystack, yyparser, ps);
              goto yyuser_error;
            }

          /* If any yyglrShift call fails, it will fail after shifting.  Thus,
             a copy of yylval will already be on stack 0 in the event of a
             failure in the following loop.  Thus, yychar is set to YYEMPTY
             before the loop to make sure the user destructor for yylval isn't
             called twice.  */
          yytoken_to_shift = YYTRANSLATE (yychar);
          yychar = YYEMPTY;
          yyposn += 1;
          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            {
              yy_state_t yystate = yystack.yytops.yystates[yys]->yylrState;
              const short* yyconflicts;
              int yyaction = yygetLRActions (yystate, yytoken_to_shift,
                              &yyconflicts);
              /* Note that yyconflicts were handled by yyprocessOneStack.  */
              YY_DPRINTF ((stderr, "On stack %ld, ", YY_CAST (long, yys)));
              YY_SYMBOL_PRINT ("shifting", yytoken_to_shift, &yylval, &yylloc);
              yyglrShift (&yystack, yys, yyaction, yyposn,
                          &yylval, &yylloc);
              YY_DPRINTF ((stderr, "Stack %ld now in state %d\n",
                           YY_CAST (long, yys),
                           yystack.yytops.yystates[yys]->yylrState));
            }

          if (yystack.yytops.yysize == 1)
            {
              YYCHK1 (yyresolveStack (&yystack, yyparser, ps));
              YY_DPRINTF ((stderr, "Returning to deterministic operation.\n"));
              yycompressStack (&yystack);
              break;
            }
        }
      continue;
    yyuser_error:
      yyrecoverSyntaxError (&yystack, yyparser, ps);
      yyposn = yystack.yytops.yystates[0]->yyposn;
    }

 yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;

 yybuglab:
  YY_ASSERT (yyfalse);
  goto yyabortlab;

 yyabortlab:
  yyresult = 1;
  goto yyreturnlab;

 yyexhaustedlab:
  yyerror (&yylloc, yyparser, ps, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;

 yyreturnlab:
  if (yychar != YYEMPTY)
    yydestruct ("Cleanup: discarding lookahead",
                YYTRANSLATE (yychar), &yylval, &yylloc, yyparser, ps);

  /* If the stack is well-formed, pop the stack until it is empty,
     destroying its entries as we go.  But free the stack regardless
     of whether it is well-formed.  */
  if (yystack.yyitems)
    {
      yyGLRState** yystates = yystack.yytops.yystates;
      if (yystates)
        {
          YYPTRDIFF_T yysize = yystack.yytops.yysize;
          YYPTRDIFF_T yyk;
          for (yyk = 0; yyk < yysize; yyk += 1)
            if (yystates[yyk])
              {
                while (yystates[yyk])
                  {
                    yyGLRState *yys = yystates[yyk];
                    yystack.yyerror_range[1].yystate.yyloc = yys->yyloc;
                    if (yys->yypred != YY_NULLPTR)
                      yydestroyGLRState ("Cleanup: popping", yys, yyparser, ps);
                    yystates[yyk] = yys->yypred;
                    yystack.yynextFree -= 1;
                    yystack.yyspaceLeft += 1;
                  }
                break;
              }
        }
      yyfreeGLRStack (&yystack);
    }

  return yyresult;
}

/* DEBUGGING ONLY */
#if YYDEBUG
/* Print *YYS and its predecessors. */
static void
yy_yypstack (yyGLRState* yys)
{
  if (yys->yypred)
    {
      yy_yypstack (yys->yypred);
      YY_FPRINTF ((stderr, " -> "));
    }
  YY_FPRINTF ((stderr, "%d@%ld", yys->yylrState, YY_CAST (long, yys->yyposn)));
}

/* Print YYS (possibly NULL) and its predecessors. */
static void
yypstates (yyGLRState* yys)
{
  if (yys == YY_NULLPTR)
    YY_FPRINTF ((stderr, "<null>"));
  else
    yy_yypstack (yys);
  YY_FPRINTF ((stderr, "\n"));
}

/* Print the stack #YYK.  */
static void
yypstack (yyGLRStack* yystackp, YYPTRDIFF_T yyk)
{
  yypstates (yystackp->yytops.yystates[yyk]);
}

/* Print all the stacks.  */
static void
yypdumpstack (yyGLRStack* yystackp)
{
#define YYINDEX(YYX)                                                    \
  YY_CAST (long,                                                        \
           ((YYX)                                                       \
            ? YY_REINTERPRET_CAST (yyGLRStackItem*, (YYX)) - yystackp->yyitems \
            : -1))

  yyGLRStackItem* yyp;
  for (yyp = yystackp->yyitems; yyp < yystackp->yynextFree; yyp += 1)
    {
      YY_FPRINTF ((stderr, "%3ld. ",
                   YY_CAST (long, yyp - yystackp->yyitems)));
      if (*YY_REINTERPRET_CAST (yybool *, yyp))
        {
          YY_ASSERT (yyp->yystate.yyisState);
          YY_ASSERT (yyp->yyoption.yyisState);
          YY_FPRINTF ((stderr, "Res: %d, LR State: %d, posn: %ld, pred: %ld",
                       yyp->yystate.yyresolved, yyp->yystate.yylrState,
                       YY_CAST (long, yyp->yystate.yyposn),
                       YYINDEX (yyp->yystate.yypred)));
          if (! yyp->yystate.yyresolved)
            YY_FPRINTF ((stderr, ", firstVal: %ld",
                         YYINDEX (yyp->yystate.yysemantics.yyfirstVal)));
        }
      else
        {
          YY_ASSERT (!yyp->yystate.yyisState);
          YY_ASSERT (!yyp->yyoption.yyisState);
          YY_FPRINTF ((stderr, "Option. rule: %d, state: %ld, next: %ld",
                       yyp->yyoption.yyrule - 1,
                       YYINDEX (yyp->yyoption.yystate),
                       YYINDEX (yyp->yyoption.yynext)));
        }
      YY_FPRINTF ((stderr, "\n"));
    }

  YY_FPRINTF ((stderr, "Tops:"));
  {
    YYPTRDIFF_T yyi;
    for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
      YY_FPRINTF ((stderr, "%ld: %ld; ", YY_CAST (long, yyi),
                   YYINDEX (yystackp->yytops.yystates[yyi])));
    YY_FPRINTF ((stderr, "\n"));
  }
#undef YYINDEX
}
#endif

#undef yylval
#undef yychar
#undef yynerrs
#undef yylloc



#line 4935 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"

/*------------------.
| Report an error.  |
`------------------*/

static void
yyerror (const yy::parser::location_type *yylocationp,
         yy::parser& yyparser, Parser* ps,
         const char* msg)
{
  YY_USE (yyparser);
  YY_USE (ps);
  yyparser.error (*yylocationp, msg);
}


namespace yy {
#line 4953 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"

  /// Build a parser object.
  parser::parser (Parser* ps_yyarg)
    :
#if YYDEBUG
      yycdebug_ (&std::cerr),
#endif
      ps (ps_yyarg)
  {}

  parser::~parser ()
  {}

  parser::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  int
  parser::operator() ()
  {
    return parse ();
  }

  int
  parser::parse ()
  {
    return ::yy_parse_impl (*this, ps);
  }

#if YYDEBUG
  /*--------------------.
  | Print this symbol.  |
  `--------------------*/

  void
  parser::yy_symbol_value_print_ (symbol_kind_type yykind,
                           const value_type* yyvaluep,
                           const location_type* yylocationp) const
  {
    YY_USE (yylocationp);
    YY_USE (yyvaluep);
    std::ostream& yyo = debug_stream ();
    std::ostream& yyoutput = yyo;
    YY_USE (yyoutput);
    YY_USE (yykind);
  }


  void
  parser::yy_symbol_print_ (symbol_kind_type yykind,
                           const value_type* yyvaluep,
                           const location_type* yylocationp) const
  {
    *yycdebug_ << (yykind < YYNTOKENS ? "token" : "nterm")
               << ' ' << yysymbol_name (yykind) << " ("
               << *yylocationp << ": ";
    yy_symbol_value_print_ (yykind, yyvaluep, yylocationp);
    *yycdebug_ << ')';
  }

  std::ostream&
  parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  parser::debug_level_type
  parser::debug_level () const
  {
    return yydebug;
  }

  void
  parser::set_debug_level (debug_level_type l)
  {
    // Actually, it is yydebug which is really used.
    yydebug = l;
  }

#endif
} // yy
#line 5041 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.cpp"

#undef YYEMPTY
#undef YYEOF
#undef YYerror

#undef S_YYEMPTY
#undef S_YYEOF
#undef S_YYerror
#undef S_YYUNDEF
#undef S_PACKAGE
#undef S_IMPORT
#undef S_ANNOTATION
#undef S_C_STR
#undef S_IDENTIFIER
#undef S_INTERFACE
#undef S_PARCELABLE
#undef S_ONEWAY
#undef S_ENUM
#undef S_UNION
#undef S_CONST
#undef S_CHARVALUE
#undef S_FLOATVALUE
#undef S_HEXVALUE
#undef S_INTVALUE
#undef S_18_
#undef S_19_
#undef S_20_
#undef S_21_
#undef S_22_
#undef S_23_
#undef S_24_
#undef S_25_
#undef S_26_
#undef S_27_
#undef S_UNKNOWN
#undef S_CPP_HEADER
#undef S_IN
#undef S_INOUT
#undef S_OUT
#undef S_TRUE_LITERAL
#undef S_FALSE_LITERAL
#undef S_LOGICAL_OR
#undef S_LOGICAL_AND
#undef S_37_
#undef S_38_
#undef S_39_
#undef S_EQUALITY
#undef S_NEQ
#undef S_42_
#undef S_43_
#undef S_LEQ
#undef S_GEQ
#undef S_LSHIFT
#undef S_RSHIFT
#undef S_48_
#undef S_49_
#undef S_50_
#undef S_51_
#undef S_52_
#undef S_UNARY_PLUS
#undef S_UNARY_MINUS
#undef S_55_
#undef S_56_
#undef S_YYACCEPT
#undef S_document
#undef S_identifier
#undef S_optional_package
#undef S_imports
#undef S_import
#undef S_qualified_name
#undef S_decls
#undef S_decl
#undef S_unannotated_decl
#undef S_type_params
#undef S_optional_type_params
#undef S_parcelable_decl
#undef S_parcelable_members
#undef S_variable_decl
#undef S_interface_decl
#undef S_interface_members
#undef S_const_expr
#undef S_constant_value_list
#undef S_constant_value_non_empty_list
#undef S_constant_decl
#undef S_enumerator
#undef S_enumerators
#undef S_enum_decl_body
#undef S_enum_decl
#undef S_union_decl
#undef S_method_decl
#undef S_arg_non_empty_list
#undef S_arg_list
#undef S_arg
#undef S_non_array_type
#undef S_type
#undef S_type_args
#undef S_annotation_list
#undef S_parameter
#undef S_parameter_list
#undef S_parameter_non_empty_list
#undef S_annotation
#undef S_direction

#line 825 "/data/data/com.termux/files/home/proj/sdk-tools-source/src/aidl/aidl_language_y.yy"


#include <ctype.h>
#include <stdio.h>

void yy::parser::error(const yy::parser::location_type& l, const std::string& errstr) {
  AIDL_ERROR(loc(l)) << errstr;
  // parser will return error value
}
