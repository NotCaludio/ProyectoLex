
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


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
     RE = 325,
     LE = 326,
     NOTEQUAL = 327,
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


/* Copy the second part of user declarations.  */


   #include <stdio.h>
   #include <string.h>
   #pragma warning(disable: 4996 6385 4273 4013 4065)
   
   extern unsigned int columna;
   extern unsigned int fila;
   extern int yylex();
   int yyerror(const char *s);
   extern FILE *yyin;
      



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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   480

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  92
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  109
/* YYNRULES -- Number of rules.  */
#define YYNRULES  220
/* YYNRULES -- Number of states.  */
#define YYNSTATES  365

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   329

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      84,    85,    78,    76,    86,    77,    91,    79,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    87,    83,
      68,    67,    69,     2,    80,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    88,     2,    89,    90,     2,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    70,    71,    72,    73,    74,    75,    81,    82
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,    13,    16,    22,    24,    27,    34,
      38,    39,    43,    45,    47,    50,    51,    54,    56,    61,
      63,    66,    68,    70,    72,    74,    76,    78,    81,    82,
      85,    87,    92,    95,    96,    99,   101,   106,   108,   109,
     112,   114,   116,   118,   120,   122,   124,   128,   130,   132,
     134,   136,   138,   140,   142,   144,   146,   150,   154,   159,
     162,   164,   166,   168,   170,   172,   179,   183,   185,   188,
     192,   194,   197,   201,   206,   208,   211,   215,   217,   221,
     226,   233,   237,   239,   244,   250,   254,   256,   258,   262,
     264,   267,   270,   272,   275,   277,   280,   282,   284,   286,
     288,   292,   296,   298,   301,   303,   305,   307,   309,   311,
     313,   315,   318,   320,   322,   324,   328,   331,   333,   337,
     339,   341,   343,   345,   347,   349,   352,   354,   358,   360,
     362,   364,   366,   368,   371,   373,   375,   377,   379,   381,
     383,   385,   388,   390,   394,   398,   400,   402,   404,   407,
     411,   415,   417,   419,   423,   424,   427,   431,   435,   437,
     439,   441,   443,   445,   449,   453,   455,   458,   461,   463,
     465,   467,   469,   473,   477,   479,   481,   483,   488,   495,
     501,   508,   516,   523,   527,   529,   533,   537,   539,   541,
     543,   548,   553,   562,   571,   573,   575,   577,   582,   586,
     588,   593,   595,   597,   599,   602,   606,   611,   613,   615,
     617,   622,   628,   632,   636,   638,   640,   642,   644,   649,
     653
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      93,     0,    -1,    94,    83,    97,    -1,    94,    83,    96,
      83,    97,    -1,     9,     6,    -1,     9,     6,    84,    95,
      85,    -1,   117,    -1,    11,   117,    -1,    98,   101,   106,
     109,   112,   115,    -1,    15,    99,    83,    -1,    -1,    99,
      86,   100,    -1,   100,    -1,     3,    -1,    16,   102,    -1,
      -1,   102,   103,    -1,   103,    -1,     6,    67,   104,    83,
      -1,   105,    -1,   116,   105,    -1,     3,    -1,     4,    -1,
       5,    -1,     7,    -1,     8,    -1,     6,    -1,    17,   107,
      -1,    -1,   107,   108,    -1,   108,    -1,     6,    67,   118,
      83,    -1,    35,   110,    -1,    -1,   110,   111,    -1,   111,
      -1,   117,    87,   118,    83,    -1,   113,    -1,    -1,   113,
     114,    -1,   114,    -1,   190,    -1,   193,    -1,   173,    -1,
      76,    -1,    77,    -1,   117,    86,     6,    -1,     6,    -1,
     119,    -1,   124,    -1,   139,    -1,     6,    -1,   120,    -1,
     123,    -1,   122,    -1,   121,    -1,    84,   117,    85,    -1,
     104,    66,   104,    -1,    26,    88,     3,    89,    -1,    27,
     125,    -1,   125,    -1,   126,    -1,   137,    -1,   138,    -1,
     128,    -1,    28,    88,   127,    89,    33,   118,    -1,   127,
      86,   120,    -1,   120,    -1,    29,    30,    -1,    29,   129,
      30,    -1,   130,    -1,   130,    83,    -1,   130,    83,   132,
      -1,   130,    83,   132,    83,    -1,   132,    -1,   132,    83,
      -1,   130,    83,   131,    -1,   131,    -1,   117,    87,   118,
      -1,    31,   136,    33,   133,    -1,    31,     6,    87,   136,
      33,   133,    -1,   133,    83,   134,    -1,   134,    -1,   135,
      87,    84,    85,    -1,   135,    87,    84,   129,    85,    -1,
     135,    86,   104,    -1,   104,    -1,     6,    -1,    34,    33,
     120,    -1,    40,    -1,    33,   118,    -1,    90,   140,    -1,
       6,    -1,   142,   143,    -1,     6,    -1,   143,   144,    -1,
     144,    -1,   145,    -1,   147,    -1,    90,    -1,    88,   146,
      89,    -1,   146,    86,   156,    -1,   156,    -1,    91,     6,
      -1,   149,    -1,     7,    -1,    53,    -1,     3,    -1,     4,
      -1,     5,    -1,   141,    -1,    80,   141,    -1,   148,    -1,
     158,    -1,   164,    -1,    84,   156,    85,    -1,    63,   150,
      -1,     6,    -1,   151,   152,   150,    -1,   150,    -1,    78,
      -1,    79,    -1,    60,    -1,    61,    -1,    62,    -1,   116,
     154,    -1,   154,    -1,   154,   155,   151,    -1,   151,    -1,
      76,    -1,    77,    -1,    59,    -1,   153,    -1,   157,   153,
      -1,    67,    -1,    68,    -1,    69,    -1,    74,    -1,    73,
      -1,    75,    -1,    58,    -1,   159,   160,    -1,     6,    -1,
      84,   161,    85,    -1,   161,    86,   162,    -1,   162,    -1,
     156,    -1,     6,    -1,    88,    89,    -1,    88,   165,    89,
      -1,   165,    86,   166,    -1,   166,    -1,   156,    -1,   156,
      66,   156,    -1,    -1,   100,    87,    -1,   100,    87,   168,
      -1,   100,    87,   172,    -1,   168,    -1,   172,    -1,   169,
      -1,   170,    -1,   171,    -1,   141,    65,   156,    -1,   159,
      65,   156,    -1,   163,    -1,   163,   160,    -1,    41,   100,
      -1,   173,    -1,   175,    -1,   181,    -1,   188,    -1,    10,
     174,    30,    -1,   174,    83,   167,    -1,   167,    -1,   176,
      -1,   177,    -1,    42,   156,    43,   167,    -1,    42,   156,
      43,   167,    44,   167,    -1,    31,   156,    33,   178,    30,
      -1,    31,   156,    33,   178,   180,    30,    -1,    31,   156,
      33,   178,   180,    83,    30,    -1,    31,   156,    33,   178,
      83,    30,    -1,   178,    86,   179,    -1,   179,    -1,   135,
      87,   167,    -1,    83,    32,   167,    -1,   182,    -1,   183,
      -1,   184,    -1,    45,   174,    46,   156,    -1,    47,   156,
      48,   167,    -1,    49,   185,    65,   186,    50,   187,    48,
     167,    -1,    49,   185,    65,   186,    51,   187,    48,   167,
      -1,     6,    -1,   156,    -1,   156,    -1,    52,   189,    48,
     167,    -1,   189,    86,   141,    -1,   141,    -1,   192,    83,
     191,    83,    -1,    97,    -1,    36,    -1,    37,    -1,    39,
       6,    -1,    39,     6,   196,    -1,   195,    83,   194,    83,
      -1,    97,    -1,    36,    -1,    37,    -1,    38,     6,    87,
       6,    -1,    38,     6,   196,    87,     6,    -1,    84,   197,
      85,    -1,   197,    83,   198,    -1,   198,    -1,   199,    -1,
     192,    -1,   195,    -1,    35,   117,    87,   200,    -1,   117,
      87,   200,    -1,     6,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    48,    48,    49,    50,    51,    52,    53,    57,    66,
      67,    68,    69,    70,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    91,    92,    93,
      94,    95,    97,    98,    99,   100,   101,   103,   104,   105,
     106,   107,   108,   110,   112,   113,   114,   115,   119,   120,
     121,   122,   125,   127,   129,   130,   135,   136,   141,   146,
     147,   149,   150,   151,   152,   155,   156,   157,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   183,   184,
     185,   189,   192,   196,   198,   200,   201,   202,   203,   204,
     208,   209,   210,   212,   218,   219,   221,   222,   223,   224,
     226,   227,   228,   229,   230,   231,   232,   233,   235,   236,
     237,   237,   237,   237,   237,   239,   240,   241,   242,   243,
     243,   243,   245,   246,   247,   247,   247,   247,   247,   247,
     247,   250,   251,   253,   254,   255,   256,   260,   262,   263,
     264,   265,   267,   268,   272,   273,   274,   275,   276,   277,
     279,   280,   281,   283,   284,   287,   288,   291,   294,   295,
     296,   297,   301,   302,   303,   306,   307,   311,   312,   314,
     315,   316,   317,   318,   319,   320,   321,   323,   324,   325,
     328,   331,   333,   334,   335,   336,   337,   339,   340,   341,
     347,   348,   349,   350,   351,   352,   355,   356,   357,   358,
     359,   360,   364,   365,   366,   367,   368,   369,   370,   371,
     372
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DECIMAL_INT", "HEXADECIMAL",
  "REAL_DECIMAL", "IDENTIFIER", "QUOTED_STRING", "QUOTED_CHAR",
  "\"program\"", "\"begin\"", "\"uses\"", "\"unit\"", "\"interface\"",
  "\"implementation\"", "\"label\"", "\"const\"", "\"type\"", "\"real\"",
  "\"integer\"", "\"longint\"", "\"word\"", "\"char\"", "\"boolean\"",
  "\"true\"", "\"false\"", "\"string\"", "\"packed\"", "\"array\"",
  "\"record\"", "\"end\"", "\"case\"", "\"otherwise\"", "\"of\"",
  "\"set\"", "\"var\"", "\"forward\"", "\"external\"", "\"function\"",
  "\"procedure\"", "\"file\"", "\"goto\"", "\"if\"", "\"then\"",
  "\"else\"", "\"repeat\"", "\"until\"", "\"while\"", "\"do\"", "\"for\"",
  "\"to\"", "\"downto\"", "\"with\"", "\"nil\"", "\"read\"", "\"readln\"",
  "\"write\"", "\"writeln\"", "\"in\"", "\"or\"", "\"div\"", "\"mod\"",
  "\"and\"", "\"not\"", "ASSIGNMENT_PRECEDENCE", "\":=\"", "\"..\"", "'='",
  "'<'", "'>'", "\"<>\"", "\"<=\"", "\">=\"", "RE", "LE", "NOTEQUAL",
  "'+'", "'-'", "'*'", "'/'", "'@'", "POSITIVE", "NEGATIVE", "';'", "'('",
  "')'", "','", "':'", "'['", "']'", "'^'", "'.'", "$accept", "program",
  "program_heading", "program_parameters", "uses_clause", "block",
  "label_declaration_part", "label_list", "label",
  "constant_declaration_part", "constant_declaration_list",
  "constant_declaration", "constant", "constant_identifier",
  "type_declaration_part", "type_declaration_list", "type_declaration",
  "variable_declaration_part", "variable_declaration_list",
  "variable_declaration", "procedure_and_function_declaration_part",
  "procedure_and_function_declaration_list",
  "procedure_and_function_declaration", "statement_part", "sign",
  "identifier_list", "type", "simple_type", "ordinal_type",
  "enumerated_type", "subrange_type", "string_type", "structured_type",
  "type_list", "array_type", "index_type_list", "record_type",
  "field_list", "fixed_part", "field_declaration", "variant_part",
  "variant_list", "variant", "constant_list", "tag_field_type", "set_type",
  "file_type", "pointer_type", "base_type", "variable_reference",
  "variable_identifier", "qualifier_list", "qualifier", "index",
  "expression_list", "field_designator", "unsigned_constant",
  "unsigned_number", "factor", "term", "term_operator_list",
  "simple_expression", "simple_expression_term_operator_iterable",
  "simple_expression_term_operator_list", "expression",
  "relational_operator", "function_call", "function_identifier",
  "actual_parameter_list", "actual_parameter_iterable", "actual_parameter",
  "procedure_identifier", "set_constructor", "member_group_list",
  "member_group", "statement", "simple_statement", "assignment_statement",
  "procedure_statement", "goto_statement", "structured_statement",
  "compound_statement", "statement_list", "conditional_statement",
  "if_statement", "case_statement", "case_list", "case",
  "otherwise_clause", "repetitive_statement", "repeat_statement",
  "while_statement", "for_statement", "control_variable", "initial_value",
  "final_value", "with_statement", "record_variable_reference_list",
  "procedure_declaration", "procedure_body", "procedure_heading",
  "function_declaration", "function_body", "function_heading",
  "formal_parameter_list", "formal_parameter_list_iterable",
  "formal_parameter_list_iterable_list", "parameter_declaration",
  "type_identifier", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,    61,    60,    62,
     322,   323,   324,   325,   326,   327,    43,    45,    42,    47,
      64,   328,   329,    59,    40,    41,    44,    58,    91,    93,
      94,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    92,    93,    93,    94,    94,    95,    96,    97,    98,
      98,    99,    99,   100,   101,   101,   102,   102,   103,   104,
     104,   104,   104,   104,   104,   104,   105,   106,   106,   107,
     107,   108,   109,   109,   110,   110,   111,   112,   112,   113,
     113,   114,   114,   115,   116,   116,   117,   117,   118,   118,
     118,   118,   119,   119,   120,   120,   121,   122,   123,   124,
     124,   125,   125,   125,   125,   126,   127,   127,   128,   128,
     129,   129,   129,   129,   129,   129,   130,   130,   131,   132,
     132,   133,   133,   134,   134,   135,   135,   136,   137,   138,
     138,   139,   140,   141,   142,   143,   143,   144,   144,   144,
     145,   146,   146,   147,   148,   148,   148,   149,   149,   149,
     150,   150,   150,   150,   150,   150,   150,   150,   151,   151,
     152,   152,   152,   152,   152,   153,   153,   154,   154,   155,
     155,   155,   156,   156,   157,   157,   157,   157,   157,   157,
     157,   158,   159,   160,   161,   161,   162,   163,   164,   164,
     165,   165,   166,   166,   167,   167,   167,   167,   167,   167,
     168,   168,   168,   169,   169,   170,   170,   171,   172,   172,
     172,   172,   173,   174,   174,   175,   175,   176,   176,   177,
     177,   177,   177,   178,   178,   179,   180,   181,   181,   181,
     182,   183,   184,   184,   185,   186,   187,   188,   189,   189,
     190,   191,   191,   191,   192,   192,   193,   194,   194,   194,
     195,   195,   196,   197,   197,   198,   198,   198,   199,   199,
     200
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     5,     2,     5,     1,     2,     6,     3,
       0,     3,     1,     1,     2,     0,     2,     1,     4,     1,
       2,     1,     1,     1,     1,     1,     1,     2,     0,     2,
       1,     4,     2,     0,     2,     1,     4,     1,     0,     2,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     4,     2,
       1,     1,     1,     1,     1,     6,     3,     1,     2,     3,
       1,     2,     3,     4,     1,     2,     3,     1,     3,     4,
       6,     3,     1,     4,     5,     3,     1,     1,     3,     1,
       2,     2,     1,     2,     1,     2,     1,     1,     1,     1,
       3,     3,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     1,     3,     2,     1,     3,     1,
       1,     1,     1,     1,     1,     2,     1,     3,     1,     1,
       1,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     3,     3,     1,     1,     1,     2,     3,
       3,     1,     1,     3,     0,     2,     3,     3,     1,     1,
       1,     1,     1,     3,     3,     1,     2,     2,     1,     1,
       1,     1,     3,     3,     1,     1,     1,     4,     6,     5,
       6,     7,     6,     3,     1,     3,     3,     1,     1,     1,
       4,     4,     8,     8,     1,     1,     1,     4,     3,     1,
       4,     1,     1,     1,     2,     3,     4,     1,     1,     1,
       4,     5,     3,     3,     1,     1,     1,     1,     4,     3,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     4,     1,    10,     0,     0,     0,
       0,     2,    15,    47,     0,     6,     7,    13,     0,    12,
      10,     0,    28,     5,     0,     9,     0,     3,     0,    14,
      17,     0,    33,    46,    11,     0,    16,     0,    27,    30,
       0,    38,    21,    22,    23,    26,    24,    25,    44,    45,
       0,    19,     0,     0,    29,    32,    35,     0,     0,     0,
       0,    37,    40,    41,     0,    42,     0,    18,    20,    51,
       0,     0,     0,     0,     0,     0,    89,     0,     0,     0,
       0,    48,    52,    55,    54,    53,    49,    60,    61,    64,
      62,    63,    50,    34,     0,     0,   204,   154,     8,    43,
      39,    10,    10,     0,    59,     0,    68,     0,     0,     0,
      70,    77,    74,    90,     0,     0,    92,    91,     0,    31,
       0,     0,     0,     0,   205,   147,     0,     0,     0,   154,
       0,     0,     0,     0,     0,     0,     0,   165,   174,   158,
     160,   161,   162,   159,   168,     0,   169,   175,   176,   170,
     187,   188,   189,   171,   202,   203,   201,     0,   208,   209,
     207,     0,     0,    67,     0,    87,     0,     0,    69,    71,
      75,    88,    56,    57,    36,     0,     0,   216,   217,     0,
     214,   215,   210,     0,   107,   108,   109,   117,   105,   106,
     140,     0,   134,   135,   136,   138,   137,   139,     0,     0,
       0,     0,   110,   112,   104,   119,   128,   132,   126,     0,
       0,   113,     0,   114,   167,     0,     0,     0,   194,     0,
      94,   199,     0,   155,     0,     0,    99,     0,    93,    96,
      97,    98,     0,     0,   166,   172,   154,   200,   206,    58,
       0,     0,     0,     0,    78,    76,    72,     0,     0,     0,
     212,   211,   116,   111,     0,   148,   152,     0,   151,   125,
     122,   123,   124,   120,   121,     0,   131,   129,   130,     0,
       0,   133,   141,   154,     0,   154,     0,   154,     0,   156,
     157,   163,     0,   102,   103,    95,   164,   146,     0,   145,
     173,    66,     0,    87,     0,    86,    79,    82,     0,    73,
       0,   220,   219,   213,   115,     0,     0,   149,   118,   127,
       0,     0,   184,   177,   190,   191,   195,     0,   197,   198,
       0,   100,   143,     0,    65,     0,     0,     0,     0,   218,
     153,   150,   154,   179,     0,     0,     0,   154,     0,     0,
     101,   144,    80,    81,    85,     0,   185,   182,   154,   183,
     180,     0,   178,   196,     0,     0,    83,     0,   186,   181,
     154,   154,    84,   192,   193
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    14,    10,    11,    12,    18,   133,    22,
      29,    30,    79,    51,    32,    38,    39,    41,    55,    56,
      60,    61,    62,    98,   201,   108,    80,    81,    82,    83,
      84,    85,    86,    87,    88,   164,    89,   109,   110,   111,
     112,   296,   297,   298,   166,    90,    91,    92,   117,   202,
     135,   228,   229,   230,   282,   231,   203,   204,   205,   206,
     265,   207,   208,   269,   256,   210,   211,   212,   234,   288,
     289,   137,   213,   257,   258,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   311,   312,   336,   149,
     150,   151,   152,   219,   317,   354,   153,   222,    63,   157,
      64,    65,   161,    66,   123,   179,   180,   181,   302
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -246
static const yytype_int16 yypact[] =
{
      21,    35,    62,   -12,    -9,  -246,    38,    86,    86,    77,
      13,  -246,   101,  -246,    34,    45,    45,  -246,   -54,  -246,
     120,   132,   140,  -246,   154,  -246,    77,  -246,    97,   132,
    -246,   172,   148,  -246,  -246,   147,  -246,   113,   172,  -246,
      86,    16,  -246,  -246,  -246,  -246,  -246,  -246,  -246,  -246,
     102,  -246,   181,   163,  -246,    86,  -246,    25,   187,   189,
     194,    16,  -246,  -246,   127,  -246,   135,  -246,  -246,   171,
     126,   173,   161,    20,   163,   209,  -246,    86,   244,   185,
     175,  -246,  -246,  -246,  -246,  -246,  -246,  -246,  -246,  -246,
    -246,  -246,  -246,  -246,   163,   -49,   170,   270,  -246,  -246,
    -246,    41,   109,   252,  -246,    39,  -246,   250,    75,   230,
     178,  -246,   179,  -246,    39,    88,  -246,  -246,   147,  -246,
     180,    91,   268,   188,  -246,    68,   301,    77,   301,   270,
     301,   271,   272,   192,   216,    53,   217,   199,  -246,  -246,
    -246,  -246,  -246,  -246,  -246,   -16,  -246,  -246,  -246,  -246,
    -246,  -246,  -246,  -246,  -246,  -246,  -246,   201,  -246,  -246,
    -246,   202,   197,  -246,   -29,   200,   255,   163,  -246,    17,
    -246,  -246,  -246,  -246,  -246,    86,    89,  -246,  -246,    -1,
    -246,  -246,  -246,   283,  -246,  -246,  -246,   131,  -246,  -246,
    -246,   392,  -246,  -246,  -246,  -246,  -246,  -246,   272,   301,
     263,   392,  -246,  -246,  -246,  -246,   138,  -246,    32,   264,
     387,  -246,   199,  -246,  -246,   253,   -25,   251,  -246,   233,
    -246,  -246,   -14,    58,   301,   301,  -246,   296,    53,  -246,
    -246,  -246,   301,   301,  -246,  -246,   270,  -246,  -246,  -246,
      39,   276,   304,   147,  -246,  -246,   231,   139,   307,    91,
    -246,  -246,  -246,  -246,   235,  -246,   257,   -20,  -246,    32,
    -246,  -246,  -246,  -246,  -246,   392,  -246,  -246,  -246,   392,
     147,  -246,  -246,   270,   301,   270,   301,   270,   272,  -246,
    -246,  -246,    12,  -246,  -246,  -246,  -246,  -246,   144,  -246,
    -246,  -246,   163,  -246,   285,  -246,   241,  -246,   145,  -246,
     307,  -246,  -246,  -246,  -246,   301,   301,  -246,  -246,   138,
     158,   -10,  -246,   281,  -246,  -246,  -246,   183,  -246,  -246,
     301,  -246,  -246,   301,  -246,   147,   147,   147,   243,  -246,
    -246,  -246,   270,  -246,    74,   147,    -2,   270,   301,   301,
    -246,  -246,   241,  -246,  -246,     0,  -246,  -246,   270,  -246,
    -246,   298,  -246,  -246,   286,   287,  -246,   248,  -246,  -246,
     270,   270,  -246,  -246,  -246
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -246,  -246,  -246,  -246,  -246,    -8,  -246,  -246,     1,  -246,
    -246,   300,   -32,   289,  -246,  -246,   306,  -246,  -246,   290,
    -246,  -246,   288,  -246,   -35,    -3,   -72,  -246,   -98,  -246,
    -246,  -246,  -246,   275,  -246,  -246,  -246,     3,  -246,   184,
     186,    31,    24,  -245,   100,  -246,  -246,  -246,  -246,   -96,
    -246,  -246,   129,  -246,  -246,  -246,  -246,  -246,  -178,    92,
    -246,   150,   157,  -246,  -111,  -246,  -246,   -89,   151,  -246,
      42,  -246,  -246,  -246,    56,  -212,   143,  -246,  -246,  -246,
     149,   311,   238,  -246,  -246,  -246,  -246,    44,  -246,  -246,
    -246,  -246,  -246,  -246,  -246,    43,  -246,  -246,  -246,  -246,
    -112,  -246,  -246,  -110,   277,  -246,   134,  -246,    80
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -143
static const yytype_int16 yytable[] =
{
      52,   134,   113,    50,    15,    16,    13,   163,   136,   177,
      19,   178,    27,   252,   235,   209,   171,   215,    52,   217,
     333,   274,   120,    13,   290,   310,    13,    34,   350,    25,
       1,   107,    26,   134,   277,   121,   221,    57,   122,    52,
     136,     4,    42,    43,    44,    45,    46,    47,   107,     8,
     106,   107,    57,     9,    58,    59,     9,   240,   236,    52,
     241,   313,     5,   315,   125,   318,   306,   236,    97,   307,
      52,     6,   278,   334,   115,     7,   335,   154,   155,    52,
      17,   351,   249,    52,   250,   356,   173,   308,   254,   126,
     310,   266,    13,   156,   160,   244,    20,    13,   320,   127,
     128,   321,   253,   129,   347,   130,   348,   131,   267,   268,
     132,    24,    94,   281,   283,    48,    49,    21,   176,    23,
     346,   286,   287,    77,     9,   352,   175,   134,   214,    58,
      59,    24,    52,  -142,   136,     9,   358,   177,    28,   178,
     134,   225,   291,   226,   227,   158,   159,   136,   363,   364,
      42,    43,    44,    45,    46,    47,   -94,    31,   -94,   -94,
      33,    24,   167,   314,    35,   316,    42,    43,    44,    69,
      46,    47,   247,   172,    24,    24,   248,   134,    37,   134,
      53,   134,   319,    40,   136,    67,   136,    45,   136,    70,
      71,    72,    73,    95,   330,    96,    74,    75,   260,   261,
     262,    72,    73,    76,    97,    52,    74,    75,    52,   340,
     101,   295,   287,    76,   103,  -142,   263,   264,   102,   -94,
     324,   -94,   -94,    48,    49,    24,   300,   353,   353,   322,
     323,   327,   328,   338,   339,    52,   134,   -26,   295,    48,
      49,   134,   114,   136,   327,   332,   176,    77,   136,   105,
     116,   118,   134,    78,   121,   162,   165,    52,   119,   136,
     168,   169,   170,   174,   134,   134,   184,   185,   186,   187,
     188,   136,   136,    17,   182,   183,   125,   218,   220,   223,
      97,   224,   232,   233,   237,   238,   239,   242,   243,   251,
      52,    52,    52,   295,   295,   344,   273,   270,   276,   275,
      52,   126,   284,   295,   184,   185,   186,   187,   188,   292,
     293,   127,   128,   301,   299,   129,   189,   130,   325,   131,
     304,   190,   132,   305,   326,   337,   191,   345,   359,    36,
     192,   193,   194,   362,   360,   361,   195,   196,   197,    48,
      49,    68,   294,   198,    54,    93,   104,   199,   357,   100,
     343,   200,   255,   245,   189,   246,   342,   285,   259,   190,
     271,   309,   331,   272,   191,   341,   279,   216,   192,   193,
     194,    99,   280,   124,   195,   196,   197,    48,    49,   349,
     329,   198,   355,   303,     0,   199,     0,     0,     0,   200,
     184,   185,   186,   187,   188,   184,   185,   186,   187,   188,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     189,     0,     0,     0,     0,   189,     0,     0,     0,     0,
     191,     0,     0,     0,     0,   191,     0,     0,     0,     0,
       0,     0,     0,    48,    49,     0,     0,   198,     0,     0,
       0,   199,   198,     0,     0,   200,   199,     0,     0,     0,
     200
};

static const yytype_int16 yycheck[] =
{
      35,    97,    74,    35,     7,     8,     6,   105,    97,   121,
       9,   121,    20,   191,    30,   126,   114,   128,    53,   130,
      30,    46,    94,     6,   236,   270,     6,    26,    30,    83,
       9,    31,    86,   129,    48,    84,   132,    40,    87,    74,
     129,     6,     3,     4,     5,     6,     7,     8,    31,    11,
      30,    31,    55,    15,    38,    39,    15,    86,    83,    94,
      89,   273,     0,   275,     6,   277,    86,    83,    10,    89,
     105,    83,    86,    83,    77,    84,    86,    36,    37,   114,
       3,    83,    83,   118,    85,    85,   118,   265,   199,    31,
     335,    59,     6,   101,   102,   167,    83,     6,    86,    41,
      42,    89,   198,    45,    30,    47,    32,    49,    76,    77,
      52,    86,    87,   224,   225,    76,    77,    16,   121,    85,
     332,   232,   233,    84,    15,   337,    35,   223,   127,    38,
      39,    86,   167,    65,   223,    15,   348,   249,     6,   249,
     236,    88,   240,    90,    91,    36,    37,   236,   360,   361,
       3,     4,     5,     6,     7,     8,    88,    17,    90,    91,
       6,    86,    87,   274,    67,   276,     3,     4,     5,     6,
       7,     8,   175,    85,    86,    86,    87,   273,     6,   275,
      67,   277,   278,    35,   273,    83,   275,     6,   277,    26,
      27,    28,    29,     6,   305,     6,    33,    34,    60,    61,
      62,    28,    29,    40,    10,   240,    33,    34,   243,   320,
      83,   243,   323,    40,    88,    84,    78,    79,    83,    88,
     292,    90,    91,    76,    77,    86,    87,   338,   339,    85,
      86,    86,    87,    50,    51,   270,   332,    66,   270,    76,
      77,   337,    33,   332,    86,    87,   249,    84,   337,    88,
       6,    66,   348,    90,    84,     3,     6,   292,    83,   348,
      30,    83,    83,    83,   360,   361,     3,     4,     5,     6,
       7,   360,   361,     3,     6,    87,     6,     6,     6,    87,
      10,    65,    65,    84,    83,    83,    89,    87,    33,     6,
     325,   326,   327,   325,   326,   327,    43,    33,    65,    48,
     335,    31,     6,   335,     3,     4,     5,     6,     7,    33,
       6,    41,    42,     6,    83,    45,    53,    47,    33,    49,
      85,    58,    52,    66,    83,    44,    63,    84,    30,    29,
      67,    68,    69,    85,    48,    48,    73,    74,    75,    76,
      77,    52,   242,    80,    38,    55,    71,    84,   345,    61,
     326,    88,    89,   169,    53,   169,   325,   228,   201,    58,
     210,   269,   306,   212,    63,   323,   223,   129,    67,    68,
      69,    60,   223,    96,    73,    74,    75,    76,    77,   335,
     300,    80,   339,   249,    -1,    84,    -1,    -1,    -1,    88,
       3,     4,     5,     6,     7,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    76,    77,    -1,    -1,    80,    -1,    -1,
      -1,    84,    80,    -1,    -1,    88,    84,    -1,    -1,    -1,
      88
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    93,    94,     6,     0,    83,    84,    11,    15,
      96,    97,    98,     6,    95,   117,   117,     3,    99,   100,
      83,    16,   101,    85,    86,    83,    86,    97,     6,   102,
     103,    17,   106,     6,   100,    67,   103,     6,   107,   108,
      35,   109,     3,     4,     5,     6,     7,     8,    76,    77,
     104,   105,   116,    67,   108,   110,   111,   117,    38,    39,
     112,   113,   114,   190,   192,   193,   195,    83,   105,     6,
      26,    27,    28,    29,    33,    34,    40,    84,    90,   104,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   128,
     137,   138,   139,   111,    87,     6,     6,    10,   115,   173,
     114,    83,    83,    88,   125,    88,    30,    31,   117,   129,
     130,   131,   132,   118,    33,   117,     6,   140,    66,    83,
     118,    84,    87,   196,   196,     6,    31,    41,    42,    45,
      47,    49,    52,   100,   141,   142,   159,   163,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   181,
     182,   183,   184,   188,    36,    37,    97,   191,    36,    37,
      97,   194,     3,   120,   127,     6,   136,    87,    30,    83,
      83,   120,    85,   104,    83,    35,   117,   192,   195,   197,
     198,   199,     6,    87,     3,     4,     5,     6,     7,    53,
      58,    63,    67,    68,    69,    73,    74,    75,    80,    84,
      88,   116,   141,   148,   149,   150,   151,   153,   154,   156,
     157,   158,   159,   164,   100,   156,   174,   156,     6,   185,
       6,   141,   189,    87,    65,    88,    90,    91,   143,   144,
     145,   147,    65,    84,   160,    30,    83,    83,    83,    89,
      86,    89,    87,    33,   118,   131,   132,   117,    87,    83,
      85,     6,   150,   141,   156,    89,   156,   165,   166,   154,
      60,    61,    62,    78,    79,   152,    59,    76,    77,   155,
      33,   153,   160,    43,    46,    48,    65,    48,    86,   168,
     172,   156,   146,   156,     6,   144,   156,   156,   161,   162,
     167,   120,    33,     6,   136,   104,   133,   134,   135,    83,
      87,     6,   200,   198,    85,    66,    86,    89,   150,   151,
     135,   178,   179,   167,   156,   167,   156,   186,   167,   141,
      86,    89,    85,    86,   118,    33,    83,    86,    87,   200,
     156,   166,    87,    30,    83,    86,   180,    44,    50,    51,
     156,   162,   133,   134,   104,    84,   167,    30,    32,   179,
      30,    83,   167,   156,   187,   187,    85,   129,   167,    30,
      48,    48,    85,   167,   167
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 13:

    {		
						if ((yyvsp[(1) - (1)].intVal) < 0 || (yyvsp[(1) - (1)].intVal) > 9999) {
                			yyerror("Label debe estar entre 0 y 9999");
            			}
            			// $<unsignedIntVal>$ = $1;
					;}
    break;

  case 19:

    { /*constant_identifier este es cualquier constante identifier*/	;}
    break;



      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}





int yyerror(const char *s) 
{

   char mensaje[100];

   if ( !strcmp( s, "parse error" ) )
      strcpy( mensaje, "Error de sintaxis" );
   else
      strcpy( mensaje, s );

   printf("Error en linea %d columna %d: %s\n", fila,columna, mensaje);
   exit( 1 ); /* Sale del programa */

   return 0;
}

int main(int argc, char * argv[])
{
	char archivo_abierto = 0;
	if (argc > 1)
	{
		++argv; //apunta al siguiente elemento del arreglo
		yyin = fopen(argv[0], "rt");
		archivo_abierto = 1;
		if (!yyin)
		{
			printf("Archivo %s no puede ser abierto. Entrada tradicional.\n", argv[0]);
			yyin = stdin;
			archivo_abierto = 0;
		}		
	}
	else 
		yyin = stdin;

   #ifdef YYDEBUG
    	yydebug = 1;
   #endif
	yyparse();
	if(archivo_abierto)
		fclose(yyin);
	return 0;
}

