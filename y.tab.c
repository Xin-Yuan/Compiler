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
#include "codegen.h"
char* outname;
//strcat(outname, ".jasm");
FILE* fout;
extern FILE * yyin;
int yylex();
int var_index;
int const_index;
int variable_declare;
int const_flag;
int parameter_count;
int is_string;

#line 86 "y.tab.c" /* yacc.c:339  */

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
#line 22 "parser.y" /* yacc.c:355  */
float f; int i; int b; char* s;

#line 233 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 250 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   404

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  72
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  92
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  185

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
       2,     2,     2,    51,     2,     2,     2,    71,     2,     2,
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
       0,    95,    95,    95,   104,   105,   106,   107,   109,   110,
     109,   128,   127,   144,   144,   144,   146,   146,   147,   147,
     149,   150,   152,   152,   152,   152,   154,   154,   154,   154,
     157,   158,   173,   157,   175,   176,   175,   193,   194,   196,
     196,   196,   198,   199,   203,   203,   204,   204,   204,   204,
     204,   204,   206,   207,   208,   208,   209,   209,   210,   211,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     236,   239,   239,   239,   240,   240,   244,   244,   244,   246,
     248,   249,   250
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
  "':'", "'('", "')'", "'{'", "'}'", "'%'", "$accept", "program", "$@1",
  "var_const_declare", "var_declare", "$@2", "$@3", "$@4", "const_declare",
  "$@5", "$@6", "array_declare", "$@7", "$@8", "type_op", "type",
  "const_exp", "func_declare", "$@9", "$@10", "$@11", "func_declare_op",
  "$@12", "$@13", "arguments", "return_type", "statements", "statement",
  "simple", "$@14", "$@15", "expression", "block", "conditional", "$@16",
  "$@17", "$@18", "loop", "$@19", "$@20", "fn_invok",
  "comma_seperate_expression", YY_NULLPTR
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
     125,    37
};
# endif

#define YYPACT_NINF -88

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-88)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -88,     5,   -11,   -88,    -5,    30,   -88,   -11,   -11,     0,
      21,    27,    74,   -88,   -88,   -48,   -12,    48,   -88,    72,
     -88,   -12,    24,   -88,   -88,   -88,   -88,   -88,   -88,    43,
     -88,    55,   -88,   -88,    25,    81,    62,    75,    25,   -11,
     -88,   -88,   -88,   -88,    68,    65,   -37,    81,    67,    78,
     -88,   -88,   -12,    81,    91,    -1,    37,   -88,   -11,   -88,
      79,   -12,   -88,    91,    25,   -88,   -11,   -88,   -88,    83,
     -88,    92,   -11,   -88,   -11,    88,   -88,   -88,   170,   -11,
     -11,   -88,   -88,    33,    89,   -88,   337,   -11,    95,   170,
     -88,   -88,   -88,   -88,   -88,   170,   -88,   212,   212,   212,
     212,   212,   212,    99,    34,   212,   212,   -88,   212,   -88,
      50,   -88,   170,   -88,   -88,    97,    71,    82,   107,   139,
     277,    87,   164,   212,   212,   318,   105,   173,   212,   212,
     212,   212,   212,   212,   212,   212,   212,   212,   212,   212,
     -88,   212,    98,    74,   -88,   -88,   -88,   -88,   116,   212,
     -88,   -88,   239,   246,   -88,   131,   131,   131,   131,   318,
     306,   131,   131,   -47,   -47,   105,   105,   277,   -88,   -88,
     212,    94,   120,   120,   -88,   -88,   266,   -88,   -88,   120,
     -88,   146,   -88,   120,   -88
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     7,     1,     0,     0,     4,     7,     7,     0,
      21,     0,    38,     5,     6,    21,     0,     0,    30,     0,
       3,     0,     0,    24,    23,    22,    25,    20,    13,     0,
      34,     0,     8,    11,     0,    41,     0,     0,     0,     7,
      27,    26,    29,    28,     0,     0,     0,    41,     0,     0,
      12,    14,     0,    41,    43,     0,     0,     9,     7,    39,
      40,     0,    31,    43,     0,    16,     7,    15,    42,     0,
      35,     0,     7,    10,     7,     0,    18,    17,    45,     7,
       7,    56,    54,     0,     0,    86,     0,     7,     0,    45,
      46,    47,    48,    49,    50,    45,    19,     0,     0,     0,
       0,    92,     0,     0,    60,     0,     0,    58,     0,    63,
       0,    64,    45,    32,    44,     0,     0,     0,     0,     0,
      90,     0,     0,     0,     0,    77,    61,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      59,     0,     0,    38,    36,    57,    55,    52,     0,    92,
      89,    81,     0,     0,    62,    73,    76,    75,    74,    78,
      79,    71,    72,    66,    67,    68,    69,    70,    80,    33,
       0,    91,     0,     0,    87,    65,     0,    82,    85,     0,
      53,     0,    88,     0,    83
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -88,   -88,   -88,    -4,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   182,   -20,    31,   -88,   -88,   -88,
     -88,    56,   -88,   -88,   -17,   135,   -87,   -88,   -88,   -88,
     -88,   -86,    28,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -72,    54
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     5,     6,    38,    66,    39,     7,    34,
      58,     8,    72,    80,    17,    27,   109,    12,    29,    69,
     143,    20,    36,    75,    46,    62,    88,    89,    90,    98,
      97,   120,    91,    92,   172,   181,   173,    93,   103,   179,
     111,   121
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
     110,    31,   114,    13,    14,     3,    94,    23,   115,   138,
     139,   116,   117,   118,   119,    21,   122,    94,    16,   125,
     126,    24,   127,    94,   141,   142,     4,    53,    25,    26,
      55,    54,    59,     9,    10,    50,    60,   152,   153,    15,
      94,    68,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,    67,   167,   128,   129,   130,   131,
     132,   133,    73,    53,    11,    44,    18,    63,    77,    49,
      78,    40,    41,    42,    43,    95,    96,   128,   129,   130,
     131,   132,   133,   112,   176,    32,    33,    16,   128,   129,
     130,   131,   132,   133,    99,    71,   100,   124,    64,    65,
     101,   101,   134,   135,   136,   137,   138,   139,    19,    28,
      35,    30,   140,   128,   129,   130,   131,   132,   133,    37,
      45,   141,    48,   134,   135,   136,   137,   138,   139,    47,
      51,    52,    56,   145,   134,   135,   136,   137,   138,   139,
      57,    61,   141,    53,   146,   128,   129,   130,   131,   132,
     133,   149,    74,   141,    76,   150,   102,    79,   149,   134,
     135,   136,   137,   138,   139,   113,   123,   144,   168,   147,
     128,   129,   130,   131,   132,   133,   141,   170,   141,   128,
     129,   130,   131,   132,   133,   136,   137,   138,   139,    87,
     183,   134,   135,   136,   137,   138,   139,    22,    70,   169,
     177,   178,   141,   171,   148,    81,    82,   182,     0,    83,
     141,   184,    84,    85,     0,    86,   134,   135,   136,   137,
     138,   139,     0,     0,     0,   134,   135,   136,   137,   138,
     139,     0,   151,     0,     0,   141,     0,     0,     0,    87,
       0,   154,     0,     0,   141,   128,   129,   130,   131,   132,
     133,   104,   128,   129,   130,   131,   132,   133,    40,    41,
      42,    43,     0,   105,     0,     0,     0,   106,     0,     0,
       0,     0,   128,   129,   130,   131,   132,   133,     0,   108,
       0,     0,     0,   128,   129,   130,   131,   132,   133,     0,
       0,   134,   135,   136,   137,   138,   139,     0,   134,   135,
     136,   137,   138,   139,     0,     0,     0,   174,     0,     0,
     141,   175,   128,   129,   130,   131,   132,   141,   134,   135,
     136,   137,   138,   139,   128,   129,   130,   131,   180,   134,
     135,   136,   137,   138,   139,     0,     0,   141,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   141,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   134,   135,
     136,   137,   138,   139,     0,     0,     0,     0,     0,     0,
     134,   135,   136,   137,   138,   139,   104,   141,     0,     0,
       0,     0,     0,    40,    41,    42,    43,     0,   105,   141,
       0,     0,   106,     0,     0,     0,     0,     0,     0,   107,
       0,     0,     0,     0,   108
};

static const yytype_int16 yycheck[] =
{
      86,    21,    89,     7,     8,     0,    78,    19,    95,    56,
      57,    97,    98,    99,   100,    63,   102,    89,    66,   105,
     106,    33,   108,    95,    71,   112,    37,    64,    40,    41,
      47,    68,    52,    38,    39,    39,    53,   123,   124,    39,
     112,    61,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,    58,   141,     6,     7,     8,     9,
      10,    11,    66,    64,    34,    34,    39,    68,    72,    38,
      74,    46,    47,    48,    49,    79,    80,     6,     7,     8,
       9,    10,    11,    87,   170,    61,    62,    66,     6,     7,
       8,     9,    10,    11,    61,    64,    63,    63,    61,    62,
      67,    67,    52,    53,    54,    55,    56,    57,    34,    61,
      67,    39,    62,     6,     7,     8,     9,    10,    11,    64,
      39,    71,    47,    52,    53,    54,    55,    56,    57,    67,
      62,    66,    65,    62,    52,    53,    54,    55,    56,    57,
      62,    50,    71,    64,    62,     6,     7,     8,     9,    10,
      11,    64,    69,    71,    62,    68,    67,    69,    64,    52,
      53,    54,    55,    56,    57,    70,    67,    70,    70,    62,
       6,     7,     8,     9,    10,    11,    71,    61,    71,     6,
       7,     8,     9,    10,    11,    54,    55,    56,    57,    69,
      44,    52,    53,    54,    55,    56,    57,    15,    63,   143,
     172,   173,    71,   149,    65,    35,    36,   179,    -1,    39,
      71,   183,    42,    43,    -1,    45,    52,    53,    54,    55,
      56,    57,    -1,    -1,    -1,    52,    53,    54,    55,    56,
      57,    -1,    68,    -1,    -1,    71,    -1,    -1,    -1,    69,
      -1,    68,    -1,    -1,    71,     6,     7,     8,     9,    10,
      11,    39,     6,     7,     8,     9,    10,    11,    46,    47,
      48,    49,    -1,    51,    -1,    -1,    -1,    55,    -1,    -1,
      -1,    -1,     6,     7,     8,     9,    10,    11,    -1,    67,
      -1,    -1,    -1,     6,     7,     8,     9,    10,    11,    -1,
      -1,    52,    53,    54,    55,    56,    57,    -1,    52,    53,
      54,    55,    56,    57,    -1,    -1,    -1,    68,    -1,    -1,
      71,    65,     6,     7,     8,     9,    10,    71,    52,    53,
      54,    55,    56,    57,     6,     7,     8,     9,    62,    52,
      53,    54,    55,    56,    57,    -1,    -1,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,
      54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    54,    55,    56,    57,    39,    71,    -1,    -1,
      -1,    -1,    -1,    46,    47,    48,    49,    -1,    51,    71,
      -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      -1,    -1,    -1,    -1,    67
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    73,    74,     0,    37,    75,    76,    80,    83,    38,
      39,    34,    89,    75,    75,    39,    66,    86,    39,    34,
      93,    63,    86,    19,    33,    40,    41,    87,    61,    90,
      39,    87,    61,    62,    81,    67,    94,    64,    77,    79,
      46,    47,    48,    49,    88,    39,    96,    67,    47,    88,
      75,    62,    66,    64,    68,    96,    65,    62,    82,    87,
      96,    50,    97,    68,    61,    62,    78,    75,    87,    91,
      97,    88,    84,    75,    69,    95,    62,    75,    75,    69,
      85,    35,    36,    39,    42,    43,    45,    69,    98,    99,
     100,   104,   105,   109,   112,    75,    75,   102,   101,    61,
      63,    67,    67,   110,    39,    51,    55,    62,    67,    88,
     103,   112,    75,    70,    98,    98,   103,   103,   103,   103,
     103,   113,   103,    67,    63,   103,   103,   103,     6,     7,
       8,     9,    10,    11,    52,    53,    54,    55,    56,    57,
      62,    71,    98,    92,    70,    62,    62,    62,    65,    64,
      68,    68,   103,   103,    68,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,    70,    93,
      61,   113,   106,   108,    68,    65,   103,   104,   104,   111,
      62,   107,   104,    44,   104
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    72,    74,    73,    75,    75,    75,    75,    77,    78,
      76,    79,    76,    81,    82,    80,    84,    83,    85,    83,
      86,    86,    87,    87,    87,    87,    88,    88,    88,    88,
      90,    91,    92,    89,    94,    95,    93,    93,    93,    96,
      96,    96,    97,    97,    98,    98,    99,    99,    99,    99,
      99,    99,   100,   100,   101,   100,   102,   100,   100,   100,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     104,   106,   107,   105,   108,   105,   110,   111,   109,   112,
     113,   113,   113
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     4,     1,     2,     2,     0,     0,     0,
      10,     0,     7,     0,     0,     9,     0,    11,     0,    13,
       2,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     0,     0,    14,     0,     0,    12,     1,     0,     3,
       3,     0,     2,     0,     2,     0,     1,     1,     1,     1,
       1,     0,     4,     7,     0,     4,     0,     4,     2,     3,
       1,     2,     3,     1,     1,     4,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     3,     3,
       4,     0,     0,     9,     0,     6,     0,     0,     7,     4,
       1,     3,     0
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
#line 95 "parser.y" /* yacc.c:1646  */
    {create("GLOBAL"); genProgramStart();}
#line 1511 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 96 "parser.y" /* yacc.c:1646  */
    {
                Trace("Reducing to program\n");
		dump();
				genCompoundEnd();
                }
#line 1521 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 109 "parser.y" /* yacc.c:1646  */
    {variable_declare = 1;}
#line 1527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 110 "parser.y" /* yacc.c:1646  */
    {if((yyvsp[-4].s) == NULL)
			{insert((yyvsp[-5].s),"int",(yyvsp[-1].s),1); 
			if(is_stack_empty())genGlobalVar((yyvsp[-5].s),(yyvsp[-1].s));
			else
			{
				block_var_increase((yyvsp[-5].s), "variable");
				var_index = lookup_var((yyvsp[-5].s));
				genLocalVar(var_index, (yyvsp[-1].s));
			}
			} 
		else {insert((yyvsp[-5].s),(yyvsp[-4].s),(yyvsp[-1].s),1); if(is_stack_empty())genGlobalVar((yyvsp[-5].s),(yyvsp[-1].s));
			else
			{
				block_var_increase((yyvsp[-5].s), "variable");
				var_index = lookup_var((yyvsp[-5].s));
				genLocalVar(var_index, (yyvsp[-1].s));
			}}Trace("Reducing to variable declare\n");}
#line 1549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 128 "parser.y" /* yacc.c:1646  */
    {if((yyvsp[-1].s) != NULL) 
			{insert((yyvsp[-2].s),(yyvsp[-1].s),"null",1); 
			if(is_stack_empty())genGlobalVarNoInit((yyvsp[-2].s));
			else
				block_var_increase((yyvsp[-2].s), "variable");
			}
			else 
			{
				insert((yyvsp[-2].s),"int", "null", 1);
				if(is_stack_empty())genGlobalVarNoInit((yyvsp[-2].s));
				else{
				block_var_increase((yyvsp[-2].s), "variable");
				}
			}
			Trace("Reducing to variable declare\n");}
#line 1569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 144 "parser.y" /* yacc.c:1646  */
    {const_flag = 1;}
#line 1575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 144 "parser.y" /* yacc.c:1646  */
    { if((yyvsp[-4].s) == NULL){insert((yyvsp[-5].s),"null",(yyvsp[-1].s), 0); const_increase((yyvsp[-5].s), (yyvsp[-1].s));}else {insert((yyvsp[-5].s), (yyvsp[-4].s), (yyvsp[-1].s), 0); const_increase((yyvsp[-5].s), (yyvsp[-1].s));}Trace("Reducing to constant declare\n");}
#line 1581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 146 "parser.y" /* yacc.c:1646  */
    {char* type = strdup((yyvsp[-4].s)); strcat(type, "_array");insert((yyvsp[-6].s),type, (yyvsp[-2].s),1);Trace("Reducing to array declare\n");}
#line 1587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 147 "parser.y" /* yacc.c:1646  */
    {char* type = strdup((yyvsp[-6].s)); strcat(type, "_array");insert((yyvsp[-8].s),type, (yyvsp[-4].s),1);Trace("Reducing to array declare\n");}
#line 1593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 149 "parser.y" /* yacc.c:1646  */
    {(yyval.s) = (yyvsp[0].s);}
#line 1599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 150 "parser.y" /* yacc.c:1646  */
    {(yyval.s) = NULL;}
#line 1605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 152 "parser.y" /* yacc.c:1646  */
    {(yyval.s) = (yyvsp[0].s);}
#line 1611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 152 "parser.y" /* yacc.c:1646  */
    {(yyval.s) = (yyvsp[0].s);}
#line 1617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 152 "parser.y" /* yacc.c:1646  */
    {(yyval.s) = (yyvsp[0].s);}
#line 1623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 152 "parser.y" /* yacc.c:1646  */
    {(yyval.s) = (yyvsp[0].s);}
#line 1629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 154 "parser.y" /* yacc.c:1646  */
    {(yyval.s) = (yyvsp[0].s);  if(!(variable_declare||const_flag))genConstInt((yyvsp[0].s));else {variable_declare = 0; const_flag = 0;}}
#line 1635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 154 "parser.y" /* yacc.c:1646  */
    {(yyval.s) = (yyvsp[0].s); if(!strcmp((yyvsp[0].s),"true"))fprintf(fout, "%s\n", "iconst_1");else fprintf(fout, "%s\n", "iconst_0"); }
#line 1641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 154 "parser.y" /* yacc.c:1646  */
    {(yyval.s) = (yyvsp[0].s); genConstStr((yyvsp[0].s)); is_string = 1;}
#line 1647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 154 "parser.y" /* yacc.c:1646  */
    {(yyval.s) = (yyvsp[0].s);}
#line 1653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 157 "parser.y" /* yacc.c:1646  */
    {enter_block();}
#line 1659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 158 "parser.y" /* yacc.c:1646  */
    {if((yyvsp[0].s) == NULL)
			{
				func_increase((yyvsp[-5].s), "void");
				insert((yyvsp[-5].s),"void","-", 3);
				int arg = get_argcount();
				if(!strcmp((yyvsp[-5].s), "main"))
					genMainStart();
				else
				genFuncStart((yyvsp[-5].s),"void",arg);
			}else 
			{	
				func_increase((yyvsp[-5].s), "int");
				insert((yyvsp[-5].s), (yyvsp[0].s), "-", 3);
				int arg = get_argcount();
				genFuncStart((yyvsp[-5].s),"int",arg);
			}create((yyvsp[-5].s)); Trace("Reducing to function declare\n");}
#line 1680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 173 "parser.y" /* yacc.c:1646  */
    {Trace("Reducing to function body\n");dump(); leave_block();if((yyvsp[-5].s)!=NULL){geniReturn();}else {genReturn();}genCompoundEnd();}
#line 1686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 175 "parser.y" /* yacc.c:1646  */
    {enter_block();}
#line 1692 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 176 "parser.y" /* yacc.c:1646  */
    {if((yyvsp[0].s) == NULL)
			{
				func_increase((yyvsp[-5].s), "void");
				insert((yyvsp[-5].s),"void","-", 3);
				int arg = get_argcount();
				if(!strcmp((yyvsp[-5].s), "main"))
					genMainStart();
				else
				genFuncStart((yyvsp[-5].s),"void",arg);
			}
			else
			{
				func_increase((yyvsp[-5].s), "int");
				insert((yyvsp[-5].s), (yyvsp[0].s), "-", 3);
				int arg = get_argcount();
				genFuncStart((yyvsp[-5].s),"int",arg);
			}create((yyvsp[-5].s));Trace("Reducing to function declare\n");}
#line 1714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 192 "parser.y" /* yacc.c:1646  */
    {Trace("Reducing to function body\n");dump(); leave_block();if((yyvsp[-5].s)!=NULL){geniReturn();}else {genReturn();}genCompoundEnd();}
#line 1720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 196 "parser.y" /* yacc.c:1646  */
    {block_var_increase((yyvsp[-2].s),"arguments");insert((yyvsp[-2].s),(yyvsp[0].s),"null", 2); count_arg();}
#line 1726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 198 "parser.y" /* yacc.c:1646  */
    {(yyval.s) = (yyvsp[0].s);}
#line 1732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 199 "parser.y" /* yacc.c:1646  */
    {(yyval.s) = NULL;}
#line 1738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 204 "parser.y" /* yacc.c:1646  */
    {Trace("Reducing to simple statement\n");}
#line 1744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 204 "parser.y" /* yacc.c:1646  */
    {Trace("Reducing to block statement\n");}
#line 1750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 204 "parser.y" /* yacc.c:1646  */
    {Trace("Reducing to conditional statement\n");}
#line 1756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 204 "parser.y" /* yacc.c:1646  */
    {Trace("Reducing to loop statement\n");}
#line 1762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 204 "parser.y" /* yacc.c:1646  */
    {Trace("Reducing to function invoke statement\n");}
#line 1768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 206 "parser.y" /* yacc.c:1646  */
    {var_index = lookup_var((yyvsp[-3].s)); if(var_index == -1)genSetGlobalVar((yyvsp[-3].s)); else genSetLocalVar(var_index);}
#line 1774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 208 "parser.y" /* yacc.c:1646  */
    {genPrintStart();}
#line 1780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 208 "parser.y" /* yacc.c:1646  */
    {if(is_string)genPrintStr();else genPrintInt(); is_string = 0;}
#line 1786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 209 "parser.y" /* yacc.c:1646  */
    {genPrintStart();}
#line 1792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 209 "parser.y" /* yacc.c:1646  */
    {if(is_string)genPrintlnStr();else genPrintlnInt(); is_string = 0;}
#line 1798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 213 "parser.y" /* yacc.c:1646  */
    { var_index = lookup_var((yyvsp[0].s)); const_index = lookup_const((yyvsp[0].s)); if(var_index != -1)genGetLocalVar(var_index);else if (const_index!=-1)genConstInt(get_const_val((yyvsp[0].s))); else genGetGlobalVar((yyvsp[0].s));}
#line 1804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 214 "parser.y" /* yacc.c:1646  */
    {genOperator('_');}
#line 1810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 219 "parser.y" /* yacc.c:1646  */
    {genOperator('+');}
#line 1816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 220 "parser.y" /* yacc.c:1646  */
    {genOperator('-');}
#line 1822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 221 "parser.y" /* yacc.c:1646  */
    {genOperator('*');}
#line 1828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 222 "parser.y" /* yacc.c:1646  */
    {genOperator('/');}
#line 1834 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 223 "parser.y" /* yacc.c:1646  */
    {genOperator('%');}
#line 1840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 224 "parser.y" /* yacc.c:1646  */
    {genCondOp(IFLT);}
#line 1846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 225 "parser.y" /* yacc.c:1646  */
    {genCondOp(IFGT);}
#line 1852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 226 "parser.y" /* yacc.c:1646  */
    {genCondOp(IFEQ);}
#line 1858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 227 "parser.y" /* yacc.c:1646  */
    {genCondOp(IFLE);}
#line 1864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 228 "parser.y" /* yacc.c:1646  */
    {genCondOp(IFGE);}
#line 1870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 229 "parser.y" /* yacc.c:1646  */
    {genCondOp(IFNE);}
#line 1876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 230 "parser.y" /* yacc.c:1646  */
    {genOperator('!');}
#line 1882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 231 "parser.y" /* yacc.c:1646  */
    {genOperator('&');}
#line 1888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 232 "parser.y" /* yacc.c:1646  */
    {genOperator('!');}
#line 1894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 236 "parser.y" /* yacc.c:1646  */
    {Trace("Reducing to block statement\n");}
#line 1900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 239 "parser.y" /* yacc.c:1646  */
    {genIfStart();}
#line 1906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 239 "parser.y" /* yacc.c:1646  */
    {genElse();}
#line 1912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 239 "parser.y" /* yacc.c:1646  */
    {genIfElseEnd();}
#line 1918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 240 "parser.y" /* yacc.c:1646  */
    {genIfStart();}
#line 1924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 240 "parser.y" /* yacc.c:1646  */
    {genIfEnd();}
#line 1930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 244 "parser.y" /* yacc.c:1646  */
    {genWhileStart();}
#line 1936 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 244 "parser.y" /* yacc.c:1646  */
    {genWhileBody();}
#line 1942 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 244 "parser.y" /* yacc.c:1646  */
    {genWhileEnd();}
#line 1948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 246 "parser.y" /* yacc.c:1646  */
    {genCallFunc((yyvsp[-3].s), get_func_type((yyvsp[-3].s)), parameter_count); parameter_count = 0;}
#line 1954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 248 "parser.y" /* yacc.c:1646  */
    {parameter_count++;}
#line 1960 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1964 "y.tab.c" /* yacc.c:1646  */
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
#line 252 "parser.y" /* yacc.c:1906  */



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
	outname = argv[1]; outname = strtok(outname, "."); char* filename = strdup(outname); strcat(filename, ".jasm"); fout = fopen(filename, "w+t");
    /* perform parsing */
    if (yyparse() == 1)                 /* parsing */
        yyerror("Parsing error !");     /* syntax error */
    //return yyparse();
}



