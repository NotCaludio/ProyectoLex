
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
#define YYLAST   614

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  92
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  123
/* YYNRULES -- Number of rules.  */
#define YYNRULES  263
/* YYNRULES -- Number of states.  */
#define YYNSTATES  422

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
     708,   712,   714,   716,   718,   720,   725,   729,   731,   738,
     741,   748,   750,   751
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
      -1,   126,    -1,   124,    -1,    19,    -1,    21,    -1,    20,
      -1,    22,    -1,    23,    -1,   167,    -1,    24,    -1,    25,
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
     205,    87,   121,    -1,    84,   206,    85,    -1,   206,    83,
     207,    -1,   207,    -1,   208,    -1,   201,    -1,   204,    -1,
      35,   120,    87,   209,    -1,   120,    87,   209,    -1,     6,
      -1,   211,    83,   212,   214,    30,    91,    -1,    12,     6,
      -1,    13,   213,   103,   109,   112,   115,    -1,    97,    -1,
      -1,    14,   103,   109,   112,   115,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    48,    48,    49,    51,    52,    55,    56,    59,    61,
      65,    75,    76,    77,    78,    79,    79,    86,    87,    88,
      89,    92,    93,    93,    94,    95,    96,    97,    99,   101,
     102,   103,   104,   107,   109,   110,   111,   112,   114,   116,
     117,   118,   119,   120,   121,   123,   124,   126,   127,   129,
     130,   134,   135,   136,   137,   140,   141,   142,   144,   145,
     146,   151,   152,   153,   154,   155,   156,   158,   159,   161,
     163,   165,   166,   168,   174,   175,   177,   178,   179,   180,
     183,   184,   185,   188,   189,   191,   192,   193,   194,   195,
     196,   199,   200,   201,   203,   204,   206,   207,   209,   210,
     213,   214,   216,   219,   221,   222,   226,   228,   230,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   247,
     249,   251,   252,   254,   255,   256,   260,   262,   263,   265,
     272,   273,   274,   276,   278,   279,   280,   281,   282,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   296,   297,
     298,   299,   300,   301,   302,   305,   306,   308,   310,   312,
     313,   314,   317,   318,   320,   321,   322,   323,   324,   325,
     326,   330,   332,   333,   336,   339,   340,   342,   344,   346,
     347,   348,   349,   352,   353,   356,   357,   363,   364,   368,
     369,   370,   371,   372,   373,   374,   377,   378,   379,   381,
     382,   385,   386,   387,   390,   393,   394,   395,   396,   400,
     401,   402,   405,   406,   410,   411,   413,   414,   415,   416,
     417,   418,   419,   420,   422,   423,   424,   427,   430,   432,
     433,   434,   435,   436,   439,   441,   442,   448,   450,   451,
     452,   454,   455,   458,   459,   460,   461,   463,   464,   470,
     472,   473,   475,   476,   477,   479,   480,   481,   487,   488,
     489,   492,   493,   496
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
     206,   206,   207,   207,   207,   208,   208,   209,   210,   211,
     212,   213,   213,   214
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
       3,     1,     1,     1,     1,     4,     3,     1,     6,     2,
       6,     1,     0,     5
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     2,     0,     3,     0,     6,   259,
       1,    12,     0,     0,     0,     0,     0,     4,    18,   262,
       0,    50,     0,     8,     9,    15,     0,    14,    12,     0,
      30,   261,    18,    18,     0,     7,     0,    16,    11,     0,
       5,     0,    17,    20,     0,    35,    30,    30,     0,    49,
      13,     0,    19,     0,    29,    32,     0,    40,    35,    35,
     258,   134,   135,   136,    28,    26,    27,    47,    48,     0,
      22,     0,   138,    25,     0,    31,    34,    37,     0,     0,
       0,    46,    39,    42,    43,     0,    44,     0,    40,    40,
      21,    23,    24,   137,    54,    72,    61,    63,    62,    64,
      65,     0,     0,     0,     0,     0,     0,   172,   104,   108,
       0,     0,     0,     0,    51,    55,    60,    59,    58,    56,
      71,    57,    52,    75,    76,    79,    77,    78,    53,   107,
      66,     0,    36,     0,     0,   241,   189,    10,    45,    41,
      12,    12,   260,   263,     0,    74,     0,    83,     0,     0,
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
     177,   142,     0,   176,   178,   143,    38,     0,     0,   253,
     254,     0,   251,   252,   247,     0,   203,     0,   204,     0,
       0,     0,   231,     0,   120,   236,     0,   190,     0,     0,
     125,     0,   119,   122,   123,   124,     0,   202,   209,   189,
     237,   243,    73,     0,     0,     0,     0,    93,    91,    87,
     145,   140,     0,   183,   187,     0,   186,   155,   152,   153,
     154,   150,   151,     0,   170,   164,   165,   166,   168,   167,
     169,     0,   161,   159,   160,     0,   174,     0,     0,     0,
       0,   249,   248,     0,   189,     0,   189,     0,   189,     0,
     120,   191,   192,   199,     0,   128,   129,   121,   200,   210,
      81,     0,   102,     0,   101,    94,    97,     0,    88,   144,
       0,     0,   184,   148,   163,   157,   175,     0,   257,   256,
     250,     0,     0,   221,   214,   227,   228,   232,     0,   234,
     235,     0,   126,    80,     0,     0,     0,     0,   188,   185,
     255,   189,   216,     0,     0,   189,     0,     0,   127,    95,
      96,   100,     0,   222,   219,   189,   220,   217,     0,   215,
     233,     0,     0,    98,     0,   223,   218,   189,   189,    99,
     229,   230
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,    22,    16,    17,    18,    26,   189,
      37,    30,    42,    43,   112,    91,    70,    45,    54,    55,
      57,    76,    77,    81,    82,    83,   137,    71,   149,   113,
     114,   115,   116,   242,   117,   118,   119,   120,   121,   122,
     123,   124,   221,   125,   150,   151,   152,   153,   355,   356,
     357,   223,   126,   127,   128,   129,   167,   243,   191,   282,
     283,   284,   344,   285,   244,   245,    73,   246,   247,   313,
     248,   249,   325,   250,   321,   251,   131,   266,   252,   253,
     193,   255,   305,   306,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   372,   373,   394,   205,   206,
     207,   208,   273,   378,   411,   209,   276,    84,   213,    85,
      86,   217,    87,   175,   261,   262,   263,   369,     6,     7,
      20,    32,    34
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -320
static const yytype_int16 yypact[] =
{
      26,    22,    38,    71,  -320,     9,  -320,    23,    -6,  -320,
    -320,    16,    97,   113,   113,   141,    78,  -320,   163,   170,
     169,  -320,   106,   109,   109,  -320,    14,  -320,   186,   193,
     191,  -320,   163,   163,   173,  -320,   212,  -320,  -320,   141,
    -320,   160,   193,  -320,   228,   189,   191,   191,   174,  -320,
    -320,    80,  -320,   202,   228,  -320,   113,   115,   189,   189,
    -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,   177,
    -320,   184,  -320,  -320,   287,  -320,   113,  -320,    77,   264,
     266,   263,   115,  -320,  -320,   194,  -320,   195,   115,   115,
    -320,  -320,  -320,  -320,   -33,  -320,  -320,  -320,  -320,  -320,
    -320,   192,   197,   198,    15,   287,   241,  -320,  -320,  -320,
     113,   574,   213,   204,  -320,  -320,  -320,  -320,  -320,  -320,
    -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,
    -320,   214,  -320,   287,    42,   217,   505,  -320,  -320,  -320,
      75,   110,  -320,  -320,   278,  -320,   479,  -320,   290,    90,
     267,   219,  -320,   220,  -320,   479,   112,  -320,  -320,  -320,
    -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,    80,  -320,
     386,  -320,   221,    37,   287,   224,  -320,    94,   392,   141,
     392,   505,   392,   306,   311,  -320,  -320,  -320,  -320,   231,
     254,    25,   258,   214,  -320,  -320,  -320,  -320,  -320,  -320,
    -320,   -14,  -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,
    -320,  -320,  -320,   245,  -320,  -320,  -320,   246,   242,   248,
    -320,    35,   243,   308,   287,  -320,    19,  -320,  -320,  -320,
    -320,    17,  -320,  -320,  -320,  -320,  -320,   453,   311,   392,
     349,   453,  -320,  -320,  -320,  -320,  -320,    72,   148,   116,
    -320,  -320,   126,  -320,  -320,  -320,  -320,   113,   146,  -320,
    -320,   -25,  -320,  -320,  -320,   287,  -320,   310,  -320,   296,
     -27,   298,  -320,   279,  -320,  -320,   -16,   534,   392,   392,
    -320,   341,    25,  -320,  -320,  -320,   392,  -320,  -320,   505,
    -320,  -320,  -320,   479,   315,   345,    80,  -320,  -320,   275,
    -320,  -320,   274,  -320,   294,    53,  -320,   116,  -320,  -320,
    -320,  -320,  -320,   453,  -320,  -320,  -320,  -320,  -320,  -320,
    -320,   392,  -320,  -320,  -320,   453,  -320,   386,   149,   355,
      37,  -320,  -320,    80,   505,   392,   505,   392,   505,   311,
     -35,  -320,  -320,  -320,    63,  -320,  -320,  -320,  -320,  -320,
    -320,   287,  -320,   329,  -320,   282,  -320,   152,  -320,  -320,
     392,   392,  -320,  -320,  -320,    72,  -320,   355,  -320,  -320,
    -320,   157,    -4,  -320,   322,  -320,  -320,  -320,   196,  -320,
    -320,   392,  -320,  -320,    80,    80,    80,   283,  -320,  -320,
    -320,   505,  -320,    59,    10,   505,   392,   392,  -320,   282,
    -320,  -320,    11,  -320,  -320,   505,  -320,  -320,   338,  -320,
    -320,   321,   324,  -320,   291,  -320,  -320,   505,   505,  -320,
    -320,  -320
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -320,  -320,  -320,  -320,  -320,   356,   -10,  -320,  -320,    -5,
    -320,   218,  -320,   336,   -48,  -320,   309,   206,  -320,   325,
     200,  -320,   305,   175,  -320,   300,  -320,  -141,    -8,   -97,
    -320,  -131,  -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,
     281,  -320,  -320,  -320,   -18,  -320,   162,   178,    21,    18,
    -319,   111,  -320,  -320,  -320,  -320,  -320,  -129,  -320,  -320,
     119,  -320,  -320,  -320,  -320,   -51,  -320,  -233,    82,  -320,
      87,   168,  -320,   -11,  -320,   -52,  -134,  -120,  -320,    86,
    -169,  -320,  -320,    54,  -277,   137,  -320,  -320,  -320,   142,
     337,   239,  -320,  -320,  -320,  -320,    28,  -320,  -320,  -320,
    -320,  -320,  -320,  -320,    30,  -320,  -320,  -320,  -320,  -164,
    -320,  -320,  -160,   288,  -320,    92,  -320,    61,  -320,  -320,
    -320,  -320,  -320
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -174
static const yytype_int16 yytable[] =
{
      72,   254,   192,    69,   300,    23,    24,   190,   154,   259,
      27,   171,   349,   260,   371,   220,   288,    21,    40,   335,
      93,    21,   130,    72,   228,    21,   392,    14,     8,   241,
    -173,    15,   338,   -28,    50,     1,   172,   241,     2,   241,
     407,   241,   148,    21,     9,   147,   148,   192,    78,   170,
     148,  -173,   190,   130,    72,   275,   289,   374,   330,   376,
     331,   379,    61,    62,    63,    64,    65,    66,    78,   289,
     339,    10,   257,   287,   371,    79,    80,   264,    13,   393,
     363,   130,    72,    61,    62,    63,    64,    65,    66,   404,
      15,   405,    11,   408,   130,    72,   413,    38,   241,   241,
      39,  -173,   156,   130,    72,  -120,    12,  -120,  -120,   301,
      19,   210,   211,   279,   403,   280,   281,    72,   409,    21,
     230,   293,   130,    72,   294,    15,   173,   297,   415,   174,
     212,   216,   308,   309,   310,    67,    68,   241,   241,   361,
     420,   421,   362,   192,    25,   241,   214,   215,   190,   381,
     311,   312,   382,    79,    80,   192,    67,    68,   254,  -173,
     190,    28,   350,    36,   133,   258,   259,   267,   332,   269,
     260,   271,   130,    72,   268,   322,    36,   224,   170,    29,
     241,    14,  -120,    33,  -120,  -120,   241,    61,    62,    63,
      64,    35,   323,   324,   241,    36,   241,   229,    36,    41,
     192,    15,   192,    48,   192,   190,   314,   190,    44,   190,
     380,   326,   327,   130,    72,   315,   316,   317,    49,   241,
     241,   318,   319,   320,    56,   103,   104,    51,   302,   304,
     105,   106,    36,   329,    53,    36,   367,   108,   386,   387,
     241,   130,    72,   386,   391,    72,   396,   397,   354,   328,
      46,    47,    58,    59,   383,   241,   241,   192,    88,    89,
      90,   192,   190,   142,   143,    60,   190,   343,   345,    74,
     134,   192,   135,   136,   155,   348,   190,   140,   141,   168,
     144,   218,    72,   192,   192,   354,   146,   169,   190,   190,
      61,    62,    63,    94,    65,    66,   222,   225,   170,   130,
      72,   173,   226,   227,   256,    95,    96,    97,    98,    99,
     100,   265,   272,   101,   102,   103,   104,   274,   277,   278,
     105,   106,   258,   286,   375,   107,   377,   108,   290,   291,
     295,   292,  -173,    72,    72,    72,   354,   354,   401,   334,
     109,   296,    72,   333,   337,   354,   336,   346,   351,   388,
     304,   352,    61,    62,    63,   231,   232,   233,   358,   359,
     360,   368,   384,    67,    68,   385,   395,   402,   416,   417,
     398,   110,   418,   234,   235,    31,   419,   111,    52,    75,
      92,   132,   139,   145,   414,   410,   410,   107,   298,    61,
      62,    63,   231,   232,   233,    61,    62,    63,   231,   232,
     233,   347,   236,   400,   299,   399,   353,   365,   364,   307,
     234,   235,   237,   366,   341,   389,   234,   235,   138,   342,
     270,   406,   370,   176,   107,    67,    68,   412,   390,   238,
     107,     0,     0,   239,     0,     0,     0,   240,   303,   236,
     185,   186,   187,   188,     0,   236,     0,     0,     0,   237,
       0,     0,     0,     0,     0,   237,    61,    62,    63,   231,
     232,   233,    67,    68,     0,     0,   238,     0,    67,    68,
     239,     0,   238,     0,   240,     0,   239,   234,   235,     0,
     240,     0,    61,    62,    63,   219,    65,    66,     0,     0,
       0,   107,     0,     0,     0,     0,     0,     0,    96,    97,
      98,    99,   100,     0,     0,     0,   236,     0,    25,     0,
       0,   177,     0,     0,     0,   136,   237,   107,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   238,     0,     0,   178,   239,     0,     0,
     340,   240,     0,   107,   136,     0,   179,   180,     0,     0,
     181,     0,   182,     0,   183,    67,    68,   184,     0,   185,
     186,   187,   188,   110,     0,   178,     0,     0,     0,     0,
       0,     0,   107,     0,     0,   179,   180,     0,     0,   181,
     157,   182,     0,   183,     0,     0,   184,     0,   185,   186,
     187,   188,     0,   158,   159,     0,   160,   161,     0,     0,
     162,     0,   163,   164,     0,     0,     0,     0,     0,     0,
       0,     0,   165,     0,   166
};

static const yytype_int16 yycheck[] =
{
      51,   170,   136,    51,   237,    13,    14,   136,   105,   173,
      15,   131,   289,   173,   333,   146,    30,     6,    28,    46,
      71,     6,    74,    74,   155,     6,    30,    11,     6,   170,
      65,    15,    48,    66,    39,     9,   133,   178,    12,   180,
      30,   182,    31,     6,     6,    30,    31,   181,    56,    84,
      31,    84,   181,   105,   105,   184,    83,   334,    83,   336,
      85,   338,     3,     4,     5,     6,     7,     8,    76,    83,
      86,     0,    35,   193,   393,    38,    39,   174,    84,    83,
     313,   133,   133,     3,     4,     5,     6,     7,     8,    30,
      15,    32,    83,    83,   146,   146,    85,    83,   239,   240,
      86,    84,   110,   155,   155,    88,    83,    90,    91,   238,
      13,    36,    37,    88,   391,    90,    91,   168,   395,     6,
     168,    86,   174,   174,    89,    15,    84,   224,   405,    87,
     140,   141,    60,    61,    62,    76,    77,   278,   279,    86,
     417,   418,    89,   277,     3,   286,    36,    37,   277,    86,
      78,    79,    89,    38,    39,   289,    76,    77,   327,    65,
     289,    83,   293,    86,    87,   173,   330,   178,   265,   180,
     330,   182,   224,   224,   179,    59,    86,    87,    84,    16,
     321,    11,    88,    14,    90,    91,   327,     3,     4,     5,
       6,    85,    76,    77,   335,    86,   337,    85,    86,     6,
     334,    15,   336,    30,   338,   334,    58,   336,    17,   338,
     339,    85,    86,   265,   265,    67,    68,    69,     6,   360,
     361,    73,    74,    75,    35,    28,    29,    67,   239,   240,
      33,    34,    86,    87,     6,    86,    87,    40,    86,    87,
     381,   293,   293,    86,    87,   296,    50,    51,   296,   257,
      32,    33,    46,    47,   351,   396,   397,   391,    58,    59,
      83,   395,   391,    88,    89,    91,   395,   278,   279,    67,
       6,   405,     6,    10,    33,   286,   405,    83,    83,    66,
      88,     3,   333,   417,   418,   333,    88,    83,   417,   418,
       3,     4,     5,     6,     7,     8,     6,    30,    84,   351,
     351,    84,    83,    83,    83,    18,    19,    20,    21,    22,
      23,    87,     6,    26,    27,    28,    29,     6,    87,    65,
      33,    34,   330,    65,   335,    38,   337,    40,    83,    83,
      87,    89,    84,   384,   385,   386,   384,   385,   386,    43,
      53,    33,   393,    33,    65,   393,    48,     6,    33,   360,
     361,     6,     3,     4,     5,     6,     7,     8,    83,    85,
      66,     6,    33,    76,    77,    83,    44,    84,    30,    48,
     381,    84,    48,    24,    25,    19,    85,    90,    42,    54,
      71,    76,    82,   102,   402,   396,   397,    38,   226,     3,
       4,     5,     6,     7,     8,     3,     4,     5,     6,     7,
       8,   282,    53,   385,   226,   384,   295,   325,   321,   241,
      24,    25,    63,   327,   277,   361,    24,    25,    81,   277,
     181,   393,   330,   135,    38,    76,    77,   397,   367,    80,
      38,    -1,    -1,    84,    -1,    -1,    -1,    88,    89,    53,
      54,    55,    56,    57,    -1,    53,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    63,     3,     4,     5,     6,
       7,     8,    76,    77,    -1,    -1,    80,    -1,    76,    77,
      84,    -1,    80,    -1,    88,    -1,    84,    24,    25,    -1,
      88,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    53,    -1,     3,    -1,
      -1,     6,    -1,    -1,    -1,    10,    63,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    -1,    -1,    31,    84,    -1,    -1,
       6,    88,    -1,    38,    10,    -1,    41,    42,    -1,    -1,
      45,    -1,    47,    -1,    49,    76,    77,    52,    -1,    54,
      55,    56,    57,    84,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    41,    42,    -1,    -1,    45,
       6,    47,    -1,    49,    -1,    -1,    52,    -1,    54,    55,
      56,    57,    -1,    19,    20,    -1,    22,    23,    -1,    -1,
      26,    -1,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    40
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
     165,   167,   170,   171,   172,   173,    83,    35,   120,   201,
     204,   206,   207,   208,   121,    87,   169,   165,   101,   165,
     183,   165,     6,   194,     6,   149,   198,    87,    65,    88,
      90,    91,   151,   152,   153,   155,    65,   169,    30,    83,
      83,    83,    89,    86,    89,    87,    33,   121,   138,   139,
     159,   149,   165,    89,   165,   174,   175,   163,    60,    61,
      62,    78,    79,   161,    58,    67,    68,    69,    73,    74,
      75,   166,    59,    76,    77,   164,    85,    86,   120,    87,
      83,    85,   121,    33,    43,    46,    48,    65,    48,    86,
       6,   177,   181,   165,   154,   165,     6,   152,   165,   176,
     123,    33,     6,   143,   106,   140,   141,   142,    83,    85,
      66,    86,    89,   159,   162,   160,   171,    87,     6,   209,
     207,   142,   187,   188,   176,   165,   176,   165,   195,   176,
     149,    86,    89,   121,    33,    83,    86,    87,   165,   175,
     209,    87,    30,    83,   189,    44,    50,    51,   165,   140,
     141,   106,    84,   176,    30,    32,   188,    30,    83,   176,
     165,   196,   196,    85,   136,   176,    30,    48,    48,    85,
     176,   176
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

    {printf("regla ordinal_type_identifier2\n");}
    break;

  case 64:

    {printf("regla ordinal_type_identifier3\n");}
    break;

  case 65:

    {printf("regla ordinal_type_identifier4\n");}
    break;

  case 66:

    {printf("regla ordinal_type_identifier5\n");}
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

    {printf("regla formal_parameter_list_iterable1\n");}
    break;

  case 251:

    {printf("regla formal_parameter_list_iterable2\n");}
    break;

  case 252:

    {printf("regla formal_parameter_list_iterable_list1\n");}
    break;

  case 253:

    {printf("regla formal_parameter_list_iterable_list2\n");}
    break;

  case 254:

    {printf("regla formal_parameter_list_iterable_list3\n");}
    break;

  case 255:

    {printf("regla parameter_declaration1\n");}
    break;

  case 256:

    {printf("regla parameter_declaration2\n");}
    break;

  case 257:

    {printf("regla type_identifier1\n");}
    break;

  case 258:

    {printf("regla regular_unit1\n");}
    break;

  case 259:

    {printf("regla unit_heading1\n");}
    break;

  case 260:

    {printf("regla interface_part1\n");}
    break;

  case 261:

    {printf("regla uses_clause_empty1\n");}
    break;

  case 262:

    {printf("regla uses_clause_empty2\n");}
    break;

  case 263:

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
