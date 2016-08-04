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
    opcode1 = 258,
    opcode2 = 259,
    address = 260,
    declare = 261,
    opcode21 = 262,
    special = 263,
    opcode3 = 264,
    cdec = 265,
    opcode4 = 266,
    sicregister = 267,
    assemble = 268,
    value = 269,
    byte = 270,
    word = 271,
    resb = 272,
    resw = 273,
    start = 274,
    end = 275,
    base_register = 276,
    identifier = 277
  };
#endif
/* Tokens.  */
#define opcode1 258
#define opcode2 259
#define address 260
#define declare 261
#define opcode21 262
#define special 263
#define opcode3 264
#define cdec 265
#define opcode4 266
#define sicregister 267
#define assemble 268
#define value 269
#define byte 270
#define word 271
#define resb 272
#define resw 273
#define start 274
#define end 275
#define base_register 276
#define identifier 277

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 33 "p2.y" /* yacc.c:1909  */

	char *format1,*format2;
	int addr_;
	char dummy1[20],dummy2[20];
	int decval;

#line 105 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
