
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
# define YYDEBUG 0
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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   421

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  92
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  119
/* YYNRULES -- Number of rules.  */
#define YYNRULES  238
/* YYNRULES -- Number of states.  */
#define YYNSTATES  397

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
       0,     0,     3,     5,     7,    11,    17,    20,    26,    28,
      31,    38,    42,    43,    47,    49,    51,    54,    55,    58,
      60,    65,    67,    70,    72,    74,    76,    78,    80,    82,
      85,    86,    89,    91,    96,    99,   100,   103,   105,   110,
     112,   113,   116,   118,   120,   122,   124,   126,   128,   132,
     134,   136,   138,   140,   142,   144,   146,   148,   150,   152,
     154,   156,   158,   160,   162,   166,   170,   172,   174,   179,
     182,   184,   186,   188,   190,   192,   199,   203,   205,   208,
     212,   214,   217,   221,   226,   228,   231,   235,   237,   241,
     246,   253,   257,   259,   264,   270,   274,   276,   278,   282,
     284,   287,   290,   292,   294,   296,   299,   301,   304,   306,
     308,   310,   312,   316,   320,   322,   325,   327,   329,   331,
     333,   335,   337,   339,   342,   344,   346,   348,   352,   355,
     357,   361,   363,   365,   367,   369,   371,   373,   376,   378,
     382,   384,   386,   388,   390,   392,   396,   398,   400,   402,
     404,   406,   408,   410,   413,   415,   419,   423,   425,   427,
     429,   432,   436,   440,   442,   444,   448,   449,   452,   456,
     460,   462,   464,   466,   468,   470,   474,   478,   480,   483,
     486,   488,   490,   492,   494,   498,   502,   504,   506,   508,
     513,   520,   526,   533,   541,   548,   552,   554,   558,   562,
     564,   566,   568,   573,   578,   587,   596,   598,   600,   602,
     607,   611,   613,   618,   620,   622,   624,   627,   631,   636,
     638,   640,   642,   647,   653,   657,   661,   663,   665,   667,
     669,   674,   678,   680,   687,   690,   697,   699,   700
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      93,     0,    -1,    94,    -1,   206,    -1,    95,    83,    98,
      -1,    95,    83,    97,    83,    98,    -1,     9,     6,    -1,
       9,     6,    84,    96,    85,    -1,   118,    -1,    11,   118,
      -1,    99,   102,   107,   110,   113,   116,    -1,    15,   100,
      83,    -1,    -1,   100,    86,   101,    -1,   101,    -1,     3,
      -1,    16,   103,    -1,    -1,   103,   104,    -1,   104,    -1,
       6,    67,   105,    83,    -1,   106,    -1,   117,   106,    -1,
       3,    -1,     4,    -1,     5,    -1,     7,    -1,     8,    -1,
       6,    -1,    17,   108,    -1,    -1,   108,   109,    -1,   109,
      -1,     6,    67,   119,    83,    -1,    35,   111,    -1,    -1,
     111,   112,    -1,   112,    -1,   118,    87,   119,    83,    -1,
     114,    -1,    -1,   114,   115,    -1,   115,    -1,   195,    -1,
     198,    -1,   178,    -1,    76,    -1,    77,    -1,   118,    86,
       6,    -1,     6,    -1,   120,    -1,   128,    -1,   143,    -1,
       6,    -1,   121,    -1,   125,    -1,   127,    -1,   124,    -1,
     123,    -1,   122,    -1,    19,    -1,    20,    -1,    22,    -1,
      23,    -1,    84,   118,    85,    -1,   105,    66,   105,    -1,
     126,    -1,    18,    -1,    26,    88,     3,    89,    -1,    27,
     129,    -1,   129,    -1,   130,    -1,   141,    -1,   142,    -1,
     132,    -1,    28,    88,   131,    89,    33,   119,    -1,   131,
      86,   121,    -1,   121,    -1,    29,    30,    -1,    29,   133,
      30,    -1,   134,    -1,   134,    83,    -1,   134,    83,   136,
      -1,   134,    83,   136,    83,    -1,   136,    -1,   136,    83,
      -1,   134,    83,   135,    -1,   135,    -1,   118,    87,   119,
      -1,    31,   140,    33,   137,    -1,    31,     6,    87,   140,
      33,   137,    -1,   137,    83,   138,    -1,   138,    -1,   139,
      87,    84,    85,    -1,   139,    87,    84,   133,    85,    -1,
     139,    86,   105,    -1,   105,    -1,     6,    -1,    34,    33,
     121,    -1,    40,    -1,    33,   119,    -1,    90,   145,    -1,
     144,    -1,    53,    -1,     6,    -1,   147,   148,    -1,     6,
      -1,   148,   149,    -1,   149,    -1,   150,    -1,   152,    -1,
      90,    -1,    88,   151,    89,    -1,   151,    86,   161,    -1,
     161,    -1,    91,     6,    -1,   154,    -1,     7,    -1,    53,
      -1,     3,    -1,     4,    -1,     5,    -1,   146,    -1,    80,
     146,    -1,   153,    -1,   163,    -1,   169,    -1,    84,   161,
      85,    -1,    63,   155,    -1,     6,    -1,   156,   157,   155,
      -1,   155,    -1,    78,    -1,    79,    -1,    60,    -1,    61,
      -1,    62,    -1,   117,   159,    -1,   159,    -1,   159,   160,
     156,    -1,   156,    -1,    76,    -1,    77,    -1,    59,    -1,
     158,    -1,   158,   162,   158,    -1,    67,    -1,    68,    -1,
      69,    -1,    74,    -1,    73,    -1,    75,    -1,    58,    -1,
     164,   165,    -1,     6,    -1,    84,   166,    85,    -1,   166,
      86,   167,    -1,   167,    -1,   161,    -1,     6,    -1,    88,
      89,    -1,    88,   170,    89,    -1,   170,    86,   171,    -1,
     171,    -1,   161,    -1,   161,    66,   161,    -1,    -1,   101,
      87,    -1,   101,    87,   173,    -1,   101,    87,   177,    -1,
     173,    -1,   177,    -1,   174,    -1,   175,    -1,   176,    -1,
     146,    65,   161,    -1,   164,    65,   161,    -1,   168,    -1,
     168,   165,    -1,    41,   101,    -1,   178,    -1,   180,    -1,
     186,    -1,   193,    -1,    10,   179,    30,    -1,   179,    83,
     172,    -1,   172,    -1,   181,    -1,   182,    -1,    42,   161,
      43,   172,    -1,    42,   161,    43,   172,    44,   172,    -1,
      31,   161,    33,   183,    30,    -1,    31,   161,    33,   183,
     185,    30,    -1,    31,   161,    33,   183,   185,    83,    30,
      -1,    31,   161,    33,   183,    83,    30,    -1,   183,    86,
     184,    -1,   184,    -1,   139,    87,   172,    -1,    83,    32,
     172,    -1,   187,    -1,   188,    -1,   189,    -1,    45,   179,
      46,   161,    -1,    47,   161,    48,   172,    -1,    49,   190,
      65,   191,    50,   192,    48,   172,    -1,    49,   190,    65,
     191,    51,   192,    48,   172,    -1,     6,    -1,   161,    -1,
     161,    -1,    52,   194,    48,   172,    -1,   194,    86,   146,
      -1,   146,    -1,   197,    83,   196,    83,    -1,    98,    -1,
      36,    -1,    37,    -1,    39,     6,    -1,    39,     6,   201,
      -1,   200,    83,   199,    83,    -1,    98,    -1,    36,    -1,
      37,    -1,    38,     6,    87,     6,    -1,    38,     6,   201,
      87,     6,    -1,    84,   202,    85,    -1,   202,    83,   203,
      -1,   203,    -1,   204,    -1,   197,    -1,   200,    -1,    35,
     118,    87,   205,    -1,   118,    87,   205,    -1,     6,    -1,
     207,    83,   208,   210,    30,    91,    -1,    12,     6,    -1,
      13,   209,   102,   107,   110,   113,    -1,    97,    -1,    -1,
      14,   102,   107,   110,   113,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    48,    48,    49,    50,    51,    52,    53,    54,    55,
      59,    68,    69,    70,    71,    72,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    93,
      94,    95,    96,    97,    99,   100,   101,   102,   103,   105,
     106,   107,   108,   109,   110,   112,   114,   115,   116,   117,
     121,   122,   123,   124,   127,   128,   129,   131,   132,   133,
     136,   136,   136,   136,   137,   138,   140,   141,   143,   148,
     149,   151,   152,   153,   154,   157,   158,   159,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   185,   186,
     187,   191,   192,   193,   194,   198,   200,   202,   203,   204,
     205,   206,   210,   211,   212,   214,   220,   221,   223,   224,
     225,   226,   228,   229,   230,   231,   232,   233,   234,   235,
     237,   238,   239,   239,   239,   239,   239,   241,   242,   243,
     244,   245,   245,   245,   247,   248,   249,   249,   249,   249,
     249,   249,   249,   252,   253,   255,   256,   257,   258,   262,
     264,   265,   266,   267,   269,   270,   274,   275,   276,   277,
     278,   279,   281,   282,   283,   285,   286,   289,   290,   293,
     296,   297,   298,   299,   303,   304,   305,   308,   309,   313,
     314,   316,   317,   318,   319,   320,   321,   322,   323,   325,
     326,   327,   330,   333,   335,   336,   337,   338,   339,   341,
     342,   343,   349,   350,   351,   352,   353,   354,   357,   358,
     359,   360,   361,   362,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   380,   381,   382,   385,   385,   387
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
  "')'", "','", "':'", "'['", "']'", "'^'", "'.'", "$accept", "pascal",
  "program", "program_heading", "program_parameters", "uses_clause",
  "block", "label_declaration_part", "label_list", "label",
  "constant_declaration_part", "constant_declaration_list",
  "constant_declaration", "constant", "constant_identifier",
  "type_declaration_part", "type_declaration_list", "type_declaration",
  "variable_declaration_part", "variable_declaration_list",
  "variable_declaration", "procedure_and_function_declaration_part",
  "procedure_and_function_declaration_list",
  "procedure_and_function_declaration", "statement_part", "sign",
  "identifier_list", "type", "simple_type", "ordinal_type",
  "ordinal_type_identifier", "enumerated_type", "subrange_type",
  "real_type", "real_type_identifier", "string_type", "structured_type",
  "type_list", "array_type", "index_type_list", "record_type",
  "field_list", "fixed_part", "field_declaration", "variant_part",
  "variant_list", "variant", "constant_list", "tag_field_type", "set_type",
  "file_type", "pointer_type", "pointer_type_identifier", "base_type",
  "variable_reference", "variable_identifier", "qualifier_list",
  "qualifier", "index", "expression_list", "field_designator",
  "unsigned_constant", "unsigned_number", "factor", "term",
  "term_operator_list", "simple_expression",
  "simple_expression_term_operator_iterable",
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
  "type_identifier", "regular_unit", "unit_heading", "interface_part",
  "uses_clause_empty", "implementation_part", 0
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
       0,    92,    93,    93,    94,    94,    95,    95,    96,    97,
      98,    99,    99,   100,   100,   101,   102,   102,   103,   103,
     104,   105,   105,   105,   105,   105,   105,   105,   106,   107,
     107,   108,   108,   109,   110,   110,   111,   111,   112,   113,
     113,   114,   114,   115,   115,   116,   117,   117,   118,   118,
     119,   119,   119,   119,   120,   120,   120,   121,   121,   121,
     122,   122,   122,   122,   123,   124,   125,   126,   127,   128,
     128,   129,   129,   129,   129,   130,   131,   131,   132,   132,
     133,   133,   133,   133,   133,   133,   134,   134,   135,   136,
     136,   137,   137,   138,   138,   139,   139,   140,   141,   142,
     142,   143,   143,   144,   145,   146,   147,   148,   148,   149,
     149,   149,   150,   151,   151,   152,   153,   153,   153,   154,
     154,   154,   155,   155,   155,   155,   155,   155,   155,   155,
     156,   156,   157,   157,   157,   157,   157,   158,   158,   159,
     159,   160,   160,   160,   161,   161,   162,   162,   162,   162,
     162,   162,   162,   163,   164,   165,   166,   166,   167,   168,
     169,   169,   170,   170,   171,   171,   172,   172,   172,   172,
     172,   172,   173,   173,   173,   174,   174,   175,   175,   176,
     177,   177,   177,   177,   178,   179,   179,   180,   180,   181,
     181,   182,   182,   182,   182,   183,   183,   184,   185,   186,
     186,   186,   187,   188,   189,   189,   190,   191,   192,   193,
     194,   194,   195,   196,   196,   196,   197,   197,   198,   199,
     199,   199,   200,   200,   201,   202,   202,   203,   203,   203,
     204,   204,   205,   206,   207,   208,   209,   209,   210
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     3,     5,     2,     5,     1,     2,
       6,     3,     0,     3,     1,     1,     2,     0,     2,     1,
       4,     1,     2,     1,     1,     1,     1,     1,     1,     2,
       0,     2,     1,     4,     2,     0,     2,     1,     4,     1,
       0,     2,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     1,     1,     4,     2,
       1,     1,     1,     1,     1,     6,     3,     1,     2,     3,
       1,     2,     3,     4,     1,     2,     3,     1,     3,     4,
       6,     3,     1,     4,     5,     3,     1,     1,     3,     1,
       2,     2,     1,     1,     1,     2,     1,     2,     1,     1,
       1,     1,     3,     3,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     1,     1,     3,     2,     1,
       3,     1,     1,     1,     1,     1,     1,     2,     1,     3,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     3,     3,     1,     1,     1,
       2,     3,     3,     1,     1,     3,     0,     2,     3,     3,
       1,     1,     1,     1,     1,     3,     3,     1,     2,     2,
       1,     1,     1,     1,     3,     3,     1,     1,     1,     4,
       6,     5,     6,     7,     6,     3,     1,     3,     3,     1,
       1,     1,     4,     4,     8,     8,     1,     1,     1,     4,
       3,     1,     4,     1,     1,     1,     2,     3,     4,     1,
       1,     1,     4,     5,     3,     3,     1,     1,     1,     1,
       4,     3,     1,     6,     2,     6,     1,     0,     5
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     2,     0,     3,     0,     6,   234,
       1,    12,     0,     0,     0,     0,     0,     4,    17,   237,
       0,    49,     0,     8,     9,    15,     0,    14,    12,     0,
      30,   236,    17,    17,     0,     7,     0,    11,     0,     5,
       0,    16,    19,     0,    35,    30,    30,     0,    48,    13,
       0,    18,     0,    29,    32,     0,    40,    35,    35,   233,
      23,    24,    25,    28,    26,    27,    46,    47,     0,    21,
       0,     0,    31,    34,    37,     0,     0,     0,     0,    39,
      42,    43,     0,    44,     0,    40,    40,    20,    22,    53,
      67,    60,    61,    62,    63,     0,     0,     0,     0,     0,
       0,    99,   103,     0,     0,     0,     0,    50,    54,    59,
      58,    57,    55,    66,    56,    51,    70,    71,    74,    72,
      73,    52,   102,    36,     0,     0,   216,   166,    10,    45,
      41,    12,    12,   235,   238,     0,    69,     0,    78,     0,
       0,     0,    80,    87,    84,   100,     0,     0,   104,   101,
       0,    33,     0,     0,     0,     0,   217,   159,     0,     0,
       0,   166,     0,     0,     0,     0,     0,     0,     0,   177,
     186,   170,   172,   173,   174,   171,   180,     0,   181,   187,
     188,   182,   199,   200,   201,   183,   214,   215,   213,     0,
     220,   221,   219,     0,     0,    77,     0,    97,     0,     0,
      79,    81,    85,    98,    64,    65,    38,     0,     0,   228,
     229,     0,   226,   227,   222,     0,   119,   120,   121,   129,
     117,   118,     0,     0,     0,     0,     0,   122,   124,   116,
     131,   140,   144,   138,     0,   125,     0,   126,   179,     0,
       0,     0,   206,     0,   106,   211,     0,   167,     0,     0,
     111,     0,   105,   108,   109,   110,     0,     0,   178,   184,
     166,   212,   218,    68,     0,     0,     0,     0,    88,    86,
      82,     0,     0,     0,   224,   223,   128,   123,     0,   160,
     164,     0,   163,   137,   134,   135,   136,   132,   133,     0,
     152,   146,   147,   148,   150,   149,   151,     0,   143,   141,
     142,     0,     0,   153,   166,     0,   166,     0,   166,     0,
     168,   169,   175,     0,   114,   115,   107,   176,   158,     0,
     157,   185,    76,     0,    97,     0,    96,    89,    92,     0,
      83,     0,   232,   231,   225,   127,     0,     0,   161,   130,
     145,   139,     0,     0,   196,   189,   202,   203,   207,     0,
     209,   210,     0,   112,   155,     0,    75,     0,     0,     0,
       0,   230,   165,   162,   166,   191,     0,     0,     0,   166,
       0,     0,   113,   156,    90,    91,    95,     0,   197,   194,
     166,   195,   192,     0,   190,   208,     0,     0,    93,     0,
     198,   193,   166,   166,    94,   204,   205
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,    22,    16,    17,    18,    26,   165,
      30,    41,    42,   105,    69,    44,    53,    54,    56,    73,
      74,    78,    79,    80,   128,   226,   140,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   196,
     118,   141,   142,   143,   144,   327,   328,   329,   198,   119,
     120,   121,   122,   149,   227,   167,   252,   253,   254,   313,
     255,   228,   229,   230,   231,   289,   232,   233,   301,   280,
     297,   235,   236,   258,   319,   320,   169,   237,   281,   282,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   343,   344,   368,   181,   182,   183,   184,   243,   349,
     386,   185,   246,    81,   189,    82,    83,   193,    84,   155,
     211,   212,   213,   333,     6,     7,    20,    32,    34
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -285
static const yytype_int16 yypact[] =
{
      51,    28,    34,    59,  -285,   -11,  -285,     2,    32,  -285,
    -285,    36,    62,    93,    93,   140,    63,  -285,   134,   141,
     147,  -285,    70,    77,    77,  -285,   -38,  -285,   150,   171,
     162,  -285,   134,   134,   151,  -285,   178,  -285,   140,  -285,
     120,   171,  -285,   191,   164,   162,   162,   114,  -285,  -285,
     163,  -285,   146,   191,  -285,    93,    73,   164,   164,  -285,
    -285,  -285,  -285,  -285,  -285,  -285,  -285,  -285,   138,  -285,
     209,   296,  -285,    93,  -285,   -58,   219,   225,   226,    73,
    -285,  -285,   167,  -285,   173,    73,    73,  -285,  -285,   197,
    -285,  -285,  -285,  -285,  -285,   177,   254,   180,    38,   296,
     236,  -285,  -285,    93,   264,   205,   189,  -285,  -285,  -285,
    -285,  -285,  -285,  -285,  -285,  -285,  -285,  -285,  -285,  -285,
    -285,  -285,  -285,  -285,   296,   -48,   192,   358,  -285,  -285,
    -285,    56,    71,  -285,  -285,   281,  -285,   337,  -285,   279,
       3,   256,   206,  -285,   207,  -285,   337,    47,  -285,  -285,
     163,  -285,   208,    27,   286,   210,  -285,   -33,   274,   140,
     274,   358,   274,   287,   289,   211,   231,   101,   240,   222,
    -285,  -285,  -285,  -285,  -285,  -285,  -285,    -5,  -285,  -285,
    -285,  -285,  -285,  -285,  -285,  -285,  -285,  -285,  -285,   230,
    -285,  -285,  -285,   238,   237,  -285,   -19,   241,   298,   296,
    -285,    25,  -285,  -285,  -285,  -285,  -285,    93,   117,  -285,
    -285,    -3,  -285,  -285,  -285,   326,  -285,  -285,  -285,    57,
    -285,  -285,   169,   289,   274,   153,   169,  -285,  -285,  -285,
    -285,    75,   127,   -35,   300,  -285,   222,  -285,  -285,   291,
     -30,   290,  -285,   270,  -285,  -285,   -25,    78,   274,   274,
    -285,   333,   101,  -285,  -285,  -285,   274,   274,  -285,  -285,
     358,  -285,  -285,  -285,   337,   313,   341,   163,  -285,  -285,
     265,   121,   346,    27,  -285,  -285,  -285,  -285,   268,  -285,
     297,     9,  -285,   -35,  -285,  -285,  -285,  -285,  -285,   169,
    -285,  -285,  -285,  -285,  -285,  -285,  -285,   274,  -285,  -285,
    -285,   169,   163,  -285,   358,   274,   358,   274,   358,   289,
    -285,  -285,  -285,    15,  -285,  -285,  -285,  -285,  -285,   125,
    -285,  -285,  -285,   296,  -285,   322,  -285,   282,  -285,   132,
    -285,   346,  -285,  -285,  -285,  -285,   274,   274,  -285,  -285,
    -285,    75,   137,   -10,  -285,   323,  -285,  -285,  -285,   184,
    -285,  -285,   274,  -285,  -285,   274,  -285,   163,   163,   163,
     285,  -285,  -285,  -285,   358,  -285,    92,   163,    -4,   358,
     274,   274,  -285,  -285,   282,  -285,  -285,     6,  -285,  -285,
     358,  -285,  -285,   336,  -285,  -285,   327,   328,  -285,   292,
    -285,  -285,   358,   358,  -285,  -285,  -285
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -285,  -285,  -285,  -285,  -285,   351,   -14,  -285,  -285,    -8,
     212,  -285,   330,   -47,   304,   202,  -285,   325,   201,  -285,
     306,   175,  -285,   302,  -285,   -50,    -9,   -97,  -285,  -124,
    -285,  -285,  -285,  -285,  -285,  -285,  -285,   288,  -285,  -285,
    -285,     5,  -285,   182,   186,    31,    33,  -284,   119,  -285,
    -285,  -285,  -285,  -285,  -126,  -285,  -285,   142,  -285,  -285,
    -285,  -285,  -285,  -212,    89,  -285,    95,   170,  -285,  -143,
    -285,  -285,  -118,   157,  -285,    40,  -285,  -285,  -285,    60,
    -254,   154,  -285,  -285,  -285,   155,   320,   243,  -285,  -285,
    -285,  -285,    39,  -285,  -285,  -285,  -285,  -285,  -285,  -285,
      37,  -285,  -285,  -285,  -285,  -145,  -285,  -285,  -142,   283,
    -285,   139,  -285,    80,  -285,  -285,  -285,  -285,  -285
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -155
static const yytype_int16 yytable[] =
{
      70,   166,   145,    68,    23,    24,   321,    27,   209,   168,
     276,   210,    21,   195,    39,   234,   305,   239,   342,   241,
     365,    70,   203,   308,   298,   259,   382,   152,    36,   124,
      49,    21,  -154,    21,     8,   166,   153,   139,   245,   154,
       9,   299,   300,   168,    21,    37,    75,    14,    38,    70,
     345,    15,   347,   260,   350,  -106,   139,  -106,  -106,    10,
       1,   309,   207,     2,    75,    76,    77,   264,   138,   139,
     265,    15,    11,   366,    70,    19,   367,   339,   260,   383,
     273,   278,   274,   342,   157,    12,    15,    70,   127,    36,
     199,   388,   186,   187,   147,   337,    70,   277,   338,    21,
      70,   352,   268,   205,   353,   312,   314,   190,   191,   158,
     378,    76,    77,   317,   318,   384,    13,   188,   192,   159,
     160,   166,   379,   161,   380,   162,   390,   163,   209,   168,
     164,   210,   204,    36,   166,   284,   285,   286,   395,   396,
     322,  -154,   168,    25,   208,  -106,    28,  -106,  -106,    70,
      29,   238,    14,   287,   288,    35,   216,   217,   218,   219,
     220,    33,   346,    36,   348,    15,    60,    61,    62,    63,
      64,    65,   216,   217,   218,   219,   220,    40,   166,    43,
     166,    47,   166,   351,    48,   290,   168,    50,   168,   249,
     168,   250,   251,   362,   291,   292,   293,    52,   271,    55,
     294,   295,   296,    36,   272,    59,   221,    36,   331,   372,
     354,   355,   318,    71,    70,    63,   222,    70,   359,   360,
     326,    87,   221,   359,   364,   125,   356,   385,   385,    66,
      67,   126,   222,   223,   370,   371,   127,   224,   166,    66,
      67,   225,   279,   166,    45,    46,   168,    57,    58,   223,
     131,   168,    70,   224,   166,   326,   132,   225,    85,    86,
     133,   134,   168,   -28,   208,   135,   166,   166,   137,   146,
     148,   150,   151,    70,   168,   168,   153,   216,   217,   218,
     219,   220,    97,    98,   194,   197,   200,    99,   100,   201,
     202,   206,   214,   242,   101,   244,   248,   215,   247,    60,
      61,    62,    89,    64,    65,   256,   257,    70,    70,    70,
     326,   326,   376,   261,    90,    91,    92,    70,    93,    94,
     326,   262,    95,    96,    97,    98,   263,   221,   266,    99,
     100,   267,   275,   302,   304,   307,   101,   222,   306,   315,
      60,    61,    62,    63,    64,    65,   323,   324,   330,   102,
      66,    67,   332,   335,   223,   357,    91,    92,   224,    93,
      94,    25,   225,   336,   157,   358,   391,   369,   127,   377,
      31,    51,    66,    67,    88,   392,   393,   394,    72,   123,
     103,   130,   389,   269,   136,   325,   104,   270,   374,   158,
     341,   375,   340,   303,   316,   373,   283,   363,   129,   159,
     160,   310,   311,   161,   240,   162,   381,   163,   387,   156,
     164,   361,   334,    66,    67,     0,     0,     0,     0,     0,
       0,   103
};

static const yytype_int16 yycheck[] =
{
      50,   127,    99,    50,    13,    14,   260,    15,   153,   127,
     222,   153,     6,   137,    28,   158,    46,   160,   302,   162,
      30,    71,   146,    48,    59,    30,    30,   124,    86,    87,
      38,     6,    65,     6,     6,   161,    84,    31,   164,    87,
       6,    76,    77,   161,     6,    83,    55,    11,    86,    99,
     304,    15,   306,    83,   308,    88,    31,    90,    91,     0,
       9,    86,    35,    12,    73,    38,    39,    86,    30,    31,
      89,    15,    83,    83,   124,    13,    86,   289,    83,    83,
      83,   224,    85,   367,     6,    83,    15,   137,    10,    86,
      87,    85,    36,    37,   103,    86,   146,   223,    89,     6,
     150,    86,   199,   150,    89,   248,   249,    36,    37,    31,
     364,    38,    39,   256,   257,   369,    84,   131,   132,    41,
      42,   247,    30,    45,    32,    47,   380,    49,   273,   247,
      52,   273,    85,    86,   260,    60,    61,    62,   392,   393,
     264,    84,   260,     3,   153,    88,    83,    90,    91,   199,
      16,   159,    11,    78,    79,    85,     3,     4,     5,     6,
       7,    14,   305,    86,   307,    15,     3,     4,     5,     6,
       7,     8,     3,     4,     5,     6,     7,     6,   304,    17,
     306,    30,   308,   309,     6,    58,   304,    67,   306,    88,
     308,    90,    91,   336,    67,    68,    69,     6,   207,    35,
      73,    74,    75,    86,    87,    91,    53,    86,    87,   352,
      85,    86,   355,    67,   264,     6,    63,   267,    86,    87,
     267,    83,    53,    86,    87,     6,   323,   370,   371,    76,
      77,     6,    63,    80,    50,    51,    10,    84,   364,    76,
      77,    88,    89,   369,    32,    33,   364,    45,    46,    80,
      83,   369,   302,    84,   380,   302,    83,    88,    57,    58,
      85,    86,   380,    66,   273,    88,   392,   393,    88,    33,
       6,    66,    83,   323,   392,   393,    84,     3,     4,     5,
       6,     7,    28,    29,     3,     6,    30,    33,    34,    83,
      83,    83,     6,     6,    40,     6,    65,    87,    87,     3,
       4,     5,     6,     7,     8,    65,    84,   357,   358,   359,
     357,   358,   359,    83,    18,    19,    20,   367,    22,    23,
     367,    83,    26,    27,    28,    29,    89,    53,    87,    33,
      34,    33,     6,    33,    43,    65,    40,    63,    48,     6,
       3,     4,     5,     6,     7,     8,    33,     6,    83,    53,
      76,    77,     6,    85,    80,    33,    19,    20,    84,    22,
      23,     3,    88,    66,     6,    83,    30,    44,    10,    84,
      19,    41,    76,    77,    70,    48,    48,    85,    53,    73,
      84,    79,   377,   201,    96,   266,    90,   201,   357,    31,
     301,   358,   297,   236,   252,   355,   226,   337,    78,    41,
      42,   247,   247,    45,   161,    47,   367,    49,   371,   126,
      52,   331,   273,    76,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    84
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    12,    93,    94,    95,   206,   207,     6,     6,
       0,    83,    83,    84,    11,    15,    97,    98,    99,    13,
     208,     6,    96,   118,   118,     3,   100,   101,    83,    16,
     102,    97,   209,    14,   210,    85,    86,    83,    86,    98,
       6,   103,   104,    17,   107,   102,   102,    30,     6,   101,
      67,   104,     6,   108,   109,    35,   110,   107,   107,    91,
       3,     4,     5,     6,     7,     8,    76,    77,   105,   106,
     117,    67,   109,   111,   112,   118,    38,    39,   113,   114,
     115,   195,   197,   198,   200,   110,   110,    83,   106,     6,
      18,    19,    20,    22,    23,    26,    27,    28,    29,    33,
      34,    40,    53,    84,    90,   105,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   132,   141,
     142,   143,   144,   112,    87,     6,     6,    10,   116,   178,
     115,    83,    83,   113,   113,    88,   129,    88,    30,    31,
     118,   133,   134,   135,   136,   119,    33,   118,     6,   145,
      66,    83,   119,    84,    87,   201,   201,     6,    31,    41,
      42,    45,    47,    49,    52,   101,   146,   147,   164,   168,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   186,   187,   188,   189,   193,    36,    37,    98,   196,
      36,    37,    98,   199,     3,   121,   131,     6,   140,    87,
      30,    83,    83,   121,    85,   105,    83,    35,   118,   197,
     200,   202,   203,   204,     6,    87,     3,     4,     5,     6,
       7,    53,    63,    80,    84,    88,   117,   146,   153,   154,
     155,   156,   158,   159,   161,   163,   164,   169,   101,   161,
     179,   161,     6,   190,     6,   146,   194,    87,    65,    88,
      90,    91,   148,   149,   150,   152,    65,    84,   165,    30,
      83,    83,    83,    89,    86,    89,    87,    33,   119,   135,
     136,   118,    87,    83,    85,     6,   155,   146,   161,    89,
     161,   170,   171,   159,    60,    61,    62,    78,    79,   157,
      58,    67,    68,    69,    73,    74,    75,   162,    59,    76,
      77,   160,    33,   165,    43,    46,    48,    65,    48,    86,
     173,   177,   161,   151,   161,     6,   149,   161,   161,   166,
     167,   172,   121,    33,     6,   140,   105,   137,   138,   139,
      83,    87,     6,   205,   203,    85,    66,    86,    89,   155,
     158,   156,   139,   183,   184,   172,   161,   172,   161,   191,
     172,   146,    86,    89,    85,    86,   119,    33,    83,    86,
      87,   205,   161,   171,    87,    30,    83,    86,   185,    44,
      50,    51,   161,   167,   137,   138,   105,    84,   172,    30,
      32,   184,    30,    83,   172,   161,   192,   192,    85,   133,
     172,    30,    48,    48,    85,   172,   172
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
        case 2:

    {printf("Successful program");;}
    break;

  case 3:

    {printf("Successful program");;}
    break;

  case 15:

    {		
						if ((yyvsp[(1) - (1)].intVal) < 0 || (yyvsp[(1) - (1)].intVal) > 9999) {
                			yyerror("Label debe estar entre 0 y 9999");
            			}
            			// $<unsignedIntVal>$ = $1;
					;}
    break;

  case 21:

    { /*constant_identifier este es cualquier constante identifier*/	;}
    break;

  case 184:

    {printf("regla compound_statement\n");}
    break;

  case 238:

    {printf("regla WAZ\n");}
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

   //#ifdef YYDEBUG
   // 	yydebug = 1;
   //#endif
	yyparse();
	if(archivo_abierto)
		fclose(yyin);
	return 0;
}

