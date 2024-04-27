
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
     QUOTED_CHAR = 263,
     PROGRAM_TOKEN = 264,
     BEGIN_TOKEN = 265,
     USES_TOKEN = 266,
     UNIT_TOKEN = 267,
     INTERFACE_TOKEN = 268,
     IMPLEMENTATION_TOKEN = 269,
     LABEL_TOKEN = 270,
     CONST_TOKEN = 271,
     TYPE_TOKEN = 272,
     REAL_TOKEN = 273,
     INTEGER_TOKEN = 274,
     LONGINT_TOKEN = 275,
     WORD_TOKEN = 276,
     CHAR_TOKEN = 277,
     BOOLEAN_TOKEN = 278,
     TRUE_TOKEN = 279,
     FALSE_TOKEN = 280,
     STRING_TOKEN = 281,
     PACKED_TOKEN = 282,
     ARRAY_TOKEN = 283,
     RECORD_TOKEN = 284,
     END_TOKEN = 285,
     CASE_TOKEN = 286,
     OTHERWISE_TOKEN = 287,
     OF_TOKEN = 288,
     SET_TOKEN = 289,
     VAR_TOKEN = 290,
     FORWARD_TOKEN = 291,
     EXTERNAL_TOKEN = 292,
     FUNCTION_TOKEN = 293,
     PROCEDURE_TOKEN = 294,
     FILE_TOKEN = 295,
     GOTO_TOKEN = 296,
     IF_TOKEN = 297,
     THEN_TOKEN = 298,
     ELSE_TOKEN = 299,
     REPEAT_TOKEN = 300,
     UNTIL_TOKEN = 301,
     WHILE_TOKEN = 302,
     DO_TOKEN = 303,
     FOR_TOKEN = 304,
     TO_TOKEN = 305,
     DOWNTO_TOKEN = 306,
     WITH_TOKEN = 307,
     NIL_TOKEN = 308,
     READ_TOKEN = 309,
     READLN_TOKEN = 310,
     WRITE_TOKEN = 311,
     WRITELN_TOKEN = 312,
     IN_TOKEN = 313,
     OR_TOKEN = 314,
     DIV_TOKEN = 315,
     MOD_TOKEN = 316,
     AND_TOKEN = 317,
     NOT_TOKEN = 318,
     ASSIGNMENT_PRECEDENCE = 319,
     ASSIGN = 320,
     SUBRANGE = 321,
     RIGHT = 325,
     LEFT = 326,
     COMP = 327,
     POSITIVE = 328,
     NEGATIVE = 329
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{


	unsigned int unsignedIntVal;
    int intVal;
    float floatVal;
    char *pCharVal;



} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


