
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
   extern int yylex(void);
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
#define YYLAST   598

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  92
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  123
/* YYNRULES -- Number of rules.  */
#define YYNRULES  264
/* YYNRULES -- Number of states.  */
#define YYNSTATES  423

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
      31,    38,    42,    43,    47,    49,    50,    53,    56,    57,
      60,    62,    67,    68,    71,    74,    76,    78,    80,    82,
      85,    86,    89,    91,    96,    99,   100,   103,   105,   110,
     112,   113,   116,   118,   120,   122,   124,   125,   127,   129,
     133,   135,   137,   139,   141,   143,   145,   147,   149,   151,
     153,   155,   157,   159,   161,   163,   165,   167,   169,   171,
     175,   179,   181,   183,   188,   191,   193,   195,   197,   199,
     201,   208,   212,   214,   217,   221,   223,   226,   230,   235,
     237,   240,   244,   246,   250,   255,   262,   266,   268,   273,
     279,   283,   285,   287,   291,   293,   296,   299,   301,   303,
     305,   307,   309,   311,   313,   315,   317,   319,   321,   323,
     326,   328,   331,   333,   335,   337,   339,   343,   347,   349,
     352,   354,   356,   358,   360,   362,   364,   366,   369,   371,
     373,   376,   378,   380,   382,   386,   389,   391,   393,   397,
     399,   401,   403,   405,   407,   409,   412,   414,   418,   420,
     422,   424,   426,   428,   432,   434,   436,   438,   440,   442,
     444,   446,   449,   451,   453,   457,   461,   463,   465,   467,
     469,   471,   473,   475,   478,   482,   486,   488,   490,   494,
     495,   498,   502,   506,   508,   510,   512,   514,   516,   518,
     522,   526,   528,   531,   534,   537,   539,   541,   543,   545,
     549,   553,   555,   557,   559,   564,   571,   577,   584,   592,
     599,   603,   605,   609,   613,   615,   617,   619,   624,   629,
     638,   647,   649,   651,   653,   658,   662,   664,   669,   671,
     673,   675,   678,   682,   687,   689,   691,   693,   698,   704,
     708,   711,   715,   717,   719,   721,   723,   728,   732,   734,
     741,   744,   751,   753,   754
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      93,     0,    -1,    94,    -1,   210,    -1,    95,    83,    98,
      -1,    95,    83,    97,    83,    98,    -1,     9,     6,    -1,
       9,     6,    84,    96,    85,    -1,   120,    -1,    11,   120,
      -1,    99,   103,   109,   112,   115,   118,    -1,    15,   100,
      83,    -1,    -1,   100,    86,   101,    -1,   101,    -1,    -1,
       3,   102,    -1,    16,   104,    -1,    -1,   104,   105,    -1,
     105,    -1,     6,    67,   106,    83,    -1,    -1,   108,   107,
      -1,   119,   108,    -1,   158,    -1,     7,    -1,     8,    -1,
       6,    -1,    17,   110,    -1,    -1,   110,   111,    -1,   111,
      -1,     6,    67,   121,    83,    -1,    35,   113,    -1,    -1,
     113,   114,    -1,   114,    -1,   120,    87,   121,    83,    -1,
     116,    -1,    -1,   116,   117,    -1,   117,    -1,   199,    -1,
     202,    -1,   182,    -1,    -1,    76,    -1,    77,    -1,   120,
      86,     6,    -1,     6,    -1,   122,    -1,   131,    -1,   146,
      -1,     6,    -1,   123,    -1,   128,    -1,   130,    -1,   127,
      -1,   126,    -1,   124,    -1,    19,    -1,    20,    -1,    22,
      -1,    23,    -1,   167,    -1,    21,    -1,    24,    -1,    25,
      -1,    84,   120,    85,    -1,   106,    66,   106,    -1,   129,
      -1,    18,    -1,    26,    88,     3,    89,    -1,    27,   132,
      -1,   132,    -1,   133,    -1,   144,    -1,   145,    -1,   135,
      -1,    28,    88,   134,    89,    33,   121,    -1,   134,    86,
     123,    -1,   123,    -1,    29,    30,    -1,    29,   136,    30,
      -1,   137,    -1,   137,    83,    -1,   137,    83,   139,    -1,
     137,    83,   139,    83,    -1,   139,    -1,   139,    83,    -1,
     137,    83,   138,    -1,   138,    -1,   120,    87,   121,    -1,
      31,   143,    33,   140,    -1,    31,     6,    87,   143,    33,
     140,    -1,   140,    83,   141,    -1,   141,    -1,   142,    87,
      84,    85,    -1,   142,    87,    84,   136,    85,    -1,   142,
      86,   106,    -1,   106,    -1,     6,    -1,    34,    33,   123,
      -1,    40,    -1,    33,   121,    -1,    90,   148,    -1,   147,
      -1,    53,    -1,    19,    -1,    20,    -1,    22,    -1,    23,
      -1,    26,    -1,    29,    -1,    40,    -1,    28,    -1,     6,
      -1,    38,    -1,   150,   151,    -1,     6,    -1,   151,   152,
      -1,   152,    -1,   153,    -1,   155,    -1,    90,    -1,    88,
     154,    89,    -1,   154,    86,   165,    -1,   165,    -1,    91,
       6,    -1,   157,    -1,     7,    -1,     8,    -1,    53,    -1,
       3,    -1,     4,    -1,     5,    -1,   119,   157,    -1,   157,
      -1,   149,    -1,    80,   149,    -1,   156,    -1,   167,    -1,
     173,    -1,    84,   165,    85,    -1,    63,   159,    -1,     6,
      -1,   125,    -1,   160,   161,   159,    -1,   159,    -1,    78,
      -1,    79,    -1,    60,    -1,    61,    -1,    62,    -1,   119,
     163,    -1,   163,    -1,   163,   164,   160,    -1,   160,    -1,
      76,    -1,    77,    -1,    59,    -1,   162,    -1,   162,   166,
     162,    -1,    67,    -1,    68,    -1,    69,    -1,    74,    -1,
      73,    -1,    75,    -1,    58,    -1,   168,   169,    -1,    38,
      -1,     6,    -1,    84,   170,    85,    -1,   170,    86,   171,
      -1,   171,    -1,   165,    -1,   172,    -1,    56,    -1,    57,
      -1,    54,    -1,    55,    -1,    88,    89,    -1,    88,   174,
      89,    -1,   174,    86,   175,    -1,   175,    -1,   165,    -1,
     165,    66,   165,    -1,    -1,   101,    87,    -1,   101,    87,
     177,    -1,   101,    87,   181,    -1,   177,    -1,   181,    -1,
       6,    -1,   178,    -1,   179,    -1,   180,    -1,   149,    65,
     165,    -1,   168,    65,   165,    -1,   172,    -1,   172,   169,
      -1,     6,   169,    -1,    41,   101,    -1,   182,    -1,   184,
      -1,   190,    -1,   197,    -1,    10,   183,    30,    -1,   183,
      83,   176,    -1,   176,    -1,   185,    -1,   186,    -1,    42,
     165,    43,   176,    -1,    42,   165,    43,   176,    44,   176,
      -1,    31,   165,    33,   187,    30,    -1,    31,   165,    33,
     187,   189,    30,    -1,    31,   165,    33,   187,   189,    83,
      30,    -1,    31,   165,    33,   187,    83,    30,    -1,   187,
      83,   188,    -1,   188,    -1,   142,    87,   176,    -1,    83,
      32,   176,    -1,   191,    -1,   192,    -1,   193,    -1,    45,
     183,    46,   165,    -1,    47,   165,    48,   176,    -1,    49,
     194,    65,   195,    50,   196,    48,   176,    -1,    49,   194,
      65,   195,    51,   196,    48,   176,    -1,     6,    -1,   165,
      -1,   165,    -1,    52,   198,    48,   176,    -1,   198,    86,
     149,    -1,   149,    -1,   201,    83,   200,    83,    -1,    98,
      -1,    36,    -1,    37,    -1,    39,     6,    -1,    39,     6,
     205,    -1,   204,    83,   203,    83,    -1,    98,    -1,    36,
      -1,    37,    -1,    38,     6,    87,   121,    -1,    38,     6,
     205,    87,   121,    -1,    84,   206,    85,    -1,    84,    85,
      -1,   206,    83,   207,    -1,   207,    -1,   208,    -1,   201,
      -1,   204,    -1,    35,   120,    87,   209,    -1,   120,    87,
     209,    -1,   121,    -1,   211,    83,   212,   214,    30,    91,
      -1,    12,     6,    -1,    13,   213,   103,   109,   112,   115,
      -1,    97,    -1,    -1,    14,   103,   109,   112,   115,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    49,    49,    50,    52,    53,    56,    57,    60,    62,
      66,    76,    77,    78,    79,    80,    80,    87,    88,    89,
      90,    93,    94,    94,    95,    96,    97,    98,   100,   102,
     103,   104,   105,   108,   110,   111,   112,   113,   115,   117,
     118,   119,   120,   121,   122,   124,   125,   127,   128,   130,
     131,   135,   136,   137,   138,   141,   142,   143,   145,   146,
     147,   152,   153,   154,   155,   156,   157,   159,   160,   162,
     164,   166,   167,   169,   175,   176,   178,   179,   180,   181,
     184,   185,   186,   189,   190,   192,   193,   194,   195,   196,
     197,   200,   201,   202,   204,   205,   207,   208,   210,   211,
     214,   215,   217,   220,   222,   223,   227,   229,   231,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   248,
     250,   252,   253,   255,   256,   257,   261,   263,   264,   266,
     273,   274,   275,   277,   279,   280,   281,   282,   283,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   297,   298,
     299,   300,   301,   302,   303,   306,   307,   309,   311,   313,
     314,   315,   318,   319,   321,   322,   323,   324,   325,   326,
     327,   331,   333,   334,   337,   340,   341,   343,   345,   347,
     348,   349,   350,   353,   354,   357,   358,   364,   365,   369,
     370,   371,   372,   373,   374,   375,   378,   379,   380,   382,
     383,   386,   387,   388,   391,   394,   395,   396,   397,   401,
     402,   403,   406,   407,   411,   412,   414,   415,   416,   417,
     418,   419,   420,   421,   423,   424,   425,   428,   431,   433,
     434,   435,   436,   437,   440,   442,   443,   449,   451,   452,
     453,   455,   456,   459,   460,   461,   462,   464,   465,   471,
     472,   474,   475,   477,   478,   479,   481,   482,   485,   491,
     492,   493,   496,   497,   500
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
  "block", "label_declaration_part", "label_list", "label", "$@1",
  "constant_declaration_part", "constant_declaration_list",
  "constant_declaration", "constant", "$@2", "constant_identifier",
  "type_declaration_part", "type_declaration_list", "type_declaration",
  "variable_declaration_part", "variable_declaration_list",
  "variable_declaration", "procedure_and_function_declaration_part",
  "procedure_and_function_declaration_list",
  "procedure_and_function_declaration", "statement_part", "sign",
  "identifier_list", "type", "simple_type", "ordinal_type",
  "ordinal_type_identifier", "type_boolean", "enumerated_type",
  "subrange_type", "real_type", "real_type_identifier", "string_type",
  "structured_type", "type_list", "array_type", "index_type_list",
  "record_type", "field_list", "fixed_part", "field_declaration",
  "variant_part", "variant_list", "variant", "constant_list",
  "tag_field_type", "set_type", "file_type", "pointer_type",
  "pointer_type_identifier", "base_type", "variable_reference",
  "variable_identifier", "qualifier_list", "qualifier", "index",
  "expression_list", "field_designator", "unsigned_constant",
  "unsigned_number", "signed_number", "factor", "term",
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
      98,    99,    99,   100,   100,   102,   101,   103,   103,   104,
     104,   105,   107,   106,   106,   106,   106,   106,   108,   109,
     109,   110,   110,   111,   112,   112,   113,   113,   114,   115,
     115,   116,   116,   117,   117,   118,   118,   119,   119,   120,
     120,   121,   121,   121,   121,   122,   122,   122,   123,   123,
     123,   124,   124,   124,   124,   124,   124,   125,   125,   126,
     127,   128,   129,   130,   131,   131,   132,   132,   132,   132,
     133,   134,   134,   135,   135,   136,   136,   136,   136,   136,
     136,   137,   137,   138,   139,   139,   140,   140,   141,   141,
     142,   142,   143,   144,   145,   145,   146,   146,   147,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   149,
     150,   151,   151,   152,   152,   152,   153,   154,   154,   155,
     156,   156,   156,   156,   157,   157,   157,   158,   158,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   160,   160,
     161,   161,   161,   161,   161,   162,   162,   163,   163,   164,
     164,   164,   165,   165,   166,   166,   166,   166,   166,   166,
     166,   167,   168,   168,   169,   170,   170,   171,   171,   172,
     172,   172,   172,   173,   173,   174,   174,   175,   175,   176,
     176,   176,   176,   176,   176,   176,   177,   177,   177,   178,
     178,   179,   179,   179,   180,   181,   181,   181,   181,   182,
     183,   183,   184,   184,   185,   185,   186,   186,   186,   186,
     187,   187,   188,   189,   190,   190,   190,   191,   192,   193,
     193,   194,   195,   196,   197,   198,   198,   199,   200,   200,
     200,   201,   201,   202,   203,   203,   203,   204,   204,   205,
     205,   206,   206,   207,   207,   207,   208,   208,   209,   210,
     211,   212,   213,   213,   214
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     3,     5,     2,     5,     1,     2,
       6,     3,     0,     3,     1,     0,     2,     2,     0,     2,
       1,     4,     0,     2,     2,     1,     1,     1,     1,     2,
       0,     2,     1,     4,     2,     0,     2,     1,     4,     1,
       0,     2,     1,     1,     1,     1,     0,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     1,     1,     4,     2,     1,     1,     1,     1,     1,
       6,     3,     1,     2,     3,     1,     2,     3,     4,     1,
       2,     3,     1,     3,     4,     6,     3,     1,     4,     5,
       3,     1,     1,     3,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     2,     1,     1,     1,     1,     3,     3,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     1,
       2,     1,     1,     1,     3,     2,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     2,     1,     3,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     2,     3,     3,     1,     1,     3,     0,
       2,     3,     3,     1,     1,     1,     1,     1,     1,     3,
       3,     1,     2,     2,     2,     1,     1,     1,     1,     3,
       3,     1,     1,     1,     4,     6,     5,     6,     7,     6,
       3,     1,     3,     3,     1,     1,     1,     4,     4,     8,
       8,     1,     1,     1,     4,     3,     1,     4,     1,     1,
       1,     2,     3,     4,     1,     1,     1,     4,     5,     3,
       2,     3,     1,     1,     1,     1,     4,     3,     1,     6,
       2,     6,     1,     0,     5
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     2,     0,     3,     0,     6,   260,
       1,    12,     0,     0,     0,     0,     0,     4,    18,   263,
       0,    50,     0,     8,     9,    15,     0,    14,    12,     0,
      30,   262,    18,    18,     0,     7,     0,    16,    11,     0,
       5,     0,    17,    20,     0,    35,    30,    30,     0,    49,
      13,     0,    19,     0,    29,    32,     0,    40,    35,    35,
     259,   134,   135,   136,    28,    26,    27,    47,    48,     0,
      22,     0,   138,    25,     0,    31,    34,    37,     0,     0,
       0,    46,    39,    42,    43,     0,    44,     0,    40,    40,
      21,    23,    24,   137,    54,    72,    61,    62,    66,    63,
      64,     0,     0,     0,     0,     0,     0,   172,   104,   108,
       0,     0,     0,     0,    51,    55,    60,    59,    58,    56,
      71,    57,    52,    75,    76,    79,    77,    78,    53,   107,
      65,     0,    36,     0,     0,   241,   189,    10,    45,    41,
      12,    12,   261,   264,     0,    74,     0,    83,     0,     0,
       0,    85,    92,    89,   105,     0,     0,   117,   109,   110,
     111,   112,   113,   116,   114,   118,   115,   106,     0,    33,
       0,   171,     0,     0,     0,     0,   242,   195,     0,     0,
       0,   189,     0,     0,     0,   181,   182,   179,   180,     0,
       0,     0,     0,   201,   211,   193,   196,   197,   198,   194,
     205,     0,   206,   212,   213,   207,   224,   225,   226,   208,
     239,   240,   238,     0,   245,   246,   244,     0,     0,    28,
      82,     0,   102,     0,     0,    84,    86,    90,   103,    69,
      70,   146,   131,   132,    67,    68,   133,     0,     0,     0,
       0,     0,   147,   139,   141,   130,   149,   158,   162,   156,
     177,   142,     0,   176,   178,   143,    38,     0,   250,     0,
     254,   255,     0,   252,   253,   247,     0,   203,     0,   204,
       0,     0,     0,   231,     0,   120,   236,     0,   190,     0,
       0,   125,     0,   119,   122,   123,   124,     0,   202,   209,
     189,   237,   243,    73,     0,     0,     0,     0,    93,    91,
      87,   145,   140,     0,   183,   187,     0,   186,   155,   152,
     153,   154,   150,   151,     0,   170,   164,   165,   166,   168,
     167,   169,     0,   161,   159,   160,     0,   174,     0,     0,
       0,     0,   249,   248,     0,   189,     0,   189,     0,   189,
       0,   120,   191,   192,   199,     0,   128,   129,   121,   200,
     210,    81,     0,   102,     0,   101,    94,    97,     0,    88,
     144,     0,     0,   184,   148,   163,   157,   175,     0,   258,
     257,   251,     0,     0,   221,   214,   227,   228,   232,     0,
     234,   235,     0,   126,    80,     0,     0,     0,     0,   188,
     185,   256,   189,   216,     0,     0,   189,     0,     0,   127,
      95,    96,   100,     0,   222,   219,   189,   220,   217,     0,
     215,   233,     0,     0,    98,     0,   223,   218,   189,   189,
      99,   229,   230
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,    22,    16,    17,    18,    26,   189,
      37,    30,    42,    43,   112,    91,    70,    45,    54,    55,
      57,    76,    77,    81,    82,    83,   137,    71,   149,   369,
     114,   115,   116,   242,   117,   118,   119,   120,   121,   122,
     123,   124,   221,   125,   150,   151,   152,   153,   356,   357,
     358,   223,   126,   127,   128,   129,   167,   243,   191,   283,
     284,   285,   345,   286,   244,   245,    73,   246,   247,   314,
     248,   249,   326,   250,   322,   251,   131,   267,   252,   253,
     193,   255,   306,   307,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   373,   374,   395,   205,   206,
     207,   208,   274,   379,   412,   209,   277,    84,   213,    85,
      86,   217,    87,   175,   262,   263,   264,   370,     6,     7,
      20,    32,    34
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -311
static const yytype_int16 yypact[] =
{
     124,    19,    39,    18,  -311,    -2,  -311,    13,    -1,  -311,
    -311,    79,    87,   103,   103,   115,    33,  -311,   109,   147,
     121,  -311,    69,    66,    66,  -311,    77,  -311,   149,   163,
     158,  -311,   109,   109,   150,  -311,   176,  -311,  -311,   115,
    -311,   123,   163,  -311,   186,   159,   158,   158,   114,  -311,
    -311,    26,  -311,   140,   186,  -311,   103,   101,   159,   159,
    -311,  -311,  -311,  -311,  -311,  -311,  -311,  -311,  -311,   145,
    -311,   213,  -311,  -311,   348,  -311,   103,  -311,   113,   205,
     238,   250,   101,  -311,  -311,   193,  -311,   206,   101,   101,
    -311,  -311,  -311,  -311,   -15,  -311,  -311,  -311,  -311,  -311,
    -311,   204,   117,   214,    55,   348,   270,  -311,  -311,  -311,
     103,   411,   241,   221,  -311,  -311,  -311,  -311,  -311,  -311,
    -311,  -311,  -311,  -311,  -311,  -311,  -311,  -311,  -311,  -311,
    -311,   226,  -311,   348,    90,   229,   514,  -311,  -311,  -311,
      12,    31,  -311,  -311,   308,  -311,   481,  -311,   309,   134,
     284,   235,  -311,   239,  -311,   481,   148,  -311,  -311,  -311,
    -311,  -311,  -311,  -311,  -311,  -311,  -311,  -311,    26,  -311,
     391,  -311,   240,     4,   348,   237,  -311,    97,   452,   115,
     452,   514,   452,   319,   321,  -311,  -311,  -311,  -311,   242,
     263,    22,   265,   226,  -311,  -311,  -311,  -311,  -311,  -311,
    -311,     5,  -311,  -311,  -311,  -311,  -311,  -311,  -311,  -311,
    -311,  -311,  -311,   248,  -311,  -311,  -311,   249,   244,   256,
    -311,   136,   257,   312,   348,  -311,    35,  -311,  -311,  -311,
    -311,    88,  -311,  -311,  -311,  -311,  -311,   458,   321,   452,
     232,   458,  -311,  -311,  -311,  -311,  -311,    70,   128,     0,
    -311,  -311,   156,  -311,  -311,  -311,  -311,   103,  -311,   161,
    -311,  -311,   -47,  -311,  -311,  -311,   348,  -311,   315,  -311,
     307,   -20,   310,  -311,   292,  -311,  -311,   -29,   541,   452,
     452,  -311,   353,    22,  -311,  -311,  -311,   452,  -311,  -311,
     514,  -311,  -311,  -311,   481,   327,   355,    26,  -311,  -311,
     279,  -311,  -311,   278,  -311,   298,   141,  -311,     0,  -311,
    -311,  -311,  -311,  -311,   458,  -311,  -311,  -311,  -311,  -311,
    -311,  -311,   452,  -311,  -311,  -311,   458,  -311,   391,   166,
     348,    99,  -311,  -311,    26,   514,   452,   514,   452,   514,
     321,    27,  -311,  -311,  -311,   143,  -311,  -311,  -311,  -311,
    -311,  -311,   348,  -311,   332,  -311,   295,  -311,   168,  -311,
    -311,   452,   452,  -311,  -311,  -311,    70,  -311,   348,  -311,
    -311,  -311,   172,    10,  -311,   335,  -311,  -311,  -311,   218,
    -311,  -311,   452,  -311,  -311,    26,    26,    26,   296,  -311,
    -311,  -311,   514,  -311,    67,    25,   514,   452,   452,  -311,
     295,  -311,  -311,    16,  -311,  -311,   514,  -311,  -311,   354,
    -311,  -311,   337,   339,  -311,   304,  -311,  -311,   514,   514,
    -311,  -311,  -311
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -311,  -311,  -311,  -311,  -311,   364,   -13,  -311,  -311,   -11,
    -311,   231,  -311,   349,   -48,  -311,   329,   227,  -311,   336,
     219,  -311,   316,   208,  -311,   320,  -311,   -56,   -12,   -53,
    -311,  -139,  -311,  -311,  -311,  -311,  -311,  -311,  -311,  -311,
     301,  -311,  -311,  -311,     1,  -311,   179,   180,    28,    21,
    -310,   116,  -311,  -311,  -311,  -311,  -311,  -131,  -311,  -311,
     127,  -311,  -311,  -311,  -311,   -51,  -311,  -223,    85,  -311,
      92,   177,  -311,    11,  -311,   -68,  -125,  -114,  -311,    91,
    -162,  -311,  -311,    58,  -277,   144,  -311,  -311,  -311,   157,
     340,   245,  -311,  -311,  -311,  -311,    29,  -311,  -311,  -311,
    -311,  -311,  -311,  -311,    30,  -311,  -311,  -311,  -311,  -164,
    -311,  -311,  -161,   306,  -311,    96,  -311,    68,  -311,  -311,
    -311,  -311,  -311
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -174
static const yytype_int16 yytable[] =
{
      72,    23,    24,    69,    27,   190,   130,   220,   254,   260,
      21,   192,   261,   350,   301,    40,   228,   171,    10,   339,
      93,   113,    21,    72,   372,     8,   336,    15,    50,    61,
      62,    63,    64,    65,    66,   289,   331,   130,   332,   257,
     393,    21,    79,    80,    78,     9,    15,   148,   210,   211,
     190,   -28,   154,   276,    72,   408,   192,   340,   375,   323,
     377,    21,   380,   290,    78,   130,   148,   214,   215,  -173,
      61,    62,    63,    64,    65,    66,   324,   325,   130,   288,
     172,    11,    72,    13,   372,   147,   148,   130,   290,   258,
      14,   364,  -173,   394,    15,    72,    12,   405,   156,   406,
      19,   414,    67,    68,    72,    21,   130,   302,   409,    21,
     280,   170,   281,   282,   241,   404,    28,    72,    25,   410,
     230,   265,   241,    72,   241,    29,   241,   212,   216,   416,
     309,   310,   311,     1,   257,    33,     2,    79,    80,    79,
      80,   421,   422,    67,    68,   103,   104,   190,   312,   313,
     105,   106,    36,   192,    35,   351,   130,   108,    14,   190,
      38,   259,  -173,    39,    15,   192,   254,   260,   269,    41,
     261,   298,  -173,    72,   173,    44,  -120,   174,  -120,  -120,
      48,   170,    49,   241,   241,  -120,   315,  -120,  -120,   268,
      51,   270,    53,   272,    56,   316,   317,   318,   130,    36,
     133,   319,   320,   321,   190,    60,   190,    74,   190,   381,
     192,   134,   192,   333,   192,    72,    61,    62,    63,    64,
      36,   224,   294,   241,   241,   295,   130,   362,    90,   382,
     363,   241,   383,   229,    36,    61,    62,    63,   231,   232,
     233,   327,   328,    72,   135,   329,    72,    36,   330,   355,
     303,   305,    36,   368,   387,   388,   234,   235,   387,   392,
     136,   190,   130,    46,    47,   190,   241,   192,   397,   398,
     107,   192,   241,    58,    59,   190,   140,    88,    89,    72,
     241,   192,   241,    72,   130,   236,   355,   190,   190,   141,
     344,   346,   144,   192,   192,   237,   142,   143,   349,   384,
     130,    72,   146,   155,   169,   241,   241,   168,    67,    68,
     170,   218,   238,   173,   225,   222,   239,    72,   226,   259,
     240,   304,   227,   256,   266,   273,   241,   275,   279,   278,
     287,   291,   292,   293,    72,    72,    72,   355,   355,   402,
    -173,   241,   241,    72,   296,   297,   355,   376,   334,   378,
     335,    61,    62,    63,    94,    65,    66,   338,   337,   347,
     352,   353,   359,   360,   361,   385,    95,    96,    97,    98,
      99,   100,   389,   305,   101,   102,   103,   104,   386,   396,
     403,   105,   106,    31,   417,   418,   107,   419,   108,   420,
      75,    52,   132,   399,    61,    62,    63,   231,   232,   233,
      92,   109,   139,   145,   415,   299,   300,   401,   411,   411,
     348,   366,   354,   400,   365,   234,   235,   157,   308,   367,
     390,   138,   342,   407,    67,    68,   271,   371,   413,   107,
     158,   159,   110,   160,   161,   343,   391,   162,   111,   163,
     164,   176,     0,     0,   236,   185,   186,   187,   188,   165,
       0,   166,     0,     0,   237,    61,    62,    63,   231,   232,
     233,    61,    62,    63,   231,   232,   233,    67,    68,     0,
       0,   238,     0,     0,     0,   239,   234,   235,     0,   240,
       0,     0,   234,   235,    61,    62,    63,   219,    65,    66,
     107,     0,     0,     0,     0,     0,   107,     0,     0,     0,
      96,    97,    98,    99,   100,   236,     0,     0,     0,     0,
       0,   236,     0,     0,     0,   237,     0,    25,     0,   107,
     177,   237,     0,     0,   136,     0,     0,     0,    67,    68,
       0,     0,   238,     0,     0,     0,   239,     0,   238,     0,
     240,     0,   239,     0,     0,   178,   240,   341,     0,     0,
       0,   136,   107,     0,     0,   179,   180,    67,    68,   181,
       0,   182,     0,   183,     0,   110,   184,     0,   185,   186,
     187,   188,   178,     0,     0,     0,     0,     0,     0,   107,
       0,     0,   179,   180,     0,     0,   181,     0,   182,     0,
     183,     0,     0,   184,     0,   185,   186,   187,   188
};

static const yytype_int16 yycheck[] =
{
      51,    13,    14,    51,    15,   136,    74,   146,   170,   173,
       6,   136,   173,   290,   237,    28,   155,   131,     0,    48,
      71,    74,     6,    74,   334,     6,    46,    15,    39,     3,
       4,     5,     6,     7,     8,    30,    83,   105,    85,    35,
      30,     6,    38,    39,    56,     6,    15,    31,    36,    37,
     181,    66,   105,   184,   105,    30,   181,    86,   335,    59,
     337,     6,   339,    83,    76,   133,    31,    36,    37,    84,
       3,     4,     5,     6,     7,     8,    76,    77,   146,   193,
     133,    83,   133,    84,   394,    30,    31,   155,    83,    85,
      11,   314,    65,    83,    15,   146,    83,    30,   110,    32,
      13,    85,    76,    77,   155,     6,   174,   238,    83,     6,
      88,    84,    90,    91,   170,   392,    83,   168,     3,   396,
     168,   174,   178,   174,   180,    16,   182,   140,   141,   406,
      60,    61,    62,     9,    35,    14,    12,    38,    39,    38,
      39,   418,   419,    76,    77,    28,    29,   278,    78,    79,
      33,    34,    86,   278,    85,   294,   224,    40,    11,   290,
      83,   173,    65,    86,    15,   290,   328,   331,   179,     6,
     331,   224,    84,   224,    84,    17,    88,    87,    90,    91,
      30,    84,     6,   239,   240,    88,    58,    90,    91,   178,
      67,   180,     6,   182,    35,    67,    68,    69,   266,    86,
      87,    73,    74,    75,   335,    91,   337,    67,   339,   340,
     335,     6,   337,   266,   339,   266,     3,     4,     5,     6,
      86,    87,    86,   279,   280,    89,   294,    86,    83,    86,
      89,   287,    89,    85,    86,     3,     4,     5,     6,     7,
       8,    85,    86,   294,     6,   257,   297,    86,    87,   297,
     239,   240,    86,    87,    86,    87,    24,    25,    86,    87,
      10,   392,   330,    32,    33,   396,   322,   392,    50,    51,
      38,   396,   328,    46,    47,   406,    83,    58,    59,   330,
     336,   406,   338,   334,   352,    53,   334,   418,   419,    83,
     279,   280,    88,   418,   419,    63,    88,    89,   287,   352,
     368,   352,    88,    33,    83,   361,   362,    66,    76,    77,
      84,     3,    80,    84,    30,     6,    84,   368,    83,   331,
      88,    89,    83,    83,    87,     6,   382,     6,    65,    87,
      65,    83,    83,    89,   385,   386,   387,   385,   386,   387,
      84,   397,   398,   394,    87,    33,   394,   336,    33,   338,
      43,     3,     4,     5,     6,     7,     8,    65,    48,     6,
      33,     6,    83,    85,    66,    33,    18,    19,    20,    21,
      22,    23,   361,   362,    26,    27,    28,    29,    83,    44,
      84,    33,    34,    19,    30,    48,    38,    48,    40,    85,
      54,    42,    76,   382,     3,     4,     5,     6,     7,     8,
      71,    53,    82,   102,   403,   226,   226,   386,   397,   398,
     283,   326,   296,   385,   322,    24,    25,     6,   241,   328,
     362,    81,   278,   394,    76,    77,   181,   331,   398,    38,
      19,    20,    84,    22,    23,   278,   368,    26,    90,    28,
      29,   135,    -1,    -1,    53,    54,    55,    56,    57,    38,
      -1,    40,    -1,    -1,    63,     3,     4,     5,     6,     7,
       8,     3,     4,     5,     6,     7,     8,    76,    77,    -1,
      -1,    80,    -1,    -1,    -1,    84,    24,    25,    -1,    88,
      -1,    -1,    24,    25,     3,     4,     5,     6,     7,     8,
      38,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,
      19,    20,    21,    22,    23,    53,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    -1,    -1,    63,    -1,     3,    -1,    38,
       6,    63,    -1,    -1,    10,    -1,    -1,    -1,    76,    77,
      -1,    -1,    80,    -1,    -1,    -1,    84,    -1,    80,    -1,
      88,    -1,    84,    -1,    -1,    31,    88,     6,    -1,    -1,
      -1,    10,    38,    -1,    -1,    41,    42,    76,    77,    45,
      -1,    47,    -1,    49,    -1,    84,    52,    -1,    54,    55,
      56,    57,    31,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    41,    42,    -1,    -1,    45,    -1,    47,    -1,
      49,    -1,    -1,    52,    -1,    54,    55,    56,    57
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    12,    93,    94,    95,   210,   211,     6,     6,
       0,    83,    83,    84,    11,    15,    97,    98,    99,    13,
     212,     6,    96,   120,   120,     3,   100,   101,    83,    16,
     103,    97,   213,    14,   214,    85,    86,   102,    83,    86,
      98,     6,   104,   105,    17,   109,   103,   103,    30,     6,
     101,    67,   105,     6,   110,   111,    35,   112,   109,   109,
      91,     3,     4,     5,     6,     7,     8,    76,    77,   106,
     108,   119,   157,   158,    67,   111,   113,   114,   120,    38,
      39,   115,   116,   117,   199,   201,   202,   204,   112,   112,
      83,   107,   108,   157,     6,    18,    19,    20,    21,    22,
      23,    26,    27,    28,    29,    33,    34,    38,    40,    53,
      84,    90,   106,   121,   122,   123,   124,   126,   127,   128,
     129,   130,   131,   132,   133,   135,   144,   145,   146,   147,
     167,   168,   114,    87,     6,     6,    10,   118,   182,   117,
      83,    83,   115,   115,    88,   132,    88,    30,    31,   120,
     136,   137,   138,   139,   121,    33,   120,     6,    19,    20,
      22,    23,    26,    28,    29,    38,    40,   148,    66,    83,
      84,   169,   121,    84,    87,   205,   205,     6,    31,    41,
      42,    45,    47,    49,    52,    54,    55,    56,    57,   101,
     149,   150,   168,   172,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   190,   191,   192,   193,   197,
      36,    37,    98,   200,    36,    37,    98,   203,     3,     6,
     123,   134,     6,   143,    87,    30,    83,    83,   123,    85,
     106,     6,     7,     8,    24,    25,    53,    63,    80,    84,
      88,   119,   125,   149,   156,   157,   159,   160,   162,   163,
     165,   167,   170,   171,   172,   173,    83,    35,    85,   120,
     201,   204,   206,   207,   208,   121,    87,   169,   165,   101,
     165,   183,   165,     6,   194,     6,   149,   198,    87,    65,
      88,    90,    91,   151,   152,   153,   155,    65,   169,    30,
      83,    83,    83,    89,    86,    89,    87,    33,   121,   138,
     139,   159,   149,   165,    89,   165,   174,   175,   163,    60,
      61,    62,    78,    79,   161,    58,    67,    68,    69,    73,
      74,    75,   166,    59,    76,    77,   164,    85,    86,   120,
      87,    83,    85,   121,    33,    43,    46,    48,    65,    48,
      86,     6,   177,   181,   165,   154,   165,     6,   152,   165,
     176,   123,    33,     6,   143,   106,   140,   141,   142,    83,
      85,    66,    86,    89,   159,   162,   160,   171,    87,   121,
     209,   207,   142,   187,   188,   176,   165,   176,   165,   195,
     176,   149,    86,    89,   121,    33,    83,    86,    87,   165,
     175,   209,    87,    30,    83,   189,    44,    50,    51,   165,
     140,   141,   106,    84,   176,    30,    32,   188,    30,    83,
     176,   165,   196,   196,    85,   136,   176,    30,    48,    48,
      85,   176,   176
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

    {printf("Successful program\n");;}
    break;

  case 3:

    {printf("Successful program\n");;}
    break;

  case 4:

    {printf("regla program1\n");}
    break;

  case 5:

    {printf("regla program2\n");}
    break;

  case 6:

    {printf("regla program_heading1\n");}
    break;

  case 7:

    {printf("regla program_heading2\n");}
    break;

  case 8:

    {printf("regla program_parameters1\n");}
    break;

  case 9:

    {printf("regla uses_clause\n");}
    break;

  case 10:

    {printf("regla block1\n");}
    break;

  case 11:

    {printf("regla label_declaration_part1\n");}
    break;

  case 12:

    {printf("regla label_declaration_part2\n");}
    break;

  case 13:

    {printf("regla label_list1\n");}
    break;

  case 14:

    {printf("regla label_list2\n");}
    break;

  case 15:

    {		
						if ((yyvsp[(1) - (1)].intVal) < 0 || (yyvsp[(1) - (1)].intVal) > 9999) {
                			yyerror("Label debe estar entre 0 y 9999");
            			}
            			// $<unsignedIntVal>$ = $1;
					;}
    break;

  case 16:

    {printf("regla label1\n");}
    break;

  case 17:

    {printf("regla constant_declaration_part1\n");}
    break;

  case 18:

    {printf("regla constant_declaration_part2\n");}
    break;

  case 19:

    {printf("regla constant_declaration_list1\n");}
    break;

  case 20:

    {printf("regla constant_declaration_list2\n");}
    break;

  case 21:

    {printf("regla constant_declaration1\n");}
    break;

  case 22:

    { /*constant_identifier este es cualquier constante identifier*/	;}
    break;

  case 23:

    {printf("regla constant1\n");}
    break;

  case 24:

    {printf("regla constant2\n");}
    break;

  case 25:

    {printf("regla constant3\n");}
    break;

  case 26:

    {printf("regla constant6\n");}
    break;

  case 27:

    {printf("regla constant7\n");}
    break;

  case 28:

    {printf("regla constant_identifier1\n");}
    break;

  case 29:

    {printf("regla type_declaration_part1\n");}
    break;

  case 30:

    {printf("regla type_declaration_part2\n");}
    break;

  case 31:

    {printf("regla type_declaration_list1\n");}
    break;

  case 32:

    {printf("regla type_declaration_list2\n");}
    break;

  case 33:

    {printf("regla type_declaration1\n");}
    break;

  case 34:

    {printf("regla variable_declaration_part1\n");}
    break;

  case 35:

    {printf("regla variable_declaration_part2\n");}
    break;

  case 36:

    {printf("regla variable_declaration_list1\n");}
    break;

  case 37:

    {printf("regla variable_declaration_list2\n");}
    break;

  case 38:

    {printf("regla variable_declaration1\n");}
    break;

  case 39:

    {printf("regla procedure_and_function_declaration_part1\n");}
    break;

  case 40:

    {printf("regla procedure_and_function_declaration_part2\n");}
    break;

  case 41:

    {printf("regla procedure_and_function_declaration_list1\n");}
    break;

  case 42:

    {printf("regla procedure_and_function_declaration_list2\n");}
    break;

  case 43:

    {printf("regla procedure_and_function_declaration1\n");}
    break;

  case 44:

    {printf("regla procedure_and_function_declaration2\n");}
    break;

  case 45:

    {printf("regla statement_part1\n");}
    break;

  case 46:

    {printf("regla statement_part2\n");}
    break;

  case 47:

    {printf("regla sign1\n");}
    break;

  case 48:

    {printf("regla sign2\n");}
    break;

  case 49:

    {printf("regla identifier_list1\n");}
    break;

  case 50:

    {printf("regla identifier_list2\n");}
    break;

  case 51:

    {printf("regla type1\n");}
    break;

  case 52:

    {printf("regla type2\n");}
    break;

  case 53:

    {printf("regla type3\n");}
    break;

  case 54:

    {printf("regla type4\n");}
    break;

  case 55:

    {printf("regla simple_type1\n");}
    break;

  case 56:

    {printf("regla simple_type2\n");}
    break;

  case 57:

    {printf("regla simple_type3\n");}
    break;

  case 58:

    {printf("regla ordinal_type1\n");}
    break;

  case 59:

    {printf("regla ordinal_type2\n");}
    break;

  case 60:

    {printf("regla ordinal_type3\n");}
    break;

  case 61:

    {printf("regla ordinal_type_identifier1\n");}
    break;

  case 62:

    {printf("regla ordinal_type_identifier2\n");}
    break;

  case 63:

    {printf("regla ordinal_type_identifier3\n");}
    break;

  case 64:

    {printf("regla ordinal_type_identifier4\n");}
    break;

  case 65:

    {printf("regla ordinal_type_identifier5\n");}
    break;

  case 66:

    {printf("regla ordinal_type_identifier6\n");}
    break;

  case 67:

    {printf("regla type_boolean1\n");}
    break;

  case 68:

    {printf("regla type_boolean2\n");}
    break;

  case 69:

    {printf("regla enumerated_type1\n");}
    break;

  case 70:

    {printf("regla subrange_type1\n");}
    break;

  case 71:

    {printf("regla real_type1\n");}
    break;

  case 72:

    {printf("regla real_type_identifier1\n");}
    break;

  case 73:

    {printf("regla string_type1\n");}
    break;

  case 74:

    {printf("regla structured_type1\n");}
    break;

  case 75:

    {printf("regla structured_type2\n");}
    break;

  case 76:

    {printf("regla type_list1\n");}
    break;

  case 77:

    {printf("regla type_list2\n");}
    break;

  case 78:

    {printf("regla type_list3\n");}
    break;

  case 79:

    {printf("regla type_list4\n");}
    break;

  case 80:

    {printf("regla array_type\n");}
    break;

  case 81:

    {printf("regla index_type_list1\n");}
    break;

  case 82:

    {printf("regla index_type_list2\n");}
    break;

  case 83:

    {printf("regla record_type1\n");}
    break;

  case 84:

    {printf("regla record_type2\n");}
    break;

  case 85:

    {printf("regla field_list1\n");}
    break;

  case 86:

    {printf("regla field_list2\n");}
    break;

  case 87:

    {printf("regla field_list3\n");}
    break;

  case 88:

    {printf("regla field_list4\n");}
    break;

  case 89:

    {printf	("regla field_list5\n");}
    break;

  case 90:

    {printf("regla field_list6\n");}
    break;

  case 91:

    {printf("regla fixed_part1\n");}
    break;

  case 92:

    {printf("regla fixed_part2\n");}
    break;

  case 93:

    {printf("regla field_declaration1\n");}
    break;

  case 94:

    {printf("regla variant_part1\n");}
    break;

  case 95:

    {printf("regla variant_part2\n");}
    break;

  case 96:

    {printf("regla variant_list1\n");}
    break;

  case 97:

    {printf("regla variant_list2\n");}
    break;

  case 98:

    {printf("regla variant1\n");}
    break;

  case 99:

    {printf("regla variant2\n");}
    break;

  case 100:

    {printf("regla constant_list1\n");}
    break;

  case 101:

    {printf("regla constant_list2\n");}
    break;

  case 102:

    {printf("regla tag_field_type1\n");}
    break;

  case 103:

    {printf("regla set_type\n");}
    break;

  case 104:

    {printf("regla file_type1\n");}
    break;

  case 105:

    {printf("regla file_type2\n");}
    break;

  case 106:

    {printf("regla pointer_type1\n");}
    break;

  case 107:

    {printf("regla pointer_type2\n");}
    break;

  case 108:

    {printf("regla pointer_type_identifier1\n");}
    break;

  case 109:

    {printf("regla base_type1\n");}
    break;

  case 110:

    {printf("regla base_type2\n");}
    break;

  case 111:

    {printf("regla base_type3\n");}
    break;

  case 112:

    {printf("regla base_type4\n");}
    break;

  case 113:

    {printf("regla base_type5\n");}
    break;

  case 114:

    {printf("regla base_type6\n");}
    break;

  case 115:

    {printf("regla base_type7\n");}
    break;

  case 116:

    {printf("regla base_type9\n");}
    break;

  case 117:

    {printf("regla base_type10\n");}
    break;

  case 118:

    {printf("regla base_type11\n");}
    break;

  case 119:

    {printf("regla variable_reference1\n");}
    break;

  case 120:

    {printf("regla variable_identifier1\n");}
    break;

  case 121:

    {printf("regla qualifier_list1\n");}
    break;

  case 122:

    {printf("regla qualifier_list2\n");}
    break;

  case 123:

    {printf("regla qualifier1\n");}
    break;

  case 124:

    {printf("regla qualifier2\n");}
    break;

  case 125:

    {printf("regla qualifier3\n");}
    break;

  case 126:

    {printf("regla index1\n");}
    break;

  case 127:

    {printf("regla expression_list1\n");}
    break;

  case 128:

    {printf("regla expression_list2\n");}
    break;

  case 129:

    {printf("regla field_designator1\n");}
    break;

  case 130:

    {printf("regla unsigned_constant1\n");}
    break;

  case 131:

    {printf("regla unsigned_constant2\n");}
    break;

  case 132:

    {printf("regla unsigned_constant3\n");}
    break;

  case 133:

    {printf("regla unsigned_constant4\n");}
    break;

  case 134:

    {printf("regla unsigned_number1\n");}
    break;

  case 135:

    {printf("regla unsigned_number2\n");}
    break;

  case 136:

    {printf("regla unsigned_number3\n");}
    break;

  case 137:

    {printf("regla signed_number1\n");}
    break;

  case 138:

    {printf("regla signed_number2\n");}
    break;

  case 139:

    {printf("regla factor1\n");}
    break;

  case 140:

    {printf("regla factor2\n");}
    break;

  case 141:

    {printf("regla factor3\n");}
    break;

  case 142:

    {printf	("regla factor4\n");}
    break;

  case 143:

    {printf("regla factor5\n");}
    break;

  case 144:

    {printf("regla factor6\n");}
    break;

  case 145:

    {printf("regla factor7\n");}
    break;

  case 146:

    {printf("regla factor8\n");}
    break;

  case 147:

    {printf("regla factor9\n");}
    break;

  case 148:

    {printf("regla term1\n");}
    break;

  case 149:

    {printf("regla term2\n");}
    break;

  case 150:

    {printf("regla term_operator_list1\n");}
    break;

  case 151:

    {printf("regla term_operator_list2\n");}
    break;

  case 152:

    {printf("regla term_operator_list3\n");}
    break;

  case 153:

    {printf("regla term_operator_list4\n");}
    break;

  case 154:

    {printf("regla term_operator_list5\n");}
    break;

  case 155:

    {printf("regla simple_expression1\n");}
    break;

  case 156:

    {printf("regla simple_expression2\n");}
    break;

  case 157:

    {printf("regla simple_expression_term_operator_iterable1\n");}
    break;

  case 158:

    {printf("regla simple_expression_term_operator_iterable2\n");}
    break;

  case 159:

    {printf("regla simple_expression_term_operator_list1\n");}
    break;

  case 160:

    {printf("regla simple_expression_term_operator_list2\n");}
    break;

  case 161:

    {printf("regla simple_expression_term_operator_list3\n");}
    break;

  case 162:

    {printf("regla expression1\n");}
    break;

  case 163:

    {printf("regla expression2\n");}
    break;

  case 164:

    {printf("regla relational_operator1\n");}
    break;

  case 165:

    {printf("regla relational_operator2\n");}
    break;

  case 166:

    {printf("regla relational_operator3\n");}
    break;

  case 167:

    {printf("regla relational_operator4\n");}
    break;

  case 168:

    {printf("regla relational_operator5\n");}
    break;

  case 169:

    {printf("regla relational_operator6\n");}
    break;

  case 170:

    {printf("regla relational_operator7\n");}
    break;

  case 171:

    {printf("regla function_call1\n");}
    break;

  case 172:

    {printf("regla function_identifier1\n");}
    break;

  case 174:

    {printf("regla actual_parameter_list1\n");}
    break;

  case 175:

    {printf("regla actual_parameter1\n");}
    break;

  case 176:

    {printf("regla actual_parameter2\n");}
    break;

  case 177:

    {printf("regla actual_parameter1\n");}
    break;

  case 178:

    {printf("regla actual_parameter3\n");}
    break;

  case 179:

    {printf("regla procedure_identifier1\n");}
    break;

  case 180:

    {printf("regla procedure_identifier2\n");}
    break;

  case 181:

    {printf("regla procedure_identifier3\n");}
    break;

  case 182:

    {printf("regla procedure_identifier4\n");}
    break;

  case 183:

    {printf("regla set_constructor1\n");}
    break;

  case 184:

    {printf("regla set_constructor2\n");}
    break;

  case 185:

    {printf("regla member_group_list1\n");}
    break;

  case 186:

    {printf("regla member_group_list2\n");}
    break;

  case 187:

    {printf("regla member_group1\n");}
    break;

  case 188:

    {printf("regla member_group2\n");}
    break;

  case 190:

    {printf("regla statement1\n");}
    break;

  case 191:

    {printf("regla statement2\n");}
    break;

  case 192:

    {printf("regla statement3\n");}
    break;

  case 193:

    {printf("regla statement4\n");}
    break;

  case 194:

    {printf("regla statement5\n");}
    break;

  case 195:

    {printf("regla statement6\n");}
    break;

  case 196:

    {printf("regla simple_statement1\n");}
    break;

  case 197:

    {printf("regla simple_statement2\n");}
    break;

  case 198:

    {printf("regla simple_statement3\n");}
    break;

  case 199:

    {printf("regla assignment_statement1\n");}
    break;

  case 200:

    {printf("regla assignment_statement2\n");}
    break;

  case 201:

    {printf("regla procedure_statement1\n");}
    break;

  case 202:

    {printf("regla procedure_statement2\n");}
    break;

  case 203:

    {printf("regla procedure_statement3\n");}
    break;

  case 204:

    {printf("regla goto_statement1\n");}
    break;

  case 205:

    {printf("regla structured_statement1\n");}
    break;

  case 206:

    {printf("regla structured_statement2\n");}
    break;

  case 207:

    {printf("regla structured_statement3\n");}
    break;

  case 208:

    {printf("regla structured_statement4\n");}
    break;

  case 209:

    {printf("regla compound_statement\n");}
    break;

  case 210:

    {printf("regla statement_list1\n");}
    break;

  case 211:

    {printf("regla statement_list2\n");}
    break;

  case 214:

    {printf("regla if_statement1\n");}
    break;

  case 215:

    {printf("regla if_statement2\n");}
    break;

  case 216:

    {printf("regla case_statement1\n");}
    break;

  case 217:

    {printf("regla case_statement2\n");}
    break;

  case 218:

    {printf("regla case_statement3\n");}
    break;

  case 219:

    {printf("regla case_statement4\n");}
    break;

  case 220:

    {printf("regla case_list1\n");}
    break;

  case 221:

    {printf("regla case_list2\n");}
    break;

  case 222:

    {printf("regla case1\n");}
    break;

  case 223:

    {printf("regla otherwise_clause1\n");}
    break;

  case 224:

    {printf("regla repetitive_statement1\n");}
    break;

  case 225:

    {printf("regla repetitive_statement2\n");}
    break;

  case 226:

    {printf("regla repetitive_statement3\n");}
    break;

  case 227:

    {printf("regla repeat_statement\n");}
    break;

  case 228:

    {printf("regla while_statement\n");}
    break;

  case 229:

    {printf("regla for_statement1\n");}
    break;

  case 230:

    {printf("regla for_statement2\n");}
    break;

  case 231:

    {printf("regla control_variable\n");}
    break;

  case 232:

    {printf("regla initial_value\n");}
    break;

  case 233:

    {printf("regla final_value\n");}
    break;

  case 234:

    {printf("regla with_statement\n");}
    break;

  case 235:

    {printf("regla record_variable_reference_list1\n");}
    break;

  case 236:

    {printf("regla record_variable_reference_list2\n");}
    break;

  case 237:

    {printf("regla procedure_declaration1\n");}
    break;

  case 238:

    {printf("regla procedure_body1\n");}
    break;

  case 239:

    {printf("regla procedure_body2\n");}
    break;

  case 240:

    {printf("regla procedure_body3\n");}
    break;

  case 241:

    {printf("regla procedure_heading1\n");}
    break;

  case 242:

    {printf("regla procedure_heading2\n");}
    break;

  case 243:

    {printf("regla function_declaration1\n");}
    break;

  case 244:

    {printf("regla function_body1\n");}
    break;

  case 245:

    {printf("regla function_body2\n");}
    break;

  case 246:

    {printf("regla function_body3\n");}
    break;

  case 247:

    {printf("regla function_heading1\n");}
    break;

  case 248:

    {printf("regla function_heading2\n");}
    break;

  case 249:

    {printf("regla formal_parameter_list1\n");}
    break;

  case 250:

    {printf("regla formal_parameter_list2\n");}
    break;

  case 251:

    {printf("regla formal_parameter_list_iterable1\n");}
    break;

  case 252:

    {printf("regla formal_parameter_list_iterable2\n");}
    break;

  case 253:

    {printf("regla formal_parameter_list_iterable_list1\n");}
    break;

  case 254:

    {printf("regla formal_parameter_list_iterable_list2\n");}
    break;

  case 255:

    {printf("regla formal_parameter_list_iterable_list3\n");}
    break;

  case 256:

    {printf("regla parameter_declaration1\n");}
    break;

  case 257:

    {printf("regla parameter_declaration2\n");}
    break;

  case 258:

    {printf("regla type_identifier1\n");}
    break;

  case 259:

    {printf("regla regular_unit1\n");}
    break;

  case 260:

    {printf("regla unit_heading1\n");}
    break;

  case 261:

    {printf("regla interface_part1\n");}
    break;

  case 262:

    {printf("regla uses_clause_empty1\n");}
    break;

  case 263:

    {printf("regla uses_clause_empty2\n");}
    break;

  case 264:

    {printf("regla implementation_part1\n");}
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
