
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

/* "%code requires" blocks.  */


	#define IDENTIFIERS_LIMIT 10
	#define LABELS_LIMIT 256
	#define CONSTANTS_LIST_LIMIT 256




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
	int intValArray[LABELS_LIMIT];
    float floatVal;
	char* pCharVal;
	char* pcharValArray[IDENTIFIERS_LIMIT];



} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


   #include <stdio.h>
   #include <string.h>
   #include <string>
   #include <iostream>
   #include <iomanip>
   #pragma warning(disable: 4996 6385 4273 4013 4065)
   #define SIZE_LINES_OF_USE 500

   extern unsigned int columna;
   extern unsigned int fila;
   extern int yylex(void);
   int yyerror(const char *s);
   extern FILE *yyin;

   std::string currentScope = "";

   std::string margin = "  ";  
	int table_width = 90;  

      
   enum types
   {
	notype,
	integer,
	real,
	longinteger,
	string,
	char_,
	boolean,
	longint,
	word,
	function,
	array,
	file,
	record,
	program

   };
   struct node{
	std::string symbol;
	std::string scope;
	int definition_line;
	int lines_of_use[SIZE_LINES_OF_USE];
	std::string type;
	struct node* next;

	node()
	{
		symbol = "";
		scope = "";
		definition_line = 0;
		for(int i = 0; i< SIZE_LINES_OF_USE; i++)
			lines_of_use[i]= 0;
		type = "";
		next = NULL;
	}
   } ;

   struct node symbolsTable[127];
   int hash_function(char* symbol);
   void push_symbol(char* symbol, std::string scope, int definition_line, int line_of_use, std::string type );
	std::string removeRightmostWord(std::string str);
	void print_symbol_table( int size = 17) ;
	void printSymbolsTable();
	void print_border(int width) ;



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
#define YYLAST   744

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  130
/* YYNRULES -- Number of rules.  */
#define YYNRULES  284
/* YYNRULES -- Number of states.  */
#define YYNSTATES  455

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
      33,    34,    35,    44,    48,    49,    53,    55,    57,    60,
      61,    64,    66,    71,    73,    76,    78,    81,    83,    85,
      87,    90,    91,    94,    96,   101,   104,   105,   108,   110,
     115,   117,   118,   121,   123,   125,   127,   129,   130,   132,
     134,   138,   140,   142,   144,   146,   148,   150,   152,   154,
     156,   158,   160,   162,   164,   166,   168,   170,   172,   174,
     176,   180,   184,   186,   188,   193,   198,   201,   203,   205,
     207,   209,   211,   218,   222,   224,   226,   230,   234,   238,
     240,   244,   246,   249,   253,   255,   258,   262,   267,   269,
     272,   276,   278,   282,   287,   294,   298,   300,   305,   311,
     315,   317,   319,   323,   325,   328,   331,   333,   335,   337,
     339,   341,   343,   345,   347,   349,   351,   353,   355,   357,
     359,   362,   364,   367,   369,   371,   373,   375,   379,   383,
     385,   388,   391,   393,   395,   397,   399,   401,   403,   405,
     408,   410,   412,   415,   417,   419,   421,   425,   428,   430,
     432,   436,   438,   440,   442,   444,   446,   448,   451,   453,
     457,   459,   461,   463,   465,   467,   471,   473,   475,   477,
     479,   481,   483,   485,   488,   493,   495,   497,   501,   504,
     510,   514,   516,   518,   520,   522,   524,   526,   528,   531,
     535,   539,   541,   543,   547,   548,   551,   555,   559,   561,
     563,   565,   567,   569,   571,   573,   577,   581,   583,   586,
     589,   592,   594,   596,   598,   600,   604,   608,   610,   612,
     614,   619,   626,   632,   639,   647,   654,   658,   660,   664,
     668,   670,   672,   674,   679,   684,   693,   702,   704,   706,
     708,   713,   717,   719,   724,   726,   728,   730,   733,   734,
     739,   744,   746,   748,   750,   751,   757,   758,   765,   769,
     772,   776,   778,   780,   782,   784,   789,   793,   795,   796,
     804,   807,   814,   816,   817
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      94,     0,    -1,    95,    -1,   217,    -1,    96,    83,    99,
      84,    -1,    96,    83,    98,    83,    99,    84,    -1,     9,
       6,    -1,     9,     6,    85,    97,    86,    -1,   121,    -1,
      11,   121,    -1,    -1,    -1,   102,   105,   110,   113,   100,
     116,   101,   119,    -1,    15,   103,    83,    -1,    -1,   103,
      87,   104,    -1,   104,    -1,     3,    -1,    16,   106,    -1,
      -1,   106,   107,    -1,   107,    -1,     6,    67,   108,    83,
      -1,   109,    -1,   120,   109,    -1,   162,    -1,    88,   162,
      -1,     7,    -1,     8,    -1,     6,    -1,    17,   111,    -1,
      -1,   111,   112,    -1,   112,    -1,     6,    67,   122,    83,
      -1,    35,   114,    -1,    -1,   114,   115,    -1,   115,    -1,
     121,    89,   122,    83,    -1,   117,    -1,    -1,   117,   118,
      -1,   118,    -1,   203,    -1,   207,    -1,   186,    -1,    -1,
      76,    -1,    77,    -1,   121,    87,     6,    -1,     6,    -1,
     123,    -1,   132,    -1,   150,    -1,     6,    -1,   124,    -1,
     129,    -1,   131,    -1,   128,    -1,   127,    -1,   125,    -1,
      19,    -1,    20,    -1,    22,    -1,    23,    -1,   171,    -1,
      21,    -1,    24,    -1,    25,    -1,    85,   121,    86,    -1,
     108,    66,   108,    -1,   130,    -1,    18,    -1,    26,    90,
       3,    91,    -1,    26,    90,     6,    91,    -1,    27,   133,
      -1,   133,    -1,   134,    -1,   148,    -1,   149,    -1,   139,
      -1,    28,    90,   135,    91,    33,   122,    -1,   135,    87,
     136,    -1,   136,    -1,   124,    -1,   124,   165,   137,    -1,
     124,   120,   138,    -1,   137,   165,   162,    -1,   162,    -1,
     138,   120,   161,    -1,   161,    -1,    29,    30,    -1,    29,
     140,    30,    -1,   141,    -1,   141,    83,    -1,   141,    83,
     143,    -1,   141,    83,   143,    83,    -1,   143,    -1,   143,
      83,    -1,   141,    83,   142,    -1,   142,    -1,   121,    89,
     122,    -1,    31,   147,    33,   144,    -1,    31,     6,    89,
     147,    33,   144,    -1,   144,    83,   145,    -1,   145,    -1,
     146,    89,    85,    86,    -1,   146,    89,    85,   140,    86,
      -1,   146,    87,   108,    -1,   108,    -1,     6,    -1,    34,
      33,   124,    -1,    40,    -1,    33,   122,    -1,    92,   152,
      -1,   151,    -1,    53,    -1,    19,    -1,    20,    -1,    22,
      -1,    23,    -1,    26,    -1,    29,    -1,    40,    -1,    28,
      -1,     6,    -1,    38,    -1,    18,    -1,   161,    -1,   154,
     155,    -1,     6,    -1,   155,   156,    -1,   156,    -1,   157,
      -1,   159,    -1,    92,    -1,    90,   158,    91,    -1,   158,
      87,   169,    -1,   169,    -1,    84,     6,    -1,    84,   171,
      -1,   161,    -1,     7,    -1,     8,    -1,    53,    -1,     3,
      -1,     4,    -1,     5,    -1,   120,   161,    -1,   161,    -1,
     153,    -1,    80,   153,    -1,   160,    -1,   171,    -1,   177,
      -1,    85,   169,    86,    -1,    63,   163,    -1,     6,    -1,
     126,    -1,   164,   165,   163,    -1,   163,    -1,    78,    -1,
      79,    -1,    60,    -1,    61,    -1,    62,    -1,   120,   167,
      -1,   167,    -1,   167,   168,   164,    -1,   164,    -1,    76,
      -1,    77,    -1,    59,    -1,   166,    -1,   166,   170,   166,
      -1,    67,    -1,    68,    -1,    69,    -1,    74,    -1,    73,
      -1,    75,    -1,    58,    -1,   172,   173,    -1,   172,   173,
      89,   152,    -1,    38,    -1,     6,    -1,    85,   174,    86,
      -1,    85,    86,    -1,    85,   174,    89,   152,    86,    -1,
     174,    87,   175,    -1,   175,    -1,   169,    -1,   176,    -1,
      56,    -1,    57,    -1,    54,    -1,    55,    -1,    90,    91,
      -1,    90,   178,    91,    -1,   178,    87,   179,    -1,   179,
      -1,   169,    -1,   169,    66,   169,    -1,    -1,   104,    89,
      -1,   104,    89,   181,    -1,   104,    89,   185,    -1,   181,
      -1,   185,    -1,     6,    -1,   153,    -1,   182,    -1,   183,
      -1,   184,    -1,   153,    65,   169,    -1,   172,    65,   169,
      -1,   176,    -1,   176,   173,    -1,     6,   173,    -1,    41,
     104,    -1,   186,    -1,   188,    -1,   194,    -1,   201,    -1,
      10,   187,    30,    -1,   187,    83,   180,    -1,   180,    -1,
     189,    -1,   190,    -1,    42,   169,    43,   180,    -1,    42,
     169,    43,   180,    44,   180,    -1,    31,   169,    33,   191,
      30,    -1,    31,   169,    33,   191,   193,    30,    -1,    31,
     169,    33,   191,   193,    83,    30,    -1,    31,   169,    33,
     191,    83,    30,    -1,   191,    83,   192,    -1,   192,    -1,
     146,    89,   180,    -1,    83,    32,   180,    -1,   195,    -1,
     196,    -1,   197,    -1,    45,   187,    46,   169,    -1,    47,
     169,    48,   180,    -1,    49,   198,    65,   199,    50,   200,
      48,   180,    -1,    49,   198,    65,   199,    51,   200,    48,
     180,    -1,     6,    -1,   169,    -1,   169,    -1,    52,   202,
      48,   180,    -1,   202,    87,   153,    -1,   153,    -1,   205,
      83,   204,    83,    -1,    99,    -1,    36,    -1,    37,    -1,
      39,     6,    -1,    -1,    39,     6,   206,   212,    -1,   209,
      83,   208,    83,    -1,    99,    -1,    36,    -1,    37,    -1,
      -1,    38,     6,   210,    89,   152,    -1,    -1,    38,     6,
     211,   212,    89,   152,    -1,    85,   213,    86,    -1,    85,
      86,    -1,   213,    83,   214,    -1,   214,    -1,   215,    -1,
     205,    -1,   209,    -1,    35,   121,    89,   216,    -1,   121,
      89,   216,    -1,   122,    -1,    -1,   219,    83,   220,   218,
     222,    30,    84,    -1,    12,     6,    -1,    13,   221,   105,
     110,   113,   116,    -1,    98,    -1,    -1,    14,   105,   110,
     113,   116,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   116,   116,   117,   119,   120,   123,   126,   132,   134,
     141,   142,   138,   148,   153,   154,   167,   175,   178,   179,
     180,   181,   184,   185,   186,   187,   188,   189,   190,   192,
     194,   195,   196,   197,   200,   202,   203,   204,   205,   207,
     214,   215,   216,   217,   218,   219,   221,   222,   224,   225,
     227,   240,   251,   252,   253,   254,   257,   258,   259,   261,
     262,   263,   269,   270,   271,   272,   273,   274,   276,   277,
     279,   281,   283,   284,   286,   287,   295,   296,   298,   299,
     300,   301,   304,   323,   324,   326,   327,   328,   330,   331,
     332,   333,   335,   336,   338,   339,   340,   341,   342,   343,
     346,   347,   348,   350,   351,   355,   356,   358,   359,   362,
     375,   384,   387,   406,   407,   411,   430,   432,   434,   435,
     436,   437,   438,   439,   440,   441,   442,   443,   444,   445,
     452,   454,   456,   457,   459,   460,   461,   465,   467,   468,
     470,   471,   479,   480,   481,   483,   485,   486,   487,   488,
     489,   493,   494,   495,   496,   497,   498,   499,   500,   501,
     503,   504,   505,   506,   507,   508,   509,   512,   513,   515,
     517,   519,   520,   521,   524,   525,   527,   528,   529,   530,
     531,   532,   533,   537,   538,   541,   542,   545,   546,   547,
     551,   552,   554,   555,   557,   558,   559,   560,   563,   564,
     567,   568,   574,   575,   579,   580,   581,   582,   583,   584,
     585,   586,   589,   590,   591,   593,   594,   597,   598,   599,
     602,   609,   610,   611,   612,   616,   617,   618,   621,   622,
     626,   627,   629,   630,   631,   632,   633,   634,   635,   640,
     642,   643,   644,   647,   650,   652,   653,   654,   655,   656,
     659,   661,   662,   670,   672,   673,   674,   676,   678,   678,
     682,   683,   684,   685,   687,   687,   702,   702,   720,   721,
     723,   724,   726,   727,   728,   730,   735,   742,   748,   748,
     749,   751,   754,   755,   758
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
  "label_list", "label", "constant_declaration_part",
  "constant_declaration_list", "constant_declaration", "constant",
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
  "procedure_declaration", "procedure_body", "procedure_heading", "$@3",
  "function_declaration", "function_body", "function_heading", "$@4",
  "$@5", "formal_parameter_list", "formal_parameter_list_iterable",
  "formal_parameter_list_iterable_list", "parameter_declaration",
  "type_identifier", "regular_unit", "$@6", "unit_heading",
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
     100,   101,    99,   102,   102,   103,   103,   104,   105,   105,
     106,   106,   107,   108,   108,   108,   108,   108,   108,   109,
     110,   110,   111,   111,   112,   113,   113,   114,   114,   115,
     116,   116,   117,   117,   118,   118,   119,   119,   120,   120,
     121,   121,   122,   122,   122,   122,   123,   123,   123,   124,
     124,   124,   125,   125,   125,   125,   125,   125,   126,   126,
     127,   128,   129,   130,   131,   131,   132,   132,   133,   133,
     133,   133,   134,   135,   135,   136,   136,   136,   137,   137,
     138,   138,   139,   139,   140,   140,   140,   140,   140,   140,
     141,   141,   142,   143,   143,   144,   144,   145,   145,   146,
     146,   147,   148,   149,   149,   150,   150,   151,   152,   152,
     152,   152,   152,   152,   152,   152,   152,   152,   152,   152,
     153,   154,   155,   155,   156,   156,   156,   157,   158,   158,
     159,   159,   160,   160,   160,   160,   161,   161,   161,   162,
     162,   163,   163,   163,   163,   163,   163,   163,   163,   163,
     164,   164,   165,   165,   165,   165,   165,   166,   166,   167,
     167,   168,   168,   168,   169,   169,   170,   170,   170,   170,
     170,   170,   170,   171,   171,   172,   172,   173,   173,   173,
     174,   174,   175,   175,   176,   176,   176,   176,   177,   177,
     178,   178,   179,   179,   180,   180,   180,   180,   180,   180,
     180,   180,   181,   181,   181,   182,   182,   183,   183,   183,
     184,   185,   185,   185,   185,   186,   187,   187,   188,   188,
     189,   189,   190,   190,   190,   190,   191,   191,   192,   193,
     194,   194,   194,   195,   196,   197,   197,   198,   199,   200,
     201,   202,   202,   203,   204,   204,   204,   205,   206,   205,
     207,   208,   208,   208,   210,   209,   211,   209,   212,   212,
     213,   213,   214,   214,   214,   215,   215,   216,   218,   217,
     219,   220,   221,   221,   222
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     4,     6,     2,     5,     1,     2,
       0,     0,     8,     3,     0,     3,     1,     1,     2,     0,
       2,     1,     4,     1,     2,     1,     2,     1,     1,     1,
       2,     0,     2,     1,     4,     2,     0,     2,     1,     4,
       1,     0,     2,     1,     1,     1,     1,     0,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     1,     1,     4,     4,     2,     1,     1,     1,
       1,     1,     6,     3,     1,     1,     3,     3,     3,     1,
       3,     1,     2,     3,     1,     2,     3,     4,     1,     2,
       3,     1,     3,     4,     6,     3,     1,     4,     5,     3,
       1,     1,     3,     1,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     2,     1,     1,     1,     1,     3,     3,     1,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     2,     1,     1,     1,     3,     2,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     2,     1,     3,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     2,     4,     1,     1,     3,     2,     5,
       3,     1,     1,     1,     1,     1,     1,     1,     2,     3,
       3,     1,     1,     3,     0,     2,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     1,     2,     2,
       2,     1,     1,     1,     1,     3,     3,     1,     1,     1,
       4,     6,     5,     6,     7,     6,     3,     1,     3,     3,
       1,     1,     1,     4,     4,     8,     8,     1,     1,     1,
       4,     3,     1,     4,     1,     1,     1,     2,     0,     4,
       4,     1,     1,     1,     0,     5,     0,     6,     3,     2,
       3,     1,     1,     1,     1,     4,     3,     1,     0,     7,
       2,     6,     1,     0,     5
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     2,     0,     3,     0,     6,   280,
       1,    14,     0,     0,     0,     0,     0,     0,    19,   283,
     278,    51,     0,     8,     9,    17,     0,    16,    14,     4,
       0,    31,   282,    19,     0,     7,     0,    13,     0,     0,
       0,    18,    21,     0,    36,    31,    19,     0,    50,    15,
       5,     0,    20,     0,    30,    33,     0,    10,    36,    31,
       0,   146,   147,   148,    29,    27,    28,    48,    49,     0,
       0,    23,     0,   150,    25,     0,    32,    35,    38,     0,
      41,    41,    36,   279,     0,    26,    22,    24,   149,    55,
      73,    62,    63,    67,    64,    65,     0,     0,     0,     0,
       0,     0,   185,   113,   117,     0,     0,     0,     0,    52,
      56,    61,    60,    59,    57,    72,    58,    53,    77,    78,
      81,    79,    80,    54,   116,    66,     0,    37,     0,     0,
       0,    11,    40,    43,    44,     0,    45,     0,   281,    41,
       0,    76,     0,    92,     0,     0,     0,    94,   101,    98,
     114,     0,     0,   126,   128,   118,   119,   120,   121,   122,
     125,   123,   127,   124,   115,   129,     0,    34,     0,   183,
       0,   264,   257,    47,    42,    14,    14,   284,     0,     0,
      29,    85,     0,    84,   111,     0,     0,    93,    95,    99,
     112,    70,    71,   158,   143,   144,    68,    69,   145,   196,
     197,   194,   195,     0,     0,     0,   188,     0,     0,   159,
     151,     0,   153,   142,   161,   170,   174,   168,   192,   154,
       0,   191,   193,   155,     0,    39,     0,     0,     0,   204,
      12,    46,   255,   256,   254,     0,   262,   263,   261,     0,
      74,    75,   164,   165,   166,   162,   163,     0,     0,     0,
       0,     0,     0,   102,   100,    96,   157,   131,   152,     0,
     198,   202,     0,   201,   167,     0,     0,   136,   130,   133,
     134,   135,     0,   182,   176,   177,   178,   180,   179,   181,
       0,   173,   171,   172,     0,   187,     0,     0,   184,     0,
       0,     0,   259,   210,     0,     0,     0,   204,     0,     0,
       0,     0,   211,     0,   217,   227,   208,   212,   213,   214,
     209,   221,     0,   222,   228,   229,   223,   240,   241,   242,
     224,   253,   260,    87,    91,    86,    89,    83,     0,   111,
       0,   110,   103,   106,     0,    97,   156,     0,     0,   199,
     140,   141,     0,   139,   132,   160,   175,   169,   190,     0,
     265,     0,   269,     0,   273,   274,     0,   271,   272,     0,
     219,     0,   220,     0,     0,     0,   247,     0,   252,     0,
     205,     0,     0,   218,   225,   204,     0,     0,    82,     0,
       0,     0,     0,   203,   200,     0,   137,   189,     0,     0,
       0,   268,   267,     0,   204,     0,   204,     0,   204,     0,
     131,     0,   206,   207,   215,   216,   226,    90,    88,   104,
     105,   109,     0,   138,     0,   277,   276,   270,     0,     0,
     237,   230,   243,   244,   248,     0,   250,   251,   107,     0,
     275,   204,   232,     0,     0,   204,     0,     0,   108,   238,
     235,   204,   236,   233,     0,   231,   249,     0,     0,   239,
     234,   204,   204,   245,   246
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,    22,    16,    17,    80,   173,    18,
      26,   301,    31,    41,    42,   107,    71,    44,    54,    55,
      57,    77,    78,   131,   132,   133,   230,    72,   145,   415,
     109,   110,   111,   209,   112,   113,   114,   115,   116,   117,
     118,   119,   182,   183,   325,   323,   120,   146,   147,   148,
     149,   332,   333,   334,   185,   121,   122,   123,   124,   164,
     210,   211,   268,   269,   270,   342,   271,   212,   213,    74,
     214,   215,   272,   216,   217,   284,   218,   280,   219,   126,
     360,   220,   221,   304,   223,   262,   263,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   419,   420,
     434,   316,   317,   318,   319,   367,   425,   447,   320,   369,
     134,   235,   135,   228,   136,   239,   137,   226,   227,   291,
     356,   357,   358,   416,     6,    34,     7,    20,    33,    47
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -368
static const yytype_int16 yypact[] =
{
     165,    50,    86,    63,  -368,     2,  -368,    36,    45,  -368,
    -368,    42,   126,   145,   145,   157,   103,    97,   194,   210,
    -368,  -368,   146,   173,   173,  -368,     7,  -368,   251,  -368,
     266,   259,  -368,   194,   265,  -368,   275,  -368,   157,   208,
     235,   266,  -368,   300,   272,   259,   194,   279,  -368,  -368,
    -368,   435,  -368,   243,   300,  -368,   145,  -368,   272,   259,
     227,  -368,  -368,  -368,  -368,  -368,  -368,  -368,  -368,    35,
     231,  -368,   236,  -368,  -368,   368,  -368,   145,  -368,   -42,
     152,   152,   272,  -368,    98,  -368,  -368,  -368,  -368,    29,
    -368,  -368,  -368,  -368,  -368,  -368,   226,   160,   228,    40,
     368,   284,  -368,  -368,  -368,   145,   704,   256,   237,  -368,
    -368,  -368,  -368,  -368,  -368,  -368,  -368,  -368,  -368,  -368,
    -368,  -368,  -368,  -368,  -368,  -368,   239,  -368,   368,   321,
     330,  -368,   152,  -368,  -368,   258,  -368,   260,  -368,   152,
     166,  -368,   590,  -368,   331,   135,   316,   264,  -368,   267,
    -368,   590,   158,  -368,  -368,  -368,  -368,  -368,  -368,  -368,
    -368,  -368,  -368,  -368,  -368,  -368,   435,  -368,   462,   262,
     269,   268,   271,   339,  -368,    61,   122,  -368,   270,   273,
     274,   192,    59,  -368,   276,   324,   368,  -368,    37,  -368,
    -368,  -368,  -368,   190,  -368,  -368,  -368,  -368,  -368,  -368,
    -368,  -368,  -368,   102,   356,   564,  -368,   408,   102,  -368,
    -368,    44,  -368,  -368,  -368,   186,   351,   -17,  -368,  -368,
     119,  -368,  -368,  -368,   704,  -368,   277,   285,   285,   627,
    -368,  -368,  -368,  -368,  -368,   286,  -368,  -368,  -368,   294,
    -368,  -368,  -368,  -368,  -368,  -368,  -368,    98,    35,   590,
     347,   375,   435,  -368,  -368,   301,  -368,  -368,  -368,   297,
    -368,   326,    76,  -368,   -17,    31,   564,  -368,    44,  -368,
    -368,  -368,   102,  -368,  -368,  -368,  -368,  -368,  -368,  -368,
     564,  -368,  -368,  -368,   102,  -368,   502,   704,  -368,   704,
      13,   304,  -368,    57,   564,   157,   564,   627,   564,   392,
     356,   314,   340,   342,   239,  -368,  -368,  -368,  -368,  -368,
    -368,  -368,    -5,  -368,  -368,  -368,  -368,  -368,  -368,  -368,
    -368,  -368,  -368,   174,  -368,   186,  -368,  -368,   368,  -368,
     371,  -368,   327,  -368,   138,  -368,  -368,   564,   564,  -368,
     274,  -368,    84,  -368,  -368,  -368,  -368,   186,  -368,   336,
    -368,   145,  -368,   148,  -368,  -368,   132,  -368,  -368,   704,
    -368,   384,  -368,   380,   -19,   379,  -368,   363,  -368,   -20,
     649,   564,   564,  -368,  -368,   627,    98,    35,  -368,   435,
     435,   435,   344,  -368,  -368,   564,  -368,  -368,   198,   368,
      48,  -368,  -368,   435,   627,   564,   627,   564,   627,   356,
      19,   340,  -368,  -368,  -368,  -368,  -368,  -368,  -368,   327,
    -368,  -368,    10,  -368,   368,  -368,  -368,  -368,   204,    -1,
    -368,   386,  -368,  -368,  -368,   254,  -368,  -368,  -368,   345,
    -368,   627,  -368,   291,     5,   627,   564,   564,  -368,  -368,
    -368,   627,  -368,  -368,   404,  -368,  -368,   387,   388,  -368,
    -368,   627,   627,  -368,  -368
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -368,  -368,  -368,  -368,  -368,   418,   -22,  -368,  -368,  -368,
    -368,    -7,   115,  -368,   406,   -48,   376,    79,  -368,   395,
      -8,  -368,   373,   -59,  -368,   319,  -368,   -37,   -12,   -66,
    -368,  -128,  -368,  -368,  -368,  -368,  -368,  -368,  -368,  -368,
     355,  -368,  -368,   205,  -368,  -368,  -368,    43,  -368,   287,
     288,    78,    82,  -367,   207,  -368,  -368,  -368,  -368,  -214,
    -168,  -368,  -368,   191,  -368,  -368,  -368,  -368,   -51,   -65,
    -183,   179,  -169,   184,   281,  -368,   -82,  -368,   -70,  -218,
    -119,  -368,   187,  -153,  -368,  -368,   134,  -232,   104,  -368,
    -368,  -368,   107,   305,   182,  -368,  -368,  -368,  -368,    47,
    -368,  -368,  -368,  -368,  -368,  -368,  -368,    46,  -368,  -368,
    -368,  -368,  -277,  -368,  -368,  -368,  -273,  -368,  -368,   253,
    -368,    92,  -368,    77,  -368,  -368,  -368,  -368,  -368,  -368
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -267
static const yytype_int16 yytable[] =
{
      73,    23,    24,    70,    85,   125,    39,   169,    27,   108,
     288,   303,   248,   354,   181,   222,    21,   355,    73,    21,
     256,    88,   138,   190,    73,   374,   418,   395,   398,   432,
     125,    49,    84,    88,   150,   443,   258,   340,    61,    62,
      63,   144,   281,    21,    79,    36,    21,   128,   351,    73,
      81,   129,   130,    14,    21,   165,     8,    15,   125,   282,
     283,   302,   170,    10,   375,    79,   418,   399,   144,   102,
     143,   144,   125,   349,   139,   350,    15,    73,   375,   303,
     177,   125,   433,   351,  -186,    11,   129,   130,   444,   345,
      37,    73,     9,   152,    38,   -29,   428,   232,   233,   352,
      73,    61,    62,    63,   168,    61,    62,    63,   193,   194,
     195,    67,    68,   354,  -186,    73,   125,   355,   192,    12,
     253,   181,  -186,   259,    58,   261,   196,   197,   265,   302,
      13,   208,   368,   222,   266,    73,   267,    15,    82,    19,
     102,  -131,   168,   406,   247,   392,   249,  -131,    45,  -131,
     250,    21,   303,   234,   238,   198,   377,   303,   236,   237,
      25,    59,   421,   338,   423,   203,   426,   339,   208,   178,
     208,   385,   179,   165,     1,   386,   303,     2,   303,   125,
     303,    29,   204,   326,   343,   373,    28,   205,    98,    99,
     129,   130,   207,   100,   101,   341,   324,    73,    73,   439,
     103,    73,   401,   445,   331,   285,   286,   302,   287,   449,
      30,    84,   361,   303,   363,   390,   365,   303,   391,   453,
     454,    14,    36,   303,   186,   381,   302,   382,   302,   208,
     302,   427,    35,   303,   303,    36,   165,   389,   165,    61,
      62,    63,    64,   208,   191,    36,   242,   243,   244,   208,
      67,    68,   242,   243,   244,   383,   261,   208,   125,   208,
      36,   208,   378,   302,   245,   246,    15,   302,    67,    68,
     245,   246,    40,   302,  -131,  -186,    43,    73,   353,    46,
    -131,    48,  -131,   302,   302,    36,   376,   414,   362,   404,
     405,   381,    50,   431,    61,    62,    63,    64,    65,    66,
     208,   208,    51,   413,   436,   437,    53,    56,   165,    60,
      75,    83,   408,   422,    86,   424,   140,   151,   142,   125,
     167,   440,   166,   441,   168,   407,    73,   171,    73,    73,
      73,   331,   331,   411,   208,   208,   172,   184,    73,   388,
      84,   175,    73,   176,   125,   331,   187,   188,   208,   229,
     189,   224,   225,  -266,   446,   446,  -258,   252,   208,  -186,
     208,   240,   257,    73,   241,   251,   289,    67,    68,   321,
     290,    61,    62,    63,    89,    65,    66,   322,   353,    69,
     328,   329,    73,   336,   335,   331,    90,    91,    92,    93,
      94,    95,   337,   359,    96,    97,    98,    99,   366,   208,
     208,   100,   101,   370,   379,   371,   102,   372,   103,   273,
     380,    61,    62,    63,   193,   194,   195,   393,   274,   275,
     276,   104,   387,   394,   277,   278,   279,   396,   397,   412,
     435,   438,   196,   197,   450,   451,   452,    32,    61,    62,
      63,    64,    65,    66,    67,    68,   102,    52,    87,    76,
     127,   174,   141,   105,   327,   429,    69,   409,   330,   344,
     106,   198,   410,   347,   346,    61,    62,    63,   193,   194,
     195,   203,   384,   348,   402,   254,   255,   403,   231,   364,
     442,   292,   417,   448,    67,    68,   196,   197,   204,   264,
       0,   430,     0,   205,     0,     0,     0,     0,   207,   260,
     102,     0,     0,     0,     0,    61,    62,    63,   193,   194,
     195,    67,    68,     0,     0,   198,   199,   200,   201,   202,
       0,     0,     0,    69,     0,   203,   196,   197,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    67,    68,
     102,     0,   204,     0,     0,     0,     0,   205,   206,     0,
       0,     0,   207,     0,     0,   198,   199,   200,   201,   202,
       0,     0,     0,     0,     0,   203,     0,    61,    62,    63,
     193,   194,   195,     0,     0,     0,     0,     0,    67,    68,
       0,     0,   204,     0,     0,     0,     0,   205,   196,   197,
       0,     0,   207,    61,    62,    63,   180,    65,    66,     0,
       0,     0,   102,     0,     0,     0,     0,     0,     0,    91,
      92,    93,    94,    95,     0,     0,     0,   198,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   203,   102,     0,
      25,     0,     0,   293,     0,     0,     0,   229,     0,     0,
      67,    68,     0,     0,   204,     0,     0,     0,     0,   205,
       0,     0,     0,     0,   207,   400,     0,     0,   294,   229,
       0,     0,     0,     0,     0,   102,    67,    68,   295,   296,
       0,     0,   297,     0,   298,   105,   299,     0,    69,   300,
     294,   199,   200,   201,   202,     0,     0,   102,     0,     0,
     295,   296,     0,     0,   297,     0,   298,     0,   299,     0,
       0,   300,     0,   199,   200,   201,   202,    61,    62,    63,
     153,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   154,   155,   156,     0,   157,   158,     0,     0,
     159,     0,   160,   161,     0,     0,     0,     0,     0,     0,
       0,     0,   162,     0,   163
};

static const yytype_int16 yycheck[] =
{
      51,    13,    14,    51,    69,    75,    28,   126,    15,    75,
     224,   229,   181,   290,   142,   168,     6,   290,    69,     6,
     203,    72,    81,   151,    75,    30,   393,    46,    48,    30,
     100,    38,    69,    84,   100,    30,   204,     6,     3,     4,
       5,    31,    59,     6,    56,    87,     6,    89,    35,   100,
      58,    38,    39,    11,     6,   106,     6,    15,   128,    76,
      77,   229,   128,     0,    83,    77,   433,    87,    31,    38,
      30,    31,   142,   287,    82,   289,    15,   128,    83,   297,
     139,   151,    83,    35,    65,    83,    38,    39,    83,   272,
      83,   142,     6,   105,    87,    66,    86,    36,    37,    86,
     151,     3,     4,     5,    85,     3,     4,     5,     6,     7,
       8,    76,    77,   390,    85,   166,   186,   390,   166,    83,
     186,   249,    65,   205,    45,   207,    24,    25,    84,   297,
      85,   168,   300,   286,    90,   186,    92,    15,    59,    13,
      38,    84,    85,   375,   181,   359,    87,    90,    33,    92,
      91,     6,   370,   175,   176,    53,   325,   375,    36,    37,
       3,    46,   394,    87,   396,    63,   398,    91,   205,     3,
     207,    87,     6,   224,     9,    91,   394,    12,   396,   249,
     398,    84,    80,   248,   266,   304,    83,    85,    28,    29,
      38,    39,    90,    33,    34,   265,   247,   248,   249,   431,
      40,   252,   370,   435,   252,    86,    87,   375,    89,   441,
      16,   248,   294,   431,   296,    83,   298,   435,    86,   451,
     452,    11,    87,   441,    89,    87,   394,    89,   396,   266,
     398,   399,    86,   451,   452,    87,   287,    89,   289,     3,
       4,     5,     6,   280,    86,    87,    60,    61,    62,   286,
      76,    77,    60,    61,    62,   337,   338,   294,   328,   296,
      87,   298,   328,   431,    78,    79,    15,   435,    76,    77,
      78,    79,     6,   441,    84,    85,    17,   328,   290,    14,
      90,     6,    92,   451,   452,    87,   323,    89,   295,   371,
     372,    87,    84,    89,     3,     4,     5,     6,     7,     8,
     337,   338,    67,   385,    50,    51,     6,    35,   359,    30,
      67,    84,   377,   395,    83,   397,    90,    33,    90,   389,
      83,    30,    66,    32,    85,   376,   377,     6,   379,   380,
     381,   379,   380,   381,   371,   372,     6,     6,   389,   351,
     377,    83,   393,    83,   414,   393,    30,    83,   385,    10,
      83,    89,    83,    85,   436,   437,    85,    33,   395,    85,
     397,    91,     6,   414,    91,    89,    89,    76,    77,    83,
      85,     3,     4,     5,     6,     7,     8,    83,   390,    88,
      33,     6,   433,    86,    83,   433,    18,    19,    20,    21,
      22,    23,    66,    89,    26,    27,    28,    29,     6,   436,
     437,    33,    34,    89,    33,    65,    38,    65,    40,    58,
      83,     3,     4,     5,     6,     7,     8,    33,    67,    68,
      69,    53,    86,    43,    73,    74,    75,    48,    65,    85,
      44,    86,    24,    25,    30,    48,    48,    19,     3,     4,
       5,     6,     7,     8,    76,    77,    38,    41,    72,    54,
      77,   132,    97,    85,   249,   412,    88,   379,   251,   268,
      92,    53,   380,   284,   280,     3,     4,     5,     6,     7,
       8,    63,   338,   286,   370,   188,   188,   370,   173,   297,
     433,   228,   390,   437,    76,    77,    24,    25,    80,   208,
      -1,   414,    -1,    85,    -1,    -1,    -1,    -1,    90,    91,
      38,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    76,    77,    -1,    -1,    53,    54,    55,    56,    57,
      -1,    -1,    -1,    88,    -1,    63,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,
      38,    -1,    80,    -1,    -1,    -1,    -1,    85,    86,    -1,
      -1,    -1,    90,    -1,    -1,    53,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    63,    -1,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    -1,    76,    77,
      -1,    -1,    80,    -1,    -1,    -1,    -1,    85,    24,    25,
      -1,    -1,    90,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    38,    -1,
       3,    -1,    -1,     6,    -1,    -1,    -1,    10,    -1,    -1,
      76,    77,    -1,    -1,    80,    -1,    -1,    -1,    -1,    85,
      -1,    -1,    -1,    -1,    90,     6,    -1,    -1,    31,    10,
      -1,    -1,    -1,    -1,    -1,    38,    76,    77,    41,    42,
      -1,    -1,    45,    -1,    47,    85,    49,    -1,    88,    52,
      31,    54,    55,    56,    57,    -1,    -1,    38,    -1,    -1,
      41,    42,    -1,    -1,    45,    -1,    47,    -1,    49,    -1,
      -1,    52,    -1,    54,    55,    56,    57,     3,     4,     5,
       6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    19,    20,    -1,    22,    23,    -1,    -1,
      26,    -1,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    40
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    12,    94,    95,    96,   217,   219,     6,     6,
       0,    83,    83,    85,    11,    15,    98,    99,   102,    13,
     220,     6,    97,   121,   121,     3,   103,   104,    83,    84,
      16,   105,    98,   221,   218,    86,    87,    83,    87,    99,
       6,   106,   107,    17,   110,   105,    14,   222,     6,   104,
      84,    67,   107,     6,   111,   112,    35,   113,   110,   105,
      30,     3,     4,     5,     6,     7,     8,    76,    77,    88,
     108,   109,   120,   161,   162,    67,   112,   114,   115,   121,
     100,   113,   110,    84,   120,   162,    83,   109,   161,     6,
      18,    19,    20,    21,    22,    23,    26,    27,    28,    29,
      33,    34,    38,    40,    53,    85,    92,   108,   122,   123,
     124,   125,   127,   128,   129,   130,   131,   132,   133,   134,
     139,   148,   149,   150,   151,   171,   172,   115,    89,    38,
      39,   116,   117,   118,   203,   205,   207,   209,   116,   113,
      90,   133,    90,    30,    31,   121,   140,   141,   142,   143,
     122,    33,   121,     6,    18,    19,    20,    22,    23,    26,
      28,    29,    38,    40,   152,   161,    66,    83,    85,   173,
     122,     6,     6,   101,   118,    83,    83,   116,     3,     6,
       6,   124,   135,   136,     6,   147,    89,    30,    83,    83,
     124,    86,   108,     6,     7,     8,    24,    25,    53,    54,
      55,    56,    57,    63,    80,    85,    86,    90,   120,   126,
     153,   154,   160,   161,   163,   164,   166,   167,   169,   171,
     174,   175,   176,   177,    89,    83,   210,   211,   206,    10,
     119,   186,    36,    37,    99,   204,    36,    37,    99,   208,
      91,    91,    60,    61,    62,    78,    79,   120,   165,    87,
      91,    89,    33,   122,   142,   143,   163,     6,   153,   169,
      91,   169,   178,   179,   167,    84,    90,    92,   155,   156,
     157,   159,   165,    58,    67,    68,    69,    73,    74,    75,
     170,    59,    76,    77,   168,    86,    87,    89,   152,    89,
      85,   212,   212,     6,    31,    41,    42,    45,    47,    49,
      52,   104,   153,   172,   176,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   194,   195,   196,   197,
     201,    83,    83,   138,   161,   137,   162,   136,    33,     6,
     147,   108,   144,   145,   146,    83,    86,    66,    87,    91,
       6,   171,   158,   169,   156,   163,   166,   164,   175,   152,
     152,    35,    86,   121,   205,   209,   213,   214,   215,    89,
     173,   169,   104,   169,   187,   169,     6,   198,   153,   202,
      89,    65,    65,   173,    30,    83,   120,   165,   122,    33,
      83,    87,    89,   169,   179,    87,    91,    86,   121,    89,
      83,    86,   152,    33,    43,    46,    48,    65,    48,    87,
       6,   153,   181,   185,   169,   169,   180,   161,   162,   144,
     145,   108,    85,   169,    89,   122,   216,   214,   146,   191,
     192,   180,   169,   180,   169,   199,   180,   153,    86,   140,
     216,    89,    30,    83,   193,    44,    50,    51,    86,   180,
      30,    32,   192,    30,    83,   180,   169,   200,   200,   180,
      30,    48,    48,   180,   180
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
      case 6: /* "IDENTIFIER" */

	{printf("Se borra %s\n\n\n\n\n",(yyvaluep->pCharVal));};

	break;

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

    {printSymbolsTable(); printf("Successful program\n");;}
    break;

  case 3:

    {printSymbolsTable();printf("Successful program\n");;}
    break;

  case 4:

    {printf("regla program1\n");}
    break;

  case 5:

    {printf("regla program2\n");}
    break;

  case 6:

    {  currentScope = std::string((yyvsp[(2) - (2)].pCharVal));
											push_symbol((yyvsp[(2) - (2)].pCharVal), currentScope, fila, 0, "program");
											 printf("regla program_heading1\n");}
    break;

  case 7:

    {
					currentScope = std::string((yyvsp[(2) - (5)].pCharVal));
					push_symbol((yyvsp[(2) - (5)].pCharVal), currentScope, fila, 0, "program");
					printf("regla program_heading2\n");}
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

    {
	for(int i = 0; i < LABELS_LIMIT; i++)
		if ((yyvsp[(2) - (3)].pcharValArray)[i])
			push_symbol((yyvsp[(2) - (3)].pcharValArray)[i], currentScope, fila, 0, "label");
	printf("regla label_declaration_part1\n");}
    break;

  case 14:

    {printf("regla label_declaration_part2\n");}
    break;

  case 15:

    {
					for(int i = 0; i < LABELS_LIMIT; i++)
						if (!(yyvsp[(1) - (3)].pcharValArray)[i])
						{
							(yyvsp[(1) - (3)].pcharValArray)[i] = (yyvsp[(3) - (3)].pCharVal);
							break;
						}
					for(int i = 0; i < LABELS_LIMIT; i++)
						if (!(yyval.pcharValArray)[i] && (yyvsp[(1) - (3)].pcharValArray)[i])
						{
							(yyval.pcharValArray)[i] = (yyvsp[(1) - (3)].pcharValArray)[i];
						}
	printf("regla label_list1\n");}
    break;

  case 16:

    {
				for(int i = 0; i < LABELS_LIMIT; i++)
						if (!(yyval.pcharValArray)[i])
						{
							(yyvsp[(1) - (1)].pcharValArray)[i] =  (yyvsp[(1) - (1)].pCharVal);
							break;
						}
				printf("regla label_list2\n");}
    break;

  case 17:

    {(yyval.pCharVal) = (yyvsp[(1) - (1)].pCharVal);printf("regla label1\n");}
    break;

  case 18:

    {printf("regla constant_declaration_part1\n");}
    break;

  case 19:

    {printf("regla constant_declaration_part2\n");}
    break;

  case 20:

    {printf("regla constant_declaration_list1\n");}
    break;

  case 21:

    {printf("regla constant_declaration_list2\n");}
    break;

  case 22:

    {push_symbol((yyvsp[(1) - (4)].pCharVal), currentScope, fila, 0, std::string((yyvsp[(3) - (4)].pCharVal)));printf("regla constant_declaration1\n");}
    break;

  case 23:

    {(yyval.pCharVal) = strdup((yyvsp[(1) - (1)].pCharVal));printf("regla constant1\n");}
    break;

  case 24:

    {(yyval.pCharVal) = strdup((yyvsp[(2) - (2)].pCharVal));printf("regla constant2\n");}
    break;

  case 25:

    {(yyval.pCharVal) = strdup((yyvsp[(1) - (1)].pCharVal));printf("regla constant3\n");}
    break;

  case 26:

    {(yyval.pCharVal) = strdup((yyvsp[(2) - (2)].pCharVal));printf("regla constant4\n");}
    break;

  case 27:

    {(yyval.pCharVal) = strdup("string");printf("regla constant5\n");}
    break;

  case 28:

    {(yyval.pCharVal) = strdup("char"); printf("regla constant6\n");}
    break;

  case 29:

    {(yyval.pCharVal) = strdup((yyvsp[(1) - (1)].pCharVal));printf("regla constant_identifier1\n");}
    break;

  case 30:

    {printf("regla type_declaration_part1\n");}
    break;

  case 31:

    {printf("regla type_declaration_part2\n");}
    break;

  case 32:

    {printf("regla type_declaration_list1\n");}
    break;

  case 33:

    {printf("regla type_declaration_list2\n");}
    break;

  case 34:

    {push_symbol((yyvsp[(1) - (4)].pCharVal), currentScope, fila, 0, std::string((yyvsp[(3) - (4)].pCharVal)));printf("regla type_declaration1\n");}
    break;

  case 35:

    {printf("regla variable_declaration_part1\n");}
    break;

  case 36:

    {printf("regla variable_declaration_part2\n");}
    break;

  case 37:

    {printf("regla variable_declaration_list1\n");}
    break;

  case 38:

    {printf("regla variable_declaration_list2\n");}
    break;

  case 39:

    {
					for(int i = 0; i < IDENTIFIERS_LIMIT; i++)
						if ((yyvsp[(1) - (4)].pcharValArray)[i])
							push_symbol((yyvsp[(1) - (4)].pcharValArray)[i], currentScope, fila, 0, (yyvsp[(3) - (4)].pCharVal));
					
					printf("regla variable_declaration1\n");}
    break;

  case 40:

    {printf("regla procedure_and_function_declaration_part1\n");}
    break;

  case 41:

    {printf("regla procedure_and_function_declaration_part2\n");}
    break;

  case 42:

    {printf("regla procedure_and_function_declaration_list1\n");}
    break;

  case 43:

    {printf("regla procedure_and_function_declaration_list2\n");}
    break;

  case 44:

    {printf("regla procedure_and_function_declaration1\n");}
    break;

  case 45:

    {printf("regla procedure_and_function_declaration2\n");}
    break;

  case 46:

    {printf("regla statement_part1\n");}
    break;

  case 47:

    {printf("regla statement_part2\n");}
    break;

  case 48:

    {printf("regla sign1\n");}
    break;

  case 49:

    {printf("regla sign2\n");}
    break;

  case 50:

    {
					for(int i = 0; i < IDENTIFIERS_LIMIT; i++)
						if (!(yyvsp[(1) - (3)].pcharValArray)[i])
						{
							(yyvsp[(1) - (3)].pcharValArray)[i] = strdup((yyvsp[(3) - (3)].pCharVal));
							break;
						}
					for(int i = 0; i < IDENTIFIERS_LIMIT; i++)
						if (!(yyval.pcharValArray)[i] && (yyvsp[(1) - (3)].pcharValArray)[i])
						{
							(yyval.pcharValArray)[i] = strdup((yyvsp[(1) - (3)].pcharValArray)[i]);
						}
					printf("regla identifier_list1\n");}
    break;

  case 51:

    {
					for(int i = 0; i < IDENTIFIERS_LIMIT; i++)
						if (!(yyval.pcharValArray)[i])
						{
							(yyvsp[(1) - (1)].pcharValArray)[i] = strdup((yyvsp[(1) - (1)].pCharVal));
							break;
						}
						printf("regla identifier_list2\n");}
    break;

  case 52:

    {(yyval.pCharVal) = strdup((yyvsp[(1) - (1)].pCharVal));printf("regla type1\n");}
    break;

  case 53:

    {(yyval.pCharVal) = strdup((yyvsp[(1) - (1)].pCharVal));printf("regla type2\n");}
    break;

  case 54:

    {(yyval.pCharVal) = strdup((yyvsp[(1) - (1)].pCharVal));printf("regla type3\n");}
    break;

  case 55:

    {(yyval.pCharVal) = strdup((yyvsp[(1) - (1)].pCharVal));printf("regla type4\n");}
    break;

  case 56:

    {(yyval.pCharVal) = strdup((yyvsp[(1) - (1)].pCharVal));printf("regla simple_type1\n");}
    break;

  case 57:

    {(yyval.pCharVal) = strdup((yyvsp[(1) - (1)].pCharVal));printf("regla simple_type2\n");}
    break;

  case 58:

    {(yyval.pCharVal) = strdup((yyvsp[(1) - (1)].pCharVal));printf("regla simple_type3\n");}
    break;

  case 59:

    {(yyval.pCharVal) = strdup((yyvsp[(1) - (1)].pCharVal));printf("regla ordinal_type1\n");}
    break;

  case 60:

    {(yyval.pCharVal) = strdup((yyvsp[(1) - (1)].pCharVal));printf("regla ordinal_type2\n");}
    break;

  case 61:

    {(yyval.pCharVal) = strdup((yyvsp[(1) - (1)].pCharVal));printf("regla ordinal_type3\n");}
    break;

  case 62:

    {(yyval.pCharVal) = strdup("integer");printf("regla ordinal_type_identifier1\n");}
    break;

  case 63:

    {(yyval.pCharVal) = strdup("longint");printf("regla ordinal_type_identifier2\n");}
    break;

  case 64:

    {(yyval.pCharVal) = strdup("char");printf("regla ordinal_type_identifier3\n");}
    break;

  case 65:

    {(yyval.pCharVal) = strdup("boolean");printf("regla ordinal_type_identifier4\n");}
    break;

  case 66:

    {(yyval.pCharVal) = strdup("function");printf("regla ordinal_type_identifier5\n");}
    break;

  case 67:

    {(yyval.pCharVal) = strdup("word");printf("regla ordinal_type_identifier6\n");}
    break;

  case 68:

    {printf("regla type_boolean1\n");}
    break;

  case 69:

    {printf("regla type_boolean2\n");}
    break;

  case 70:

    {(yyval.pCharVal) = strdup("enumerated");printf("regla enumerated_type1\n");}
    break;

  case 71:

    {(yyval.pCharVal) = strdup("subrange");printf("regla subrange_type1\n");}
    break;

  case 72:

    {(yyval.pCharVal) = strdup((yyvsp[(1) - (1)].pCharVal));printf("regla real_type1\n");}
    break;

  case 73:

    {(yyval.pCharVal) = strdup("real");printf("regla real_type_identifier1\n");}
    break;

  case 74:

    {(yyval.pCharVal) = strdup("string");printf("regla string_type1\n");}
    break;

  case 75:

    {(yyval.pCharVal) = strdup("string");
			push_symbol((yyvsp[(3) - (4)].pCharVal), currentScope, 0, fila, "");
			printf("regla string_type2\n");}
    break;

  case 76:

    {(yyval.pCharVal) = strdup((yyvsp[(2) - (2)].pCharVal));printf("regla structured_type1\n");}
    break;

  case 77:

    {(yyval.pCharVal) = strdup((yyvsp[(1) - (1)].pCharVal));printf("regla structured_type2\n");}
    break;

  case 78:

    {(yyval.pCharVal) = strdup((yyvsp[(1) - (1)].pCharVal));printf("regla type_list1\n");}
    break;

  case 79:

    {(yyval.pCharVal) = strdup((yyvsp[(1) - (1)].pCharVal));printf("regla type_list2\n");}
    break;

  case 80:

    {(yyval.pCharVal) = strdup((yyvsp[(1) - (1)].pCharVal));printf("regla type_list3\n");}
    break;

  case 81:

    {(yyval.pCharVal) = strdup((yyvsp[(1) - (1)].pCharVal));printf("regla type_list4\n");}
    break;

  case 82:

    {
	const char* arraySymbol = "Array";
	char* typeArray = strdup((yyvsp[(6) - (6)].pCharVal));
	char* auxiliarPointer = typeArray;
	short size = 0;
	while(auxiliarPointer && *auxiliarPointer != '\0')
	{
		size++;
		auxiliarPointer++;
	}
	char* newString= new char[size + 6];
	if(typeArray)
	strcpy(newString,typeArray);
	strcat(newString,arraySymbol);
	(yyval.pCharVal) = strdup(newString);
	free(typeArray);
	delete[](newString);
	
	printf("regla array_type\n");}
    break;

  case 83:

    {printf("regla index_type_list1\n");}
    break;

  case 84:

    {printf("regla index_type_list2\n");}
    break;

  case 85:

    {printf("regla ordinal_type_expression1\n");}
    break;

  case 86:

    {printf("regla ordinal_type_expression2\n");}
    break;

  case 87:

    {printf("regla ordinal_type_expression3\n");}
    break;

  case 88:

    {printf("regla signed_number_expression_list1\n");}
    break;

  case 89:

    {printf("regla signed_number_expression_list2\n");}
    break;

  case 90:

    {printf("regla unsigned_number_expression_list1\n");}
    break;

  case 91:

    {printf("regla signed_number_expression_list2\n");}
    break;

  case 92:

    {(yyval.pCharVal) = strdup("record");printf("regla record_type1\n");}
    break;

  case 93:

    {(yyval.pCharVal) = strdup("record");printf("regla record_type2\n");}
    break;

  case 94:

    {printf("regla field_list1\n");}
    break;

  case 95:

    {printf("regla field_list2\n");}
    break;

  case 96:

    {printf("regla field_list3\n");}
    break;

  case 97:

    {printf("regla field_list4\n");}
    break;

  case 98:

    {printf	("regla field_list5\n");}
    break;

  case 99:

    {printf("regla field_list6\n");}
    break;

  case 100:

    {printf("regla fixed_part1\n");}
    break;

  case 101:

    {printf("regla fixed_part2\n");}
    break;

  case 102:

    {printf("regla field_declaration1\n");}
    break;

  case 103:

    {printf("regla variant_part1\n");}
    break;

  case 104:

    {
				push_symbol((yyvsp[(2) - (6)].pCharVal), currentScope, 0, fila, "");
				printf("regla variant_part2\n");}
    break;

  case 105:

    {printf("regla variant_list1\n");}
    break;

  case 106:

    {printf("regla variant_list2\n");}
    break;

  case 107:

    {printf("regla variant1\n");}
    break;

  case 108:

    {printf("regla variant2\n");}
    break;

  case 109:

    {
					for(int i = 0; i < CONSTANTS_LIST_LIMIT; i++)
						if (!(yyvsp[(1) - (3)].pcharValArray)[i])
						{
							(yyvsp[(1) - (3)].pcharValArray)[i] = strdup((yyvsp[(3) - (3)].pCharVal));
							break;
						}
					for(int i = 0; i < CONSTANTS_LIST_LIMIT; i++)
						if (!(yyval.pcharValArray)[i] && (yyvsp[(1) - (3)].pcharValArray)[i])
						{
							(yyval.pcharValArray)[i] = strdup((yyvsp[(1) - (3)].pcharValArray)[i]);
						}
	printf("regla constant_list1\n");}
    break;

  case 110:

    {
				for(int i = 0; i < CONSTANTS_LIST_LIMIT; i++)
						if (!(yyval.pcharValArray)[i])
						{
							(yyvsp[(1) - (1)].pcharValArray)[i] = strdup((yyvsp[(1) - (1)].pCharVal));
							break;
						}
				printf("regla constant_list2\n");}
    break;

  case 111:

    { push_symbol((yyvsp[(1) - (1)].pCharVal), currentScope, 0, fila, "");printf("regla tag_field_type1\n");}
    break;

  case 112:

    {
	const char* setSymbol = "Set";
	char* typeSet = strdup((yyvsp[(3) - (3)].pCharVal));
	char* auxiliarPointer = typeSet;
	short size = 0;
	while(auxiliarPointer && *auxiliarPointer != '\0')
	{
		size++;
		auxiliarPointer++;
	}
	char* newString= new char[size + 4];
	if(typeSet)
	strcpy(newString,typeSet);
	strcat(newString,setSymbol);
	(yyval.pCharVal) = strdup(newString);
	free(typeSet);
	delete[](newString);
	printf("regla set_type\n");}
    break;

  case 113:

    {(yyval.pCharVal) = strdup("file"); printf("regla file_type1\n");}
    break;

  case 114:

    {(yyval.pCharVal) = strdup((yyvsp[(2) - (2)].pCharVal));printf("regla file_type2\n");}
    break;

  case 115:

    {
	const char* pointerSymbol = "*";
	char* pointerType = strdup((yyvsp[(2) - (2)].pCharVal));
	char* auxiliarPointer = pointerType;
	short size = 0;
	while(auxiliarPointer && *auxiliarPointer != '\0')
	{
		size++;
		auxiliarPointer++;
	}
	char* newString= new char[size + 2];
	if(pointerType)
	strcpy(newString,pointerType);
	strcat(newString,pointerSymbol);
	(yyval.pCharVal) = strdup(newString);
	free(pointerType);
	delete[](newString);
	printf("regla pointer_type1\n");}
    break;

  case 116:

    {(yyval.pCharVal) = strdup("nil");printf("regla pointer_type2\n");}
    break;

  case 117:

    {printf("regla pointer_type_identifier1\n");}
    break;

  case 118:

    {(yyval.pCharVal) = strdup("integer");printf("regla base_type1\n");}
    break;

  case 119:

    {(yyval.pCharVal) = strdup("longint");printf("regla base_type2\n");}
    break;

  case 120:

    {(yyval.pCharVal) = strdup("char");printf("regla base_type3\n");}
    break;

  case 121:

    {(yyval.pCharVal) = strdup("bool");printf("regla base_type4\n");}
    break;

  case 122:

    {(yyval.pCharVal) = strdup("string");printf("regla base_type5\n");}
    break;

  case 123:

    {(yyval.pCharVal) = strdup("record");printf("regla base_type6\n");}
    break;

  case 124:

    {(yyval.pCharVal) = strdup("file");printf("regla base_type7\n");}
    break;

  case 125:

    {(yyval.pCharVal) = strdup("array");printf("regla base_type9\n");}
    break;

  case 126:

    {(yyval.pCharVal) = strdup((yyvsp[(1) - (1)].pCharVal));printf("regla base_type10\n");}
    break;

  case 127:

    {(yyval.pCharVal) = strdup("function");printf("regla base_type11\n");}
    break;

  case 128:

    {(yyval.pCharVal) = strdup("real");printf("regla base_type12\n");}
    break;

  case 129:

    {(yyval.pCharVal) = strdup((yyvsp[(1) - (1)].pCharVal));printf("regla base_type13\n");}
    break;

  case 130:

    {(yyval.pCharVal) = strdup((yyvsp[(1) - (2)].pCharVal));printf("regla variable_reference1\n");}
    break;

  case 131:

    {(yyval.pCharVal) = strdup((yyvsp[(1) - (1)].pCharVal));printf("regla variable_identifier1\n");}
    break;

  case 132:

    {printf("regla qualifier_list1\n");}
    break;

  case 133:

    {printf("regla qualifier_list2\n");}
    break;

  case 134:

    {printf("regla qualifier1\n");}
    break;

  case 135:

    {printf("regla qualifier2\n");}
    break;

  case 136:

    {printf("regla qualifier3\n");}
    break;

  case 137:

    {printf("regla index1\n");}
    break;

  case 138:

    {printf("regla expression_list1\n");}
    break;

  case 139:

    {printf("regla expression_list2\n");}
    break;

  case 140:

    {push_symbol((yyvsp[(2) - (2)].pCharVal), currentScope, 0, fila, "");printf("regla field_designator1\n");}
    break;

  case 141:

    {printf("regla field_designator2\n");}
    break;

  case 142:

    {printf("regla unsigned_constant1\n");}
    break;

  case 143:

    {printf("regla unsigned_constant2\n");}
    break;

  case 144:

    {printf("regla unsigned_constant3\n");}
    break;

  case 145:

    {printf("regla unsigned_constant4\n");}
    break;

  case 146:

    {(yyval.pCharVal) = strdup("integer");printf("regla unsigned_number1\n");}
    break;

  case 147:

    {(yyval.pCharVal) = strdup("hexadecimal");printf("regla unsigned_number2\n");}
    break;

  case 148:

    {(yyval.pCharVal) = strdup("real");printf("regla unsigned_number3\n");}
    break;

  case 149:

    {(yyval.pCharVal) = strdup((yyvsp[(2) - (2)].pCharVal));printf("regla signed_number1\n");}
    break;

  case 150:

    {(yyval.pCharVal) = strdup((yyvsp[(1) - (1)].pCharVal));printf("regla signed_number2\n");}
    break;

  case 151:

    {push_symbol((yyvsp[(1) - (1)].pCharVal), currentScope, 0, fila, "");printf("regla factor1\n");}
    break;

  case 152:

    {push_symbol((yyvsp[(1) - (2)].pCharVal), currentScope, 0, fila, "");printf("regla factor2\n");}
    break;

  case 153:

    {printf("regla factor3\n");}
    break;

  case 154:

    {push_symbol((yyvsp[(1) - (1)].pCharVal), currentScope, 0, fila, "");printf	("regla factor4\n");}
    break;

  case 155:

    {printf("regla factor5\n");}
    break;

  case 156:

    {printf("regla factor6\n");}
    break;

  case 157:

    {printf("regla factor7\n");}
    break;

  case 158:

    {push_symbol((yyvsp[(1) - (1)].pCharVal), currentScope, 0, fila, "");printf("regla factor8\n");}
    break;

  case 159:

    {printf("regla factor9\n");}
    break;

  case 160:

    {printf("regla term1\n");}
    break;

  case 161:

    {printf("regla term2\n");}
    break;

  case 162:

    {printf("regla term_operator_list1\n");}
    break;

  case 163:

    {printf("regla term_operator_list2\n");}
    break;

  case 164:

    {printf("regla term_operator_list3\n");}
    break;

  case 165:

    {printf("regla term_operator_list4\n");}
    break;

  case 166:

    {printf("regla term_operator_list5\n");}
    break;

  case 167:

    {printf("regla simple_expression1\n");}
    break;

  case 168:

    {printf("regla simple_expression2\n");}
    break;

  case 169:

    {printf("regla simple_expression_term_operator_iterable1\n");}
    break;

  case 170:

    {printf("regla simple_expression_term_operator_iterable2\n");}
    break;

  case 171:

    {printf("regla simple_expression_term_operator_list1\n");}
    break;

  case 172:

    {printf("regla simple_expression_term_operator_list2\n");}
    break;

  case 173:

    {printf("regla simple_expression_term_operator_list3\n");}
    break;

  case 174:

    {printf("regla expression1\n");}
    break;

  case 175:

    {printf("regla expression2\n");}
    break;

  case 176:

    {printf("regla relational_operator1\n");}
    break;

  case 177:

    {printf("regla relational_operator2\n");}
    break;

  case 178:

    {printf("regla relational_operator3\n");}
    break;

  case 179:

    {printf("regla relational_operator4\n");}
    break;

  case 180:

    {printf("regla relational_operator5\n");}
    break;

  case 181:

    {printf("regla relational_operator6\n");}
    break;

  case 182:

    {printf("regla relational_operator7\n");}
    break;

  case 183:

    {(yyval.pCharVal) = strdup((yyvsp[(1) - (2)].pCharVal));printf("regla function_call1\n");}
    break;

  case 184:

    {(yyval.pCharVal) = strdup((yyvsp[(1) - (4)].pCharVal));printf("regla function_call2\n")
			/*Se puso para que a la hora de hacer un function call pueda haber un tipo*/;}
    break;

  case 185:

    {(yyval.pCharVal) = strdup("function");printf("regla function_identifier1\n");}
    break;

  case 186:

    {(yyval.pCharVal) = strdup((yyvsp[(1) - (1)].pCharVal));;}
    break;

  case 187:

    {printf("regla actual_parameter_list1\n");}
    break;

  case 188:

    {printf("regla actual_parameter_list2\n");}
    break;

  case 189:

    {printf("regla actual_parameter_list3\n");}
    break;

  case 190:

    {printf("regla actual_parameter1\n");}
    break;

  case 191:

    {printf("regla actual_parameter2\n");}
    break;

  case 192:

    {printf("regla actual_parameter1\n");}
    break;

  case 193:

    {printf("regla actual_parameter3\n");}
    break;

  case 194:

    {(yyval.pCharVal) = strdup("write");printf("regla procedure_identifier1\n");}
    break;

  case 195:

    {(yyval.pCharVal) = strdup("writeln");printf("regla procedure_identifier2\n");}
    break;

  case 196:

    {(yyval.pCharVal) = strdup("read");printf("regla procedure_identifier3\n");}
    break;

  case 197:

    {(yyval.pCharVal) = strdup("readln");printf("regla procedure_identifier4\n");}
    break;

  case 198:

    {printf("regla set_constructor1\n");}
    break;

  case 199:

    {printf("regla set_constructor2\n");}
    break;

  case 200:

    {printf("regla member_group_list1\n");}
    break;

  case 201:

    {printf("regla member_group_list2\n");}
    break;

  case 202:

    {printf("regla member_group1\n");}
    break;

  case 203:

    {printf("regla member_group2\n");}
    break;

  case 205:

    {printf("regla statement1\n");}
    break;

  case 206:

    {printf("regla statement2\n");}
    break;

  case 207:

    {printf("regla statement3\n");}
    break;

  case 208:

    {printf("regla statement4\n");}
    break;

  case 209:

    {printf("regla statement5\n");}
    break;

  case 210:

    {push_symbol((yyvsp[(1) - (1)].pCharVal), currentScope, 0, fila, "");printf("regla statement6\n");}
    break;

  case 211:

    {push_symbol((yyvsp[(1) - (1)].pCharVal), currentScope, 0, fila, "");printf("regla statement7\n");}
    break;

  case 212:

    {printf("regla simple_statement1\n");}
    break;

  case 213:

    {printf("regla simple_statement2\n");}
    break;

  case 214:

    {printf("regla simple_statement3\n");}
    break;

  case 215:

    {push_symbol((yyvsp[(1) - (3)].pCharVal), currentScope, 0, fila, "");printf("regla assignment_statement1\n");}
    break;

  case 216:

    {push_symbol((yyvsp[(1) - (3)].pCharVal), currentScope, 0, fila, "");printf("regla assignment_statement2\n");}
    break;

  case 217:

    {push_symbol((yyvsp[(1) - (1)].pCharVal), currentScope, 0, fila, "");printf("regla procedure_statement1\n");}
    break;

  case 218:

    {push_symbol((yyvsp[(1) - (2)].pCharVal), currentScope, 0, fila, "");printf("regla procedure_statement2\n");}
    break;

  case 219:

    {push_symbol((yyvsp[(1) - (2)].pCharVal), currentScope, 0, fila, "");printf("regla procedure_statement3\n");}
    break;

  case 220:

    {
	for(int i = 0; i < LABELS_LIMIT; i++)
		if ((yyvsp[(2) - (2)].pcharValArray)[i])
			push_symbol((yyvsp[(2) - (2)].pcharValArray)[i], currentScope, 0, fila, "");
	printf("regla goto_statement1\n");}
    break;

  case 221:

    {printf("regla structured_statement1\n");}
    break;

  case 222:

    {printf("regla structured_statement2\n");}
    break;

  case 223:

    {printf("regla structured_statement3\n");}
    break;

  case 224:

    {printf("regla structured_statement4\n");}
    break;

  case 225:

    {printf("regla compound_statement\n");}
    break;

  case 226:

    {printf("regla statement_list1\n");}
    break;

  case 227:

    {printf("regla statement_list2\n");}
    break;

  case 230:

    {printf("regla if_statement1\n");}
    break;

  case 231:

    {printf("regla if_statement2\n");}
    break;

  case 232:

    {printf("regla case_statement1\n");}
    break;

  case 233:

    {printf("regla case_statement2\n");}
    break;

  case 234:

    {printf("regla case_statement3\n");}
    break;

  case 235:

    {printf("regla case_statement4\n");}
    break;

  case 236:

    {printf("regla case_list1\n");}
    break;

  case 237:

    {printf("regla case_list2\n");}
    break;

  case 238:

    {
	for(int i = 0; i < IDENTIFIERS_LIMIT; i++)
						if ((yyvsp[(1) - (3)].pcharValArray)[i])
							push_symbol((yyvsp[(1) - (3)].pcharValArray)[i], currentScope, 0, fila, (yyvsp[(3) - (3)].pCharVal));
	printf("regla case1\n");}
    break;

  case 239:

    {printf("regla otherwise_clause1\n");}
    break;

  case 240:

    {printf("regla repetitive_statement1\n");}
    break;

  case 241:

    {printf("regla repetitive_statement2\n");}
    break;

  case 242:

    {printf("regla repetitive_statement3\n");}
    break;

  case 243:

    {printf("regla repeat_statement\n");}
    break;

  case 244:

    {printf("regla while_statement\n");}
    break;

  case 245:

    {push_symbol((yyvsp[(2) - (8)].pCharVal), currentScope, 0, fila, "");printf("regla for_statement1\n");}
    break;

  case 246:

    {push_symbol((yyvsp[(2) - (8)].pCharVal), currentScope, 0, fila, "");printf("regla for_statement2\n");}
    break;

  case 247:

    {(yyval.pCharVal) = strdup((yyvsp[(1) - (1)].pCharVal));printf("regla control_variable\n");}
    break;

  case 248:

    {printf("regla initial_value\n");}
    break;

  case 249:

    {printf("regla final_value\n");}
    break;

  case 250:

    {printf("regla with_statement\n");}
    break;

  case 251:

    {printf("regla record_variable_reference_list1\n");}
    break;

  case 252:

    {
									push_symbol((yyvsp[(1) - (1)].pCharVal), currentScope, 0, fila, "");
									printf("regla record_variable_reference_list2\n");}
    break;

  case 253:

    {currentScope = removeRightmostWord(currentScope);printf("regla procedure_declaration1\n");}
    break;

  case 254:

    {printf("regla procedure_body1\n");}
    break;

  case 255:

    {printf("regla procedure_body2\n");}
    break;

  case 256:

    {printf("regla procedure_body3\n");}
    break;

  case 257:

    {currentScope = currentScope + "." + std::string((yyvsp[(2) - (2)].pCharVal));
											push_symbol((yyvsp[(2) - (2)].pCharVal), currentScope, fila, 0, "procedure");printf("regla procedure_heading1\n");}
    break;

  case 258:

    {currentScope = currentScope + "." + std::string((yyvsp[(2) - (2)].pCharVal));;}
    break;

  case 259:

    {
											push_symbol((yyvsp[(2) - (4)].pCharVal), currentScope, fila, 0, "procedure");printf("regla procedure_heading2\n");}
    break;

  case 260:

    {currentScope = removeRightmostWord(currentScope);  printf("regla function_declaration1\n");}
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

    {currentScope = currentScope + "." + std::string((yyvsp[(2) - (2)].pCharVal));;}
    break;

  case 265:

    {
											const char* functionSymbol = "Function";
											char* typeFunction = strdup((yyvsp[(5) - (5)].pCharVal));
											char* auxiliarPointer = typeFunction;
											short size = 0;
											while(auxiliarPointer && *auxiliarPointer != '\0'){size++;auxiliarPointer++;}
											char* newString= new char[size + 9];
											if(typeFunction)
											strcpy(newString,typeFunction);
											strcat(newString,functionSymbol);
											
											push_symbol((yyvsp[(2) - (5)].pCharVal), currentScope, fila, 0, std::string(newString));
											delete[](newString);		
											free(typeFunction);
											printf("regla function_heading1\n");}
    break;

  case 266:

    {currentScope = currentScope + "." + std::string((yyvsp[(2) - (2)].pCharVal));;}
    break;

  case 267:

    {
											const char* functionSymbol = "Function";
											char* typeFunction = strdup((yyvsp[(6) - (6)].pCharVal));
											char* auxiliarPointer = typeFunction;
											short size = 0;
											while(auxiliarPointer && *auxiliarPointer != '\0'){size++;auxiliarPointer++;}
											char* newString= new char[size + 9];
											if(typeFunction)
											strcpy(newString,typeFunction);
											strcat(newString,functionSymbol);
											push_symbol((yyvsp[(2) - (6)].pCharVal), currentScope, fila, 0, std::string(newString));
											delete[](newString);		
											free(typeFunction);printf("regla function_heading2\n");}
    break;

  case 268:

    {printf("regla formal_parameter_list1\n");}
    break;

  case 269:

    {printf("regla formal_parameter_list2\n");}
    break;

  case 270:

    {printf("regla formal_parameter_list_iterable1\n");}
    break;

  case 271:

    {printf("regla formal_parameter_list_iterable2\n");}
    break;

  case 272:

    {printf("regla formal_parameter_list_iterable_list1\n");}
    break;

  case 273:

    {printf("regla formal_parameter_list_iterable_list2\n");}
    break;

  case 274:

    {printf("regla formal_parameter_list_iterable_list3\n");}
    break;

  case 275:

    {
	for(int i = 0; i < IDENTIFIERS_LIMIT; i++)
		if ((yyvsp[(2) - (4)].pcharValArray)[i])
			push_symbol((yyvsp[(2) - (4)].pcharValArray)[i], currentScope, fila, 0, std::string((yyvsp[(4) - (4)].pCharVal)));
	printf("regla parameter_declaration1\n");}
    break;

  case 276:

    {
						for(int i = 0; i < IDENTIFIERS_LIMIT; i++)
		if ((yyvsp[(2) - (3)].pcharValArray)[i])
			push_symbol((yyvsp[(1) - (3)].pcharValArray)[i], currentScope, fila, 0, std::string((yyvsp[(3) - (3)].pCharVal)));
						printf("regla parameter_declaration2\n");}
    break;

  case 277:

    {printf("regla type_identifier1\n");}
    break;

  case 278:

    {printf("regla interface_part_regular_unit1\n");}
    break;

  case 279:

    {printf("regla regular_unit1\n");}
    break;

  case 280:

    { currentScope = std::string((yyvsp[(2) - (2)].pCharVal));
	push_symbol((yyvsp[(2) - (2)].pCharVal), currentScope, fila, 0, "unit");printf("regla unit_heading1\n");}
    break;

  case 281:

    {printf("regla interface_part1\n");}
    break;

  case 282:

    {printf("regla uses_clause_empty1\n");}
    break;

  case 283:

    {printf("regla uses_clause_empty2\n");}
    break;

  case 284:

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





void print_symbol_table(int size ) {
    std::string margin = " ";

    std::cout << margin << "Symbol          | Scope           | Definition Line      | Lines of Use         | Type          " << std::endl;
    std::cout << margin << "-------------------------------------------------------------------------------" << std::endl;

    for (int i = 0; i < size; i++) {
        if (!symbolsTable[i].symbol.empty()) {
            std::cout << margin << std::left << std::setw(15) << symbolsTable[i].symbol << " | ";
            std::cout << std::left << std::setw(15) << symbolsTable[i].scope << " | ";
            std::cout << std::right << std::setw(20) << symbolsTable[i].definition_line << " | ";

            std::string lines_of_use;
            for (int j = 0; j < SIZE_LINES_OF_USE; j++) {
                if (symbolsTable[i].lines_of_use[j] != 0) {
                    lines_of_use += std::to_string(symbolsTable[i].lines_of_use[j]) + " ";
                }
            }
            lines_of_use.resize(20, ' ');
            std::cout << lines_of_use << "| ";

            std::string type = symbolsTable[i].type;
            type.resize(12, ' ');
            std::cout << type << std::endl;

            struct node* auxiliarPointer = symbolsTable[i].next;
            while (auxiliarPointer != NULL) {
                std::cout << margin << std::left << std::setw(15) << auxiliarPointer->symbol << " | ";
                std::cout << std::left << std::setw(15) << auxiliarPointer->scope << " | ";
                std::cout << std::right << std::setw(20) << auxiliarPointer->definition_line << " | ";

                lines_of_use.clear();
                for (int j = 0; j < SIZE_LINES_OF_USE; j++) {
                    if (auxiliarPointer->lines_of_use[j] != 0) {
                        lines_of_use += std::to_string(auxiliarPointer->lines_of_use[j]) + " ";
                    }
                }
                lines_of_use.resize(20, ' ');
                std::cout << lines_of_use << "| ";

                type = auxiliarPointer->type;
                type.resize(12, ' ');
                std::cout << type << std::endl;

                auxiliarPointer = auxiliarPointer->next;
            }
		}
	}
}

std::string removeRightmostWord(std::string str) {
    size_t lastDotPos = str.rfind('.');
    if (lastDotPos != std::string::npos) {
        str = str.substr(0, lastDotPos);
    }
    return str;
}
int hash_function(char* symbol)
{

	int total_value= 0; 
	char* pointerChar = symbol;
	while(pointerChar && *pointerChar != '\0')
	{
		total_value += *pointerChar;
		pointerChar++;
	}
	return total_value%127;
}
void push_symbol(char* symbol,std::string scope,int definition_line, int line_of_use,std::string type )
{
	int hashvalue = hash_function(symbol);
	struct node* auxiliarPointer = NULL;
	if (symbolsTable[hashvalue].symbol != "")
	{



		if(symbolsTable[hashvalue].symbol != std::string(symbol) || (symbolsTable[hashvalue].symbol == std::string(symbol) && symbolsTable[hashvalue].scope != scope)  ) /*si es el mismo simbolo*/
		{
			node* newNode = new node;
    		newNode->symbol = symbol;
    		newNode->scope = scope;
    		newNode->definition_line = definition_line;
    		newNode->type = type;
    		newNode->next = nullptr;
			bool isAlready = false;
    		if (symbolsTable[hashvalue].symbol.empty()) {
    		    symbolsTable[hashvalue] = *newNode;
    		}
    		else {
    		    node* current = &symbolsTable[hashvalue];
    		    while (current->next != nullptr) {
					current = current->next;
					if(std::string(current->symbol) == std::string(symbol) && !definition_line)
					{
						for(int i = 0; i < SIZE_LINES_OF_USE; i++)
						if (!symbolsTable[hashvalue].lines_of_use[i])
						{
							if(definition_line && scope  == symbolsTable[hashvalue].scope)
								yyerror("redfinicion de simbolo");
							symbolsTable[hashvalue].lines_of_use[i] = line_of_use;
							break;
						}
						isAlready = true;
					}
    		    }
    		    if(!isAlready)
				current->next = newNode;
    		}
			
		}
		else
		{
				if(definition_line && scope  == symbolsTable[hashvalue].scope)
					yyerror("redfinicion de simbolo");
		    	if(line_of_use)
				for(int i = 0; i < SIZE_LINES_OF_USE; i++)
					if (!symbolsTable[hashvalue].lines_of_use[i])
					{
						symbolsTable[hashvalue].lines_of_use[i] = line_of_use;
						break;
					}		
			
				
		}
			
		
	}
	else
	{
		symbolsTable[hashvalue].symbol = std::string(symbol);
		symbolsTable[hashvalue].scope = scope;
		if(definition_line && !symbolsTable[hashvalue].definition_line)
			symbolsTable[hashvalue].definition_line = definition_line;
		if(line_of_use)
			for(int i = 0; i < SIZE_LINES_OF_USE; i++)
				if (!symbolsTable[hashvalue].lines_of_use[i])
				{
					symbolsTable[hashvalue].lines_of_use[i] = line_of_use;
					break;
				}
		symbolsTable[hashvalue].type = type;
	}
		
}


void print_border(int width) {
    std::cout << margin << "+";
    for (int i = 0; i < width; i++) std::cout << "-";
    std::cout << "+" << std::endl;
}

void printSymbolsTable() {
    std::cout << "Symbol\t\tScope\t\tDefinition Line\tType\t\tLines of Use\n";
    std::cout << "------\t\t-----\t\t---------------\t----\t\t------------\n";

    for (int i = 0; i < 127; i++) {
        if (!symbolsTable[i].symbol.empty()) {
            // Print the contents of the node in the symbolsTable array
            std::cout << symbolsTable[i].symbol << "\t\t"
                      << symbolsTable[i].scope << "\t\t"
                      << symbolsTable[i].definition_line << "\t\t"
                      << symbolsTable[i].type << "\t\t";

            // Print the lines of use array
            std::cout << "[";
            for (int j = 0; j < SIZE_LINES_OF_USE; j++) {
                if (symbolsTable[i].lines_of_use[j] != 0) {
                    std::cout << symbolsTable[i].lines_of_use[j];
                    if (j < SIZE_LINES_OF_USE - 1 && symbolsTable[i].lines_of_use[j + 1] != 0) {
                        std::cout << ", ";
                    }
                }
            }
            std::cout << "]\n";

            // Print the contents of the linked nodes
            node* current = symbolsTable[i].next;
            while (current != nullptr) {
                std::cout << current->symbol << "\t\t"
                          << current->scope << "\t\t"
                          << current->definition_line << "\t\t"
                          << current->type << "\t\t";

                // Print the lines of use array for the linked node
                std::cout << "[";
                for (int j = 0; j < SIZE_LINES_OF_USE; j++) {
                    if (current->lines_of_use[j] != 0) {
                        std::cout << current->lines_of_use[j];
                        if (j < SIZE_LINES_OF_USE - 1 && current->lines_of_use[j + 1] != 0) {
                            std::cout << ", ";
                        }
                    }
                }
                std::cout << "]\n";

                current = current->next;
            }
        }
    }
}


int yyerror(const char *s) 
{
   char mensaje[100];

   if ( !strcmp( s, "parse error" ) )
      strcpy( mensaje, "Error de sintaxis" );
   else
      strcpy( mensaje, s );

   printf("Error en linea %d columna %d: %s\n", fila,columna, mensaje);
   printSymbolsTable();
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
