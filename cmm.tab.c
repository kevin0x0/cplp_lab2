/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "cmm.y"

#include <stdint.h>
#include "mycc.h"

extern int yylineno;
int yylex(void);


#line 80 "cmm.tab.c"

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

#include "cmm.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT = 3,                        /* "integer"  */
  YYSYMBOL_FLOAT = 4,                      /* "floating number"  */
  YYSYMBOL_ID = 5,                         /* "identifier"  */
  YYSYMBOL_TYPE = 6,                       /* "type name"  */
  YYSYMBOL_SEMI = 7,                       /* ";"  */
  YYSYMBOL_COMMA = 8,                      /* ","  */
  YYSYMBOL_ASSIGN = 9,                     /* "="  */
  YYSYMBOL_EQ = 10,                        /* "=="  */
  YYSYMBOL_NE = 11,                        /* "!="  */
  YYSYMBOL_LE = 12,                        /* "<="  */
  YYSYMBOL_LT = 13,                        /* "<"  */
  YYSYMBOL_GE = 14,                        /* ">="  */
  YYSYMBOL_GT = 15,                        /* ">"  */
  YYSYMBOL_ADD = 16,                       /* "+"  */
  YYSYMBOL_SUB = 17,                       /* "-"  */
  YYSYMBOL_MUL = 18,                       /* "*"  */
  YYSYMBOL_DIV = 19,                       /* "/"  */
  YYSYMBOL_AND = 20,                       /* "&&"  */
  YYSYMBOL_OR = 21,                        /* "||"  */
  YYSYMBOL_DOT = 22,                       /* "."  */
  YYSYMBOL_NOT = 23,                       /* "!"  */
  YYSYMBOL_LP = 24,                        /* "("  */
  YYSYMBOL_RP = 25,                        /* ")"  */
  YYSYMBOL_LB = 26,                        /* "["  */
  YYSYMBOL_RB = 27,                        /* "]"  */
  YYSYMBOL_LC = 28,                        /* "{"  */
  YYSYMBOL_RC = 29,                        /* "}"  */
  YYSYMBOL_STRUCT = 30,                    /* "struct"  */
  YYSYMBOL_RETURN = 31,                    /* "return"  */
  YYSYMBOL_IF = 32,                        /* "if"  */
  YYSYMBOL_ELSE = 33,                      /* "else"  */
  YYSYMBOL_WHILE = 34,                     /* "while"  */
  YYSYMBOL_YYACCEPT = 35,                  /* $accept  */
  YYSYMBOL_Program = 36,                   /* Program  */
  YYSYMBOL_ExtDefList = 37,                /* ExtDefList  */
  YYSYMBOL_ExtDef = 38,                    /* ExtDef  */
  YYSYMBOL_ExtDecList = 39,                /* ExtDecList  */
  YYSYMBOL_Specifier = 40,                 /* Specifier  */
  YYSYMBOL_StructSpecifier = 41,           /* StructSpecifier  */
  YYSYMBOL_OptTag = 42,                    /* OptTag  */
  YYSYMBOL_Tag = 43,                       /* Tag  */
  YYSYMBOL_VarDec = 44,                    /* VarDec  */
  YYSYMBOL_FunDec = 45,                    /* FunDec  */
  YYSYMBOL_VarList = 46,                   /* VarList  */
  YYSYMBOL_ParamDec = 47,                  /* ParamDec  */
  YYSYMBOL_CompSt = 48,                    /* CompSt  */
  YYSYMBOL_StmtList = 49,                  /* StmtList  */
  YYSYMBOL_Stmt = 50,                      /* Stmt  */
  YYSYMBOL_DefList = 51,                   /* DefList  */
  YYSYMBOL_Def = 52,                       /* Def  */
  YYSYMBOL_DecList = 53,                   /* DecList  */
  YYSYMBOL_Dec = 54,                       /* Dec  */
  YYSYMBOL_Exp = 55,                       /* Exp  */
  YYSYMBOL_Args = 56                       /* Args  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   310

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  67
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  126

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   289


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    68,    68,    69,    72,    73,    76,    77,    78,    79,
      82,    83,    87,    88,    91,    92,    95,    96,    99,   102,
     103,   106,   107,   110,   111,   114,   118,   121,   122,   125,
     126,   127,   128,   129,   130,   131,   135,   136,   139,   142,
     143,   146,   147,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   176,   177
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "\"integer\"",
  "\"floating number\"", "\"identifier\"", "\"type name\"", "\";\"",
  "\",\"", "\"=\"", "\"==\"", "\"!=\"", "\"<=\"", "\"<\"", "\">=\"",
  "\">\"", "\"+\"", "\"-\"", "\"*\"", "\"/\"", "\"&&\"", "\"||\"", "\".\"",
  "\"!\"", "\"(\"", "\")\"", "\"[\"", "\"]\"", "\"{\"", "\"}\"",
  "\"struct\"", "\"return\"", "\"if\"", "\"else\"", "\"while\"", "$accept",
  "Program", "ExtDefList", "ExtDef", "ExtDecList", "Specifier",
  "StructSpecifier", "OptTag", "Tag", "VarDec", "FunDec", "VarList",
  "ParamDec", "CompSt", "StmtList", "Stmt", "DefList", "Def", "DecList",
  "Dec", "Exp", "Args", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-111)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-29)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      12,     4,  -111,    49,    55,  -111,    16,    80,  -111,  -111,
      42,    51,  -111,  -111,     4,  -111,    38,  -111,    83,    41,
      54,    17,    53,  -111,    89,    95,    17,  -111,    89,    73,
      17,  -111,    89,    85,   106,  -111,  -111,    90,    40,    39,
     108,   110,  -111,  -111,    93,  -111,    17,  -111,   109,  -111,
    -111,  -111,   104,   104,   104,   104,    96,    98,  -111,    94,
      40,   122,   104,  -111,    89,  -111,  -111,    62,    75,   196,
     140,   104,   104,  -111,  -111,  -111,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   119,
      88,   104,   250,  -111,  -111,  -111,   214,   232,   250,    34,
      34,    34,    34,    34,    34,    62,    62,    75,    75,   284,
     267,  -111,  -111,   159,   100,   177,    72,    72,   104,  -111,
    -111,    97,  -111,  -111,    72,  -111
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     3,    12,    17,     0,     2,     0,     0,    13,     9,
      18,     0,    15,     1,     0,     4,    19,     7,     0,    10,
       0,    37,     0,     6,     0,     0,    37,     8,     0,     0,
      37,    22,     0,     0,    24,    19,    11,     0,     0,    41,
       0,    39,    14,    36,    25,    21,     0,    20,     0,    64,
      65,    63,     0,     0,     0,     0,     0,     0,    30,     0,
       0,     0,     0,    38,     0,    23,    35,    57,    58,     0,
       0,     0,     0,    26,    27,    29,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    42,    40,    56,    31,     0,     0,    43,    51,
      50,    46,    47,    48,    49,    52,    53,    54,    55,    44,
      45,    62,    60,    67,     0,     0,     0,     0,     0,    59,
      61,    32,    34,    66,     0,    33
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -111,  -111,   120,  -111,   121,    15,  -111,  -111,  -111,   -24,
    -111,   117,  -111,   145,   124,  -110,   -21,  -111,   118,  -111,
     -52,    82
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     4,     5,     6,    18,    28,     8,    11,    12,    19,
      20,    33,    34,    58,    59,    60,    29,    30,    40,    41,
      61,   114
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      67,    68,    69,    70,    39,    38,   121,   122,    44,    43,
      92,     9,    -5,     1,   125,     7,    -5,    14,     2,    96,
      97,     7,     2,     2,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,    32,   113,   115,
      39,    48,     3,    49,    50,    51,     3,     3,    62,    24,
      83,    84,    85,    86,    10,    13,    89,    52,    90,     2,
      91,    32,    22,    53,    54,    25,   113,    25,    26,   -28,
     -16,    55,    56,    48,    57,    49,    50,    51,    31,    21,
      85,    86,    26,     3,    89,    16,    90,    17,    91,    52,
      23,    49,    50,    51,    35,    53,    54,    89,    37,    90,
      26,    91,    42,    55,    56,    52,    57,    49,    50,    51,
      45,    53,    54,   112,    46,    63,    66,    47,    64,    25,
      71,    52,    72,    73,   111,   119,    15,    53,    54,    75,
     124,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    36,    90,    95,    91,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    65,    90,    27,    91,   118,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    93,    90,    74,    91,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
     123,    90,     0,    91,   120,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,     0,
      90,    94,    91,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,     0,    90,   116,
      91,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,     0,    90,   117,    91,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,     0,    90,     0,    91,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,     0,    89,
       0,    90,     0,    91,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,     0,     0,    89,     0,    90,     0,
      91
};

static const yytype_int8 yycheck[] =
{
      52,    53,    54,    55,    28,    26,   116,   117,    32,    30,
      62,     7,     0,     1,   124,     0,     0,     1,     6,    71,
      72,     6,     6,     6,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    22,    90,    91,
      64,     1,    30,     3,     4,     5,    30,    30,     9,     8,
      16,    17,    18,    19,     5,     0,    22,    17,    24,     6,
      26,    46,    24,    23,    24,    26,   118,    26,    28,    29,
      28,    31,    32,     1,    34,     3,     4,     5,    25,    28,
      18,    19,    28,    30,    22,     5,    24,     7,    26,    17,
       7,     3,     4,     5,     5,    23,    24,    22,     3,    24,
      28,    26,    29,    31,    32,    17,    34,     3,     4,     5,
      25,    23,    24,    25,     8,     7,     7,    27,     8,    26,
      24,    17,    24,    29,     5,    25,     6,    23,    24,     7,
      33,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    24,    24,     7,    26,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    46,    24,    20,    26,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    64,    24,    60,    26,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
     118,    24,    -1,    26,    27,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      24,    25,    26,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    24,    25,
      26,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    24,    25,    26,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    24,    -1,    26,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    22,
      -1,    24,    -1,    26,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    22,    -1,    24,    -1,
      26
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     6,    30,    36,    37,    38,    40,    41,     7,
       5,    42,    43,     0,     1,    37,     5,     7,    39,    44,
      45,    28,    24,     7,     8,    26,    28,    48,    40,    51,
      52,    25,    40,    46,    47,     5,    39,     3,    51,    44,
      53,    54,    29,    51,    44,    25,     8,    27,     1,     3,
       4,     5,    17,    23,    24,    31,    32,    34,    48,    49,
      50,    55,     9,     7,     8,    46,     7,    55,    55,    55,
      55,    24,    24,    29,    49,     7,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      24,    26,    55,    53,    25,     7,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,     5,    25,    55,    56,    55,    25,    25,     8,    25,
      27,    50,    50,    56,    33,    50
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    35,    36,    36,    37,    37,    38,    38,    38,    38,
      39,    39,    40,    40,    41,    41,    42,    42,    43,    44,
      44,    45,    45,    46,    46,    47,    48,    49,    49,    50,
      50,    50,    50,    50,    50,    50,    51,    51,    52,    53,
      53,    54,    54,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    56,    56
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     0,     3,     2,     3,     2,
       1,     3,     1,     1,     5,     2,     1,     0,     1,     1,
       4,     4,     3,     3,     1,     2,     4,     2,     0,     2,
       1,     3,     5,     7,     5,     2,     2,     0,     3,     1,
       3,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     4,
       3,     4,     3,     1,     1,     1,     3,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
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
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
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


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
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
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
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
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* Program: ExtDefList  */
#line 68 "cmm.y"
                                                  { (yyval.cst) = pstate_appendcst(parser_state, cst_create_generic(yylineno, make_kindstrpair(Program), (yyvsp[0].cst), NULL)); }
#line 1510 "cmm.tab.c"
    break;

  case 3: /* Program: error  */
#line 69 "cmm.y"
                                                  { (yyval.cst) = parser_state->noattrtokennode.error; }
#line 1516 "cmm.tab.c"
    break;

  case 4: /* ExtDefList: ExtDef ExtDefList  */
#line 72 "cmm.y"
                                                  { (yyval.cst) = pstate_appendcst(parser_state, cst_create_generic(yylineno, make_kindstrpair(ExtDefList), (yyvsp[-1].cst), (yyvsp[0].cst), NULL)); }
#line 1522 "cmm.tab.c"
    break;

  case 5: /* ExtDefList: %empty  */
#line 73 "cmm.y"
                                                  { (yyval.cst) = pstate_appendcst(parser_state, cst_create_generic(yylineno, make_kindstrpair(ExtDefList), NULL)); }
#line 1528 "cmm.tab.c"
    break;

  case 6: /* ExtDef: Specifier ExtDecList ";"  */
#line 76 "cmm.y"
                                                  { (yyval.cst) = pstate_appendcst(parser_state, cst_create_generic(yylineno, make_kindstrpair(ExtDef), (yyvsp[-2].cst), (yyvsp[-1].cst), (yyvsp[0].cst), NULL)); }
#line 1534 "cmm.tab.c"
    break;

  case 7: /* ExtDef: Specifier ";"  */
#line 77 "cmm.y"
                                                  { (yyval.cst) = pstate_appendcst(parser_state, cst_create_generic(yylineno, make_kindstrpair(ExtDef), (yyvsp[-1].cst), (yyvsp[0].cst), NULL)); }
#line 1540 "cmm.tab.c"
    break;

  case 8: /* ExtDef: Specifier FunDec CompSt  */
#line 78 "cmm.y"
                                                  { (yyval.cst) = pstate_appendcst(parser_state, cst_create_generic(yylineno, make_kindstrpair(ExtDef), (yyvsp[-2].cst), (yyvsp[-1].cst), (yyvsp[0].cst), NULL)); }
#line 1546 "cmm.tab.c"
    break;

  case 9: /* ExtDef: error ";"  */
#line 79 "cmm.y"
                                                  { (yyval.cst) = parser_state->noattrtokennode.error; }
#line 1552 "cmm.tab.c"
    break;

  case 10: /* ExtDecList: VarDec  */
#line 82 "cmm.y"
                                                  { (yyval.cst) = pstate_appendcst(parser_state, cst_create_generic(yylineno, make_kindstrpair(ExtDecList), (yyvsp[0].cst), NULL)); }
#line 1558 "cmm.tab.c"
    break;

  case 11: /* ExtDecList: VarDec "," ExtDecList  */
#line 83 "cmm.y"
                                                  { (yyval.cst) = pstate_appendcst(parser_state, cst_create_generic(yylineno, make_kindstrpair(ExtDecList), (yyvsp[-2].cst), (yyvsp[-1].cst), (yyvsp[0].cst), NULL)); }
#line 1564 "cmm.tab.c"
    break;

  case 12: /* Specifier: "type name"  */
#line 87 "cmm.y"
                                                  { (yyval.cst) = pstate_appendcst(parser_state, cst_create_generic(yylineno, make_kindstrpair(Specifier), (yyvsp[0].cst), NULL)); }
#line 1570 "cmm.tab.c"
    break;

  case 13: /* Specifier: StructSpecifier  */
#line 88 "cmm.y"
                                                  { (yyval.cst) = pstate_appendcst(parser_state, cst_create_generic(yylineno, make_kindstrpair(Specifier), (yyvsp[0].cst), NULL)); }
#line 1576 "cmm.tab.c"
    break;

  case 14: /* StructSpecifier: "struct" OptTag "{" DefList "}"  */
#line 91 "cmm.y"
                                                  { (yyval.cst) = pstate_appendcst(parser_state, cst_create_generic(yylineno, make_kindstrpair(StructSpecifier), (yyvsp[-4].cst), (yyvsp[-3].cst), (yyvsp[-2].cst), (yyvsp[-1].cst), (yyvsp[0].cst), NULL)); }
#line 1582 "cmm.tab.c"
    break;

  case 15: /* StructSpecifier: "struct" Tag  */
#line 92 "cmm.y"
                                                  { (yyval.cst) = pstate_appendcst(parser_state, cst_create_generic(yylineno, make_kindstrpair(StructSpecifier), (yyvsp[-1].cst), (yyvsp[0].cst), NULL)); }
#line 1588 "cmm.tab.c"
    break;

  case 16: /* OptTag: "identifier"  */
#line 95 "cmm.y"
                                                  { (yyval.cst) = pstate_appendcst(parser_state, cst_create_generic(yylineno, make_kindstrpair(OptTag), (yyvsp[0].cst), NULL)); }
#line 1594 "cmm.tab.c"
    break;

  case 17: /* OptTag: %empty  */
#line 96 "cmm.y"
                                                  { (yyval.cst) = pstate_appendcst(parser_state, cst_create_generic(yylineno, make_kindstrpair(OptTag), NULL)); }
#line 1600 "cmm.tab.c"
    break;

  case 18: /* Tag: "identifier"  */
#line 99 "cmm.y"
                                                  { (yyval.cst) = pstate_appendcst(parser_state, cst_create_generic(yylineno, make_kindstrpair(Tag), (yyvsp[0].cst), NULL)); }
#line 1606 "cmm.tab.c"
    break;

  case 19: /* VarDec: "identifier"  */
#line 102 "cmm.y"
                                                  { (yyval.cst) = pstate_appendcst(parser_state, cst_create_generic(yylineno, make_kindstrpair(VarDec), (yyvsp[0].cst), NULL)); }
#line 1612 "cmm.tab.c"
    break;

  case 20: /* VarDec: VarDec "[" "integer" "]"  */
#line 103 "cmm.y"
                                                  { (yyval.cst) = pstate_appendcst(parser_state, cst_create_generic(yylineno, make_kindstrpair(VarDec), (yyvsp[-3].cst), (yyvsp[-2].cst), (yyvsp[-1].cst), (yyvsp[0].cst), NULL)); }
#line 1618 "cmm.tab.c"
    break;

  case 21: /* FunDec: "identifier" "(" VarList ")"  */
#line 106 "cmm.y"
                                                  { (yyval.cst) = pstate_appendcst(parser_state, cst_create_generic(yylineno, make_kindstrpair(FunDec), (yyvsp[-3].cst), (yyvsp[-2].cst), (yyvsp[-1].cst), (yyvsp[0].cst), NULL)); }
#line 1624 "cmm.tab.c"
    break;

  case 22: /* FunDec: "identifier" "(" ")"  */
#line 107 "cmm.y"
                                                  { (yyval.cst) = pstate_appendcst(parser_state, cst_create_generic(yylineno, make_kindstrpair(FunDec), (yyvsp[-2].cst), (yyvsp[-1].cst), (yyvsp[0].cst), NULL)); }
#line 1630 "cmm.tab.c"
    break;

  case 23: /* VarList: ParamDec "," VarList  */
#line 110 "cmm.y"
                                                  { (yyval.cst) = pstate_appendcst(parser_state, cst_create_generic(yylineno, make_kindstrpair(VarList), (yyvsp[-2].cst), (yyvsp[-1].cst), (yyvsp[0].cst), NULL)); }
#line 1636 "cmm.tab.c"
    break;

  case 24: /* VarList: ParamDec  */
#line 111 "cmm.y"
                                                  { (yyval.cst) = pstate_appendcst(parser_state, cst_create_generic(yylineno, make_kindstrpair(VarList), (yyvsp[0].cst), NULL)); }
#line 1642 "cmm.tab.c"
    break;

  case 25: /* ParamDec: Specifier VarDec  */
#line 114 "cmm.y"
                                                  { (yyval.cst) = pstate_appendcst(parser_state, cst_create_generic(yylineno, make_kindstrpair(ParamDec), (yyvsp[-1].cst), (yyvsp[0].cst), NULL)); }
#line 1648 "cmm.tab.c"
    break;

  case 26: /* CompSt: "{" DefList StmtList "}"  */
#line 118 "cmm.y"
                                                  { (yyval.cst) = pstate_appendcst(parser_state, cst_create_generic(yylineno, make_kindstrpair(CompSt), (yyvsp[-3].cst), (yyvsp[-2].cst), (yyvsp[-1].cst), (yyvsp[0].cst), NULL)); }
#line 1654 "cmm.tab.c"
    break;

  case 27: /* StmtList: Stmt StmtList  */
#line 121 "cmm.y"
                                                  { (yyval.cst) = pstate_appendcst(parser_state, cst_create_generic(yylineno, make_kindstrpair(StmtList), (yyvsp[-1].cst), (yyvsp[0].cst), NULL)); }
#line 1660 "cmm.tab.c"
    break;

  case 28: /* StmtList: %empty  */
#line 122 "cmm.y"
                                                  { (yyval.cst) = pstate_appendcst(parser_state, cst_create_generic(yylineno, make_kindstrpair(StmtList), NULL)); }
#line 1666 "cmm.tab.c"
    break;

  case 29: /* Stmt: Exp ";"  */
#line 125 "cmm.y"
                                                  { (yyval.cst) = pstate_appendcst(parser_state, cst_create_generic(yylineno, make_kindstrpair(Stmt), (yyvsp[-1].cst), (yyvsp[0].cst), NULL)); }
#line 1672 "cmm.tab.c"
    break;

  case 30: /* Stmt: CompSt  */
#line 126 "cmm.y"
                                                  { (yyval.cst) = pstate_appendcst(parser_state, cst_create_generic(yylineno, make_kindstrpair(Stmt), (yyvsp[0].cst), NULL)); }
#line 1678 "cmm.tab.c"
    break;

  case 31: /* Stmt: "return" Exp ";"  */
#line 127 "cmm.y"
                                                  { (yyval.cst) = pstate_appendcst(parser_state, cst_create_generic(yylineno, make_kindstrpair(Stmt), (yyvsp[-2].cst), (yyvsp[-1].cst), (yyvsp[0].cst), NULL)); }
#line 1684 "cmm.tab.c"
    break;

  case 32: /* Stmt: "if" "(" Exp ")" Stmt  */
#line 128 "cmm.y"
                                                  { (yyval.cst) = pstate_appendcst(parser_state, cst_create_generic(yylineno, make_kindstrpair(Stmt), (yyvsp[-4].cst), (yyvsp[-3].cst), (yyvsp[-2].cst), (yyvsp[-1].cst), (yyvsp[0].cst), NULL)); }
#line 1690 "cmm.tab.c"
    break;

  case 33: /* Stmt: "if" "(" Exp ")" Stmt "else" Stmt  */
#line 129 "cmm.y"
                                                  { (yyval.cst) = pstate_appendcst(parser_state, cst_create_generic(yylineno, make_kindstrpair(Stmt), (yyvsp[-6].cst), (yyvsp[-5].cst), (yyvsp[-4].cst), (yyvsp[-3].cst), (yyvsp[-2].cst), (yyvsp[-1].cst), (yyvsp[0].cst), NULL)); }
#line 1696 "cmm.tab.c"
    break;

  case 34: /* Stmt: "while" "(" Exp ")" Stmt  */
#line 130 "cmm.y"
                                                  { (yyval.cst) = pstate_appendcst(parser_state, cst_create_generic(yylineno, make_kindstrpair(Stmt), (yyvsp[-4].cst), (yyvsp[-3].cst), (yyvsp[-2].cst), (yyvsp[-1].cst), (yyvsp[0].cst), NULL)); }
#line 1702 "cmm.tab.c"
    break;

  case 35: /* Stmt: error ";"  */
#line 131 "cmm.y"
                                                  { (yyval.cst) = parser_state->noattrtokennode.error; }
#line 1708 "cmm.tab.c"
    break;

  case 36: /* DefList: Def DefList  */
#line 135 "cmm.y"
                                                  { (yyval.cst) = pstate_appendcst(parser_state, cst_create_generic(yylineno, make_kindstrpair(DefList), (yyvsp[-1].cst), (yyvsp[0].cst), NULL)); }
#line 1714 "cmm.tab.c"
    break;

  case 37: /* DefList: %empty  */
#line 136 "cmm.y"
                                                  { (yyval.cst) = pstate_appendcst(parser_state, cst_create_generic(yylineno, make_kindstrpair(DefList), NULL)); }
#line 1720 "cmm.tab.c"
    break;

  case 38: /* Def: Specifier DecList ";"  */
#line 139 "cmm.y"
                                                  { (yyval.cst) = pstate_appendcst(parser_state, cst_create_generic(yylineno, make_kindstrpair(Def), (yyvsp[-2].cst), (yyvsp[-1].cst), (yyvsp[0].cst), NULL)); }
#line 1726 "cmm.tab.c"
    break;

  case 39: /* DecList: Dec  */
#line 142 "cmm.y"
                                                  { (yyval.cst) = pstate_appendcst(parser_state, cst_create_generic(yylineno, make_kindstrpair(DecList), (yyvsp[0].cst), NULL)); }
#line 1732 "cmm.tab.c"
    break;

  case 40: /* DecList: Dec "," DecList  */
#line 143 "cmm.y"
                                                  { (yyval.cst) = pstate_appendcst(parser_state, cst_create_generic(yylineno, make_kindstrpair(DecList), (yyvsp[-2].cst), (yyvsp[-1].cst), (yyvsp[0].cst), NULL)); }
#line 1738 "cmm.tab.c"
    break;

  case 41: /* Dec: VarDec  */
#line 146 "cmm.y"
                                                  { (yyval.cst) = pstate_appendcst(parser_state, cst_create_generic(yylineno, make_kindstrpair(Dec), (yyvsp[0].cst), NULL)); }
#line 1744 "cmm.tab.c"
    break;

  case 42: /* Dec: VarDec "=" Exp  */
#line 147 "cmm.y"
                                                  { (yyval.cst) = pstate_appendcst(parser_state, cst_create_generic(yylineno, make_kindstrpair(Dec), (yyvsp[-2].cst), (yyvsp[-1].cst), (yyvsp[0].cst), NULL)); }
#line 1750 "cmm.tab.c"
    break;

  case 43: /* Exp: Exp "=" Exp  */
#line 151 "cmm.y"
                                                  { (yyval.cst) = pstate_appendcst(parser_state, cst_create_bin(yylineno, CSTOP_ASSIGN, (yyvsp[-2].cst), (yyvsp[0].cst))); }
#line 1756 "cmm.tab.c"
    break;

  case 44: /* Exp: Exp "&&" Exp  */
#line 152 "cmm.y"
                                                  { (yyval.cst) = pstate_appendcst(parser_state, cst_create_bin(yylineno, CSTOP_AND, (yyvsp[-2].cst), (yyvsp[0].cst))); }
#line 1762 "cmm.tab.c"
    break;

  case 45: /* Exp: Exp "||" Exp  */
#line 153 "cmm.y"
                                                  { (yyval.cst) = pstate_appendcst(parser_state, cst_create_bin(yylineno, CSTOP_OR, (yyvsp[-2].cst), (yyvsp[0].cst))); }
#line 1768 "cmm.tab.c"
    break;

  case 46: /* Exp: Exp "<=" Exp  */
#line 154 "cmm.y"
                                                  { (yyval.cst) = pstate_appendcst(parser_state, cst_create_bin(yylineno, CSTOP_LE, (yyvsp[-2].cst), (yyvsp[0].cst))); }
#line 1774 "cmm.tab.c"
    break;

  case 47: /* Exp: Exp "<" Exp  */
#line 155 "cmm.y"
                                                  { (yyval.cst) = pstate_appendcst(parser_state, cst_create_bin(yylineno, CSTOP_LT, (yyvsp[-2].cst), (yyvsp[0].cst))); }
#line 1780 "cmm.tab.c"
    break;

  case 48: /* Exp: Exp ">=" Exp  */
#line 156 "cmm.y"
                                                  { (yyval.cst) = pstate_appendcst(parser_state, cst_create_bin(yylineno, CSTOP_GE, (yyvsp[-2].cst), (yyvsp[0].cst))); }
#line 1786 "cmm.tab.c"
    break;

  case 49: /* Exp: Exp ">" Exp  */
#line 157 "cmm.y"
                                                  { (yyval.cst) = pstate_appendcst(parser_state, cst_create_bin(yylineno, CSTOP_GT, (yyvsp[-2].cst), (yyvsp[0].cst))); }
#line 1792 "cmm.tab.c"
    break;

  case 50: /* Exp: Exp "!=" Exp  */
#line 158 "cmm.y"
                                                  { (yyval.cst) = pstate_appendcst(parser_state, cst_create_bin(yylineno, CSTOP_NE, (yyvsp[-2].cst), (yyvsp[0].cst))); }
#line 1798 "cmm.tab.c"
    break;

  case 51: /* Exp: Exp "==" Exp  */
#line 159 "cmm.y"
                                                  { (yyval.cst) = pstate_appendcst(parser_state, cst_create_bin(yylineno, CSTOP_EQ, (yyvsp[-2].cst), (yyvsp[0].cst))); }
#line 1804 "cmm.tab.c"
    break;

  case 52: /* Exp: Exp "+" Exp  */
#line 160 "cmm.y"
                                                  { (yyval.cst) = pstate_appendcst(parser_state, cst_create_bin(yylineno, CSTOP_ADD, (yyvsp[-2].cst), (yyvsp[0].cst))); }
#line 1810 "cmm.tab.c"
    break;

  case 53: /* Exp: Exp "-" Exp  */
#line 161 "cmm.y"
                                                  { (yyval.cst) = pstate_appendcst(parser_state, cst_create_bin(yylineno, CSTOP_SUB, (yyvsp[-2].cst), (yyvsp[0].cst))); }
#line 1816 "cmm.tab.c"
    break;

  case 54: /* Exp: Exp "*" Exp  */
#line 162 "cmm.y"
                                                  { (yyval.cst) = pstate_appendcst(parser_state, cst_create_bin(yylineno, CSTOP_MUL, (yyvsp[-2].cst), (yyvsp[0].cst))); }
#line 1822 "cmm.tab.c"
    break;

  case 55: /* Exp: Exp "/" Exp  */
#line 163 "cmm.y"
                                                  { (yyval.cst) = pstate_appendcst(parser_state, cst_create_bin(yylineno, CSTOP_DIV, (yyvsp[-2].cst), (yyvsp[0].cst))); }
#line 1828 "cmm.tab.c"
    break;

  case 56: /* Exp: "(" Exp ")"  */
#line 164 "cmm.y"
                                                  { (yyval.cst) = (yyvsp[-1].cst); }
#line 1834 "cmm.tab.c"
    break;

  case 57: /* Exp: "-" Exp  */
#line 165 "cmm.y"
                                                  { (yyval.cst) = pstate_appendcst(parser_state, cst_create_pre(yylineno, CSTOP_NEG, (yyvsp[0].cst))); }
#line 1840 "cmm.tab.c"
    break;

  case 58: /* Exp: "!" Exp  */
#line 166 "cmm.y"
                                                  { (yyval.cst) = pstate_appendcst(parser_state, cst_create_pre(yylineno, CSTOP_NOT, (yyvsp[0].cst))); }
#line 1846 "cmm.tab.c"
    break;

  case 59: /* Exp: Exp "(" Args ")"  */
#line 167 "cmm.y"
                                                  { (yyval.cst) = pstate_appendcst(parser_state, cst_create_call(yylineno, (yyvsp[-3].cst), (CstArgs*)((yyvsp[-1].cst)))); }
#line 1852 "cmm.tab.c"
    break;

  case 60: /* Exp: Exp "(" ")"  */
#line 168 "cmm.y"
                                                  { (yyval.cst) = pstate_appendcst(parser_state, cst_create_call(yylineno, (yyvsp[-2].cst), NULL)); }
#line 1858 "cmm.tab.c"
    break;

  case 61: /* Exp: Exp "[" Exp "]"  */
#line 169 "cmm.y"
                                                  { (yyval.cst) = pstate_appendcst(parser_state, cst_create_index(yylineno, (yyvsp[-3].cst), (yyvsp[-1].cst))); }
#line 1864 "cmm.tab.c"
    break;

  case 62: /* Exp: Exp "." "identifier"  */
#line 170 "cmm.y"
                                                  { (yyval.cst) = pstate_appendcst(parser_state, cst_create_dot(yylineno, (yyvsp[-2].cst), ((CstId*)((yyvsp[0].cst)))->val)); }
#line 1870 "cmm.tab.c"
    break;

  case 63: /* Exp: "identifier"  */
#line 171 "cmm.y"
                                                  { (yyval.cst) = (yyvsp[0].cst); }
#line 1876 "cmm.tab.c"
    break;

  case 64: /* Exp: "integer"  */
#line 172 "cmm.y"
                                                  { (yyval.cst) = (yyvsp[0].cst); }
#line 1882 "cmm.tab.c"
    break;

  case 65: /* Exp: "floating number"  */
#line 173 "cmm.y"
                                                  { (yyval.cst) = (yyvsp[0].cst); }
#line 1888 "cmm.tab.c"
    break;

  case 66: /* Args: Exp "," Args  */
#line 176 "cmm.y"
                                                  { (yyval.cst) = pstate_appendcst(parser_state, cst_create_args(yylineno, (yyvsp[-2].cst), (yyvsp[0].cst))); }
#line 1894 "cmm.tab.c"
    break;

  case 67: /* Args: Exp  */
#line 177 "cmm.y"
                                                  { (yyval.cst) = pstate_appendcst(parser_state, cst_create_args(yylineno, (yyvsp[0].cst), NULL)); }
#line 1900 "cmm.tab.c"
    break;


#line 1904 "cmm.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 181 "cmm.y"
 