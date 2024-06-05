
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
#define YYLAST   764

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  129
/* YYNRULES -- Number of rules.  */
#define YYNRULES  282
/* YYNRULES -- Number of states.  */
#define YYNSTATES  453

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
       2,     2,     2,     2,     2,    88,     2,     2,     2,     2,
      85,    86,    78,    76,    87,    77,    84,    79,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    89,    83,
      68,    67,    69,     2,    80,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    90,     2,    91,    92,     2,     2,     2,     2,     2,
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
       0,     0,     3,     5,     7,    12,    19,    22,    28,    30,
      33,    34,    35,    44,    48,    49,    53,    55,    56,    59,
      62,    63,    66,    68,    73,    74,    77,    80,    82,    85,
      87,    89,    91,    94,    95,    98,   100,   105,   108,   109,
     112,   114,   119,   121,   122,   125,   127,   129,   131,   133,
     134,   136,   138,   142,   144,   146,   148,   150,   152,   154,
     156,   158,   160,   162,   164,   166,   168,   170,   172,   174,
     176,   178,   180,   184,   188,   190,   192,   197,   202,   205,
     207,   209,   211,   213,   215,   222,   226,   228,   230,   234,
     238,   242,   244,   248,   250,   253,   257,   259,   262,   266,
     271,   273,   276,   280,   282,   286,   291,   298,   302,   304,
     309,   315,   319,   321,   323,   327,   329,   332,   335,   337,
     339,   341,   343,   345,   347,   349,   351,   353,   355,   357,
     359,   361,   364,   366,   369,   371,   373,   375,   377,   381,
     385,   387,   390,   393,   395,   397,   399,   401,   403,   405,
     407,   410,   412,   414,   417,   419,   421,   423,   427,   430,
     432,   434,   438,   440,   442,   444,   446,   448,   450,   453,
     455,   459,   461,   463,   465,   467,   469,   473,   475,   477,
     479,   481,   483,   485,   487,   490,   495,   497,   499,   503,
     506,   512,   516,   518,   520,   522,   524,   526,   528,   530,
     533,   537,   541,   543,   545,   549,   550,   553,   557,   561,
     563,   565,   567,   569,   571,   573,   575,   579,   583,   585,
     588,   591,   594,   596,   598,   600,   602,   606,   610,   612,
     614,   616,   621,   628,   634,   641,   649,   656,   660,   662,
     666,   670,   672,   674,   676,   681,   686,   695,   704,   706,
     708,   710,   715,   719,   721,   726,   728,   730,   732,   735,
     739,   744,   746,   748,   750,   755,   761,   765,   768,   772,
     774,   776,   778,   780,   785,   789,   791,   792,   800,   803,
     810,   812,   813
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      94,     0,    -1,    95,    -1,   216,    -1,    96,    83,    99,
      84,    -1,    96,    83,    98,    83,    99,    84,    -1,     9,
       6,    -1,     9,     6,    85,    97,    86,    -1,   123,    -1,
      11,   123,    -1,    -1,    -1,   102,   106,   112,   115,   100,
     118,   101,   121,    -1,    15,   103,    83,    -1,    -1,   103,
      87,   104,    -1,   104,    -1,    -1,     3,   105,    -1,    16,
     107,    -1,    -1,   107,   108,    -1,   108,    -1,     6,    67,
     109,    83,    -1,    -1,   111,   110,    -1,   122,   111,    -1,
     164,    -1,    88,   164,    -1,     7,    -1,     8,    -1,     6,
      -1,    17,   113,    -1,    -1,   113,   114,    -1,   114,    -1,
       6,    67,   124,    83,    -1,    35,   116,    -1,    -1,   116,
     117,    -1,   117,    -1,   123,    89,   124,    83,    -1,   119,
      -1,    -1,   119,   120,    -1,   120,    -1,   205,    -1,   208,
      -1,   188,    -1,    -1,    76,    -1,    77,    -1,   123,    87,
       6,    -1,     6,    -1,   125,    -1,   134,    -1,   152,    -1,
       6,    -1,   126,    -1,   131,    -1,   133,    -1,   130,    -1,
     129,    -1,   127,    -1,    19,    -1,    20,    -1,    22,    -1,
      23,    -1,   173,    -1,    21,    -1,    24,    -1,    25,    -1,
      85,   123,    86,    -1,   109,    66,   109,    -1,   132,    -1,
      18,    -1,    26,    90,     3,    91,    -1,    26,    90,     6,
      91,    -1,    27,   135,    -1,   135,    -1,   136,    -1,   150,
      -1,   151,    -1,   141,    -1,    28,    90,   137,    91,    33,
     124,    -1,   137,    87,   138,    -1,   138,    -1,   126,    -1,
     126,   167,   139,    -1,   126,   122,   140,    -1,   139,   167,
     164,    -1,   164,    -1,   140,   122,   163,    -1,   163,    -1,
      29,    30,    -1,    29,   142,    30,    -1,   143,    -1,   143,
      83,    -1,   143,    83,   145,    -1,   143,    83,   145,    83,
      -1,   145,    -1,   145,    83,    -1,   143,    83,   144,    -1,
     144,    -1,   123,    89,   124,    -1,    31,   149,    33,   146,
      -1,    31,     6,    89,   149,    33,   146,    -1,   146,    83,
     147,    -1,   147,    -1,   148,    89,    85,    86,    -1,   148,
      89,    85,   142,    86,    -1,   148,    87,   109,    -1,   109,
      -1,     6,    -1,    34,    33,   126,    -1,    40,    -1,    33,
     124,    -1,    92,   154,    -1,   153,    -1,    53,    -1,    19,
      -1,    20,    -1,    22,    -1,    23,    -1,    26,    -1,    29,
      -1,    40,    -1,    28,    -1,     6,    -1,    38,    -1,   163,
      -1,   156,   157,    -1,     6,    -1,   157,   158,    -1,   158,
      -1,   159,    -1,   161,    -1,    92,    -1,    90,   160,    91,
      -1,   160,    87,   171,    -1,   171,    -1,    84,     6,    -1,
      84,   173,    -1,   163,    -1,     7,    -1,     8,    -1,    53,
      -1,     3,    -1,     4,    -1,     5,    -1,   122,   163,    -1,
     163,    -1,   155,    -1,    80,   155,    -1,   162,    -1,   173,
      -1,   179,    -1,    85,   171,    86,    -1,    63,   165,    -1,
       6,    -1,   128,    -1,   166,   167,   165,    -1,   165,    -1,
      78,    -1,    79,    -1,    60,    -1,    61,    -1,    62,    -1,
     122,   169,    -1,   169,    -1,   169,   170,   166,    -1,   166,
      -1,    76,    -1,    77,    -1,    59,    -1,   168,    -1,   168,
     172,   168,    -1,    67,    -1,    68,    -1,    69,    -1,    74,
      -1,    73,    -1,    75,    -1,    58,    -1,   174,   175,    -1,
     174,   175,    89,   154,    -1,    38,    -1,     6,    -1,    85,
     176,    86,    -1,    85,    86,    -1,    85,   176,    89,   154,
      86,    -1,   176,    87,   177,    -1,   177,    -1,   171,    -1,
     178,    -1,    56,    -1,    57,    -1,    54,    -1,    55,    -1,
      90,    91,    -1,    90,   180,    91,    -1,   180,    87,   181,
      -1,   181,    -1,   171,    -1,   171,    66,   171,    -1,    -1,
     104,    89,    -1,   104,    89,   183,    -1,   104,    89,   187,
      -1,   183,    -1,   187,    -1,     6,    -1,   155,    -1,   184,
      -1,   185,    -1,   186,    -1,   155,    65,   171,    -1,   174,
      65,   171,    -1,   178,    -1,   178,   175,    -1,     6,   175,
      -1,    41,   104,    -1,   188,    -1,   190,    -1,   196,    -1,
     203,    -1,    10,   189,    30,    -1,   189,    83,   182,    -1,
     182,    -1,   191,    -1,   192,    -1,    42,   171,    43,   182,
      -1,    42,   171,    43,   182,    44,   182,    -1,    31,   171,
      33,   193,    30,    -1,    31,   171,    33,   193,   195,    30,
      -1,    31,   171,    33,   193,   195,    83,    30,    -1,    31,
     171,    33,   193,    83,    30,    -1,   193,    83,   194,    -1,
     194,    -1,   148,    89,   182,    -1,    83,    32,   182,    -1,
     197,    -1,   198,    -1,   199,    -1,    45,   189,    46,   171,
      -1,    47,   171,    48,   182,    -1,    49,   200,    65,   201,
      50,   202,    48,   182,    -1,    49,   200,    65,   201,    51,
     202,    48,   182,    -1,     6,    -1,   171,    -1,   171,    -1,
      52,   204,    48,   182,    -1,   204,    87,   155,    -1,   155,
      -1,   207,    83,   206,    83,    -1,    99,    -1,    36,    -1,
      37,    -1,    39,     6,    -1,    39,     6,   211,    -1,   210,
      83,   209,    83,    -1,    99,    -1,    36,    -1,    37,    -1,
      38,     6,    89,   154,    -1,    38,     6,   211,    89,   154,
      -1,    85,   212,    86,    -1,    85,    86,    -1,   212,    83,
     213,    -1,   213,    -1,   214,    -1,   207,    -1,   210,    -1,
      35,   123,    89,   215,    -1,   123,    89,   215,    -1,   124,
      -1,    -1,   218,    83,   219,   217,   221,    30,    84,    -1,
      12,     6,    -1,    13,   220,   106,   112,   115,   118,    -1,
      98,    -1,    -1,    14,   106,   112,   115,   118,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    49,    49,    50,    52,    53,    56,    57,    60,    62,
      69,    70,    66,    76,    77,    78,    79,    80,    80,    87,
      88,    89,    90,    93,    94,    94,    95,    96,    97,    98,
      99,   101,   103,   104,   105,   106,   109,   111,   112,   113,
     114,   116,   118,   119,   120,   121,   122,   123,   125,   126,
     128,   129,   131,   132,   136,   137,   138,   139,   142,   143,
     144,   146,   147,   148,   154,   155,   156,   157,   158,   159,
     161,   162,   164,   166,   168,   169,   171,   172,   178,   179,
     181,   182,   183,   184,   187,   188,   189,   191,   192,   193,
     195,   196,   197,   198,   200,   201,   203,   204,   205,   206,
     207,   208,   211,   212,   213,   215,   216,   218,   219,   221,
     222,   225,   226,   228,   231,   233,   234,   238,   240,   242,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   261,   263,   265,   266,   268,   269,   270,   274,   276,
     277,   279,   280,   288,   289,   290,   292,   294,   295,   296,
     297,   298,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   312,   313,   314,   315,   316,   317,   318,   321,   322,
     324,   326,   328,   329,   330,   333,   334,   336,   337,   338,
     339,   340,   341,   342,   346,   347,   350,   351,   354,   355,
     356,   360,   361,   363,   364,   366,   367,   368,   369,   372,
     373,   376,   377,   383,   384,   388,   389,   390,   391,   392,
     393,   394,   395,   398,   399,   400,   402,   403,   406,   407,
     408,   411,   414,   415,   416,   417,   421,   422,   423,   426,
     427,   431,   432,   434,   435,   436,   437,   438,   439,   440,
     441,   443,   444,   445,   448,   451,   453,   454,   455,   456,
     457,   460,   462,   463,   469,   471,   472,   473,   475,   476,
     479,   480,   481,   482,   484,   485,   491,   492,   494,   495,
     497,   498,   499,   501,   502,   505,   511,   511,   512,   513,
     516,   517,   520
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
  "'+'", "'-'", "'*'", "'/'", "'@'", "POSITIVE", "NEGATIVE", "';'", "'.'",
  "'('", "')'", "','", "'#'", "':'", "'['", "']'", "'^'", "$accept",
  "pascal", "program", "program_heading", "program_parameters",
  "uses_clause", "block", "$@1", "$@2", "label_declaration_part",
  "label_list", "label", "$@3", "constant_declaration_part",
  "constant_declaration_list", "constant_declaration", "constant", "$@4",
  "constant_identifier", "type_declaration_part", "type_declaration_list",
  "type_declaration", "variable_declaration_part",
  "variable_declaration_list", "variable_declaration",
  "procedure_and_function_declaration_part",
  "procedure_and_function_declaration_list",
  "procedure_and_function_declaration", "statement_part", "sign",
  "identifier_list", "type", "simple_type", "ordinal_type",
  "ordinal_type_identifier", "type_boolean", "enumerated_type",
  "subrange_type", "real_type", "real_type_identifier", "string_type",
  "structured_type", "type_list", "array_type", "index_type_list",
  "ordinal_type_expression", "signed_number_expression_list",
  "unsigned_number_expression_list", "record_type", "field_list",
  "fixed_part", "field_declaration", "variant_part", "variant_list",
  "variant", "constant_list", "tag_field_type", "set_type", "file_type",
  "pointer_type", "pointer_type_identifier", "base_type",
  "variable_reference", "variable_identifier", "qualifier_list",
  "qualifier", "index", "expression_list", "field_designator",
  "unsigned_constant", "unsigned_number", "signed_number", "factor",
  "term", "term_operator_list", "simple_expression",
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
  "type_identifier", "regular_unit", "$@5", "unit_heading",
  "interface_part", "uses_clause_empty", "implementation_part", 0
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
      64,   328,   329,    59,    46,    40,    41,    44,    35,    58,
      91,    93,    94
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    94,    94,    95,    95,    96,    96,    97,    98,
     100,   101,    99,   102,   102,   103,   103,   105,   104,   106,
     106,   107,   107,   108,   110,   109,   109,   109,   109,   109,
     109,   111,   112,   112,   113,   113,   114,   115,   115,   116,
     116,   117,   118,   118,   119,   119,   120,   120,   121,   121,
     122,   122,   123,   123,   124,   124,   124,   124,   125,   125,
     125,   126,   126,   126,   127,   127,   127,   127,   127,   127,
     128,   128,   129,   130,   131,   132,   133,   133,   134,   134,
     135,   135,   135,   135,   136,   137,   137,   138,   138,   138,
     139,   139,   140,   140,   141,   141,   142,   142,   142,   142,
     142,   142,   143,   143,   144,   145,   145,   146,   146,   147,
     147,   148,   148,   149,   150,   151,   151,   152,   152,   153,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   155,   156,   157,   157,   158,   158,   158,   159,   160,
     160,   161,   161,   162,   162,   162,   162,   163,   163,   163,
     164,   164,   165,   165,   165,   165,   165,   165,   165,   165,
     165,   166,   166,   167,   167,   167,   167,   167,   168,   168,
     169,   169,   170,   170,   170,   171,   171,   172,   172,   172,
     172,   172,   172,   172,   173,   173,   174,   174,   175,   175,
     175,   176,   176,   177,   177,   178,   178,   178,   178,   179,
     179,   180,   180,   181,   181,   182,   182,   182,   182,   182,
     182,   182,   182,   183,   183,   183,   184,   184,   185,   185,
     185,   186,   187,   187,   187,   187,   188,   189,   189,   190,
     190,   191,   191,   192,   192,   192,   192,   193,   193,   194,
     195,   196,   196,   196,   197,   198,   199,   199,   200,   201,
     202,   203,   204,   204,   205,   206,   206,   206,   207,   207,
     208,   209,   209,   209,   210,   210,   211,   211,   212,   212,
     213,   213,   213,   214,   214,   215,   217,   216,   218,   219,
     220,   220,   221
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     4,     6,     2,     5,     1,     2,
       0,     0,     8,     3,     0,     3,     1,     0,     2,     2,
       0,     2,     1,     4,     0,     2,     2,     1,     2,     1,
       1,     1,     2,     0,     2,     1,     4,     2,     0,     2,
       1,     4,     1,     0,     2,     1,     1,     1,     1,     0,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     1,     1,     4,     4,     2,     1,
       1,     1,     1,     1,     6,     3,     1,     1,     3,     3,
       3,     1,     3,     1,     2,     3,     1,     2,     3,     4,
       1,     2,     3,     1,     3,     4,     6,     3,     1,     4,
       5,     3,     1,     1,     3,     1,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     2,     1,     1,     1,     1,     3,     3,
       1,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     2,     1,     1,     1,     3,     2,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     2,     1,
       3,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     2,     4,     1,     1,     3,     2,
       5,     3,     1,     1,     1,     1,     1,     1,     1,     2,
       3,     3,     1,     1,     3,     0,     2,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     1,     2,
       2,     2,     1,     1,     1,     1,     3,     3,     1,     1,
       1,     4,     6,     5,     6,     7,     6,     3,     1,     3,
       3,     1,     1,     1,     4,     4,     8,     8,     1,     1,
       1,     4,     3,     1,     4,     1,     1,     1,     2,     3,
       4,     1,     1,     1,     4,     5,     3,     2,     3,     1,
       1,     1,     1,     4,     3,     1,     0,     7,     2,     6,
       1,     0,     5
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     2,     0,     3,     0,     6,   278,
       1,    14,     0,     0,     0,     0,     0,     0,    20,   281,
     276,    53,     0,     8,     9,    17,     0,    16,    14,     4,
       0,    33,   280,    20,     0,     7,     0,    18,    13,     0,
       0,     0,    19,    22,     0,    38,    33,    20,     0,    52,
      15,     5,     0,    21,     0,    32,    35,     0,    10,    38,
      33,     0,   147,   148,   149,    31,    29,    30,    50,    51,
       0,     0,    24,     0,   151,    27,     0,    34,    37,    40,
       0,    43,    43,    38,   277,     0,    28,    23,    25,    26,
     150,    57,    75,    64,    65,    69,    66,    67,     0,     0,
       0,     0,     0,     0,   186,   115,   119,     0,     0,     0,
       0,    54,    58,    63,    62,    61,    59,    74,    60,    55,
      79,    80,    83,    81,    82,    56,   118,    68,     0,    39,
       0,     0,     0,    11,    42,    45,    46,     0,    47,     0,
     279,    43,     0,    78,     0,    94,     0,     0,     0,    96,
     103,   100,   116,     0,     0,   128,   120,   121,   122,   123,
     124,   127,   125,   129,   126,   117,   130,     0,    36,     0,
     184,     0,     0,   258,    49,    44,    14,    14,   282,     0,
       0,    31,    87,     0,    86,   113,     0,     0,    95,    97,
     101,   114,    72,    73,   159,   144,   145,    70,    71,   146,
     197,   198,   195,   196,     0,     0,     0,   189,     0,     0,
     160,   152,     0,   154,   143,   162,   171,   175,   169,   193,
     155,     0,   192,   194,   156,     0,    41,     0,     0,     0,
     259,   205,    12,    48,   256,   257,   255,     0,   262,   263,
     261,     0,    76,    77,   165,   166,   167,   163,   164,     0,
       0,     0,     0,     0,     0,   104,   102,    98,   158,   132,
     153,     0,   199,   203,     0,   202,   168,     0,     0,   137,
     131,   134,   135,   136,     0,   183,   177,   178,   179,   181,
     180,   182,     0,   174,   172,   173,     0,   188,     0,     0,
     185,     0,   267,     0,   271,   272,     0,   269,   270,   264,
       0,   211,     0,     0,     0,   205,     0,     0,     0,     0,
     212,     0,   218,   228,   209,   213,   214,   215,   210,   222,
       0,   223,   229,   230,   224,   241,   242,   243,   225,   254,
     260,    89,    93,    88,    91,    85,     0,   113,     0,   112,
     105,   108,     0,    99,   157,     0,     0,   200,   141,   142,
       0,   140,   133,   161,   176,   170,   191,     0,     0,     0,
       0,   266,   265,   220,     0,   221,     0,     0,     0,   248,
       0,   253,     0,   206,     0,     0,   219,   226,   205,     0,
       0,    84,     0,     0,     0,     0,   204,   201,     0,   138,
     190,     0,   275,   274,   268,     0,   205,     0,   205,     0,
     205,     0,   132,     0,   207,   208,   216,   217,   227,    92,
      90,   106,   107,   111,     0,   139,   273,     0,     0,   238,
     231,   244,   245,   249,     0,   251,   252,   109,     0,   205,
     233,     0,     0,   205,     0,     0,   110,   239,   236,   205,
     237,   234,     0,   232,   250,     0,     0,   240,   235,   205,
     205,   246,   247
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,    22,    16,    17,    81,   174,    18,
      26,   309,    37,    31,    42,    43,   109,    88,    72,    45,
      55,    56,    58,    78,    79,   133,   134,   135,   232,    73,
     147,   392,   111,   112,   113,   210,   114,   115,   116,   117,
     118,   119,   120,   121,   183,   184,   333,   331,   122,   148,
     149,   150,   151,   340,   341,   342,   186,   123,   124,   125,
     126,   165,   211,   212,   270,   271,   272,   350,   273,   213,
     214,    75,   215,   216,   274,   217,   218,   286,   219,   282,
     220,   128,   363,   221,   222,   312,   224,   264,   265,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     418,   419,   432,   324,   325,   326,   327,   370,   424,   445,
     328,   372,   136,   237,   137,   138,   241,   139,   229,   296,
     297,   298,   393,     6,    34,     7,    20,    33,    48
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -358
static const yytype_int16 yypact[] =
{
      39,    57,    66,    46,  -358,    25,  -358,    42,    20,  -358,
    -358,    32,   109,   145,   145,   180,   111,   119,   197,   210,
    -358,  -358,   158,   163,   163,  -358,     7,  -358,   239,  -358,
     253,   246,  -358,   197,   256,  -358,   261,  -358,  -358,   180,
     190,   211,   253,  -358,   274,   257,   246,   197,   255,  -358,
    -358,  -358,   134,  -358,   236,   274,  -358,   145,  -358,   257,
     246,   220,  -358,  -358,  -358,  -358,  -358,  -358,  -358,  -358,
     141,   222,  -358,   292,  -358,  -358,   365,  -358,   145,  -358,
      -8,   169,   169,   257,  -358,   223,  -358,  -358,  -358,  -358,
    -358,    -2,  -358,  -358,  -358,  -358,  -358,  -358,   218,   191,
     221,   156,   365,   280,  -358,  -358,  -358,   145,   724,   251,
     235,  -358,  -358,  -358,  -358,  -358,  -358,  -358,  -358,  -358,
    -358,  -358,  -358,  -358,  -358,  -358,  -358,  -358,   234,  -358,
     365,   318,   319,  -358,   169,  -358,  -358,   243,  -358,   254,
    -358,   169,    51,  -358,   597,  -358,   330,    47,   311,   259,
    -358,   264,  -358,   597,   153,  -358,  -358,  -358,  -358,  -358,
    -358,  -358,  -358,  -358,  -358,  -358,  -358,   134,  -358,   459,
     260,   267,    35,   266,   334,  -358,    40,   133,  -358,   262,
     263,   270,   359,    30,  -358,   268,   323,   365,  -358,    36,
    -358,  -358,  -358,  -358,    87,  -358,  -358,  -358,  -358,  -358,
    -358,  -358,  -358,  -358,   587,   346,   561,  -358,   405,   587,
    -358,  -358,   165,  -358,  -358,  -358,   174,   208,    98,  -358,
    -358,   103,  -358,  -358,  -358,   724,  -358,    14,   724,   269,
    -358,   649,  -358,  -358,  -358,  -358,  -358,   276,  -358,  -358,
    -358,   277,  -358,  -358,  -358,  -358,  -358,  -358,  -358,   223,
     141,   597,   328,   356,   134,  -358,  -358,   281,  -358,  -358,
    -358,   288,  -358,   300,    68,  -358,    98,    33,   561,  -358,
     165,  -358,  -358,  -358,   587,  -358,  -358,  -358,  -358,  -358,
    -358,  -358,   561,  -358,  -358,  -358,   587,  -358,   499,   724,
    -358,   145,  -358,    77,  -358,  -358,   102,  -358,  -358,  -358,
     724,    22,   561,   180,   561,   649,   561,   371,   346,   289,
     315,   316,   234,  -358,  -358,  -358,  -358,  -358,  -358,  -358,
      -3,  -358,  -358,  -358,  -358,  -358,  -358,  -358,  -358,  -358,
    -358,   214,  -358,   174,  -358,  -358,   365,  -358,   357,  -358,
     306,  -358,   127,  -358,  -358,   561,   561,  -358,   270,  -358,
      76,  -358,  -358,  -358,  -358,   174,  -358,   309,   143,   365,
      64,  -358,  -358,  -358,   364,  -358,   358,   -14,   354,  -358,
     339,  -358,   -19,   669,   561,   561,  -358,  -358,   649,   223,
     141,  -358,   134,   134,   134,   322,  -358,  -358,   561,  -358,
    -358,   365,  -358,  -358,  -358,   134,   649,   561,   649,   561,
     649,   346,   -25,   315,  -358,  -358,  -358,  -358,  -358,  -358,
    -358,   306,  -358,  -358,    10,  -358,  -358,   175,     5,  -358,
     370,  -358,  -358,  -358,   250,  -358,  -358,  -358,   329,   649,
    -358,   124,     6,   649,   561,   561,  -358,  -358,  -358,   649,
    -358,  -358,   392,  -358,  -358,   375,   376,  -358,  -358,   649,
     649,  -358,  -358
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -358,  -358,  -358,  -358,  -358,   406,   -16,  -358,  -358,  -358,
    -358,    -9,  -358,    11,  -358,   384,   -49,  -358,   355,    38,
    -358,   372,   -22,  -358,   353,   -56,  -358,   298,  -358,   -59,
     -12,   -68,  -358,  -125,  -358,  -358,  -358,  -358,  -358,  -358,
    -358,  -358,   335,  -358,  -358,   182,  -358,  -358,  -358,    26,
    -358,   258,   265,    62,    56,  -357,   192,  -358,  -358,  -358,
    -358,  -203,  -140,  -358,  -358,   176,  -358,  -358,  -358,  -358,
     -52,   -66,  -181,   162,  -175,   167,   242,  -358,  -193,  -358,
     -71,  -127,  -119,  -358,   164,  -155,  -358,  -358,   110,   -33,
      82,  -358,  -358,  -358,    86,   286,   166,  -358,  -358,  -358,
    -358,    41,  -358,  -358,  -358,  -358,  -358,  -358,  -358,    34,
    -358,  -358,  -358,  -358,  -217,  -358,  -358,  -210,   297,  -358,
     101,  -358,    83,  -358,  -358,  -358,  -358,  -358,  -358
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -188
static const yytype_int16 yytable[] =
{
      74,    23,    24,    71,    86,   127,    27,   250,   110,   170,
     294,    85,    40,   261,   223,   263,    21,   295,    74,   182,
      21,    90,   290,   258,    74,   299,   140,   377,   191,   400,
      50,   127,   397,    90,   152,   430,   441,    82,   417,   348,
    -187,   146,    21,    14,    46,    80,    10,    15,     1,   291,
      74,     2,   131,   132,   179,    15,   166,   180,    60,   127,
     169,   141,   171,     8,   -31,   260,    80,   146,   401,   378,
      21,   104,     9,   127,   417,   351,   234,   235,    74,    36,
     378,   130,   127,  -187,    59,   178,   357,  -187,   431,   442,
      38,   310,    74,   353,    39,   154,   427,   362,    83,   291,
     292,    74,   131,   132,   311,    13,  -132,   169,    11,   364,
     209,   366,  -132,   368,  -132,    74,   127,   251,   193,   255,
     227,   252,    19,   249,   228,    12,   182,    62,    63,    64,
      65,    66,    67,   223,    36,    74,   187,    62,    63,    64,
      65,    66,    67,   294,    62,    63,    64,   209,    15,   209,
     295,    21,   386,   263,   438,   346,   439,   283,   380,   347,
     236,   240,    21,   388,    36,   310,   359,   389,   371,   238,
     239,  -132,  -187,   166,   284,   285,   166,  -132,   311,  -132,
     127,   406,   407,    25,   334,   360,   145,   146,   361,   287,
     288,    85,   289,   376,    28,   415,   349,   332,    74,    74,
      68,    69,    74,    29,   421,   339,   423,   131,   132,   209,
      68,    69,    70,    30,   384,   293,   385,    68,    69,   100,
     101,    14,    70,   209,   102,   103,    62,    63,    64,   209,
      36,   105,   391,   403,   244,   245,   246,   166,   310,   192,
      36,   444,   444,   209,    35,   209,   311,   209,   166,   267,
      36,   311,   247,   248,    15,   268,   310,   269,   310,    41,
     310,   426,   384,    44,   429,   127,   275,    49,   381,   311,
      47,   311,   379,   311,    51,   276,   277,   278,    52,   358,
      54,   279,   280,   281,    74,    61,   209,   209,   127,   310,
      68,    69,    57,   310,   365,    62,    63,    64,    65,   310,
     434,   435,   311,    76,    84,    87,   311,    74,   142,   310,
     310,   144,   311,   153,   410,   209,   209,   167,   168,   169,
     127,    85,   311,   311,   172,   173,   176,   409,    74,   209,
      74,    74,    74,   339,   339,   413,   185,   177,   209,    74,
     209,   188,   189,    74,   231,   408,   339,   190,   293,   225,
     226,   227,   259,   242,   243,  -187,   254,   253,   300,   329,
     330,   336,   337,   420,   343,   422,   345,   425,    62,    63,
      64,    91,    66,    67,   344,   209,   209,   369,   373,    74,
     374,   375,   339,    92,    93,    94,    95,    96,    97,   383,
     382,    98,    99,   100,   101,   390,   437,   395,   102,   103,
     443,   396,   398,   104,   399,   105,   447,   414,    62,    63,
      64,   194,   195,   196,   433,   436,   451,   452,   106,   244,
     245,   246,   448,   449,   450,    32,    53,    77,    89,   197,
     198,   129,   175,   335,   143,    68,    69,   247,   248,   412,
     428,    68,    69,   104,   411,   338,   352,   256,   355,   354,
     107,   266,   356,    70,   257,   404,   387,   108,   199,   405,
     233,   394,    62,    63,    64,   194,   195,   196,   204,   446,
     230,   367,   440,     0,   416,     0,     0,     0,     0,     0,
       0,    68,    69,   197,   198,   205,     0,     0,     0,     0,
     206,     0,     0,     0,     0,   208,   262,   104,     0,     0,
       0,     0,    62,    63,    64,   194,   195,   196,     0,     0,
       0,     0,   199,   200,   201,   202,   203,     0,     0,     0,
       0,     0,   204,   197,   198,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    68,    69,   104,     0,   205,
       0,     0,     0,     0,   206,   207,     0,     0,     0,   208,
       0,     0,   199,   200,   201,   202,   203,     0,     0,     0,
       0,     0,   204,     0,    62,    63,    64,   194,   195,   196,
       0,     0,     0,     0,     0,    68,    69,     0,     0,   205,
       0,     0,     0,     0,   206,   197,   198,     0,     0,   208,
      62,    63,    64,   194,   195,   196,     0,     0,     0,   104,
      62,    63,    64,   181,    66,    67,     0,     0,     0,     0,
       0,   197,   198,     0,   199,     0,    93,    94,    95,    96,
      97,     0,     0,     0,   204,   104,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   104,     0,    68,    69,     0,
     199,   205,     0,     0,     0,     0,   206,     0,     0,     0,
     204,   208,    25,     0,     0,   301,     0,     0,     0,   231,
       0,     0,     0,     0,     0,     0,     0,   205,     0,     0,
       0,     0,   206,    68,    69,   402,     0,   208,     0,   231,
     302,     0,   107,     0,     0,    70,     0,   104,     0,     0,
     303,   304,     0,     0,   305,     0,   306,     0,   307,     0,
     302,   308,     0,   200,   201,   202,   203,   104,     0,     0,
     303,   304,     0,     0,   305,     0,   306,     0,   307,     0,
       0,   308,     0,   200,   201,   202,   203,    62,    63,    64,
     155,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   156,   157,     0,   158,   159,     0,     0,
     160,     0,   161,   162,     0,     0,     0,     0,     0,     0,
       0,     0,   163,     0,   164
};

static const yytype_int16 yycheck[] =
{
      52,    13,    14,    52,    70,    76,    15,   182,    76,   128,
     227,    70,    28,   206,   169,   208,     6,   227,    70,   144,
       6,    73,   225,   204,    76,   228,    82,    30,   153,    48,
      39,   102,    46,    85,   102,    30,    30,    59,   395,     6,
      65,    31,     6,    11,    33,    57,     0,    15,     9,    35,
     102,    12,    38,    39,     3,    15,   108,     6,    47,   130,
      85,    83,   130,     6,    66,   205,    78,    31,    87,    83,
       6,    38,     6,   144,   431,   268,    36,    37,   130,    87,
      83,    89,   153,    85,    46,   141,   289,    65,    83,    83,
      83,   231,   144,   274,    87,   107,    86,   300,    60,    35,
      86,   153,    38,    39,   231,    85,    84,    85,    83,   302,
     169,   304,    90,   306,    92,   167,   187,    87,   167,   187,
      85,    91,    13,   182,    89,    83,   251,     3,     4,     5,
       6,     7,     8,   288,    87,   187,    89,     3,     4,     5,
       6,     7,     8,   360,     3,     4,     5,   206,    15,   208,
     360,     6,   345,   346,    30,    87,    32,    59,   333,    91,
     176,   177,     6,    87,    87,   305,    89,    91,   308,    36,
      37,    84,    85,   225,    76,    77,   228,    90,   305,    92,
     251,   374,   375,     3,   250,    83,    30,    31,    86,    86,
      87,   250,    89,   312,    83,   388,   267,   249,   250,   251,
      76,    77,   254,    84,   397,   254,   399,    38,    39,   268,
      76,    77,    88,    16,    87,   227,    89,    76,    77,    28,
      29,    11,    88,   282,    33,    34,     3,     4,     5,   288,
      87,    40,    89,   373,    60,    61,    62,   289,   378,    86,
      87,   434,   435,   302,    86,   304,   373,   306,   300,    84,
      87,   378,    78,    79,    15,    90,   396,    92,   398,     6,
     400,   401,    87,    17,    89,   336,    58,     6,   336,   396,
      14,   398,   331,   400,    84,    67,    68,    69,    67,   291,
       6,    73,    74,    75,   336,    30,   345,   346,   359,   429,
      76,    77,    35,   433,   303,     3,     4,     5,     6,   439,
      50,    51,   429,    67,    84,    83,   433,   359,    90,   449,
     450,    90,   439,    33,   380,   374,   375,    66,    83,    85,
     391,   380,   449,   450,     6,     6,    83,   379,   380,   388,
     382,   383,   384,   382,   383,   384,     6,    83,   397,   391,
     399,    30,    83,   395,    10,   378,   395,    83,   360,    89,
      83,    85,     6,    91,    91,    85,    33,    89,    89,    83,
      83,    33,     6,   396,    83,   398,    66,   400,     3,     4,
       5,     6,     7,     8,    86,   434,   435,     6,    89,   431,
      65,    65,   431,    18,    19,    20,    21,    22,    23,    83,
      33,    26,    27,    28,    29,    86,   429,    33,    33,    34,
     433,    43,    48,    38,    65,    40,   439,    85,     3,     4,
       5,     6,     7,     8,    44,    86,   449,   450,    53,    60,
      61,    62,    30,    48,    48,    19,    42,    55,    73,    24,
      25,    78,   134,   251,    99,    76,    77,    78,    79,   383,
     414,    76,    77,    38,   382,   253,   270,   189,   286,   282,
      85,   209,   288,    88,   189,   373,   346,    92,    53,   373,
     174,   360,     3,     4,     5,     6,     7,     8,    63,   435,
     173,   305,   431,    -1,   391,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    77,    24,    25,    80,    -1,    -1,    -1,    -1,
      85,    -1,    -1,    -1,    -1,    90,    91,    38,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    53,    54,    55,    56,    57,    -1,    -1,    -1,
      -1,    -1,    63,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    77,    38,    -1,    80,
      -1,    -1,    -1,    -1,    85,    86,    -1,    -1,    -1,    90,
      -1,    -1,    53,    54,    55,    56,    57,    -1,    -1,    -1,
      -1,    -1,    63,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,    76,    77,    -1,    -1,    80,
      -1,    -1,    -1,    -1,    85,    24,    25,    -1,    -1,    90,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    38,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    24,    25,    -1,    53,    -1,    19,    20,    21,    22,
      23,    -1,    -1,    -1,    63,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    76,    77,    -1,
      53,    80,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,
      63,    90,     3,    -1,    -1,     6,    -1,    -1,    -1,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,
      -1,    -1,    85,    76,    77,     6,    -1,    90,    -1,    10,
      31,    -1,    85,    -1,    -1,    88,    -1,    38,    -1,    -1,
      41,    42,    -1,    -1,    45,    -1,    47,    -1,    49,    -1,
      31,    52,    -1,    54,    55,    56,    57,    38,    -1,    -1,
      41,    42,    -1,    -1,    45,    -1,    47,    -1,    49,    -1,
      -1,    52,    -1,    54,    55,    56,    57,     3,     4,     5,
       6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    20,    -1,    22,    23,    -1,    -1,
      26,    -1,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    40
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    12,    94,    95,    96,   216,   218,     6,     6,
       0,    83,    83,    85,    11,    15,    98,    99,   102,    13,
     219,     6,    97,   123,   123,     3,   103,   104,    83,    84,
      16,   106,    98,   220,   217,    86,    87,   105,    83,    87,
      99,     6,   107,   108,    17,   112,   106,    14,   221,     6,
     104,    84,    67,   108,     6,   113,   114,    35,   115,   112,
     106,    30,     3,     4,     5,     6,     7,     8,    76,    77,
      88,   109,   111,   122,   163,   164,    67,   114,   116,   117,
     123,   100,   115,   112,    84,   122,   164,    83,   110,   111,
     163,     6,    18,    19,    20,    21,    22,    23,    26,    27,
      28,    29,    33,    34,    38,    40,    53,    85,    92,   109,
     124,   125,   126,   127,   129,   130,   131,   132,   133,   134,
     135,   136,   141,   150,   151,   152,   153,   173,   174,   117,
      89,    38,    39,   118,   119,   120,   205,   207,   208,   210,
     118,   115,    90,   135,    90,    30,    31,   123,   142,   143,
     144,   145,   124,    33,   123,     6,    19,    20,    22,    23,
      26,    28,    29,    38,    40,   154,   163,    66,    83,    85,
     175,   124,     6,     6,   101,   120,    83,    83,   118,     3,
       6,     6,   126,   137,   138,     6,   149,    89,    30,    83,
      83,   126,    86,   109,     6,     7,     8,    24,    25,    53,
      54,    55,    56,    57,    63,    80,    85,    86,    90,   122,
     128,   155,   156,   162,   163,   165,   166,   168,   169,   171,
     173,   176,   177,   178,   179,    89,    83,    85,    89,   211,
     211,    10,   121,   188,    36,    37,    99,   206,    36,    37,
      99,   209,    91,    91,    60,    61,    62,    78,    79,   122,
     167,    87,    91,    89,    33,   124,   144,   145,   165,     6,
     155,   171,    91,   171,   180,   181,   169,    84,    90,    92,
     157,   158,   159,   161,   167,    58,    67,    68,    69,    73,
      74,    75,   172,    59,    76,    77,   170,    86,    87,    89,
     154,    35,    86,   123,   207,   210,   212,   213,   214,   154,
      89,     6,    31,    41,    42,    45,    47,    49,    52,   104,
     155,   174,   178,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   196,   197,   198,   199,   203,    83,
      83,   140,   163,   139,   164,   138,    33,     6,   149,   109,
     146,   147,   148,    83,    86,    66,    87,    91,     6,   173,
     160,   171,   158,   165,   168,   166,   177,   154,   123,    89,
      83,    86,   154,   175,   171,   104,   171,   189,   171,     6,
     200,   155,   204,    89,    65,    65,   175,    30,    83,   122,
     167,   124,    33,    83,    87,    89,   171,   181,    87,    91,
      86,    89,   124,   215,   213,    33,    43,    46,    48,    65,
      48,    87,     6,   155,   183,   187,   171,   171,   182,   163,
     164,   146,   147,   109,    85,   171,   215,   148,   193,   194,
     182,   171,   182,   171,   201,   182,   155,    86,   142,    89,
      30,    83,   195,    44,    50,    51,    86,   182,    30,    32,
     194,    30,    83,   182,   171,   202,   202,   182,    30,    48,
      48,   182,   182
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

    {printf("regla variable_declaration_part_block1\n");}
    break;

  case 11:

    {printf("regla procedure_and_function_declaration_part_block1\n");}
    break;

  case 12:

    {printf("regla block1\n");}
    break;

  case 13:

    {printf("regla label_declaration_part1\n");}
    break;

  case 14:

    {printf("regla label_declaration_part2\n");}
    break;

  case 15:

    {printf("regla label_list1\n");}
    break;

  case 16:

    {printf("regla label_list2\n");}
    break;

  case 17:

    {		
						if ((yyvsp[(1) - (1)].intVal) < 0 || (yyvsp[(1) - (1)].intVal) > 9999) {
                			yyerror("Label debe estar entre 0 y 9999");
            			}
            			// $<unsignedIntVal>$ = $1;
					;}
    break;

  case 18:

    {printf("regla label1\n");}
    break;

  case 19:

    {printf("regla constant_declaration_part1\n");}
    break;

  case 20:

    {printf("regla constant_declaration_part2\n");}
    break;

  case 21:

    {printf("regla constant_declaration_list1\n");}
    break;

  case 22:

    {printf("regla constant_declaration_list2\n");}
    break;

  case 23:

    {printf("regla constant_declaration1\n");}
    break;

  case 24:

    { /*constant_identifier este es cualquier constante identifier*/	;}
    break;

  case 25:

    {printf("regla constant1\n");}
    break;

  case 26:

    {printf("regla constant2\n");}
    break;

  case 27:

    {printf("regla constant3\n");}
    break;

  case 28:

    {printf("regla constant4\n");}
    break;

  case 29:

    {printf("regla constant5\n");}
    break;

  case 30:

    {printf("regla constant6\n");}
    break;

  case 31:

    {printf("regla constant_identifier1\n");}
    break;

  case 32:

    {printf("regla type_declaration_part1\n");}
    break;

  case 33:

    {printf("regla type_declaration_part2\n");}
    break;

  case 34:

    {printf("regla type_declaration_list1\n");}
    break;

  case 35:

    {printf("regla type_declaration_list2\n");}
    break;

  case 36:

    {printf("regla type_declaration1\n");}
    break;

  case 37:

    {printf("regla variable_declaration_part1\n");}
    break;

  case 38:

    {printf("regla variable_declaration_part2\n");}
    break;

  case 39:

    {printf("regla variable_declaration_list1\n");}
    break;

  case 40:

    {printf("regla variable_declaration_list2\n");}
    break;

  case 41:

    {printf("regla variable_declaration1\n");}
    break;

  case 42:

    {printf("regla procedure_and_function_declaration_part1\n");}
    break;

  case 43:

    {printf("regla procedure_and_function_declaration_part2\n");}
    break;

  case 44:

    {printf("regla procedure_and_function_declaration_list1\n");}
    break;

  case 45:

    {printf("regla procedure_and_function_declaration_list2\n");}
    break;

  case 46:

    {printf("regla procedure_and_function_declaration1\n");}
    break;

  case 47:

    {printf("regla procedure_and_function_declaration2\n");}
    break;

  case 48:

    {printf("regla statement_part1\n");}
    break;

  case 49:

    {printf("regla statement_part2\n");}
    break;

  case 50:

    {printf("regla sign1\n");}
    break;

  case 51:

    {printf("regla sign2\n");}
    break;

  case 52:

    {printf("regla identifier_list1\n");}
    break;

  case 53:

    {printf("regla identifier_list2\n");}
    break;

  case 54:

    {printf("regla type1\n");}
    break;

  case 55:

    {printf("regla type2\n");}
    break;

  case 56:

    {printf("regla type3\n");}
    break;

  case 57:

    {printf("regla type4\n");}
    break;

  case 58:

    {printf("regla simple_type1\n");}
    break;

  case 59:

    {printf("regla simple_type2\n");}
    break;

  case 60:

    {printf("regla simple_type3\n");}
    break;

  case 61:

    {printf("regla ordinal_type1\n");}
    break;

  case 62:

    {printf("regla ordinal_type2\n");}
    break;

  case 63:

    {printf("regla ordinal_type3\n");}
    break;

  case 64:

    {printf("regla ordinal_type_identifier1\n");}
    break;

  case 65:

    {printf("regla ordinal_type_identifier2\n");}
    break;

  case 66:

    {printf("regla ordinal_type_identifier3\n");}
    break;

  case 67:

    {printf("regla ordinal_type_identifier4\n");}
    break;

  case 68:

    {printf("regla ordinal_type_identifier5\n");}
    break;

  case 69:

    {printf("regla ordinal_type_identifier6\n");}
    break;

  case 70:

    {printf("regla type_boolean1\n");}
    break;

  case 71:

    {printf("regla type_boolean2\n");}
    break;

  case 72:

    {printf("regla enumerated_type1\n");}
    break;

  case 73:

    {printf("regla subrange_type1\n");}
    break;

  case 74:

    {printf("regla real_type1\n");}
    break;

  case 75:

    {printf("regla real_type_identifier1\n");}
    break;

  case 76:

    {printf("regla string_type1\n");}
    break;

  case 77:

    {printf("regla string_type2\n");}
    break;

  case 78:

    {printf("regla structured_type1\n");}
    break;

  case 79:

    {printf("regla structured_type2\n");}
    break;

  case 80:

    {printf("regla type_list1\n");}
    break;

  case 81:

    {printf("regla type_list2\n");}
    break;

  case 82:

    {printf("regla type_list3\n");}
    break;

  case 83:

    {printf("regla type_list4\n");}
    break;

  case 84:

    {printf("regla array_type\n");}
    break;

  case 85:

    {printf("regla index_type_list1\n");}
    break;

  case 86:

    {printf("regla index_type_list2\n");}
    break;

  case 87:

    {printf("regla ordinal_type_expression1\n");}
    break;

  case 88:

    {printf("regla ordinal_type_expression2\n");}
    break;

  case 89:

    {printf("regla ordinal_type_expression3\n");}
    break;

  case 90:

    {printf("regla signed_number_expression_list1\n");}
    break;

  case 91:

    {printf("regla signed_number_expression_list2\n");}
    break;

  case 92:

    {printf("regla unsigned_number_expression_list1\n");}
    break;

  case 93:

    {printf("regla signed_number_expression_list2\n");}
    break;

  case 94:

    {printf("regla record_type1\n");}
    break;

  case 95:

    {printf("regla record_type2\n");}
    break;

  case 96:

    {printf("regla field_list1\n");}
    break;

  case 97:

    {printf("regla field_list2\n");}
    break;

  case 98:

    {printf("regla field_list3\n");}
    break;

  case 99:

    {printf("regla field_list4\n");}
    break;

  case 100:

    {printf	("regla field_list5\n");}
    break;

  case 101:

    {printf("regla field_list6\n");}
    break;

  case 102:

    {printf("regla fixed_part1\n");}
    break;

  case 103:

    {printf("regla fixed_part2\n");}
    break;

  case 104:

    {printf("regla field_declaration1\n");}
    break;

  case 105:

    {printf("regla variant_part1\n");}
    break;

  case 106:

    {printf("regla variant_part2\n");}
    break;

  case 107:

    {printf("regla variant_list1\n");}
    break;

  case 108:

    {printf("regla variant_list2\n");}
    break;

  case 109:

    {printf("regla variant1\n");}
    break;

  case 110:

    {printf("regla variant2\n");}
    break;

  case 111:

    {printf("regla constant_list1\n");}
    break;

  case 112:

    {printf("regla constant_list2\n");}
    break;

  case 113:

    {printf("regla tag_field_type1\n");}
    break;

  case 114:

    {printf("regla set_type\n");}
    break;

  case 115:

    {printf("regla file_type1\n");}
    break;

  case 116:

    {printf("regla file_type2\n");}
    break;

  case 117:

    {printf("regla pointer_type1\n");}
    break;

  case 118:

    {printf("regla pointer_type2\n");}
    break;

  case 119:

    {printf("regla pointer_type_identifier1\n");}
    break;

  case 120:

    {printf("regla base_type1\n");}
    break;

  case 121:

    {printf("regla base_type2\n");}
    break;

  case 122:

    {printf("regla base_type3\n");}
    break;

  case 123:

    {printf("regla base_type4\n");}
    break;

  case 124:

    {printf("regla base_type5\n");}
    break;

  case 125:

    {printf("regla base_type6\n");}
    break;

  case 126:

    {printf("regla base_type7\n");}
    break;

  case 127:

    {printf("regla base_type9\n");}
    break;

  case 128:

    {printf("regla base_type10\n");}
    break;

  case 129:

    {printf("regla base_type11\n");}
    break;

  case 130:

    {printf("regla base_type12\n");}
    break;

  case 131:

    {printf("regla variable_reference1\n");}
    break;

  case 132:

    {printf("regla variable_identifier1\n");}
    break;

  case 133:

    {printf("regla qualifier_list1\n");}
    break;

  case 134:

    {printf("regla qualifier_list2\n");}
    break;

  case 135:

    {printf("regla qualifier1\n");}
    break;

  case 136:

    {printf("regla qualifier2\n");}
    break;

  case 137:

    {printf("regla qualifier3\n");}
    break;

  case 138:

    {printf("regla index1\n");}
    break;

  case 139:

    {printf("regla expression_list1\n");}
    break;

  case 140:

    {printf("regla expression_list2\n");}
    break;

  case 141:

    {printf("regla field_designator1\n");}
    break;

  case 142:

    {printf("regla field_designator2\n");}
    break;

  case 143:

    {printf("regla unsigned_constant1\n");}
    break;

  case 144:

    {printf("regla unsigned_constant2\n");}
    break;

  case 145:

    {printf("regla unsigned_constant3\n");}
    break;

  case 146:

    {printf("regla unsigned_constant4\n");}
    break;

  case 147:

    {printf("regla unsigned_number1\n");}
    break;

  case 148:

    {printf("regla unsigned_number2\n");}
    break;

  case 149:

    {printf("regla unsigned_number3\n");}
    break;

  case 150:

    {printf("regla signed_number1\n");}
    break;

  case 151:

    {printf("regla signed_number2\n");}
    break;

  case 152:

    {printf("regla factor1\n");}
    break;

  case 153:

    {printf("regla factor2\n");}
    break;

  case 154:

    {printf("regla factor3\n");}
    break;

  case 155:

    {printf	("regla factor4\n");}
    break;

  case 156:

    {printf("regla factor5\n");}
    break;

  case 157:

    {printf("regla factor6\n");}
    break;

  case 158:

    {printf("regla factor7\n");}
    break;

  case 159:

    {printf("regla factor8\n");}
    break;

  case 160:

    {printf("regla factor9\n");}
    break;

  case 161:

    {printf("regla term1\n");}
    break;

  case 162:

    {printf("regla term2\n");}
    break;

  case 163:

    {printf("regla term_operator_list1\n");}
    break;

  case 164:

    {printf("regla term_operator_list2\n");}
    break;

  case 165:

    {printf("regla term_operator_list3\n");}
    break;

  case 166:

    {printf("regla term_operator_list4\n");}
    break;

  case 167:

    {printf("regla term_operator_list5\n");}
    break;

  case 168:

    {printf("regla simple_expression1\n");}
    break;

  case 169:

    {printf("regla simple_expression2\n");}
    break;

  case 170:

    {printf("regla simple_expression_term_operator_iterable1\n");}
    break;

  case 171:

    {printf("regla simple_expression_term_operator_iterable2\n");}
    break;

  case 172:

    {printf("regla simple_expression_term_operator_list1\n");}
    break;

  case 173:

    {printf("regla simple_expression_term_operator_list2\n");}
    break;

  case 174:

    {printf("regla simple_expression_term_operator_list3\n");}
    break;

  case 175:

    {printf("regla expression1\n");}
    break;

  case 176:

    {printf("regla expression2\n");}
    break;

  case 177:

    {printf("regla relational_operator1\n");}
    break;

  case 178:

    {printf("regla relational_operator2\n");}
    break;

  case 179:

    {printf("regla relational_operator3\n");}
    break;

  case 180:

    {printf("regla relational_operator4\n");}
    break;

  case 181:

    {printf("regla relational_operator5\n");}
    break;

  case 182:

    {printf("regla relational_operator6\n");}
    break;

  case 183:

    {printf("regla relational_operator7\n");}
    break;

  case 184:

    {printf("regla function_call1\n");}
    break;

  case 185:

    {printf("regla function_call2\n")
			/*Se puso para que a la hora de hacer un function call pueda haber un tipo*/;}
    break;

  case 186:

    {printf("regla function_identifier1\n");}
    break;

  case 188:

    {printf("regla actual_parameter_list1\n");}
    break;

  case 189:

    {printf("regla actual_parameter_list2\n");}
    break;

  case 190:

    {printf("regla actual_parameter_list3\n");}
    break;

  case 191:

    {printf("regla actual_parameter1\n");}
    break;

  case 192:

    {printf("regla actual_parameter2\n");}
    break;

  case 193:

    {printf("regla actual_parameter1\n");}
    break;

  case 194:

    {printf("regla actual_parameter3\n");}
    break;

  case 195:

    {printf("regla procedure_identifier1\n");}
    break;

  case 196:

    {printf("regla procedure_identifier2\n");}
    break;

  case 197:

    {printf("regla procedure_identifier3\n");}
    break;

  case 198:

    {printf("regla procedure_identifier4\n");}
    break;

  case 199:

    {printf("regla set_constructor1\n");}
    break;

  case 200:

    {printf("regla set_constructor2\n");}
    break;

  case 201:

    {printf("regla member_group_list1\n");}
    break;

  case 202:

    {printf("regla member_group_list2\n");}
    break;

  case 203:

    {printf("regla member_group1\n");}
    break;

  case 204:

    {printf("regla member_group2\n");}
    break;

  case 206:

    {printf("regla statement1\n");}
    break;

  case 207:

    {printf("regla statement2\n");}
    break;

  case 208:

    {printf("regla statement3\n");}
    break;

  case 209:

    {printf("regla statement4\n");}
    break;

  case 210:

    {printf("regla statement5\n");}
    break;

  case 211:

    {printf("regla statement6\n");}
    break;

  case 212:

    {printf("regla statement7\n");}
    break;

  case 213:

    {printf("regla simple_statement1\n");}
    break;

  case 214:

    {printf("regla simple_statement2\n");}
    break;

  case 215:

    {printf("regla simple_statement3\n");}
    break;

  case 216:

    {printf("regla assignment_statement1\n");}
    break;

  case 217:

    {printf("regla assignment_statement2\n");}
    break;

  case 218:

    {printf("regla procedure_statement1\n");}
    break;

  case 219:

    {printf("regla procedure_statement2\n");}
    break;

  case 220:

    {printf("regla procedure_statement3\n");}
    break;

  case 221:

    {printf("regla goto_statement1\n");}
    break;

  case 222:

    {printf("regla structured_statement1\n");}
    break;

  case 223:

    {printf("regla structured_statement2\n");}
    break;

  case 224:

    {printf("regla structured_statement3\n");}
    break;

  case 225:

    {printf("regla structured_statement4\n");}
    break;

  case 226:

    {printf("regla compound_statement\n");}
    break;

  case 227:

    {printf("regla statement_list1\n");}
    break;

  case 228:

    {printf("regla statement_list2\n");}
    break;

  case 231:

    {printf("regla if_statement1\n");}
    break;

  case 232:

    {printf("regla if_statement2\n");}
    break;

  case 233:

    {printf("regla case_statement1\n");}
    break;

  case 234:

    {printf("regla case_statement2\n");}
    break;

  case 235:

    {printf("regla case_statement3\n");}
    break;

  case 236:

    {printf("regla case_statement4\n");}
    break;

  case 237:

    {printf("regla case_list1\n");}
    break;

  case 238:

    {printf("regla case_list2\n");}
    break;

  case 239:

    {printf("regla case1\n");}
    break;

  case 240:

    {printf("regla otherwise_clause1\n");}
    break;

  case 241:

    {printf("regla repetitive_statement1\n");}
    break;

  case 242:

    {printf("regla repetitive_statement2\n");}
    break;

  case 243:

    {printf("regla repetitive_statement3\n");}
    break;

  case 244:

    {printf("regla repeat_statement\n");}
    break;

  case 245:

    {printf("regla while_statement\n");}
    break;

  case 246:

    {printf("regla for_statement1\n");}
    break;

  case 247:

    {printf("regla for_statement2\n");}
    break;

  case 248:

    {printf("regla control_variable\n");}
    break;

  case 249:

    {printf("regla initial_value\n");}
    break;

  case 250:

    {printf("regla final_value\n");}
    break;

  case 251:

    {printf("regla with_statement\n");}
    break;

  case 252:

    {printf("regla record_variable_reference_list1\n");}
    break;

  case 253:

    {printf("regla record_variable_reference_list2\n");}
    break;

  case 254:

    {printf("regla procedure_declaration1\n");}
    break;

  case 255:

    {printf("regla procedure_body1\n");}
    break;

  case 256:

    {printf("regla procedure_body2\n");}
    break;

  case 257:

    {printf("regla procedure_body3\n");}
    break;

  case 258:

    {printf("regla procedure_heading1\n");}
    break;

  case 259:

    {printf("regla procedure_heading2\n");}
    break;

  case 260:

    {printf("regla function_declaration1\n");}
    break;

  case 261:

    {printf("regla function_body1\n");}
    break;

  case 262:

    {printf("regla function_body2\n");}
    break;

  case 263:

    {printf("regla function_body3\n");}
    break;

  case 264:

    {printf("regla function_heading1\n");}
    break;

  case 265:

    {printf("regla function_heading2\n");}
    break;

  case 266:

    {printf("regla formal_parameter_list1\n");}
    break;

  case 267:

    {printf("regla formal_parameter_list2\n");}
    break;

  case 268:

    {printf("regla formal_parameter_list_iterable1\n");}
    break;

  case 269:

    {printf("regla formal_parameter_list_iterable2\n");}
    break;

  case 270:

    {printf("regla formal_parameter_list_iterable_list1\n");}
    break;

  case 271:

    {printf("regla formal_parameter_list_iterable_list2\n");}
    break;

  case 272:

    {printf("regla formal_parameter_list_iterable_list3\n");}
    break;

  case 273:

    {printf("regla parameter_declaration1\n");}
    break;

  case 274:

    {printf("regla parameter_declaration2\n");}
    break;

  case 275:

    {printf("regla type_identifier1\n");}
    break;

  case 276:

    {printf("regla interface_part_regular_unit1\n");}
    break;

  case 277:

    {printf("regla regular_unit1\n");}
    break;

  case 278:

    {printf("regla unit_heading1\n");}
    break;

  case 279:

    {printf("regla interface_part1\n");}
    break;

  case 280:

    {printf("regla uses_clause_empty1\n");}
    break;

  case 281:

    {printf("regla uses_clause_empty2\n");}
    break;

  case 282:

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
