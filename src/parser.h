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

#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
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
    T_OR = 258,
    T_AND = 259,
    T_CEQ = 260,
    T_CNE = 261,
    T_CLT = 262,
    T_CGT = 263,
    T_CLE = 264,
    T_CGE = 265,
    T_PLUS = 266,
    T_MINUS = 267,
    T_MUL = 268,
    T_DIV = 269,
    T_MOD = 270,
    T_NOT = 271,
    T_PROGRAM = 272,
    T_VAR = 273,
    T_PROCEDURE = 274,
    T_FUNCTION = 275,
    T_BEGIN = 276,
    T_END = 277,
    T_IF = 278,
    T_THEN = 279,
    T_ELSE = 280,
    T_WHILE = 281,
    T_FOR = 282,
    T_TO = 283,
    T_DO = 284,
    T_ASSIGNOP = 285,
    T_OBRACKET = 286,
    T_CBRACKET = 287,
    T_SEMICOLON = 288,
    T_COLON = 289,
    T_COMMA = 290,
    T_DOT = 291,
    T_WRITE_INT = 292,
    T_WRITE_CHAR = 293,
    T_WRITE_BOOL = 294,
    T_WRITE_LN = 295,
    T_STANDARD_TYPE = 296,
    T_IDENTIFIER = 297,
    T_INT = 298,
    T_BOOL = 299,
    T_CHAR = 300,
    T_REAL = 301
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 24 "parser.y" /* yacc.c:1909  */

    char* opiden;
    int integer;
    int boolean;
    char character;
	double real;
    int type;
    struct Nodes *node;

#line 111 "parser.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



int yyparse (void);

#endif /* !YY_YY_PARSER_H_INCLUDED  */
