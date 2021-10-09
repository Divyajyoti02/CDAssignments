/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    VAR = 258,
    FLOAT = 259,
    INT = 260,
    ANS = 261,
    SQR = 262,
    CUBE = 263,
    SQRT = 264,
    CBRT = 265,
    LOG10 = 266,
    LN = 267,
    INV = 268,
    ABS = 269,
    EXP = 270,
    LOG = 271,
    SIN = 272,
    COS = 273,
    TAN = 274,
    SEC = 275,
    CSC = 276,
    COT = 277,
    ASIN = 278,
    ACOS = 279,
    ATAN = 280,
    ASEC = 281,
    ACSC = 282,
    ACOT = 283,
    SINH = 284,
    COSH = 285,
    TANH = 286,
    SECH = 287,
    CSCH = 288,
    COTH = 289,
    ASINH = 290,
    ACOSH = 291,
    ATANH = 292,
    ASECH = 293,
    ACSCH = 294,
    ACOTH = 295,
    FLOOR = 296,
    CEIL = 297,
    FRAC = 298,
    SET = 299,
    QUIT = 300,
    NL = 301
  };
#endif
/* Tokens.  */
#define VAR 258
#define FLOAT 259
#define INT 260
#define ANS 261
#define SQR 262
#define CUBE 263
#define SQRT 264
#define CBRT 265
#define LOG10 266
#define LN 267
#define INV 268
#define ABS 269
#define EXP 270
#define LOG 271
#define SIN 272
#define COS 273
#define TAN 274
#define SEC 275
#define CSC 276
#define COT 277
#define ASIN 278
#define ACOS 279
#define ATAN 280
#define ASEC 281
#define ACSC 282
#define ACOT 283
#define SINH 284
#define COSH 285
#define TANH 286
#define SECH 287
#define CSCH 288
#define COTH 289
#define ASINH 290
#define ACOSH 291
#define ATANH 292
#define ASECH 293
#define ACSCH 294
#define ACOTH 295
#define FLOOR 296
#define CEIL 297
#define FRAC 298
#define SET 299
#define QUIT 300
#define NL 301

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 15 "Question1.y"

	double doubleVal;
	char * strVal;

#line 154 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
