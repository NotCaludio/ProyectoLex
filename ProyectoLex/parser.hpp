
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     DECIMAL_INT = 258,
     HEXADECIMAL = 259,
     REAL_DECIMAL = 260,
     IDENTIFIER = 261,
     QUOTED_STRING = 262,
     PROGRAM_TOKEN = 263,
     BEGIN_TOKEN = 264,
     USES_TOKEN = 265,
     UNIT_TOKEN = 266,
     INTERFACE_TOKEN = 267,
     IMPLEMENTATION_TOKEN = 268,
     LABEL_TOKEN = 269,
     CONST_TOKEN = 270,
     TYPE_TOKEN = 271,
     REAL_TOKEN = 272,
     INTEGER_TOKEN = 273,
     LONGINT_TOKEN = 274,
     WORD_TOKEN = 275,
     CHAR_TOKEN = 276,
     BOOLEAN_TOKEN = 277,
     TRUE_TOKEN = 278,
     FALSE_TOKEN = 279,
     STRING_TOKEN = 280,
     PACKED_TOKEN = 281,
     ARRAY_TOKEN = 282,
     RECORD_TOKEN = 283,
     END_TOKEN = 284,
     CASE_TOKEN = 285,
     OTHERWISE_TOKEN = 286,
     OF_TOKEN = 287,
     SET_TOKEN = 288,
     VAR_TOKEN = 289,
     FORWARD_TOKEN = 290,
     EXTERNAL_TOKEN = 291,
     FUNCTION_TOKEN = 292,
     PROCEDURE_TOKEN = 293,
     FILE_TOKEN = 294,
     GOTO_TOKEN = 295,
     IF_TOKEN = 296,
     THEN_TOKEN = 297,
     ELSE_TOKEN = 298,
     REPEAT_TOKEN = 299,
     UNTIL_TOKEN = 300,
     WHILE_TOKEN = 301,
     DO_TOKEN = 302,
     FOR_TOKEN = 303,
     TO_TOKEN = 304,
     DOWNTO_TOKEN = 305,
     WITH_TOKEN = 306,
     NIL_TOKEN = 307,
     READ_TOKEN = 308,
     READLN_TOKEN = 309,
     WRITE_TOKEN = 310,
     WRITELN_TOKEN = 311,
     IN_TOKEN = 312,
     OR_TOKEN = 313,
     DIV_TOKEN = 314,
     MOD_TOKEN = 315,
     AND_TOKEN = 316,
     NOT_TOKEN = 317,
     ASSIGNMENT_PRECEDENCE = 318,
     ASSIGN = 319,
     SUBRANGE = 320,
     RIGHT = 324,
     LEFT = 325,
     COMP = 326,
     POSITIVE = 327,
     NEGATIVE = 328
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{


    int valor_entero;
    char * cadena_de_caracteres;



} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


