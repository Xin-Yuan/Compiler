/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */


#define Trace(t)        printf(t)
#include <stdio.h>
#include <stdlib.h>
#include "symtab.h"

extern FILE * yyin;
int yylex();

#line 77 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    SEMICOLON = 258,
    DOUBLEPLUS = 259,
    DOUBLEMINUS = 260,
    EQUAL = 261,
    NOTEQUAL = 262,
    GREATEREQUAL = 263,
    LESSEQUAL = 264,
    AND = 265,
    OR = 266,
    PLUSEQUAL = 267,
    MINUSEQUAL = 268,
    TIMEEQUAL = 269,
    DIVIDEQUAL = 270,
    WHERE = 271,
    USE = 272,
    STRUCT = 273,
    S = 274,
    STATIC = 275,
    SELF = 276,
    PUB = 277,
    MATCH = 278,
    LOOP = 279,
    IN = 280,
    FOR = 281,
    EXTERN = 282,
    ENUM = 283,
    DO = 284,
    CONTINUE = 285,
    CHAR = 286,
    BREAK = 287,
    BOOL = 288,
    FN = 289,
    PRINTLN = 290,
    PRINT = 291,
    LET = 292,
    MUT = 293,
    ID = 294,
    INT = 295,
    FLOAT = 296,
    IF = 297,
    WHILE = 298,
    ELSE = 299,
    RETURN = 300,
    BOOL_CONST = 301,
    INT_CONST = 302,
    REAL_CONST = 303,
    STRING_CONST = 304,
    RETTYPE = 305,
    UMINUS = 306,
    UPLUS = 307
  };
#endif
/* Tokens.  */
#define SEMICOLON 258
#define DOUBLEPLUS 259
#define DOUBLEMINUS 260
#define EQUAL 261
#define NOTEQUAL 262
#define GREATEREQUAL 263
#define LESSEQUAL 264
#define AND 265
#define OR 266
#define PLUSEQUAL 267
#define MINUSEQUAL 268
#define TIMEEQUAL 269
#define DIVIDEQUAL 270
#define WHERE 271
#define USE 272
#define STRUCT 273
#define S 274
#define STATIC 275
#define SELF 276
#define PUB 277
#define MATCH 278
#define LOOP 279
#define IN 280
#define FOR 281
#define EXTERN 282
#define ENUM 283
#define DO 284
#define CONTINUE 285
#define CHAR 286
#define BREAK 287
#define BOOL 288
#define FN 289
#define PRINTLN 290
#define PRINT 291
#define LET 292
#define MUT 293
#define ID 294
#define INT 295
#define FLOAT 296
#define IF 297
#define WHILE 298
#define ELSE 299
#define RETURN 300
#define BOOL_CONST 301
#define INT_CONST 302
#define REAL_CONST 303
#define STRING_CONST 304
#define RETTYPE 305
#define UMINUS 306
#define UPLUS 307

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 13 "parser.y" /* yacc.c:355  */
float f; int i; int b; char* s;

#line 224 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 241 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   643

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  119
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  246

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    51,     2,     2,     2,     2,     2,     2,
      67,    68,    56,    54,    64,    55,     2,    57,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    66,    62,
      52,    61,    53,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    63,     2,    65,    58,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    69,     2,    70,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    59,    60
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    81,    81,    81,    88,    89,    90,    91,    93,    93,
      94,    94,    96,    96,    98,    98,    99,    99,   101,   102,
     104,   104,   104,   104,   106,   106,   106,   106,   108,   108,
     108,   110,   110,   111,   112,   114,   114,   114,   116,   117,
     120,   120,   121,   121,   121,   121,   121,   121,   123,   124,
     125,   126,   127,   128,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   170,   170,   173,   174,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   198,   200,   202,   203,   204
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SEMICOLON", "DOUBLEPLUS", "DOUBLEMINUS",
  "EQUAL", "NOTEQUAL", "GREATEREQUAL", "LESSEQUAL", "AND", "OR",
  "PLUSEQUAL", "MINUSEQUAL", "TIMEEQUAL", "DIVIDEQUAL", "WHERE", "USE",
  "STRUCT", "S", "STATIC", "SELF", "PUB", "MATCH", "LOOP", "IN", "FOR",
  "EXTERN", "ENUM", "DO", "CONTINUE", "CHAR", "BREAK", "BOOL", "FN",
  "PRINTLN", "PRINT", "LET", "MUT", "ID", "INT", "FLOAT", "IF", "WHILE",
  "ELSE", "RETURN", "BOOL_CONST", "INT_CONST", "REAL_CONST",
  "STRING_CONST", "RETTYPE", "'!'", "'<'", "'>'", "'+'", "'-'", "'*'",
  "'/'", "'^'", "UMINUS", "UPLUS", "'='", "';'", "'['", "','", "']'",
  "':'", "'('", "')'", "'{'", "'}'", "$accept", "program", "$@1",
  "var_const_declare", "var_declare", "$@2", "$@3", "const_declare", "$@4",
  "array_declare", "$@5", "$@6", "type_op", "type", "const_exp",
  "func_declare", "$@7", "$@8", "func_declare_op", "$@9", "arguments",
  "return_type", "statements", "statement", "simple", "expression",
  "int_expression", "block", "$@10", "conditional", "bool_expression",
  "loop", "fn_invok", "comma_seperate_expression", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,    33,    60,    62,    43,    45,    42,    47,    94,   306,
     307,    61,    59,    91,    44,    93,    58,    40,    41,   123,
     125
};
# endif

#define YYPACT_NINF -190

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-190)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -190,    10,   -13,  -190,    26,    47,  -190,   -13,   -13,   -17,
      19,    57,    64,  -190,  -190,   -30,   -12,    38,    40,    70,
    -190,   -12,   -23,  -190,  -190,  -190,  -190,  -190,    46,    73,
      51,    81,    46,  -190,  -190,  -190,  -190,  -190,    85,    89,
     -56,    73,   106,    99,   -13,  -190,   -12,    73,   140,   -53,
     126,  -190,  -190,   -13,  -190,   128,   -12,  -190,   140,    22,
     -13,  -190,  -190,   125,  -190,    46,  -190,  -190,   -13,   127,
     133,   -13,   537,   -13,  -190,  -190,   562,   562,     0,   143,
     144,   538,  -190,   142,   537,  -190,  -190,  -190,  -190,  -190,
     537,   -13,   -40,   562,   562,   562,  -190,   355,  -190,   412,
     562,   576,   562,   573,   573,  -190,   423,   -13,  -190,  -190,
     155,  -190,   576,   281,  -190,    49,   562,   562,   562,   562,
     562,   562,   562,   562,   562,   562,   562,   562,  -190,  -190,
     434,   -32,  -190,   576,   576,   576,   315,  -190,   502,     2,
      11,   573,   573,   573,  -190,   223,  -190,   229,  -190,   537,
      64,  -190,   321,  -190,   103,   103,   103,   103,   281,    80,
     103,   103,    82,    82,  -190,  -190,  -190,   576,   475,  -190,
     246,   576,   576,   576,   576,   576,   576,   576,   576,   576,
     576,   576,   576,   165,   562,  -190,   576,   486,  -190,   252,
     573,   573,   573,   573,   573,   573,   573,   573,   573,   573,
     573,   573,   158,   158,   179,  -190,  -190,   335,  -190,   187,
     187,   187,   187,   475,   508,   187,   187,    87,    87,  -190,
    -190,   562,   186,   341,  -190,   191,   191,   191,   191,   486,
     514,   191,   191,    95,    95,  -190,  -190,   207,  -190,  -190,
    -190,   445,  -190,   158,  -190,  -190
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     7,     1,     0,     0,     4,     7,     7,     0,
      19,     0,    34,     5,     6,    19,     0,     0,     0,     0,
       3,     0,     0,    22,    21,    20,    23,    18,     0,    37,
       0,     0,     0,    10,    25,    24,    27,    26,     0,     0,
       0,    37,     0,     0,     7,    12,     0,    37,    39,     0,
       0,     8,    11,     7,    35,    36,     0,    28,    39,     0,
       7,    13,    38,     0,    31,     0,    14,     9,     7,     0,
       0,     7,    41,     7,    16,    15,     0,     0,     0,     0,
       0,     0,    92,     0,    41,    42,    43,    44,    45,    46,
      41,     7,    54,     0,     0,     0,    57,     0,    58,     0,
       0,     0,   119,     0,     0,    52,     0,     7,    29,    40,
       0,    17,     0,    70,    55,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    51,    50,
       0,    73,    76,     0,     0,     0,     0,    77,   117,     0,
      96,     0,     0,     0,    99,     0,   100,     0,    53,    41,
      34,    32,     0,    56,    66,    69,    68,    67,    71,    72,
      64,    65,    60,    61,    62,    63,    48,     0,    89,    74,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   119,   116,     0,   112,    97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    30,    59,     0,    75,    85,
      88,    87,    86,    90,    91,    83,    84,    79,    80,    81,
      82,     0,   118,     0,    98,   108,   111,   110,   109,   113,
     114,   106,   107,   102,   103,   104,   105,    95,   115,    93,
      78,     0,   101,     0,    49,    94
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -190,  -190,  -190,     9,  -190,  -190,  -190,  -190,  -190,  -190,
    -190,  -190,   249,   -16,   -28,  -190,  -190,  -190,   115,  -190,
     -15,   208,   -81,  -190,  -190,   -75,    42,  -189,  -190,  -190,
     -70,  -190,     7,    83
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     5,     6,    60,    44,     7,    53,     8,
      71,    91,    17,    27,    96,    12,    63,   150,    20,    69,
      40,    57,    83,    84,    85,   138,   136,    86,   107,    87,
     145,    88,    98,   139
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      38,    97,    99,   109,    43,    31,   106,    23,    47,   110,
       3,    47,    48,   237,   238,    58,    13,    14,   113,   114,
     115,    24,    15,   112,     4,   130,    49,   102,    25,    26,
      54,   167,    55,    21,   147,   102,    16,    70,    32,    33,
      62,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,    52,   245,   116,   117,   118,   119,   120,
     121,   100,    61,   101,     9,    10,   184,   102,   204,    67,
     185,   187,   188,   189,   186,   144,   144,    72,   102,    89,
      75,    11,    90,    65,    66,    16,   116,   117,   118,   119,
     120,    89,    34,    35,    36,    37,    18,    89,    19,    28,
     111,   122,   123,   124,   125,   126,   127,    29,   137,    30,
     146,   146,    39,   144,   144,   144,   149,   153,    41,   137,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   122,   123,   124,   125,   126,   127,   126,   127,
     137,   137,   137,   181,   182,    42,   241,    45,   146,   146,
     146,   200,   201,    50,   152,    46,    89,   124,   125,   126,
     127,    51,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   137,   168,   169,   170,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   137,
      56,    59,    47,   137,    68,    74,    73,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   207,
     103,   104,   108,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   151,   221,    82,   223,   190,
     191,   192,   193,   194,   195,   190,   191,   192,   193,   194,
     195,   179,   180,   181,   182,   198,   199,   200,   201,   239,
     184,   243,   171,   172,   173,   174,   175,   176,   190,   191,
     192,   193,   194,   195,    22,   205,    64,   222,     0,     0,
       0,     0,     0,     0,     0,   196,   197,   198,   199,   200,
     201,   196,   197,   198,   199,   200,   201,   116,   117,   118,
     119,   202,     0,     0,     0,     0,     0,   203,   177,   178,
     179,   180,   181,   182,   196,   197,   198,   199,   200,   201,
       0,     0,     0,     0,   208,     0,     0,     0,     0,     0,
     224,   171,   172,   173,   174,   175,   176,   171,   172,   173,
     174,   175,   176,   122,   123,   124,   125,   126,   127,     0,
       0,   171,   172,   173,   174,   175,   176,   171,   172,   173,
     174,   175,   176,     0,     0,     0,     0,     0,     0,     0,
       0,   116,   117,   118,   119,   120,   121,   177,   178,   179,
     180,   181,   182,   177,   178,   179,   180,   181,   182,     0,
     183,     0,     0,     0,     0,     0,   206,   177,   178,   179,
     180,   181,   182,   177,   178,   179,   180,   181,   182,     0,
     240,     0,     0,     0,     0,     0,   242,   122,   123,   124,
     125,   126,   127,     0,     0,     0,     0,   128,   116,   117,
     118,   119,   120,   121,     0,     0,     0,     0,     0,   116,
     117,   118,   119,   120,   121,     0,     0,     0,     0,     0,
     116,   117,   118,   119,   120,   121,     0,     0,     0,     0,
       0,   116,   117,   118,   119,   120,   121,     0,     0,     0,
       0,     0,     0,     0,   122,   123,   124,   125,   126,   127,
       0,     0,     0,     0,   129,   122,   123,   124,   125,   126,
     127,   171,   172,   173,   174,   148,   122,   123,   124,   125,
     126,   127,   190,   191,   192,   193,   166,   122,   123,   124,
     125,   126,   127,     0,     0,     0,     0,   244,   116,   117,
     118,   119,   120,   121,   171,   172,   173,   174,   175,     0,
     190,   191,   192,   193,   194,     0,     0,   177,   178,   179,
     180,   181,   182,     0,     0,     0,     0,     0,   196,   197,
     198,   199,   200,   201,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   122,   123,   124,   125,   126,   127,
     177,   178,   179,   180,   181,   182,   196,   197,   198,   199,
     200,   201,    76,    77,     0,     0,    78,    92,     0,    79,
      80,     0,    81,     0,    34,    35,    36,    37,     0,    93,
       0,     0,     0,    94,     0,     0,     0,     0,     0,     0,
     105,    92,     0,     0,     0,    95,    82,     0,    34,    35,
      36,    37,   140,    93,     0,   131,     0,    94,     0,    34,
      35,    36,    37,   132,   141,     0,     0,   133,   142,    95,
       0,   134,     0,     0,     0,     0,     0,     0,     0,     0,
     143,     0,     0,   135
};

static const yytype_int16 yycheck[] =
{
      28,    76,    77,    84,    32,    21,    81,    19,    64,    90,
       0,    64,    68,   202,   203,    68,     7,     8,    93,    94,
      95,    33,    39,    63,    37,   100,    41,    67,    40,    41,
      46,    63,    47,    63,   104,    67,    66,    65,    61,    62,
      56,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,    44,   243,     6,     7,     8,     9,    10,
      11,    61,    53,    63,    38,    39,    64,    67,   149,    60,
      68,   141,   142,   143,    63,   103,   104,    68,    67,    72,
      71,    34,    73,    61,    62,    66,     6,     7,     8,     9,
      10,    84,    46,    47,    48,    49,    39,    90,    34,    61,
      91,    52,    53,    54,    55,    56,    57,    67,   101,    39,
     103,   104,    39,   141,   142,   143,   107,    68,    67,   112,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,    52,    53,    54,    55,    56,    57,    56,    57,
     133,   134,   135,    56,    57,    64,   221,    62,   141,   142,
     143,    56,    57,    47,   112,    66,   149,    54,    55,    56,
      57,    62,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   167,   133,   134,   135,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
      50,    65,    64,   186,    69,    62,    69,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   167,
      67,    67,    70,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,    70,    61,    69,   186,     6,
       7,     8,     9,    10,    11,     6,     7,     8,     9,    10,
      11,    54,    55,    56,    57,    54,    55,    56,    57,    70,
      64,    44,     6,     7,     8,     9,    10,    11,     6,     7,
       8,     9,    10,    11,    15,   150,    58,   184,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    53,    54,    55,    56,
      57,    52,    53,    54,    55,    56,    57,     6,     7,     8,
       9,    68,    -1,    -1,    -1,    -1,    -1,    68,    52,    53,
      54,    55,    56,    57,    52,    53,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,
      68,     6,     7,     8,     9,    10,    11,     6,     7,     8,
       9,    10,    11,    52,    53,    54,    55,    56,    57,    -1,
      -1,     6,     7,     8,     9,    10,    11,     6,     7,     8,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     6,     7,     8,     9,    10,    11,    52,    53,    54,
      55,    56,    57,    52,    53,    54,    55,    56,    57,    -1,
      65,    -1,    -1,    -1,    -1,    -1,    65,    52,    53,    54,
      55,    56,    57,    52,    53,    54,    55,    56,    57,    -1,
      65,    -1,    -1,    -1,    -1,    -1,    65,    52,    53,    54,
      55,    56,    57,    -1,    -1,    -1,    -1,    62,     6,     7,
       8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,     6,
       7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
       6,     7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,     6,     7,     8,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    53,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    62,    52,    53,    54,    55,    56,
      57,     6,     7,     8,     9,    62,    52,    53,    54,    55,
      56,    57,     6,     7,     8,     9,    62,    52,    53,    54,
      55,    56,    57,    -1,    -1,    -1,    -1,    62,     6,     7,
       8,     9,    10,    11,     6,     7,     8,     9,    10,    -1,
       6,     7,     8,     9,    10,    -1,    -1,    52,    53,    54,
      55,    56,    57,    -1,    -1,    -1,    -1,    -1,    52,    53,
      54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    53,    54,    55,    56,    57,
      52,    53,    54,    55,    56,    57,    52,    53,    54,    55,
      56,    57,    35,    36,    -1,    -1,    39,    39,    -1,    42,
      43,    -1,    45,    -1,    46,    47,    48,    49,    -1,    51,
      -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    39,    -1,    -1,    -1,    67,    69,    -1,    46,    47,
      48,    49,    39,    51,    -1,    39,    -1,    55,    -1,    46,
      47,    48,    49,    47,    51,    -1,    -1,    51,    55,    67,
      -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    -1,    -1,    67
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    72,    73,     0,    37,    74,    75,    78,    80,    38,
      39,    34,    86,    74,    74,    39,    66,    83,    39,    34,
      89,    63,    83,    19,    33,    40,    41,    84,    61,    67,
      39,    84,    61,    62,    46,    47,    48,    49,    85,    39,
      91,    67,    64,    85,    77,    62,    66,    64,    68,    91,
      47,    62,    74,    79,    84,    91,    50,    92,    68,    65,
      76,    74,    84,    87,    92,    61,    62,    74,    69,    90,
      85,    81,    74,    69,    62,    74,    35,    36,    39,    42,
      43,    45,    69,    93,    94,    95,    98,   100,   102,   103,
      74,    82,    39,    51,    55,    67,    85,    96,   103,    96,
      61,    63,    67,    67,    67,    62,    96,    99,    70,    93,
      93,    74,    63,    96,    96,    96,     6,     7,     8,     9,
      10,    11,    52,    53,    54,    55,    56,    57,    62,    62,
      96,    39,    47,    51,    55,    67,    97,   103,    96,   104,
      39,    51,    55,    67,    85,   101,   103,   101,    62,    74,
      88,    70,    97,    68,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    62,    63,    97,    97,
      97,     6,     7,     8,     9,    10,    11,    52,    53,    54,
      55,    56,    57,    65,    64,    68,    63,   101,   101,   101,
       6,     7,     8,     9,    10,    11,    52,    53,    54,    55,
      56,    57,    68,    68,    93,    89,    65,    97,    68,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    61,   104,    97,    68,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,    98,    98,    70,
      65,    96,    65,    44,    62,    98
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    71,    73,    72,    74,    74,    74,    74,    76,    75,
      77,    75,    79,    78,    81,    80,    82,    80,    83,    83,
      84,    84,    84,    84,    85,    85,    85,    85,    87,    88,
      86,    90,    89,    89,    89,    91,    91,    91,    92,    92,
      93,    93,    94,    94,    94,    94,    94,    94,    95,    95,
      95,    95,    95,    95,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    99,    98,   100,   100,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   102,   103,   104,   104,   104
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     4,     1,     2,     2,     0,     0,     9,
       0,     7,     0,     8,     0,    11,     0,    13,     2,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     0,
      13,     0,    11,     1,     0,     3,     3,     0,     2,     0,
       2,     0,     1,     1,     1,     1,     1,     0,     4,     7,
       3,     3,     2,     3,     1,     2,     3,     1,     1,     4,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     3,     3,     1,     2,     3,     1,     1,     4,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       3,     3,     0,     5,     7,     5,     1,     2,     3,     1,
       1,     4,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     3,     3,     5,     4,     1,     3,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
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
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
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
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
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
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
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
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 2:
#line 81 "parser.y" /* yacc.c:1646  */
    {create("GLOBAL");}
#line 1571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 82 "parser.y" /* yacc.c:1646  */
    {
                Trace("Reducing to program\n");
		dump();
                }
#line 1580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 93 "parser.y" /* yacc.c:1646  */
    {if((yyvsp[-3].s) == NULL)insert((yyvsp[-4].s),"null",(yyvsp[-1].s),1); else insert((yyvsp[-4].s),(yyvsp[-3].s),(yyvsp[-1].s),1);}
#line 1586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 94 "parser.y" /* yacc.c:1646  */
    {insert((yyvsp[-2].s),(yyvsp[-1].s),"null",1);}
#line 1592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 96 "parser.y" /* yacc.c:1646  */
    {if((yyvsp[-3].s) == NULL)insert((yyvsp[-4].s),"null",(yyvsp[-1].s), 0); else insert((yyvsp[-4].s), (yyvsp[-3].s), (yyvsp[-1].s), 0);}
#line 1598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 98 "parser.y" /* yacc.c:1646  */
    {char* type = strdup((yyvsp[-4].s)); strcat(type, "_array");insert((yyvsp[-6].s),type, "null",1);}
#line 1604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 99 "parser.y" /* yacc.c:1646  */
    {char* type = strdup((yyvsp[-6].s)); strcat(type, "_array");insert((yyvsp[-8].s),type, (yyvsp[-1].s),1);}
#line 1610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 101 "parser.y" /* yacc.c:1646  */
    {(yyval.s) = (yyvsp[0].s);}
#line 1616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 102 "parser.y" /* yacc.c:1646  */
    {(yyval.s) = NULL;}
#line 1622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 104 "parser.y" /* yacc.c:1646  */
    {(yyval.s) = (yyvsp[0].s);}
#line 1628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 104 "parser.y" /* yacc.c:1646  */
    {(yyval.s) = (yyvsp[0].s);}
#line 1634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 104 "parser.y" /* yacc.c:1646  */
    {(yyval.s) = (yyvsp[0].s);}
#line 1640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 104 "parser.y" /* yacc.c:1646  */
    {(yyval.s) = (yyvsp[0].s);}
#line 1646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 106 "parser.y" /* yacc.c:1646  */
    {(yyval.s) = (yyvsp[0].s);}
#line 1652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 106 "parser.y" /* yacc.c:1646  */
    {(yyval.s) = (yyvsp[0].s);}
#line 1658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 106 "parser.y" /* yacc.c:1646  */
    {(yyval.s) = (yyvsp[0].s);}
#line 1664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 106 "parser.y" /* yacc.c:1646  */
    {(yyval.s) = (yyvsp[0].s);}
#line 1670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 108 "parser.y" /* yacc.c:1646  */
    {if((yyvsp[0].s) == NULL)insert((yyvsp[-4].s),"void","-", 3);else insert((yyvsp[-4].s), (yyvsp[0].s), "-", 3);create((yyvsp[-4].s));}
#line 1676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 108 "parser.y" /* yacc.c:1646  */
    {dump();}
#line 1682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 110 "parser.y" /* yacc.c:1646  */
    {if((yyvsp[0].s) == NULL)insert((yyvsp[-4].s),"void","-", 3);else insert((yyvsp[-4].s), (yyvsp[0].s), "-", 3);create((yyvsp[-4].s));}
#line 1688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 110 "parser.y" /* yacc.c:1646  */
    {dump();}
#line 1694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 114 "parser.y" /* yacc.c:1646  */
    {insert((yyvsp[-2].s),(yyvsp[0].s),"null", 2);}
#line 1700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 116 "parser.y" /* yacc.c:1646  */
    {(yyval.s) = (yyvsp[0].s);}
#line 1706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 117 "parser.y" /* yacc.c:1646  */
    {(yyval.s) = NULL;}
#line 1712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 170 "parser.y" /* yacc.c:1646  */
    { create("block"); block_increase();}
#line 1718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 170 "parser.y" /* yacc.c:1646  */
    {dump();}
#line 1724 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1728 "y.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 206 "parser.y" /* yacc.c:1906  */



int yyerror(char *msg)
{
    fprintf(stderr, "%s\n", msg);
}

int main(int argc, char* argv[])
{
   
    /* open the source program file */
    if (argc != 2) {
        printf ("Usage: sc filename\n");
        exit(1);
    }
    yyin = fopen(argv[1], "r");         /* open input file */

    /* perform parsing */
    if (yyparse() == 1)                 /* parsing */
        yyerror("Parsing error !");     /* syntax error */
    //return yyparse();
}


