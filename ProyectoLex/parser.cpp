
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
#define YYLAST   516

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  92
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  115
/* YYNRULES -- Number of rules.  */
#define YYNRULES  237
/* YYNRULES -- Number of states.  */
#define YYNSTATES  379

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
      85,    87,    92,    95,    96,    99,   101,   106,   108,   111,
     113,   115,   117,   119,   121,   123,   127,   129,   131,   133,
     135,   137,   139,   141,   143,   145,   147,   149,   153,   157,
     159,   161,   166,   168,   171,   173,   175,   177,   179,   181,
     183,   190,   194,   196,   199,   203,   205,   208,   212,   217,
     219,   222,   226,   228,   232,   237,   244,   248,   250,   255,
     261,   265,   267,   269,   273,   275,   278,   281,   283,   285,
     288,   290,   292,   295,   297,   299,   301,   303,   305,   309,
     313,   315,   318,   320,   322,   324,   326,   328,   330,   332,
     334,   336,   338,   341,   343,   345,   347,   351,   354,   358,
     360,   362,   364,   366,   368,   370,   373,   375,   379,   381,
     383,   385,   387,   389,   392,   394,   396,   398,   400,   402,
     404,   406,   408,   411,   413,   417,   421,   423,   425,   427,
     429,   431,   433,   436,   440,   444,   446,   448,   452,   453,
     456,   460,   464,   466,   468,   470,   472,   474,   478,   482,
     484,   487,   490,   492,   494,   496,   498,   502,   506,   508,
     510,   512,   517,   524,   530,   537,   545,   552,   556,   558,
     562,   566,   568,   570,   572,   577,   582,   591,   600,   602,
     604,   606,   611,   615,   617,   622,   624,   626,   628,   631,
     635,   640,   642,   644,   646,   651,   657,   659,   661,   663,
     667,   671,   673,   675,   677,   679,   684,   688
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
      -1,   117,    87,   118,    83,    -1,   113,    -1,   113,   114,
      -1,   114,    -1,   195,    -1,   198,    -1,   178,    -1,    76,
      -1,    77,    -1,   117,    86,     6,    -1,     6,    -1,   119,
      -1,   127,    -1,   142,    -1,   120,    -1,   124,    -1,   126,
      -1,   123,    -1,   122,    -1,   121,    -1,     6,    -1,    84,
     117,    85,    -1,   104,    66,   104,    -1,   125,    -1,     6,
      -1,    26,    88,     3,    89,    -1,     6,    -1,    27,   128,
      -1,   128,    -1,     6,    -1,   129,    -1,   140,    -1,   141,
      -1,   131,    -1,    28,    88,   130,    89,    33,   118,    -1,
     130,    86,   120,    -1,   120,    -1,    29,    30,    -1,    29,
     132,    30,    -1,   133,    -1,   133,    83,    -1,   133,    83,
     135,    -1,   133,    83,   135,    83,    -1,   135,    -1,   135,
      83,    -1,   133,    83,   134,    -1,   134,    -1,   117,    87,
     118,    -1,    31,   139,    33,   136,    -1,    31,     6,    87,
     139,    33,   136,    -1,   136,    83,   137,    -1,   137,    -1,
     138,    87,    84,    85,    -1,   138,    87,    84,   132,    85,
      -1,   138,    86,   104,    -1,   104,    -1,     6,    -1,    34,
      33,   120,    -1,    40,    -1,    33,   118,    -1,    90,   143,
      -1,     6,    -1,     6,    -1,   145,   146,    -1,   145,    -1,
       6,    -1,   146,   147,    -1,   147,    -1,   148,    -1,   150,
      -1,   151,    -1,   152,    -1,    88,   149,    89,    -1,   149,
      86,   161,    -1,   161,    -1,    91,     6,    -1,    90,    -1,
      90,    -1,   154,    -1,     7,    -1,   105,    -1,    53,    -1,
       3,    -1,     4,    -1,     5,    -1,   144,    -1,    80,   144,
      -1,   153,    -1,   163,    -1,   169,    -1,    84,   161,    85,
      -1,    63,   155,    -1,   156,   157,   155,    -1,   155,    -1,
      78,    -1,    79,    -1,    60,    -1,    61,    -1,    62,    -1,
     116,   159,    -1,   159,    -1,   159,   160,   156,    -1,   156,
      -1,    76,    -1,    77,    -1,    59,    -1,   158,    -1,   162,
     158,    -1,    67,    -1,    68,    -1,    69,    -1,    74,    -1,
      73,    -1,    75,    -1,    58,    -1,   164,    -1,   164,   165,
      -1,     6,    -1,    84,   166,    85,    -1,   166,    86,   167,
      -1,   167,    -1,   161,    -1,   144,    -1,   168,    -1,   164,
      -1,     6,    -1,    88,    89,    -1,    88,   170,    89,    -1,
     170,    86,   171,    -1,   171,    -1,   161,    -1,   161,    66,
     161,    -1,    -1,   100,    87,    -1,   100,    87,   173,    -1,
     100,    87,   177,    -1,   173,    -1,   177,    -1,   174,    -1,
     175,    -1,   176,    -1,   144,    65,   161,    -1,   164,    65,
     161,    -1,   168,    -1,   168,   165,    -1,    41,   100,    -1,
     178,    -1,   180,    -1,   186,    -1,   193,    -1,    10,   179,
      30,    -1,   179,    83,   172,    -1,   172,    -1,   181,    -1,
     182,    -1,    42,   161,    43,   172,    -1,    42,   161,    43,
     172,    44,   172,    -1,    31,   161,    33,   183,    30,    -1,
      31,   161,    33,   183,   185,    30,    -1,    31,   161,    33,
     183,   185,    83,    30,    -1,    31,   161,    33,   183,    83,
      30,    -1,   183,    86,   184,    -1,   184,    -1,   138,    87,
     172,    -1,    83,    32,   172,    -1,   187,    -1,   188,    -1,
     189,    -1,    45,   179,    46,   161,    -1,    47,   161,    48,
     172,    -1,    49,   190,    65,   191,    50,   192,    48,   172,
      -1,    49,   190,    65,   191,    51,   192,    48,   172,    -1,
       6,    -1,   161,    -1,   161,    -1,    52,   194,    48,   172,
      -1,   194,    86,   144,    -1,   144,    -1,   197,    83,   196,
      83,    -1,    97,    -1,    36,    -1,    37,    -1,    39,     6,
      -1,    39,     6,   202,    -1,   200,    83,   199,    83,    -1,
      97,    -1,    36,    -1,    37,    -1,    38,     6,    87,   201,
      -1,    38,     6,   202,    87,   201,    -1,   121,    -1,   125,
      -1,   121,    -1,    84,   203,    85,    -1,   203,    83,   204,
      -1,   204,    -1,   205,    -1,   197,    -1,   200,    -1,    35,
     117,    87,   206,    -1,   117,    87,   206,    -1,     6,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    48,    48,    49,    50,    51,    52,    53,    57,    66,
      67,    68,    69,    70,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    91,    92,    93,
      94,    95,    97,    98,    99,   100,   101,   103,   104,   105,
     106,   107,   109,   111,   112,   113,   114,   118,   119,   120,
     123,   124,   125,   127,   128,   129,   132,   133,   134,   136,
     137,   139,   140,   144,   145,   146,   147,   148,   149,   150,
     153,   154,   155,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   181,   182,   183,   187,   188,   190,   194,
     195,   196,   198,   199,   200,   201,   202,   203,   205,   206,
     207,   209,   210,   211,   215,   216,   217,   218,   219,   220,
     221,   223,   224,   225,   226,   227,   228,   229,   231,   232,
     233,   233,   233,   233,   233,   235,   236,   237,   238,   239,
     239,   239,   241,   242,   243,   243,   243,   243,   243,   243,
     243,   245,   246,   247,   249,   250,   251,   252,   253,   254,
     255,   256,   258,   259,   260,   261,   263,   264,   268,   269,
     270,   271,   272,   273,   275,   276,   277,   279,   280,   283,
     284,   287,   290,   291,   292,   293,   297,   298,   299,   302,
     303,   307,   308,   310,   311,   312,   313,   314,   315,   316,
     317,   319,   320,   321,   324,   327,   329,   330,   331,   332,
     333,   335,   336,   337,   343,   344,   345,   346,   347,   348,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368
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
  "'<'", "'>'", "\"<>\"", "\"<=\"", "\">=\"", "RIGHT", "LEFT", "COMP",
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
  "ordinal_type_identifier", "enumerated_type", "subrange_type",
  "real_type", "real_type_identifier", "string_type", "structured_type",
  "type_list", "array_type", "index_type_list", "record_type",
  "field_list", "fixed_part", "field_declaration", "variant_part",
  "variant_list", "variant", "constant_list", "tag_field_type", "set_type",
  "file_type", "pointer_type", "base_type", "variable_reference",
  "variable_identifier", "qualifier_list", "qualifier", "index",
  "expression_list", "field_designator", "file_buffer_symbol",
  "pointer_object_symbol", "unsigned_constant", "unsigned_number",
  "factor", "term", "term_operator_list", "simple_expression",
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
  "result_type", "formal_parameter_list", "formal_parameter_list_iterable",
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
     107,   108,   109,   109,   110,   110,   111,   112,   113,   113,
     114,   114,   115,   116,   116,   117,   117,   118,   118,   118,
     119,   119,   119,   120,   120,   120,   121,   122,   123,   124,
     125,   126,   126,   127,   127,   127,   128,   128,   128,   128,
     129,   130,   130,   131,   131,   132,   132,   132,   132,   132,
     132,   133,   133,   134,   135,   135,   136,   136,   137,   137,
     138,   138,   139,   140,   141,   141,   142,   142,   143,   144,
     144,   145,   146,   146,   147,   147,   147,   147,   148,   149,
     149,   150,   151,   152,   153,   153,   153,   153,   154,   154,
     154,   155,   155,   155,   155,   155,   155,   155,   156,   156,
     157,   157,   157,   157,   157,   158,   158,   159,   159,   160,
     160,   160,   161,   161,   162,   162,   162,   162,   162,   162,
     162,   163,   163,   164,   165,   166,   166,   167,   167,   167,
     167,   168,   169,   169,   170,   170,   171,   171,   172,   172,
     172,   172,   172,   172,   173,   173,   173,   174,   174,   175,
     175,   176,   177,   177,   177,   177,   178,   179,   179,   180,
     180,   181,   181,   182,   182,   182,   182,   183,   183,   184,
     185,   186,   186,   186,   187,   188,   189,   189,   190,   191,
     192,   193,   194,   194,   195,   196,   196,   196,   197,   197,
     198,   199,   199,   199,   200,   200,   201,   201,   201,   202,
     203,   203,   204,   204,   204,   205,   205,   206
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     5,     2,     5,     1,     2,     6,     3,
       0,     3,     1,     1,     2,     0,     2,     1,     4,     1,
       2,     1,     1,     1,     1,     1,     1,     2,     0,     2,
       1,     4,     2,     0,     2,     1,     4,     1,     2,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     1,
       1,     4,     1,     2,     1,     1,     1,     1,     1,     1,
       6,     3,     1,     2,     3,     1,     2,     3,     4,     1,
       2,     3,     1,     3,     4,     6,     3,     1,     4,     5,
       3,     1,     1,     3,     1,     2,     2,     1,     1,     2,
       1,     1,     2,     1,     1,     1,     1,     1,     3,     3,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     1,     3,     2,     3,     1,
       1,     1,     1,     1,     1,     2,     1,     3,     1,     1,
       1,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     3,     3,     1,     1,     1,     1,
       1,     1,     2,     3,     3,     1,     1,     3,     0,     2,
       3,     3,     1,     1,     1,     1,     1,     3,     3,     1,
       2,     2,     1,     1,     1,     1,     3,     3,     1,     1,
       1,     4,     6,     5,     6,     7,     6,     3,     1,     3,
       3,     1,     1,     1,     4,     4,     8,     8,     1,     1,
       1,     4,     3,     1,     4,     1,     1,     1,     2,     3,
       4,     1,     1,     1,     4,     5,     1,     1,     1,     3,
       3,     1,     1,     1,     1,     4,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     4,     1,    10,     0,     0,     0,
       0,     2,    15,    46,     0,     6,     7,    13,     0,    12,
      10,     0,    28,     5,     0,     9,     0,     3,     0,    14,
      17,     0,    33,    45,    11,     0,    16,     0,    27,    30,
       0,     0,    21,    22,    23,    26,    24,    25,    43,    44,
       0,    19,     0,     0,    29,    32,    35,     0,     0,     0,
       0,    37,    39,    40,     0,    41,     0,    18,    20,    56,
       0,     0,     0,     0,     0,     0,    94,     0,     0,     0,
       0,    47,    50,    55,    54,    53,    51,    59,    52,    48,
      64,    66,    69,    67,    68,    49,    34,     0,     0,   218,
     168,     8,    42,    38,    10,    10,     0,    63,     0,    73,
       0,     0,     0,    75,    82,    79,    95,     0,     0,    98,
      96,     0,    31,     0,     0,     0,     0,   219,   161,     0,
       0,     0,   168,     0,     0,     0,     0,     0,   100,     0,
     179,   188,   172,   174,   175,   176,   173,   182,     0,   183,
     189,   190,   184,   201,   202,   203,   185,   216,   217,   215,
       0,   222,   223,   221,     0,     0,    56,    72,     0,    92,
       0,     0,    74,    76,    80,    93,    57,    58,    36,     0,
       0,   233,   234,     0,   231,   232,    56,   226,   227,   224,
       0,   118,   119,   120,    26,   115,   117,   150,     0,   144,
     145,   146,   148,   147,   149,     0,     0,     0,   116,     0,
     121,   123,   114,   129,   138,   142,   136,     0,     0,   124,
     151,   125,   181,     0,     0,     0,   208,     0,   101,   213,
       0,   169,     0,     0,   112,     0,    99,   103,   104,   105,
     106,   107,     0,     0,   180,   186,   168,   214,   220,    61,
       0,     0,     0,     0,    83,    81,    77,     0,     0,     0,
     229,   225,   127,   122,     0,   162,   166,     0,   165,   135,
     132,   133,   134,   130,   131,     0,   141,   139,   140,     0,
       0,   143,   152,   168,     0,   168,     0,   168,     0,   170,
     171,   177,     0,   110,   111,   102,   178,    26,   121,   157,
     151,     0,   156,   159,   187,    71,     0,    92,     0,    91,
      84,    87,     0,    78,     0,   237,   236,   230,   126,     0,
       0,   163,   128,   137,     0,     0,   198,   191,   204,   205,
     209,     0,   211,   212,     0,   108,   154,     0,    70,     0,
       0,     0,     0,   235,   167,   164,   168,   193,     0,     0,
       0,   168,     0,     0,   109,   155,    85,    86,    90,     0,
     199,   196,   168,   197,   194,     0,   192,   210,     0,     0,
      88,     0,   200,   195,   168,   168,    89,   206,   207
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    14,    10,    11,    12,    18,   136,    22,
      29,    30,    79,   208,    32,    38,    39,    41,    55,    56,
      60,    61,    62,   101,   209,   111,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,   168,    92,
     112,   113,   114,   115,   310,   311,   312,   170,    93,    94,
      95,   120,   210,   138,   236,   237,   238,   292,   239,   240,
     241,   211,   212,   213,   214,   275,   215,   216,   279,   266,
     218,   219,   220,   282,   301,   302,   140,   221,   267,   268,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   325,   326,   350,   152,   153,   154,   155,   227,   331,
     368,   156,   230,    63,   160,    64,    65,   164,    66,   189,
     126,   183,   184,   185,   316
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -261
static const yytype_int16 yypact[] =
{
      43,    36,    68,    -7,    -4,  -261,    21,    78,    78,    99,
      26,  -261,   104,  -261,    30,    57,    57,  -261,    27,  -261,
     135,   154,   149,  -261,   166,  -261,    99,  -261,   118,   154,
    -261,   189,   168,  -261,  -261,   120,  -261,   138,   189,  -261,
      78,    54,  -261,  -261,  -261,  -261,  -261,  -261,  -261,  -261,
     131,  -261,   201,   294,  -261,    78,  -261,    52,   211,   213,
     215,    54,  -261,  -261,   145,  -261,   147,  -261,  -261,   169,
     155,   193,   156,    44,   294,   206,  -261,    78,   240,   186,
     174,  -261,  -261,  -261,  -261,  -261,  -261,  -261,  -261,  -261,
    -261,  -261,  -261,  -261,  -261,  -261,  -261,   294,   -36,   176,
     383,  -261,  -261,  -261,     9,    18,   258,  -261,    53,  -261,
     256,    84,   233,   181,  -261,   183,  -261,    53,    94,  -261,
    -261,   120,  -261,   185,    31,   263,   187,  -261,    67,   376,
      99,   376,   383,   376,   264,   267,   188,   214,    71,   216,
     196,  -261,  -261,  -261,  -261,  -261,  -261,  -261,     0,  -261,
    -261,  -261,  -261,  -261,  -261,  -261,  -261,  -261,  -261,  -261,
     199,  -261,  -261,  -261,   202,   195,   169,  -261,    28,   205,
     253,   294,  -261,    41,  -261,  -261,  -261,  -261,  -261,    78,
     107,  -261,  -261,    15,  -261,  -261,  -261,  -261,  -261,  -261,
     263,  -261,  -261,  -261,    63,  -261,  -261,  -261,   413,  -261,
    -261,  -261,  -261,  -261,  -261,   267,   376,   284,  -261,   413,
    -261,  -261,  -261,  -261,   121,  -261,    29,   260,   171,  -261,
     196,  -261,  -261,   251,   -18,   255,  -261,   242,  -261,  -261,
     -22,   464,   376,   376,  -261,   302,    71,  -261,  -261,  -261,
    -261,  -261,   376,   404,  -261,  -261,   383,  -261,  -261,  -261,
      53,   279,   307,   120,  -261,  -261,   235,   115,   318,    31,
    -261,  -261,  -261,  -261,   241,  -261,   265,    98,  -261,    29,
    -261,  -261,  -261,  -261,  -261,   413,  -261,  -261,  -261,   413,
     120,  -261,  -261,   383,   376,   383,   376,   383,   267,  -261,
    -261,  -261,   103,  -261,  -261,  -261,  -261,    63,  -261,  -261,
     196,   124,  -261,  -261,  -261,  -261,   294,  -261,   296,  -261,
     247,  -261,   125,  -261,   318,  -261,  -261,  -261,  -261,   376,
     376,  -261,  -261,   121,   151,    33,  -261,   288,  -261,  -261,
    -261,   191,  -261,  -261,   376,  -261,  -261,   404,  -261,   120,
     120,   120,   249,  -261,  -261,  -261,   383,  -261,   101,   120,
      13,   383,   376,   376,  -261,  -261,   247,  -261,  -261,    10,
    -261,  -261,   383,  -261,  -261,   305,  -261,  -261,   290,   291,
    -261,   259,  -261,  -261,   383,   383,  -261,  -261,  -261
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -261,  -261,  -261,  -261,  -261,    -1,  -261,  -261,     5,  -261,
    -261,   311,   -24,   -35,  -261,  -261,   298,  -261,  -261,   286,
    -261,  -261,   282,  -261,   -30,    -6,   -70,  -261,  -102,  -100,
    -261,  -261,  -261,   -96,  -261,  -261,   274,  -261,  -261,  -261,
     -13,  -261,   175,   177,    16,    14,  -260,    97,  -261,  -261,
    -261,  -261,   -97,  -261,  -261,   126,  -261,  -261,  -261,  -261,
    -261,  -261,  -261,  -176,    77,  -261,   148,   158,  -261,  -121,
    -261,  -261,   -79,   223,  -261,    32,  -230,  -261,  -261,    45,
    -206,   143,  -261,  -261,  -261,   144,   316,   245,  -261,  -261,
    -261,  -261,    38,  -261,  -261,  -261,  -261,  -261,  -261,  -261,
      35,  -261,  -261,  -261,  -261,  -117,  -261,  -261,  -115,   200,
     292,  -261,   133,  -261,    80
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -154
static const yytype_int16 yytable[] =
{
      51,    15,    16,   137,   116,    52,   167,   181,   217,   182,
     223,    50,   225,   303,    19,   175,    13,    68,    51,    27,
     324,   139,   262,    52,     9,   187,   287,   123,   284,   188,
     245,    34,     8,     9,    57,   137,     9,    13,   229,    51,
     304,   110,     4,   364,    52,   157,   158,    13,   124,    57,
      13,   125,     1,   139,   161,   162,    42,    43,    44,   166,
      46,    47,    51,   347,   288,   246,   179,    52,     5,    58,
      59,   118,   110,    51,   109,   110,     6,   327,    52,   329,
       7,   332,    51,   246,    13,   264,    51,    52,   276,   324,
     187,    52,    58,    59,   188,   370,   365,   177,   259,   322,
     260,   254,    17,   159,   163,   277,   278,   303,   263,    20,
      25,   291,   293,    26,   250,    23,   348,   251,   180,   349,
      21,   296,   299,    42,    43,    44,    45,    46,    47,    48,
      49,   361,  -101,   362,   137,   222,    51,    77,    24,    97,
     360,    52,   181,    24,   182,   366,   298,  -153,   305,   137,
       9,  -101,   139,  -101,  -101,  -101,   372,  -101,  -101,   233,
      28,   234,   235,   328,   300,   330,    31,   139,   377,   378,
      24,   171,    33,   257,   191,   192,   193,   194,   195,   176,
      24,   270,   271,   272,   320,    35,   137,   321,   137,   334,
     137,   333,   335,    24,   258,    37,    48,    49,   344,   273,
     274,    24,   314,    40,   139,    53,   139,    45,   139,   336,
     337,   341,   342,   354,    67,    51,   299,    98,    51,    99,
      52,    72,    73,    52,   196,   100,    74,    75,   104,   309,
     105,   367,   367,    76,   198,   -26,   338,   341,   346,   117,
     298,   352,   353,   106,   108,    51,   119,    48,    49,   137,
      52,   205,   121,   180,   137,   206,   309,   122,   300,   207,
     124,   165,   169,   172,   173,   137,   174,   139,   178,   186,
     226,    51,   139,   228,   190,   231,    52,   137,   137,   232,
     243,   242,   247,   139,   249,   248,   253,   191,   192,   193,
     194,   195,   252,   280,   283,   139,   139,    42,    43,    44,
      69,    46,    47,   285,    51,    51,    51,   286,   294,    52,
      52,    52,   306,   307,    51,   309,   309,   358,   313,    52,
      70,    71,    72,    73,   315,   309,   318,    74,    75,   339,
     340,   319,   351,   359,    76,   373,    54,   196,   374,   375,
      36,    96,   197,   103,   376,   107,   371,   198,   255,   308,
     256,   199,   200,   201,   357,   356,   323,   202,   203,   204,
      48,    49,   295,   244,   205,   345,   281,   269,   206,   355,
      48,    49,   207,   265,   289,   290,   102,   224,    77,   191,
     192,   193,   194,   195,    78,     0,    17,   363,   369,   128,
     261,   127,   317,   100,   343,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   191,   192,   193,
     297,   195,     0,     0,   129,     0,   191,   192,   193,   194,
     195,     0,     0,     0,   130,   131,     0,     0,   132,   196,
     133,     0,   134,     0,   197,   135,     0,     0,     0,   198,
       0,     0,     0,   199,   200,   201,     0,     0,     0,   202,
     203,   204,    48,    49,     0,     0,   205,   196,     0,     0,
     206,     0,   197,     0,   207,     0,   196,   198,     0,     0,
     128,   199,   200,   201,   100,     0,   198,   202,   203,   204,
      48,    49,     0,     0,   205,     0,     0,     0,   206,     0,
       0,     0,   207,   205,     0,   129,     0,   206,     0,     0,
       0,   207,     0,     0,     0,   130,   131,     0,     0,   132,
       0,   133,     0,   134,     0,     0,   135
};

static const yytype_int16 yycheck[] =
{
      35,     7,     8,   100,    74,    35,   108,   124,   129,   124,
     131,    35,   133,   243,     9,   117,     6,    52,    53,    20,
     280,   100,   198,    53,    15,   125,    48,    97,    46,   125,
      30,    26,    11,    15,    40,   132,    15,     6,   135,    74,
     246,    31,     6,    30,    74,    36,    37,     6,    84,    55,
       6,    87,     9,   132,    36,    37,     3,     4,     5,     6,
       7,     8,    97,    30,    86,    83,    35,    97,     0,    38,
      39,    77,    31,   108,    30,    31,    83,   283,   108,   285,
      84,   287,   117,    83,     6,   206,   121,   117,    59,   349,
     190,   121,    38,    39,   190,    85,    83,   121,    83,   275,
      85,   171,     3,   104,   105,    76,    77,   337,   205,    83,
      83,   232,   233,    86,    86,    85,    83,    89,   124,    86,
      16,   242,   243,     3,     4,     5,     6,     7,     8,    76,
      77,    30,    65,    32,   231,   130,   171,    84,    86,    87,
     346,   171,   259,    86,   259,   351,   243,    84,   250,   246,
      15,    88,   231,    90,    91,    88,   362,    90,    91,    88,
       6,    90,    91,   284,   243,   286,    17,   246,   374,   375,
      86,    87,     6,   179,     3,     4,     5,     6,     7,    85,
      86,    60,    61,    62,    86,    67,   283,    89,   285,    86,
     287,   288,    89,    86,    87,     6,    76,    77,   319,    78,
      79,    86,    87,    35,   283,    67,   285,     6,   287,    85,
      86,    86,    87,   334,    83,   250,   337,     6,   253,     6,
     250,    28,    29,   253,    53,    10,    33,    34,    83,   253,
      83,   352,   353,    40,    63,    66,   306,    86,    87,    33,
     337,    50,    51,    88,    88,   280,     6,    76,    77,   346,
     280,    80,    66,   259,   351,    84,   280,    83,   337,    88,
      84,     3,     6,    30,    83,   362,    83,   346,    83,     6,
       6,   306,   351,     6,    87,    87,   306,   374,   375,    65,
      84,    65,    83,   362,    89,    83,    33,     3,     4,     5,
       6,     7,    87,    33,    43,   374,   375,     3,     4,     5,
       6,     7,     8,    48,   339,   340,   341,    65,     6,   339,
     340,   341,    33,     6,   349,   339,   340,   341,    83,   349,
      26,    27,    28,    29,     6,   349,    85,    33,    34,    33,
      83,    66,    44,    84,    40,    30,    38,    53,    48,    48,
      29,    55,    58,    61,    85,    71,   359,    63,   173,   252,
     173,    67,    68,    69,   340,   339,   279,    73,    74,    75,
      76,    77,   236,   140,    80,   320,   218,   209,    84,   337,
      76,    77,    88,    89,   231,   231,    60,   132,    84,     3,
       4,     5,     6,     7,    90,    -1,     3,   349,   353,     6,
     190,    99,   259,    10,   314,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,    -1,    -1,    31,    -1,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    41,    42,    -1,    -1,    45,    53,
      47,    -1,    49,    -1,    58,    52,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    67,    68,    69,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    -1,    -1,    80,    53,    -1,    -1,
      84,    -1,    58,    -1,    88,    -1,    53,    63,    -1,    -1,
       6,    67,    68,    69,    10,    -1,    63,    73,    74,    75,
      76,    77,    -1,    -1,    80,    -1,    -1,    -1,    84,    -1,
      -1,    -1,    88,    80,    -1,    31,    -1,    84,    -1,    -1,
      -1,    88,    -1,    -1,    -1,    41,    42,    -1,    -1,    45,
      -1,    47,    -1,    49,    -1,    -1,    52
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
     112,   113,   114,   195,   197,   198,   200,    83,   105,     6,
      26,    27,    28,    29,    33,    34,    40,    84,    90,   104,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   131,   140,   141,   142,   111,    87,     6,     6,
      10,   115,   178,   114,    83,    83,    88,   128,    88,    30,
      31,   117,   132,   133,   134,   135,   118,    33,   117,     6,
     143,    66,    83,   118,    84,    87,   202,   202,     6,    31,
      41,    42,    45,    47,    49,    52,   100,   144,   145,   164,
     168,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   186,   187,   188,   189,   193,    36,    37,    97,
     196,    36,    37,    97,   199,     3,     6,   120,   130,     6,
     139,    87,    30,    83,    83,   120,    85,   104,    83,    35,
     117,   197,   200,   203,   204,   205,     6,   121,   125,   201,
      87,     3,     4,     5,     6,     7,    53,    58,    63,    67,
      68,    69,    73,    74,    75,    80,    84,    88,   105,   116,
     144,   153,   154,   155,   156,   158,   159,   161,   162,   163,
     164,   169,   100,   161,   179,   161,     6,   190,     6,   144,
     194,    87,    65,    88,    90,    91,   146,   147,   148,   150,
     151,   152,    65,    84,   165,    30,    83,    83,    83,    89,
      86,    89,    87,    33,   118,   134,   135,   117,    87,    83,
      85,   201,   155,   144,   161,    89,   161,   170,   171,   159,
      60,    61,    62,    78,    79,   157,    59,    76,    77,   160,
      33,   158,   165,    43,    46,    48,    65,    48,    86,   173,
     177,   161,   149,   161,     6,   147,   161,     6,   144,   161,
     164,   166,   167,   168,   172,   120,    33,     6,   139,   104,
     136,   137,   138,    83,    87,     6,   206,   204,    85,    66,
      86,    89,   155,   156,   138,   183,   184,   172,   161,   172,
     161,   191,   172,   144,    86,    89,    85,    86,   118,    33,
      83,    86,    87,   206,   161,   171,    87,    30,    83,    86,
     185,    44,    50,    51,   161,   167,   136,   137,   104,    84,
     172,    30,    32,   184,    30,    83,   172,   161,   192,   192,
      85,   132,   172,    30,    48,    48,    85,   172,   172
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

    { /*este es cualquier constante identifier*/	;}
    break;

  case 61:

    { /*verificar que decimal int no tenga signo UNSIGNED-INTEGER*/;}
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

