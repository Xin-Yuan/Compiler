/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 21 "parser.y" /* yacc.c:1909  */
float f; int i; int b; char* s;

#line 161 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
