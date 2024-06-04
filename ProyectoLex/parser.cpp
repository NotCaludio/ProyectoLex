
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
#define YYLAST   634

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  92
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  125
/* YYNRULES -- Number of rules.  */
#define YYNRULES  268
/* YYNRULES -- Number of states.  */
#define YYNSTATES  431

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
      85,    86,    78,    76,    87,    77,    84,    79,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    88,    83,
      68,    67,    69,     2,    80,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    89,     2,    90,    91,     2,     2,     2,     2,     2,
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
      62,    63,    66,    68,    73,    74,    77,    80,    82,    84,
      86,    88,    91,    92,    95,    97,   102,   105,   106,   109,
     111,   116,   118,   119,   122,   124,   126,   128,   130,   131,
     133,   135,   139,   141,   143,   145,   147,   149,   151,   153,
     155,   157,   159,   161,   163,   165,   167,   169,   171,   173,
     175,   177,   181,   185,   187,   189,   194,   197,   199,   201,
     203,   205,   207,   214,   218,   220,   223,   227,   229,   232,
     236,   241,   243,   246,   250,   252,   256,   261,   268,   272,
     274,   279,   285,   289,   291,   293,   297,   299,   302,   305,
     307,   309,   311,   313,   315,   317,   319,   321,   323,   325,
     327,   329,   332,   334,   337,   339,   341,   343,   345,   349,
     353,   355,   358,   360,   362,   364,   366,   368,   370,   372,
     375,   377,   379,   382,   384,   386,   388,   392,   395,   397,
     399,   403,   405,   407,   409,   411,   413,   415,   418,   420,
     424,   426,   428,   430,   432,   434,   438,   440,   442,   444,
     446,   448,   450,   452,   455,   457,   459,   463,   466,   472,
     476,   478,   480,   482,   484,   486,   488,   490,   493,   497,
     501,   503,   505,   509,   510,   513,   517,   521,   523,   525,
     527,   529,   531,   533,   537,   541,   543,   546,   549,   552,
     554,   556,   558,   560,   564,   568,   570,   572,   574,   579,
     586,   592,   599,   607,   614,   618,   620,   624,   628,   630,
     632,   634,   639,   644,   653,   662,   664,   666,   668,   673,
     677,   679,   684,   686,   688,   690,   693,   697,   702,   704,
     706,   708,   713,   719,   723,   726,   730,   732,   734,   736,
     738,   743,   747,   749,   756,   759,   766,   768,   769
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      93,     0,    -1,    94,    -1,   212,    -1,    95,    83,    98,
      84,    -1,    95,    83,    97,    83,    98,    84,    -1,     9,
       6,    -1,     9,     6,    85,    96,    86,    -1,   122,    -1,
      11,   122,    -1,    -1,    -1,   101,   105,   111,   114,    99,
     117,   100,   120,    -1,    15,   102,    83,    -1,    -1,   102,
      87,   103,    -1,   103,    -1,    -1,     3,   104,    -1,    16,
     106,    -1,    -1,   106,   107,    -1,   107,    -1,     6,    67,
     108,    83,    -1,    -1,   110,   109,    -1,   121,   110,    -1,
     160,    -1,     7,    -1,     8,    -1,     6,    -1,    17,   112,
      -1,    -1,   112,   113,    -1,   113,    -1,     6,    67,   123,
      83,    -1,    35,   115,    -1,    -1,   115,   116,    -1,   116,
      -1,   122,    88,   123,    83,    -1,   118,    -1,    -1,   118,
     119,    -1,   119,    -1,   201,    -1,   204,    -1,   184,    -1,
      -1,    76,    -1,    77,    -1,   122,    87,     6,    -1,     6,
      -1,   124,    -1,   133,    -1,   148,    -1,     6,    -1,   125,
      -1,   130,    -1,   132,    -1,   129,    -1,   128,    -1,   126,
      -1,    19,    -1,    20,    -1,    22,    -1,    23,    -1,   169,
      -1,    21,    -1,    24,    -1,    25,    -1,    85,   122,    86,
      -1,   108,    66,   108,    -1,   131,    -1,    18,    -1,    26,
      89,     3,    90,    -1,    27,   134,    -1,   134,    -1,   135,
      -1,   146,    -1,   147,    -1,   137,    -1,    28,    89,   136,
      90,    33,   123,    -1,   136,    87,   125,    -1,   125,    -1,
      29,    30,    -1,    29,   138,    30,    -1,   139,    -1,   139,
      83,    -1,   139,    83,   141,    -1,   139,    83,   141,    83,
      -1,   141,    -1,   141,    83,    -1,   139,    83,   140,    -1,
     140,    -1,   122,    88,   123,    -1,    31,   145,    33,   142,
      -1,    31,     6,    88,   145,    33,   142,    -1,   142,    83,
     143,    -1,   143,    -1,   144,    88,    85,    86,    -1,   144,
      88,    85,   138,    86,    -1,   144,    87,   108,    -1,   108,
      -1,     6,    -1,    34,    33,   125,    -1,    40,    -1,    33,
     123,    -1,    91,   150,    -1,   149,    -1,    53,    -1,    19,
      -1,    20,    -1,    22,    -1,    23,    -1,    26,    -1,    29,
      -1,    40,    -1,    28,    -1,     6,    -1,    38,    -1,   152,
     153,    -1,     6,    -1,   153,   154,    -1,   154,    -1,   155,
      -1,   157,    -1,    91,    -1,    89,   156,    90,    -1,   156,
      87,   167,    -1,   167,    -1,    84,     6,    -1,   159,    -1,
       7,    -1,     8,    -1,    53,    -1,     3,    -1,     4,    -1,
       5,    -1,   121,   159,    -1,   159,    -1,   151,    -1,    80,
     151,    -1,   158,    -1,   169,    -1,   175,    -1,    85,   167,
      86,    -1,    63,   161,    -1,     6,    -1,   127,    -1,   162,
     163,   161,    -1,   161,    -1,    78,    -1,    79,    -1,    60,
      -1,    61,    -1,    62,    -1,   121,   165,    -1,   165,    -1,
     165,   166,   162,    -1,   162,    -1,    76,    -1,    77,    -1,
      59,    -1,   164,    -1,   164,   168,   164,    -1,    67,    -1,
      68,    -1,    69,    -1,    74,    -1,    73,    -1,    75,    -1,
      58,    -1,   170,   171,    -1,    38,    -1,     6,    -1,    85,
     172,    86,    -1,    85,    86,    -1,    85,   172,    88,   123,
      86,    -1,   172,    87,   173,    -1,   173,    -1,   167,    -1,
     174,    -1,    56,    -1,    57,    -1,    54,    -1,    55,    -1,
      89,    90,    -1,    89,   176,    90,    -1,   176,    87,   177,
      -1,   177,    -1,   167,    -1,   167,    66,   167,    -1,    -1,
     103,    88,    -1,   103,    88,   179,    -1,   103,    88,   183,
      -1,   179,    -1,   183,    -1,     6,    -1,   180,    -1,   181,
      -1,   182,    -1,   151,    65,   167,    -1,   170,    65,   167,
      -1,   174,    -1,   174,   171,    -1,     6,   171,    -1,    41,
     103,    -1,   184,    -1,   186,    -1,   192,    -1,   199,    -1,
      10,   185,    30,    -1,   185,    83,   178,    -1,   178,    -1,
     187,    -1,   188,    -1,    42,   167,    43,   178,    -1,    42,
     167,    43,   178,    44,   178,    -1,    31,   167,    33,   189,
      30,    -1,    31,   167,    33,   189,   191,    30,    -1,    31,
     167,    33,   189,   191,    83,    30,    -1,    31,   167,    33,
     189,    83,    30,    -1,   189,    83,   190,    -1,   190,    -1,
     144,    88,   178,    -1,    83,    32,   178,    -1,   193,    -1,
     194,    -1,   195,    -1,    45,   185,    46,   167,    -1,    47,
     167,    48,   178,    -1,    49,   196,    65,   197,    50,   198,
      48,   178,    -1,    49,   196,    65,   197,    51,   198,    48,
     178,    -1,     6,    -1,   167,    -1,   167,    -1,    52,   200,
      48,   178,    -1,   200,    87,   151,    -1,   151,    -1,   203,
      83,   202,    83,    -1,    98,    -1,    36,    -1,    37,    -1,
      39,     6,    -1,    39,     6,   207,    -1,   206,    83,   205,
      83,    -1,    98,    -1,    36,    -1,    37,    -1,    38,     6,
      88,   123,    -1,    38,     6,   207,    88,   123,    -1,    85,
     208,    86,    -1,    85,    86,    -1,   208,    83,   209,    -1,
     209,    -1,   210,    -1,   203,    -1,   206,    -1,    35,   122,
      88,   211,    -1,   122,    88,   211,    -1,   123,    -1,   213,
      83,   214,   216,    30,    84,    -1,    12,     6,    -1,    13,
     215,   105,   111,   114,   117,    -1,    97,    -1,    -1,    14,
     105,   111,   114,   117,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    49,    49,    50,    52,    53,    56,    57,    60,    62,
      69,    70,    66,    76,    77,    78,    79,    80,    80,    87,
      88,    89,    90,    93,    94,    94,    95,    96,    97,    98,
     100,   102,   103,   104,   105,   108,   110,   111,   112,   113,
     115,   117,   118,   119,   120,   121,   122,   124,   125,   127,
     128,   130,   131,   135,   136,   137,   138,   141,   142,   143,
     145,   146,   147,   152,   153,   154,   155,   156,   157,   159,
     160,   162,   164,   166,   167,   169,   175,   176,   178,   179,
     180,   181,   184,   185,   186,   189,   190,   192,   193,   194,
     195,   196,   197,   200,   201,   202,   204,   205,   207,   208,
     210,   211,   214,   215,   217,   220,   222,   223,   227,   229,
     231,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   248,   250,   252,   253,   255,   256,   257,   261,   263,
     264,   266,   273,   274,   275,   277,   279,   280,   281,   282,
     283,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     297,   298,   299,   300,   301,   302,   303,   306,   307,   309,
     311,   313,   314,   315,   318,   319,   321,   322,   323,   324,
     325,   326,   327,   331,   333,   334,   337,   338,   339,   343,
     344,   346,   348,   350,   351,   352,   353,   356,   357,   360,
     361,   367,   368,   372,   373,   374,   375,   376,   377,   378,
     381,   382,   383,   385,   386,   389,   390,   391,   394,   397,
     398,   399,   400,   404,   405,   406,   409,   410,   414,   415,
     417,   418,   419,   420,   421,   422,   423,   424,   426,   427,
     428,   431,   434,   436,   437,   438,   439,   440,   443,   445,
     446,   452,   454,   455,   456,   458,   459,   462,   463,   464,
     465,   467,   468,   474,   475,   477,   478,   480,   481,   482,
     484,   485,   488,   494,   495,   496,   499,   500,   503
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
  "'('", "')'", "','", "':'", "'['", "']'", "'^'", "$accept", "pascal",
  "program", "program_heading", "program_parameters", "uses_clause",
  "block", "$@1", "$@2", "label_declaration_part", "label_list", "label",
  "$@3", "constant_declaration_part", "constant_declaration_list",
  "constant_declaration", "constant", "$@4", "constant_identifier",
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
      64,   328,   329,    59,    46,    40,    41,    44,    58,    91,
      93,    94
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    92,    93,    93,    94,    94,    95,    95,    96,    97,
      99,   100,    98,   101,   101,   102,   102,   104,   103,   105,
     105,   106,   106,   107,   109,   108,   108,   108,   108,   108,
     110,   111,   111,   112,   112,   113,   114,   114,   115,   115,
     116,   117,   117,   118,   118,   119,   119,   120,   120,   121,
     121,   122,   122,   123,   123,   123,   123,   124,   124,   124,
     125,   125,   125,   126,   126,   126,   126,   126,   126,   127,
     127,   128,   129,   130,   131,   132,   133,   133,   134,   134,
     134,   134,   135,   136,   136,   137,   137,   138,   138,   138,
     138,   138,   138,   139,   139,   140,   141,   141,   142,   142,
     143,   143,   144,   144,   145,   146,   147,   147,   148,   148,
     149,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   151,   152,   153,   153,   154,   154,   154,   155,   156,
     156,   157,   158,   158,   158,   158,   159,   159,   159,   160,
     160,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     162,   162,   163,   163,   163,   163,   163,   164,   164,   165,
     165,   166,   166,   166,   167,   167,   168,   168,   168,   168,
     168,   168,   168,   169,   170,   170,   171,   171,   171,   172,
     172,   173,   173,   174,   174,   174,   174,   175,   175,   176,
     176,   177,   177,   178,   178,   178,   178,   178,   178,   178,
     179,   179,   179,   180,   180,   181,   181,   181,   182,   183,
     183,   183,   183,   184,   185,   185,   186,   186,   187,   187,
     188,   188,   188,   188,   189,   189,   190,   191,   192,   192,
     192,   193,   194,   195,   195,   196,   197,   198,   199,   200,
     200,   201,   202,   202,   202,   203,   203,   204,   205,   205,
     205,   206,   206,   207,   207,   208,   208,   209,   209,   209,
     210,   210,   211,   212,   213,   214,   215,   215,   216
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     4,     6,     2,     5,     1,     2,
       0,     0,     8,     3,     0,     3,     1,     0,     2,     2,
       0,     2,     1,     4,     0,     2,     2,     1,     1,     1,
       1,     2,     0,     2,     1,     4,     2,     0,     2,     1,
       4,     1,     0,     2,     1,     1,     1,     1,     0,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     1,     1,     4,     2,     1,     1,     1,
       1,     1,     6,     3,     1,     2,     3,     1,     2,     3,
       4,     1,     2,     3,     1,     3,     4,     6,     3,     1,
       4,     5,     3,     1,     1,     3,     1,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     2,     1,     1,     1,     1,     3,     3,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     2,     1,     1,     1,     3,     2,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     2,     1,     3,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     1,     3,     2,     5,     3,
       1,     1,     1,     1,     1,     1,     1,     2,     3,     3,
       1,     1,     3,     0,     2,     3,     3,     1,     1,     1,
       1,     1,     1,     3,     3,     1,     2,     2,     2,     1,
       1,     1,     1,     3,     3,     1,     1,     1,     4,     6,
       5,     6,     7,     6,     3,     1,     3,     3,     1,     1,
       1,     4,     4,     8,     8,     1,     1,     1,     4,     3,
       1,     4,     1,     1,     1,     2,     3,     4,     1,     1,
       1,     4,     5,     3,     2,     3,     1,     1,     1,     1,
       4,     3,     1,     6,     2,     6,     1,     0,     5
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     2,     0,     3,     0,     6,   264,
       1,    14,     0,     0,     0,     0,     0,     0,    20,   267,
       0,    52,     0,     8,     9,    17,     0,    16,    14,     4,
       0,    32,   266,    20,    20,     0,     7,     0,    18,    13,
       0,     0,     0,    19,    22,     0,    37,    32,    32,     0,
      51,    15,     5,     0,    21,     0,    31,    34,     0,    10,
      37,    37,   263,   136,   137,   138,    30,    28,    29,    49,
      50,     0,    24,     0,   140,    27,     0,    33,    36,    39,
       0,    42,    42,    42,    23,    25,    26,   139,    56,    74,
      63,    64,    68,    65,    66,     0,     0,     0,     0,     0,
       0,   174,   106,   110,     0,     0,     0,     0,    53,    57,
      62,    61,    60,    58,    73,    59,    54,    77,    78,    81,
      79,    80,    55,   109,    67,     0,    38,     0,     0,     0,
      11,    41,    44,    45,     0,    46,     0,   265,   268,     0,
      76,     0,    85,     0,     0,     0,    87,    94,    91,   107,
       0,     0,   119,   111,   112,   113,   114,   115,   118,   116,
     120,   117,   108,     0,    35,     0,   173,     0,     0,   245,
      48,    43,    14,    14,     0,    30,    84,     0,   104,     0,
       0,    86,    88,    92,   105,    71,    72,   148,   133,   134,
      69,    70,   135,   185,   186,   183,   184,     0,     0,     0,
     177,     0,     0,   149,   141,     0,   143,   132,   151,   160,
     164,   158,   181,   144,     0,   180,   182,   145,    40,     0,
       0,     0,   246,   193,    12,    47,   243,   244,   242,     0,
     249,   250,   248,     0,    75,     0,     0,     0,     0,    95,
      93,    89,   147,   122,   142,     0,   187,   191,     0,   190,
     157,     0,     0,   127,   121,   124,   125,   126,   154,   155,
     156,   152,   153,     0,   172,   166,   167,   168,   170,   169,
     171,     0,   163,   161,   162,     0,   176,     0,     0,     0,
     254,     0,   258,   259,     0,   256,   257,   251,     0,   199,
       0,     0,     0,   193,     0,     0,     0,     0,     0,     0,
     205,   215,   197,   200,   201,   202,   198,   209,     0,   210,
     216,   217,   211,   228,   229,   230,   212,   241,   247,    83,
       0,   104,     0,   103,    96,    99,     0,    90,   146,     0,
       0,   188,   131,     0,   130,   123,   150,   165,   159,   179,
       0,     0,     0,     0,   253,   252,   207,     0,   208,     0,
       0,     0,   235,     0,   240,     0,   194,     0,     0,   206,
     213,   193,    82,     0,     0,     0,     0,   192,   189,     0,
     128,   178,     0,   262,   261,   255,     0,   193,     0,   193,
       0,   193,     0,   122,   195,   196,   203,   204,   214,    97,
      98,   102,     0,   129,   260,     0,     0,   225,   218,   231,
     232,   236,     0,   238,   239,   100,     0,   193,   220,     0,
       0,   193,     0,     0,   101,   226,   223,   193,   224,   221,
       0,   219,   237,     0,     0,   227,   222,   193,   193,   233,
     234
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,    22,    16,    17,    81,   170,    18,
      26,   297,    38,    31,    43,    44,   106,    85,    72,    46,
      56,    57,    59,    78,    79,   130,   131,   132,   224,    73,
     144,   373,   108,   109,   110,   203,   111,   112,   113,   114,
     115,   116,   117,   118,   177,   119,   145,   146,   147,   148,
     324,   325,   326,   179,   120,   121,   122,   123,   162,   204,
     205,   254,   255,   256,   333,   257,   206,   207,    75,   208,
     209,   263,   210,   211,   275,   212,   271,   213,   125,   346,
     214,   215,   300,   217,   248,   249,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   396,   397,   410,
     312,   313,   314,   315,   353,   402,   423,   316,   355,   133,
     229,   134,   135,   233,   136,   221,   284,   285,   286,   374,
       6,     7,    20,    33,    35
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -356
static const yytype_int16 yypact[] =
{
      59,    23,    38,    79,  -356,     2,  -356,    22,    54,  -356,
    -356,   129,   118,   135,   135,   153,    77,    85,   155,   183,
     164,  -356,   113,   116,   116,  -356,    72,  -356,   190,  -356,
     209,   201,  -356,   155,   155,   196,  -356,   228,  -356,  -356,
     153,   144,   178,   209,  -356,   260,   197,   201,   201,   192,
    -356,  -356,  -356,    86,  -356,   212,   260,  -356,   135,  -356,
     197,   197,  -356,  -356,  -356,  -356,  -356,  -356,  -356,  -356,
    -356,   198,  -356,   233,  -356,  -356,   357,  -356,   135,  -356,
     -10,   173,   173,   173,  -356,  -356,  -356,  -356,   -19,  -356,
    -356,  -356,  -356,  -356,  -356,   194,   263,   199,    56,   357,
     253,  -356,  -356,  -356,   135,    12,   224,   219,  -356,  -356,
    -356,  -356,  -356,  -356,  -356,  -356,  -356,  -356,  -356,  -356,
    -356,  -356,  -356,  -356,  -356,   223,  -356,   357,   303,   310,
    -356,   173,  -356,  -356,   239,  -356,   242,  -356,  -356,   321,
    -356,   332,  -356,   322,   120,   297,   247,  -356,   250,  -356,
     332,   134,  -356,  -356,  -356,  -356,  -356,  -356,  -356,  -356,
    -356,  -356,  -356,    86,  -356,   453,  -356,   258,    29,   244,
     333,  -356,    27,   128,   252,   259,  -356,    67,   261,   314,
     357,  -356,    42,  -356,  -356,  -356,  -356,   180,  -356,  -356,
    -356,  -356,  -356,  -356,  -356,  -356,  -356,    95,   342,   496,
    -356,   399,    95,  -356,  -356,    58,  -356,  -356,  -356,   169,
     226,    49,  -356,  -356,   104,  -356,  -356,  -356,  -356,    21,
     357,   262,  -356,   555,  -356,  -356,  -356,  -356,  -356,   275,
    -356,  -356,  -356,   284,  -356,   332,   336,   365,    86,  -356,
    -356,   289,  -356,  -356,  -356,   287,  -356,   308,    89,  -356,
      49,   375,   496,  -356,    58,  -356,  -356,  -356,  -356,  -356,
    -356,  -356,  -356,    95,  -356,  -356,  -356,  -356,  -356,  -356,
    -356,   496,  -356,  -356,  -356,    95,  -356,   490,   357,   135,
    -356,   154,  -356,  -356,    46,  -356,  -356,  -356,   357,    39,
     496,   153,   496,   555,   496,   376,   342,   299,   323,   324,
     223,  -356,  -356,  -356,  -356,  -356,  -356,  -356,   -13,  -356,
    -356,  -356,  -356,  -356,  -356,  -356,  -356,  -356,  -356,  -356,
     357,  -356,   359,  -356,   311,  -356,   162,  -356,  -356,   496,
     496,  -356,  -356,    96,  -356,  -356,  -356,  -356,   169,  -356,
     307,   165,   357,    45,  -356,  -356,  -356,   363,  -356,   355,
     -18,   351,  -356,   346,  -356,   -32,   577,   496,   496,  -356,
    -356,   555,  -356,    86,    86,    86,   327,  -356,  -356,   496,
    -356,  -356,   357,  -356,  -356,  -356,    86,   555,   496,   555,
     496,   555,   342,   -28,  -356,  -356,  -356,  -356,  -356,   311,
    -356,  -356,    30,  -356,  -356,   167,   -11,  -356,   369,  -356,
    -356,  -356,   222,  -356,  -356,  -356,   328,   555,  -356,   255,
      -8,   555,   496,   496,  -356,  -356,  -356,   555,  -356,  -356,
     385,  -356,  -356,   368,   370,  -356,  -356,   555,   555,  -356,
    -356
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -356,  -356,  -356,  -356,  -356,   400,   -20,  -356,  -356,  -356,
    -356,   -14,  -356,   241,  -356,   377,   -50,  -356,   348,   257,
    -356,   366,   246,  -356,   347,   238,  -356,   295,  -356,  -156,
      -9,   -69,  -356,  -117,  -356,  -356,  -356,  -356,  -356,  -356,
    -356,  -356,   331,  -356,  -356,  -356,    36,  -356,   248,   249,
      66,    68,  -355,   202,  -356,  -356,  -356,  -356,  -356,  -184,
    -356,  -356,   181,  -356,  -356,  -356,  -356,   -53,  -356,  -182,
     161,  -356,   170,   236,  -356,   -12,  -356,   -74,  -211,  -119,
    -356,   163,  -155,  -356,  -356,   114,   171,    87,  -356,  -356,
    -356,    90,   277,   152,  -356,  -356,  -356,  -356,    40,  -356,
    -356,  -356,  -356,  -356,  -356,  -356,    37,  -356,  -356,  -356,
    -356,  -208,  -356,  -356,  -206,   282,  -356,   110,  -356,    82,
    -356,  -356,  -356,  -356,  -356
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -176
static const yytype_int16 yytable[] =
{
      74,    27,   124,    71,    23,    24,   166,   107,    41,   202,
     216,   282,   299,   283,   244,   242,   381,   360,   152,   408,
      87,   395,   419,    74,   176,   124,    51,    21,   378,     8,
     149,   153,   154,   184,   155,   156,    21,  -175,   157,   298,
     158,   159,    15,   202,     9,   202,    74,   -30,    21,    80,
     160,    21,   161,   124,   395,   382,   279,   165,   167,   128,
     129,   143,    21,   226,   227,   361,  -175,   124,     1,    80,
     361,     2,   409,   143,    74,   420,   124,    37,   127,    10,
     279,   336,   299,   128,   129,    11,   142,   143,    74,    63,
      64,    65,    66,    67,    68,   151,   202,    74,    63,    64,
      65,   187,   188,   189,  -175,    12,   124,   280,   272,   298,
      74,   239,   354,   186,   219,   202,   405,   220,   319,   190,
     191,   202,   216,  -122,   165,   273,   274,    74,  -122,   343,
    -122,    19,   344,   101,   202,   282,   202,   283,   202,    13,
      14,    21,   251,    15,    15,   299,   124,   252,   192,   253,
     299,   287,   228,   232,   235,    39,    25,   236,   197,    40,
      28,   124,    69,    70,   230,   231,   299,    74,   299,    29,
     299,    30,   298,   202,   202,   198,   330,   298,    34,   331,
     199,   359,    74,   369,   201,    74,   370,   245,   323,   247,
     276,   277,   278,   298,    14,   298,   299,   298,   404,    36,
     299,   202,   202,    37,   124,    15,   299,    37,   180,   340,
     281,   128,   129,   202,   124,    42,   299,   299,    45,   345,
     185,    37,   202,   298,   202,    74,    49,   298,    52,   258,
     259,   260,    58,   298,    50,    74,    63,    64,    65,    66,
     334,    37,   342,   298,   298,    53,   124,   261,   262,   365,
     366,   362,    37,   372,   365,   407,   202,   202,    63,    64,
      65,    66,    67,    68,  -122,  -175,    55,    74,   124,  -122,
     341,  -122,   412,   413,    47,    48,    62,   348,   347,    76,
     349,    84,   351,   139,   264,   416,   150,   417,   141,    74,
     163,    97,    98,   265,   266,   267,    99,   100,   124,   268,
     269,   270,   164,   102,    60,    61,    82,    83,   165,   168,
      74,    74,    74,   323,   323,   391,   169,   367,   247,    74,
     137,   138,   172,    74,   174,   173,   323,   181,   178,   219,
     182,    69,    70,   183,   281,    63,    64,    65,   175,    67,
      68,   218,   234,   223,  -175,   386,   387,   238,   243,   237,
     288,    90,    91,    92,    93,    94,    74,   393,   317,   323,
      63,    64,    65,    88,    67,    68,   399,   318,   401,   320,
     101,   321,   327,   328,   329,    89,    90,    91,    92,    93,
      94,   332,   352,    95,    96,    97,    98,   356,   357,   358,
      99,   100,   363,   371,   364,   101,   376,   102,   377,   379,
     422,   422,    63,    64,    65,   187,   188,   189,    69,    70,
     103,   380,   392,   411,   414,   426,   427,   104,   428,    32,
      54,    86,    77,   190,   191,   126,   171,   140,   406,   389,
     240,   241,   390,    69,    70,   335,   338,   101,   250,   322,
     339,   337,   104,   384,   368,   350,   385,   225,   105,   418,
     424,   222,   192,   375,   394,     0,    63,    64,    65,   187,
     188,   189,   197,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    69,    70,   190,   191,   198,
       0,     0,     0,     0,   199,     0,     0,     0,   201,   246,
       0,   101,     0,    63,    64,    65,   187,   188,   189,    63,
      64,    65,   187,   188,   189,     0,   192,   193,   194,   195,
     196,     0,     0,     0,   190,   191,   197,     0,     0,     0,
     190,   191,     0,     0,     0,     0,     0,     0,   101,    69,
      70,     0,   388,   198,   101,     0,     0,     0,   199,   200,
       0,     0,   201,   192,   193,   194,   195,   196,   398,   192,
     400,     0,   403,   197,     0,     0,     0,     0,    25,   197,
       0,   289,     0,     0,     0,   223,    69,    70,     0,     0,
     198,     0,    69,    70,     0,   199,   198,     0,   415,   201,
       0,   199,   421,   383,     0,   201,   290,   223,   425,     0,
       0,     0,     0,   101,     0,     0,   291,   292,   429,   430,
     293,     0,   294,     0,   295,     0,     0,   296,   290,   193,
     194,   195,   196,     0,     0,   101,     0,     0,   291,   292,
       0,     0,   293,     0,   294,     0,   295,     0,     0,   296,
       0,   193,   194,   195,   196
};

static const yytype_int16 yycheck[] =
{
      53,    15,    76,    53,    13,    14,   125,    76,    28,   165,
     165,   219,   223,   219,   198,   197,    48,    30,     6,    30,
      73,   376,    30,    76,   141,    99,    40,     6,    46,     6,
      99,    19,    20,   150,    22,    23,     6,    65,    26,   223,
      28,    29,    15,   199,     6,   201,    99,    66,     6,    58,
      38,     6,    40,   127,   409,    87,    35,    85,   127,    38,
      39,    31,     6,    36,    37,    83,    85,   141,     9,    78,
      83,    12,    83,    31,   127,    83,   150,    87,    88,     0,
      35,   263,   293,    38,    39,    83,    30,    31,   141,     3,
       4,     5,     6,     7,     8,   104,   252,   150,     3,     4,
       5,     6,     7,     8,    65,    83,   180,    86,    59,   293,
     163,   180,   296,   163,    85,   271,    86,    88,   235,    24,
      25,   277,   277,    84,    85,    76,    77,   180,    89,    83,
      91,    13,    86,    38,   290,   343,   292,   343,   294,    85,
      11,     6,    84,    15,    15,   356,   220,    89,    53,    91,
     361,   220,   172,   173,    87,    83,     3,    90,    63,    87,
      83,   235,    76,    77,    36,    37,   377,   220,   379,    84,
     381,    16,   356,   329,   330,    80,    87,   361,    14,    90,
      85,   300,   235,    87,    89,   238,    90,   199,   238,   201,
      86,    87,    88,   377,    11,   379,   407,   381,   382,    86,
     411,   357,   358,    87,   278,    15,   417,    87,    88,   278,
     219,    38,    39,   369,   288,     6,   427,   428,    17,   288,
      86,    87,   378,   407,   380,   278,    30,   411,    84,    60,
      61,    62,    35,   417,     6,   288,     3,     4,     5,     6,
     252,    87,    88,   427,   428,    67,   320,    78,    79,    87,
      88,   320,    87,    88,    87,    88,   412,   413,     3,     4,
       5,     6,     7,     8,    84,    85,     6,   320,   342,    89,
     279,    91,    50,    51,    33,    34,    84,   291,   290,    67,
     292,    83,   294,    89,    58,    30,    33,    32,    89,   342,
      66,    28,    29,    67,    68,    69,    33,    34,   372,    73,
      74,    75,    83,    40,    47,    48,    60,    61,    85,     6,
     363,   364,   365,   363,   364,   365,     6,   329,   330,   372,
      82,    83,    83,   376,     3,    83,   376,    30,     6,    85,
      83,    76,    77,    83,   343,     3,     4,     5,     6,     7,
       8,    83,    90,    10,    85,   357,   358,    33,     6,    88,
      88,    19,    20,    21,    22,    23,   409,   369,    83,   409,
       3,     4,     5,     6,     7,     8,   378,    83,   380,    33,
      38,     6,    83,    86,    66,    18,    19,    20,    21,    22,
      23,     6,     6,    26,    27,    28,    29,    88,    65,    65,
      33,    34,    33,    86,    83,    38,    33,    40,    43,    48,
     412,   413,     3,     4,     5,     6,     7,     8,    76,    77,
      53,    65,    85,    44,    86,    30,    48,    85,    48,    19,
      43,    73,    56,    24,    25,    78,   131,    96,   392,   363,
     182,   182,   364,    76,    77,   254,   275,    38,   202,   237,
     277,   271,    85,   356,   330,   293,   356,   170,    91,   409,
     413,   169,    53,   343,   372,    -1,     3,     4,     5,     6,
       7,     8,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    77,    24,    25,    80,
      -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,    89,    90,
      -1,    38,    -1,     3,     4,     5,     6,     7,     8,     3,
       4,     5,     6,     7,     8,    -1,    53,    54,    55,    56,
      57,    -1,    -1,    -1,    24,    25,    63,    -1,    -1,    -1,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    38,    76,
      77,    -1,   361,    80,    38,    -1,    -1,    -1,    85,    86,
      -1,    -1,    89,    53,    54,    55,    56,    57,   377,    53,
     379,    -1,   381,    63,    -1,    -1,    -1,    -1,     3,    63,
      -1,     6,    -1,    -1,    -1,    10,    76,    77,    -1,    -1,
      80,    -1,    76,    77,    -1,    85,    80,    -1,   407,    89,
      -1,    85,   411,     6,    -1,    89,    31,    10,   417,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    41,    42,   427,   428,
      45,    -1,    47,    -1,    49,    -1,    -1,    52,    31,    54,
      55,    56,    57,    -1,    -1,    38,    -1,    -1,    41,    42,
      -1,    -1,    45,    -1,    47,    -1,    49,    -1,    -1,    52,
      -1,    54,    55,    56,    57
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    12,    93,    94,    95,   212,   213,     6,     6,
       0,    83,    83,    85,    11,    15,    97,    98,   101,    13,
     214,     6,    96,   122,   122,     3,   102,   103,    83,    84,
      16,   105,    97,   215,    14,   216,    86,    87,   104,    83,
      87,    98,     6,   106,   107,    17,   111,   105,   105,    30,
       6,   103,    84,    67,   107,     6,   112,   113,    35,   114,
     111,   111,    84,     3,     4,     5,     6,     7,     8,    76,
      77,   108,   110,   121,   159,   160,    67,   113,   115,   116,
     122,    99,   114,   114,    83,   109,   110,   159,     6,    18,
      19,    20,    21,    22,    23,    26,    27,    28,    29,    33,
      34,    38,    40,    53,    85,    91,   108,   123,   124,   125,
     126,   128,   129,   130,   131,   132,   133,   134,   135,   137,
     146,   147,   148,   149,   169,   170,   116,    88,    38,    39,
     117,   118,   119,   201,   203,   204,   206,   117,   117,    89,
     134,    89,    30,    31,   122,   138,   139,   140,   141,   123,
      33,   122,     6,    19,    20,    22,    23,    26,    28,    29,
      38,    40,   150,    66,    83,    85,   171,   123,     6,     6,
     100,   119,    83,    83,     3,     6,   125,   136,     6,   145,
      88,    30,    83,    83,   125,    86,   108,     6,     7,     8,
      24,    25,    53,    54,    55,    56,    57,    63,    80,    85,
      86,    89,   121,   127,   151,   152,   158,   159,   161,   162,
     164,   165,   167,   169,   172,   173,   174,   175,    83,    85,
      88,   207,   207,    10,   120,   184,    36,    37,    98,   202,
      36,    37,    98,   205,    90,    87,    90,    88,    33,   123,
     140,   141,   161,     6,   151,   167,    90,   167,   176,   177,
     165,    84,    89,    91,   153,   154,   155,   157,    60,    61,
      62,    78,    79,   163,    58,    67,    68,    69,    73,    74,
      75,   168,    59,    76,    77,   166,    86,    87,    88,    35,
      86,   122,   203,   206,   208,   209,   210,   123,    88,     6,
      31,    41,    42,    45,    47,    49,    52,   103,   151,   170,
     174,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   192,   193,   194,   195,   199,    83,    83,   125,
      33,     6,   145,   108,   142,   143,   144,    83,    86,    66,
      87,    90,     6,   156,   167,   154,   161,   164,   162,   173,
     123,   122,    88,    83,    86,   123,   171,   167,   103,   167,
     185,   167,     6,   196,   151,   200,    88,    65,    65,   171,
      30,    83,   123,    33,    83,    87,    88,   167,   177,    87,
      90,    86,    88,   123,   211,   209,    33,    43,    46,    48,
      65,    48,    87,     6,   179,   183,   167,   167,   178,   142,
     143,   108,    85,   167,   211,   144,   189,   190,   178,   167,
     178,   167,   197,   178,   151,    86,   138,    88,    30,    83,
     191,    44,    50,    51,    86,   178,    30,    32,   190,    30,
      83,   178,   167,   198,   198,   178,    30,    48,    48,   178,
     178
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

    {printf("regla constant6\n");}
    break;

  case 29:

    {printf("regla constant7\n");}
    break;

  case 30:

    {printf("regla constant_identifier1\n");}
    break;

  case 31:

    {printf("regla type_declaration_part1\n");}
    break;

  case 32:

    {printf("regla type_declaration_part2\n");}
    break;

  case 33:

    {printf("regla type_declaration_list1\n");}
    break;

  case 34:

    {printf("regla type_declaration_list2\n");}
    break;

  case 35:

    {printf("regla type_declaration1\n");}
    break;

  case 36:

    {printf("regla variable_declaration_part1\n");}
    break;

  case 37:

    {printf("regla variable_declaration_part2\n");}
    break;

  case 38:

    {printf("regla variable_declaration_list1\n");}
    break;

  case 39:

    {printf("regla variable_declaration_list2\n");}
    break;

  case 40:

    {printf("regla variable_declaration1\n");}
    break;

  case 41:

    {printf("regla procedure_and_function_declaration_part1\n");}
    break;

  case 42:

    {printf("regla procedure_and_function_declaration_part2\n");}
    break;

  case 43:

    {printf("regla procedure_and_function_declaration_list1\n");}
    break;

  case 44:

    {printf("regla procedure_and_function_declaration_list2\n");}
    break;

  case 45:

    {printf("regla procedure_and_function_declaration1\n");}
    break;

  case 46:

    {printf("regla procedure_and_function_declaration2\n");}
    break;

  case 47:

    {printf("regla statement_part1\n");}
    break;

  case 48:

    {printf("regla statement_part2\n");}
    break;

  case 49:

    {printf("regla sign1\n");}
    break;

  case 50:

    {printf("regla sign2\n");}
    break;

  case 51:

    {printf("regla identifier_list1\n");}
    break;

  case 52:

    {printf("regla identifier_list2\n");}
    break;

  case 53:

    {printf("regla type1\n");}
    break;

  case 54:

    {printf("regla type2\n");}
    break;

  case 55:

    {printf("regla type3\n");}
    break;

  case 56:

    {printf("regla type4\n");}
    break;

  case 57:

    {printf("regla simple_type1\n");}
    break;

  case 58:

    {printf("regla simple_type2\n");}
    break;

  case 59:

    {printf("regla simple_type3\n");}
    break;

  case 60:

    {printf("regla ordinal_type1\n");}
    break;

  case 61:

    {printf("regla ordinal_type2\n");}
    break;

  case 62:

    {printf("regla ordinal_type3\n");}
    break;

  case 63:

    {printf("regla ordinal_type_identifier1\n");}
    break;

  case 64:

    {printf("regla ordinal_type_identifier2\n");}
    break;

  case 65:

    {printf("regla ordinal_type_identifier3\n");}
    break;

  case 66:

    {printf("regla ordinal_type_identifier4\n");}
    break;

  case 67:

    {printf("regla ordinal_type_identifier5\n");}
    break;

  case 68:

    {printf("regla ordinal_type_identifier6\n");}
    break;

  case 69:

    {printf("regla type_boolean1\n");}
    break;

  case 70:

    {printf("regla type_boolean2\n");}
    break;

  case 71:

    {printf("regla enumerated_type1\n");}
    break;

  case 72:

    {printf("regla subrange_type1\n");}
    break;

  case 73:

    {printf("regla real_type1\n");}
    break;

  case 74:

    {printf("regla real_type_identifier1\n");}
    break;

  case 75:

    {printf("regla string_type1\n");}
    break;

  case 76:

    {printf("regla structured_type1\n");}
    break;

  case 77:

    {printf("regla structured_type2\n");}
    break;

  case 78:

    {printf("regla type_list1\n");}
    break;

  case 79:

    {printf("regla type_list2\n");}
    break;

  case 80:

    {printf("regla type_list3\n");}
    break;

  case 81:

    {printf("regla type_list4\n");}
    break;

  case 82:

    {printf("regla array_type\n");}
    break;

  case 83:

    {printf("regla index_type_list1\n");}
    break;

  case 84:

    {printf("regla index_type_list2\n");}
    break;

  case 85:

    {printf("regla record_type1\n");}
    break;

  case 86:

    {printf("regla record_type2\n");}
    break;

  case 87:

    {printf("regla field_list1\n");}
    break;

  case 88:

    {printf("regla field_list2\n");}
    break;

  case 89:

    {printf("regla field_list3\n");}
    break;

  case 90:

    {printf("regla field_list4\n");}
    break;

  case 91:

    {printf	("regla field_list5\n");}
    break;

  case 92:

    {printf("regla field_list6\n");}
    break;

  case 93:

    {printf("regla fixed_part1\n");}
    break;

  case 94:

    {printf("regla fixed_part2\n");}
    break;

  case 95:

    {printf("regla field_declaration1\n");}
    break;

  case 96:

    {printf("regla variant_part1\n");}
    break;

  case 97:

    {printf("regla variant_part2\n");}
    break;

  case 98:

    {printf("regla variant_list1\n");}
    break;

  case 99:

    {printf("regla variant_list2\n");}
    break;

  case 100:

    {printf("regla variant1\n");}
    break;

  case 101:

    {printf("regla variant2\n");}
    break;

  case 102:

    {printf("regla constant_list1\n");}
    break;

  case 103:

    {printf("regla constant_list2\n");}
    break;

  case 104:

    {printf("regla tag_field_type1\n");}
    break;

  case 105:

    {printf("regla set_type\n");}
    break;

  case 106:

    {printf("regla file_type1\n");}
    break;

  case 107:

    {printf("regla file_type2\n");}
    break;

  case 108:

    {printf("regla pointer_type1\n");}
    break;

  case 109:

    {printf("regla pointer_type2\n");}
    break;

  case 110:

    {printf("regla pointer_type_identifier1\n");}
    break;

  case 111:

    {printf("regla base_type1\n");}
    break;

  case 112:

    {printf("regla base_type2\n");}
    break;

  case 113:

    {printf("regla base_type3\n");}
    break;

  case 114:

    {printf("regla base_type4\n");}
    break;

  case 115:

    {printf("regla base_type5\n");}
    break;

  case 116:

    {printf("regla base_type6\n");}
    break;

  case 117:

    {printf("regla base_type7\n");}
    break;

  case 118:

    {printf("regla base_type9\n");}
    break;

  case 119:

    {printf("regla base_type10\n");}
    break;

  case 120:

    {printf("regla base_type11\n");}
    break;

  case 121:

    {printf("regla variable_reference1\n");}
    break;

  case 122:

    {printf("regla variable_identifier1\n");}
    break;

  case 123:

    {printf("regla qualifier_list1\n");}
    break;

  case 124:

    {printf("regla qualifier_list2\n");}
    break;

  case 125:

    {printf("regla qualifier1\n");}
    break;

  case 126:

    {printf("regla qualifier2\n");}
    break;

  case 127:

    {printf("regla qualifier3\n");}
    break;

  case 128:

    {printf("regla index1\n");}
    break;

  case 129:

    {printf("regla expression_list1\n");}
    break;

  case 130:

    {printf("regla expression_list2\n");}
    break;

  case 131:

    {printf("regla field_designator1\n");}
    break;

  case 132:

    {printf("regla unsigned_constant1\n");}
    break;

  case 133:

    {printf("regla unsigned_constant2\n");}
    break;

  case 134:

    {printf("regla unsigned_constant3\n");}
    break;

  case 135:

    {printf("regla unsigned_constant4\n");}
    break;

  case 136:

    {printf("regla unsigned_number1\n");}
    break;

  case 137:

    {printf("regla unsigned_number2\n");}
    break;

  case 138:

    {printf("regla unsigned_number3\n");}
    break;

  case 139:

    {printf("regla signed_number1\n");}
    break;

  case 140:

    {printf("regla signed_number2\n");}
    break;

  case 141:

    {printf("regla factor1\n");}
    break;

  case 142:

    {printf("regla factor2\n");}
    break;

  case 143:

    {printf("regla factor3\n");}
    break;

  case 144:

    {printf	("regla factor4\n");}
    break;

  case 145:

    {printf("regla factor5\n");}
    break;

  case 146:

    {printf("regla factor6\n");}
    break;

  case 147:

    {printf("regla factor7\n");}
    break;

  case 148:

    {printf("regla factor8\n");}
    break;

  case 149:

    {printf("regla factor9\n");}
    break;

  case 150:

    {printf("regla term1\n");}
    break;

  case 151:

    {printf("regla term2\n");}
    break;

  case 152:

    {printf("regla term_operator_list1\n");}
    break;

  case 153:

    {printf("regla term_operator_list2\n");}
    break;

  case 154:

    {printf("regla term_operator_list3\n");}
    break;

  case 155:

    {printf("regla term_operator_list4\n");}
    break;

  case 156:

    {printf("regla term_operator_list5\n");}
    break;

  case 157:

    {printf("regla simple_expression1\n");}
    break;

  case 158:

    {printf("regla simple_expression2\n");}
    break;

  case 159:

    {printf("regla simple_expression_term_operator_iterable1\n");}
    break;

  case 160:

    {printf("regla simple_expression_term_operator_iterable2\n");}
    break;

  case 161:

    {printf("regla simple_expression_term_operator_list1\n");}
    break;

  case 162:

    {printf("regla simple_expression_term_operator_list2\n");}
    break;

  case 163:

    {printf("regla simple_expression_term_operator_list3\n");}
    break;

  case 164:

    {printf("regla expression1\n");}
    break;

  case 165:

    {printf("regla expression2\n");}
    break;

  case 166:

    {printf("regla relational_operator1\n");}
    break;

  case 167:

    {printf("regla relational_operator2\n");}
    break;

  case 168:

    {printf("regla relational_operator3\n");}
    break;

  case 169:

    {printf("regla relational_operator4\n");}
    break;

  case 170:

    {printf("regla relational_operator5\n");}
    break;

  case 171:

    {printf("regla relational_operator6\n");}
    break;

  case 172:

    {printf("regla relational_operator7\n");}
    break;

  case 173:

    {printf("regla function_call1\n");}
    break;

  case 174:

    {printf("regla function_identifier1\n");}
    break;

  case 176:

    {printf("regla actual_parameter_list1\n");}
    break;

  case 177:

    {printf("regla actual_parameter_list2\n");}
    break;

  case 178:

    {printf("regla actual_parameter_list3\n");}
    break;

  case 179:

    {printf("regla actual_parameter1\n");}
    break;

  case 180:

    {printf("regla actual_parameter2\n");}
    break;

  case 181:

    {printf("regla actual_parameter1\n");}
    break;

  case 182:

    {printf("regla actual_parameter3\n");}
    break;

  case 183:

    {printf("regla procedure_identifier1\n");}
    break;

  case 184:

    {printf("regla procedure_identifier2\n");}
    break;

  case 185:

    {printf("regla procedure_identifier3\n");}
    break;

  case 186:

    {printf("regla procedure_identifier4\n");}
    break;

  case 187:

    {printf("regla set_constructor1\n");}
    break;

  case 188:

    {printf("regla set_constructor2\n");}
    break;

  case 189:

    {printf("regla member_group_list1\n");}
    break;

  case 190:

    {printf("regla member_group_list2\n");}
    break;

  case 191:

    {printf("regla member_group1\n");}
    break;

  case 192:

    {printf("regla member_group2\n");}
    break;

  case 194:

    {printf("regla statement1\n");}
    break;

  case 195:

    {printf("regla statement2\n");}
    break;

  case 196:

    {printf("regla statement3\n");}
    break;

  case 197:

    {printf("regla statement4\n");}
    break;

  case 198:

    {printf("regla statement5\n");}
    break;

  case 199:

    {printf("regla statement6\n");}
    break;

  case 200:

    {printf("regla simple_statement1\n");}
    break;

  case 201:

    {printf("regla simple_statement2\n");}
    break;

  case 202:

    {printf("regla simple_statement3\n");}
    break;

  case 203:

    {printf("regla assignment_statement1\n");}
    break;

  case 204:

    {printf("regla assignment_statement2\n");}
    break;

  case 205:

    {printf("regla procedure_statement1\n");}
    break;

  case 206:

    {printf("regla procedure_statement2\n");}
    break;

  case 207:

    {printf("regla procedure_statement3\n");}
    break;

  case 208:

    {printf("regla goto_statement1\n");}
    break;

  case 209:

    {printf("regla structured_statement1\n");}
    break;

  case 210:

    {printf("regla structured_statement2\n");}
    break;

  case 211:

    {printf("regla structured_statement3\n");}
    break;

  case 212:

    {printf("regla structured_statement4\n");}
    break;

  case 213:

    {printf("regla compound_statement\n");}
    break;

  case 214:

    {printf("regla statement_list1\n");}
    break;

  case 215:

    {printf("regla statement_list2\n");}
    break;

  case 218:

    {printf("regla if_statement1\n");}
    break;

  case 219:

    {printf("regla if_statement2\n");}
    break;

  case 220:

    {printf("regla case_statement1\n");}
    break;

  case 221:

    {printf("regla case_statement2\n");}
    break;

  case 222:

    {printf("regla case_statement3\n");}
    break;

  case 223:

    {printf("regla case_statement4\n");}
    break;

  case 224:

    {printf("regla case_list1\n");}
    break;

  case 225:

    {printf("regla case_list2\n");}
    break;

  case 226:

    {printf("regla case1\n");}
    break;

  case 227:

    {printf("regla otherwise_clause1\n");}
    break;

  case 228:

    {printf("regla repetitive_statement1\n");}
    break;

  case 229:

    {printf("regla repetitive_statement2\n");}
    break;

  case 230:

    {printf("regla repetitive_statement3\n");}
    break;

  case 231:

    {printf("regla repeat_statement\n");}
    break;

  case 232:

    {printf("regla while_statement\n");}
    break;

  case 233:

    {printf("regla for_statement1\n");}
    break;

  case 234:

    {printf("regla for_statement2\n");}
    break;

  case 235:

    {printf("regla control_variable\n");}
    break;

  case 236:

    {printf("regla initial_value\n");}
    break;

  case 237:

    {printf("regla final_value\n");}
    break;

  case 238:

    {printf("regla with_statement\n");}
    break;

  case 239:

    {printf("regla record_variable_reference_list1\n");}
    break;

  case 240:

    {printf("regla record_variable_reference_list2\n");}
    break;

  case 241:

    {printf("regla procedure_declaration1\n");}
    break;

  case 242:

    {printf("regla procedure_body1\n");}
    break;

  case 243:

    {printf("regla procedure_body2\n");}
    break;

  case 244:

    {printf("regla procedure_body3\n");}
    break;

  case 245:

    {printf("regla procedure_heading1\n");}
    break;

  case 246:

    {printf("regla procedure_heading2\n");}
    break;

  case 247:

    {printf("regla function_declaration1\n");}
    break;

  case 248:

    {printf("regla function_body1\n");}
    break;

  case 249:

    {printf("regla function_body2\n");}
    break;

  case 250:

    {printf("regla function_body3\n");}
    break;

  case 251:

    {printf("regla function_heading1\n");}
    break;

  case 252:

    {printf("regla function_heading2\n");}
    break;

  case 253:

    {printf("regla formal_parameter_list1\n");}
    break;

  case 254:

    {printf("regla formal_parameter_list2\n");}
    break;

  case 255:

    {printf("regla formal_parameter_list_iterable1\n");}
    break;

  case 256:

    {printf("regla formal_parameter_list_iterable2\n");}
    break;

  case 257:

    {printf("regla formal_parameter_list_iterable_list1\n");}
    break;

  case 258:

    {printf("regla formal_parameter_list_iterable_list2\n");}
    break;

  case 259:

    {printf("regla formal_parameter_list_iterable_list3\n");}
    break;

  case 260:

    {printf("regla parameter_declaration1\n");}
    break;

  case 261:

    {printf("regla parameter_declaration2\n");}
    break;

  case 262:

    {printf("regla type_identifier1\n");}
    break;

  case 263:

    {printf("regla regular_unit1\n");}
    break;

  case 264:

    {printf("regla unit_heading1\n");}
    break;

  case 265:

    {printf("regla interface_part1\n");}
    break;

  case 266:

    {printf("regla uses_clause_empty1\n");}
    break;

  case 267:

    {printf("regla uses_clause_empty2\n");}
    break;

  case 268:

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
