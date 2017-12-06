/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */

#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "Structures.h"
#include "parser.h"
#include "Code_Gen.h"
// Входной Поток = Файл
extern FILE *yyin;

static void yyerror (const char *msg);

static Node *global_node;

#line 82 "parser.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.h".  */
#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_OR = 258,
    T_AND = 259,
    T_CEQ = 260,
    T_CNE = 261,
    T_CLT = 262,
    T_CGT = 263,
    T_CLE = 264,
    T_CGE = 265,
    T_PLUS = 266,
    T_MINUS = 267,
    T_MUL = 268,
    T_DIV = 269,
    T_MOD = 270,
    T_NOT = 271,
    T_PROGRAM = 272,
    T_VAR = 273,
    T_PROCEDURE = 274,
    T_FUNCTION = 275,
    T_BEGIN = 276,
    T_END = 277,
    T_IF = 278,
    T_THEN = 279,
    T_ELSE = 280,
    T_WHILE = 281,
    T_FOR = 282,
    T_TO = 283,
    T_DO = 284,
    T_ASSIGNOP = 285,
    T_OBRACKET = 286,
    T_CBRACKET = 287,
    T_SEMICOLON = 288,
    T_COLON = 289,
    T_COMMA = 290,
    T_DOT = 291,
    T_WRITE_INT = 292,
    T_WRITE_CHAR = 293,
    T_WRITE_BOOL = 294,
    T_WRITE_LN = 295,
    T_STANDARD_TYPE = 296,
    T_IDENTIFIER = 297,
    T_INT = 298,
    T_BOOL = 299,
    T_CHAR = 300,
    T_REAL = 301
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 24 "parser.y" /* yacc.c:355  */

    char* opiden;
    int integer;
    int boolean;
    char character;
	double real;
    int type;
    struct Nodes *node;

#line 179 "parser.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



int yyparse (void);

#endif /* !YY_YY_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 209 "parser.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   165

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  93
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  171

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      45,    46
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    73,    73,    87,    97,   104,   108,   113,   117,   127,
     138,   143,   147,   152,   160,   164,   169,   173,   174,   178,
     194,   211,   219,   223,   228,   232,   242,   243,   247,   248,
     252,   260,   265,   270,   275,   276,   281,   282,   286,   287,
     288,   289,   290,   291,   295,   296,   308,   319,   331,   332,
     333,   334,   338,   348,   358,   368,   377,   388,   399,   411,
     412,   424,   425,   438,   439,   452,   453,   463,   464,   465,
     466,   470,   481,   482,   493,   494,   502,   512,   518,   524,
     533,   539,   545,   554,   560,   566,   572,   578,   584,   593,
     597,   608,   615,   622
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_OR", "T_AND", "T_CEQ", "T_CNE",
  "T_CLT", "T_CGT", "T_CLE", "T_CGE", "T_PLUS", "T_MINUS", "T_MUL",
  "T_DIV", "T_MOD", "T_NOT", "T_PROGRAM", "T_VAR", "T_PROCEDURE",
  "T_FUNCTION", "T_BEGIN", "T_END", "T_IF", "T_THEN", "T_ELSE", "T_WHILE",
  "T_FOR", "T_TO", "T_DO", "T_ASSIGNOP", "T_OBRACKET", "T_CBRACKET",
  "T_SEMICOLON", "T_COLON", "T_COMMA", "T_DOT", "T_WRITE_INT",
  "T_WRITE_CHAR", "T_WRITE_BOOL", "T_WRITE_LN", "T_STANDARD_TYPE",
  "T_IDENTIFIER", "T_INT", "T_BOOL", "T_CHAR", "T_REAL", "$accept",
  "program", "program_decl", "declarations", "multi_var_decl", "var_decl",
  "list_id", "multi_id", "id", "subprogram_declarations",
  "multi_subprogram_decl", "subprogram_decl", "procedure_decl",
  "function_decl", "arg_list", "multi_arg", "arg", "compound_statement",
  "statements", "optional_statements", "multi_statement", "statement",
  "MB_SEMICOLON", "matched_statement", "unmatched_statement", "if",
  "matched_if", "write_statement", "write_int", "write_char", "write_bool",
  "write_ln", "assignop", "while", "for", "expression",
  "simple_expression", "term", "not_element", "element", "call",
  "call_arg_list", "call_multi_arg", "call_arg", "add_op", "mul_op",
  "rel_op", "not_op", "identifier", "standard_type", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301
};
# endif

#define YYPACT_NINF -126

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-126)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       2,   -18,    30,    18,  -126,    12,  -126,   -18,    -7,  -126,
      18,  -126,  -126,     6,    -3,  -126,   -18,   -18,    25,    -7,
    -126,  -126,  -126,     8,   -18,  -126,    16,    19,    80,  -126,
    -126,    -7,    22,    -3,   -18,   -18,    23,    23,   -18,    26,
      31,    33,    42,    34,    80,    12,    12,  -126,  -126,  -126,
    -126,  -126,  -126,  -126,  -126,  -126,  -126,  -126,    -2,  -126,
    -126,  -126,    43,    45,    44,    50,  -126,    23,  -126,  -126,
    -126,    53,   151,     7,  -126,  -126,  -126,    27,    52,  -126,
      60,    59,    62,    23,    23,    23,    61,    65,  -126,    80,
    -126,  -126,    23,    23,    12,   -18,  -126,    63,    68,    73,
      58,  -126,  -126,  -126,  -126,  -126,  -126,  -126,  -126,  -126,
      23,    23,  -126,  -126,  -126,    23,  -126,    58,    23,    77,
      78,    79,  -126,  -126,  -126,  -126,  -126,    82,    86,    18,
      45,  -126,    71,  -126,    80,  -126,  -126,   -11,     7,    14,
    -126,  -126,    94,  -126,  -126,  -126,  -126,    23,  -126,   103,
    -126,    12,    93,    80,    58,    86,    80,    18,  -126,  -126,
    -126,  -126,  -126,   104,   108,    92,    80,  -126,   109,    99,
    -126
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     5,    90,    37,     1,     0,    14,     4,
       7,    36,     3,     0,    11,    12,     0,     0,    27,    16,
      17,    18,     6,     0,     0,     9,     0,     0,    31,     2,
      13,    16,     0,    11,    22,    22,     0,     0,     0,     0,
       0,     0,     0,     0,    33,    37,    37,    44,    39,    43,
      48,    49,    50,    51,    38,    40,    41,    42,     0,    15,
       8,    10,     0,    24,     0,     0,    89,     0,    91,    92,
      93,     0,    59,    61,    63,    65,    69,     0,    67,    68,
       0,     0,     0,     0,     0,     0,     0,     0,    30,    33,
      34,    35,     0,    72,    37,     0,    21,     0,     0,     0,
       0,    79,    87,    88,    83,    85,    84,    86,    77,    78,
       0,     0,    82,    80,    81,     0,    66,     0,     0,     0,
       0,     0,    55,    26,    32,    56,    76,     0,    74,     5,
      24,    25,     0,    70,    31,    46,    28,    37,    62,    60,
      64,    57,     0,    52,    53,    54,    71,     0,    73,     0,
      23,    37,     0,     0,     0,    74,    31,     5,    29,    47,
      45,    58,    75,     0,     0,     0,    31,    19,     0,     0,
      20
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -126,  -126,  -126,  -119,   124,  -126,  -126,   102,   112,  -126,
     106,   130,  -126,  -126,   107,     9,    46,  -126,  -110,  -125,
      54,   -41,    -4,   -92,    -9,  -126,  -126,  -126,  -126,  -126,
    -126,  -126,   110,  -126,  -126,   -32,    35,    39,    36,    87,
     -26,  -126,   -10,     3,  -126,  -126,  -126,  -126,    -1,  -126
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     8,     9,    10,    13,    25,    14,    18,
      30,    31,    20,    21,    62,    96,    63,    29,   135,    43,
      88,    44,    90,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,   126,    72,    73,    74,    75,
      76,   127,   148,   128,   110,   115,   111,    77,    78,    79
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, Синтаксическая ошибка.  */
static const yytype_uint8 yytable[] =
{
       5,    12,    57,    89,    71,    80,    15,   141,   137,   152,
     149,   112,    16,    17,   153,    26,    27,   101,    57,     1,
     113,   114,    11,    15,     4,   108,   109,    58,    92,    93,
       6,   163,    24,    64,    64,    99,     7,    82,   164,    66,
      23,   168,    91,    58,   161,    11,    28,    34,    89,    32,
      35,   119,   120,   121,    67,    60,    87,    83,    67,   136,
     125,   159,    84,    57,    85,     4,    68,    69,    70,     4,
      68,    69,    70,    86,    57,    94,   136,   100,    97,   134,
      95,    36,    98,    93,    37,    38,   142,   118,    58,   117,
     129,    57,    92,   122,    64,    39,    40,    41,    42,    58,
       4,   123,   132,    36,   131,   133,    37,    38,    57,   143,
     144,   145,   151,   136,   146,   158,    58,    39,    40,    41,
      42,   147,     4,   154,   156,   167,   165,    57,    57,   166,
      57,   169,   170,    58,    22,    61,    33,    59,    19,   150,
      57,   130,    65,   124,   160,   162,   139,   157,    81,   138,
     155,   140,    58,    58,   101,    58,   102,   103,   104,   105,
     106,   107,   108,   109,   116,    58
};

static const yytype_uint8 yycheck[] =
{
       1,     5,    28,    44,    36,    37,     7,   117,   100,   134,
     129,     4,    19,    20,    25,    16,    17,     3,    44,    17,
      13,    14,    33,    24,    42,    11,    12,    28,    30,    31,
       0,   156,    35,    34,    35,    67,    18,    38,   157,    16,
      34,   166,    46,    44,   154,    33,    21,    31,    89,    41,
      31,    83,    84,    85,    31,    33,    22,    31,    31,   100,
      92,   153,    31,    89,    31,    42,    43,    44,    45,    42,
      43,    44,    45,    31,   100,    32,   117,    24,    34,    21,
      35,    23,    32,    31,    26,    27,   118,    28,    89,    29,
      94,   117,    30,    32,    95,    37,    38,    39,    40,   100,
      42,    36,    34,    23,    41,    32,    26,    27,   134,    32,
      32,    32,    41,   154,    32,    22,   117,    37,    38,    39,
      40,    35,    42,    29,    21,    33,    22,   153,   154,    21,
     156,    22,    33,   134,    10,    33,    24,    31,     8,   130,
     166,    95,    35,    89,   153,   155,   111,   151,    38,   110,
     147,   115,   153,   154,     3,   156,     5,     6,     7,     8,
       9,    10,    11,    12,    77,   166
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    17,    48,    49,    42,    95,     0,    18,    50,    51,
      52,    33,    69,    53,    55,    95,    19,    20,    56,    58,
      59,    60,    51,    34,    35,    54,    95,    95,    21,    64,
      57,    58,    41,    55,    31,    31,    23,    26,    27,    37,
      38,    39,    40,    66,    68,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    87,    95,    57,
      33,    54,    61,    63,    95,    61,    16,    31,    43,    44,
      45,    82,    83,    84,    85,    86,    87,    94,    95,    96,
      82,    79,    95,    31,    31,    31,    31,    22,    67,    68,
      69,    69,    30,    31,    32,    35,    62,    34,    32,    82,
      24,     3,     5,     6,     7,     8,     9,    10,    11,    12,
      91,    93,     4,    13,    14,    92,    86,    29,    28,    82,
      82,    82,    32,    36,    67,    82,    82,    88,    90,    69,
      63,    41,    34,    32,    21,    65,    68,    70,    84,    83,
      85,    65,    82,    32,    32,    32,    32,    35,    89,    50,
      62,    41,    66,    25,    29,    90,    21,    69,    22,    70,
      71,    65,    89,    66,    50,    22,    21,    33,    66,    22,
      33
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    49,    50,    50,    51,    51,    52,    53,
      54,    54,    55,    56,    56,    57,    57,    58,    58,    59,
      60,    61,    61,    62,    62,    63,    64,    64,    65,    65,
      66,    66,    67,    67,    68,    68,    69,    69,    70,    70,
      70,    70,    70,    70,    71,    71,    72,    73,    74,    74,
      74,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      82,    83,    83,    84,    84,    85,    85,    86,    86,    86,
      86,    87,    88,    88,    89,    89,    90,    91,    91,    91,
      92,    92,    92,    93,    93,    93,    93,    93,    93,    94,
      95,    96,    96,    96
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     3,     1,     0,     2,     0,     5,     2,
       3,     0,     1,     2,     0,     2,     0,     1,     1,    11,
      13,     2,     0,     3,     0,     3,     4,     0,     1,     3,
       2,     0,     2,     0,     2,     2,     1,     0,     1,     1,
       1,     1,     1,     1,     1,     6,     4,     6,     1,     1,
       1,     1,     4,     4,     4,     3,     3,     4,     6,     1,
       3,     1,     3,     1,     3,     1,     2,     1,     1,     1,
       3,     4,     0,     2,     0,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("Синтаксическая ошибка: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the Нежданчик: token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "Нежданчик:", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no Нежданчик: or expected token to report.  In that
       case, just report a simple "Синтаксическая ошибка".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a Синтаксическая ошибка.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("Синтаксическая ошибка"));
      YYCASE_(1, YY_("Синтаксическая ошибка, Нежданчик: %s"));
      YYCASE_(2, YY_("Синтаксическая ошибка, Нежданчик: %s, Я ждал увидеть: %s"));
      YYCASE_(3, YY_("Синтаксическая ошибка, Нежданчик: %s, Я ждал увидеть: %s ИЛИ %s"));
      YYCASE_(4, YY_("Синтаксическая ошибка, Нежданчик: %s, Я ждал увидеть: %s ИЛИ %s ИЛИ %s"));
      YYCASE_(5, YY_("Синтаксическая ошибка, Нежданчик: %s, Я ждал увидеть: %s ИЛИ %s ИЛИ %s ИЛИ %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of Синтаксическая ошибкаs so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex (&yylval, &yylloc);
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
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
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 74 "parser.y" /* yacc.c:1646  */
    {
        Node *temp;
        temp = New_Node("program", PROGRAM, VOID, yylloc.last_line, NULL);
        Add_Child(temp, (yyvsp[-3].node)); // program_decl
        Add_Child(temp, (yyvsp[-2].node)); // declarations
        Add_Child(temp, (yyvsp[-1].node)); // subprogram_declarations
        Add_Child(temp, (yyvsp[0].node)); // compound_statement
        (yyval.node) = temp;
        global_node = temp;
    }
#line 1528 "parser.c" /* yacc.c:1646  */
    break;

  case 3:
#line 88 "parser.y" /* yacc.c:1646  */
    {
        Node *temp;
        temp = New_Node("program_decl", PROGRAM_DECL, VOID, yylloc.last_line, NULL);
        Add_Child(temp, (yyvsp[-1].node));
        (yyval.node) = temp;
    }
#line 1539 "parser.c" /* yacc.c:1646  */
    break;

  case 4:
#line 98 "parser.y" /* yacc.c:1646  */
    {
        Node *temp;
        temp = New_Node("declarations", DECLARATIONS, VOID, yylloc.last_line, NULL);
        Add_Child(temp, (yyvsp[0].node));
        (yyval.node) = temp;
    }
#line 1550 "parser.c" /* yacc.c:1646  */
    break;

  case 5:
#line 104 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1556 "parser.c" /* yacc.c:1646  */
    break;

  case 6:
#line 109 "parser.y" /* yacc.c:1646  */
    {
        Add_Sibling((yyvsp[-1].node), (yyvsp[0].node));
        (yyval.node) = (yyvsp[-1].node);
    }
#line 1565 "parser.c" /* yacc.c:1646  */
    break;

  case 7:
#line 113 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1571 "parser.c" /* yacc.c:1646  */
    break;

  case 8:
#line 118 "parser.y" /* yacc.c:1646  */
    {
        Node *temp;
        temp = New_Node("var_decl", VAR_DECL, (yyvsp[-1].type), yylloc.last_line, NULL);
        Add_Child(temp, (yyvsp[-3].node));
        (yyval.node) = temp;
    }
#line 1582 "parser.c" /* yacc.c:1646  */
    break;

  case 9:
#line 128 "parser.y" /* yacc.c:1646  */
    {
        Node *temp;
        temp = New_Node("list_id", LIST_ID, VOID, yylloc.last_line, NULL);
        Add_Sibling((yyvsp[-1].node), (yyvsp[0].node));
        Add_Child(temp, (yyvsp[-1].node));
        (yyval.node) = temp;
    }
#line 1594 "parser.c" /* yacc.c:1646  */
    break;

  case 10:
#line 139 "parser.y" /* yacc.c:1646  */
    {
        Add_Sibling((yyvsp[-1].node), (yyvsp[0].node));
        (yyval.node) = (yyvsp[-1].node);
    }
#line 1603 "parser.c" /* yacc.c:1646  */
    break;

  case 11:
#line 143 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1609 "parser.c" /* yacc.c:1646  */
    break;

  case 12:
#line 147 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1615 "parser.c" /* yacc.c:1646  */
    break;

  case 13:
#line 153 "parser.y" /* yacc.c:1646  */
    {
        Node *temp;
        temp = New_Node("subprogram_declarations", SUBPROGRAM_DECLARATIONS, VOID, yylloc.last_line, NULL);
        Add_Sibling((yyvsp[-1].node), (yyvsp[0].node));
        Add_Child(temp, (yyvsp[-1].node));
        (yyval.node) = temp;
    }
#line 1627 "parser.c" /* yacc.c:1646  */
    break;

  case 14:
#line 160 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1633 "parser.c" /* yacc.c:1646  */
    break;

  case 15:
#line 165 "parser.y" /* yacc.c:1646  */
    {
        Add_Sibling((yyvsp[-1].node), (yyvsp[0].node));
        (yyval.node) = (yyvsp[-1].node);
    }
#line 1642 "parser.c" /* yacc.c:1646  */
    break;

  case 16:
#line 169 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1648 "parser.c" /* yacc.c:1646  */
    break;

  case 17:
#line 173 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1654 "parser.c" /* yacc.c:1646  */
    break;

  case 18:
#line 174 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1660 "parser.c" /* yacc.c:1646  */
    break;

  case 19:
#line 180 "parser.y" /* yacc.c:1646  */
    {
        Node *temp;
        temp = New_Node("procedure_decl", PROCEDURE_DECL, VOID, yylloc.last_line, NULL);
        Add_Child(temp, (yyvsp[-9].node));  // identifier
        Add_Child(temp, (yyvsp[-7].node));  // arg_list
        Add_Child(temp, (yyvsp[-4].node));  // declarations
        Add_Child(temp, (yyvsp[-2].node));  // statements
        // Symbol Table
        temp->symbol = New_Symbol(NULL);
        (yyval.node) = temp;
    }
#line 1676 "parser.c" /* yacc.c:1646  */
    break;

  case 20:
#line 196 "parser.y" /* yacc.c:1646  */
    {
        Node *temp;
        temp = New_Node("function_decl", FUNCTION_DECL, (yyvsp[-6].type), yylloc.last_line, NULL);
        Add_Child(temp, (yyvsp[-11].node));  // identifier
        Add_Child(temp, (yyvsp[-9].node));  // arg_list
        Add_Child(temp, (yyvsp[-4].node));  // declarations
        Add_Child(temp, (yyvsp[-2].node)); // statements
        (yyvsp[-11].node)->symbol->type = (yyvsp[-6].type);
        // Symbol Table
        temp->symbol = New_Symbol(NULL);
        (yyval.node) = temp;
    }
#line 1693 "parser.c" /* yacc.c:1646  */
    break;

  case 21:
#line 212 "parser.y" /* yacc.c:1646  */
    {
        Node *temp;
        temp = New_Node("arg_list", ARG_LIST, VOID, yylloc.last_line, NULL);
        Add_Sibling((yyvsp[-1].node), (yyvsp[0].node));
        Add_Child(temp, (yyvsp[-1].node));
        (yyval.node) = temp;
    }
#line 1705 "parser.c" /* yacc.c:1646  */
    break;

  case 22:
#line 219 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1711 "parser.c" /* yacc.c:1646  */
    break;

  case 23:
#line 224 "parser.y" /* yacc.c:1646  */
    {
        Add_Sibling((yyvsp[-1].node), (yyvsp[0].node));
        (yyval.node) = (yyvsp[-1].node);
    }
#line 1720 "parser.c" /* yacc.c:1646  */
    break;

  case 24:
#line 228 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1726 "parser.c" /* yacc.c:1646  */
    break;

  case 25:
#line 233 "parser.y" /* yacc.c:1646  */
    {
        Node *temp;
        temp = New_Node("arg", ARG, (yyvsp[0].type), yylloc.last_line, NULL);
        Add_Child(temp, (yyvsp[-2].node));  // identifier
        (yyval.node) = temp;
    }
#line 1737 "parser.c" /* yacc.c:1646  */
    break;

  case 26:
#line 242 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-2].node); }
#line 1743 "parser.c" /* yacc.c:1646  */
    break;

  case 27:
#line 243 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1749 "parser.c" /* yacc.c:1646  */
    break;

  case 28:
#line 247 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1755 "parser.c" /* yacc.c:1646  */
    break;

  case 29:
#line 248 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 1761 "parser.c" /* yacc.c:1646  */
    break;

  case 30:
#line 253 "parser.y" /* yacc.c:1646  */
    {
        Node *temp;
        temp = New_Node("optional_statements", OPTIONAL_STATEMENTS, VOID, yylloc.last_line, NULL);
        Add_Sibling((yyvsp[-1].node), (yyvsp[0].node));
        Add_Child(temp, (yyvsp[-1].node));
        (yyval.node) = temp;
    }
#line 1773 "parser.c" /* yacc.c:1646  */
    break;

  case 31:
#line 260 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1779 "parser.c" /* yacc.c:1646  */
    break;

  case 32:
#line 266 "parser.y" /* yacc.c:1646  */
    {
        Add_Sibling((yyvsp[-1].node), (yyvsp[0].node));
        (yyval.node) = (yyvsp[-1].node);
    }
#line 1788 "parser.c" /* yacc.c:1646  */
    break;

  case 33:
#line 270 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1794 "parser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 275 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 1800 "parser.c" /* yacc.c:1646  */
    break;

  case 35:
#line 276 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 1806 "parser.c" /* yacc.c:1646  */
    break;

  case 38:
#line 286 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1812 "parser.c" /* yacc.c:1646  */
    break;

  case 39:
#line 287 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1818 "parser.c" /* yacc.c:1646  */
    break;

  case 40:
#line 288 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1824 "parser.c" /* yacc.c:1646  */
    break;

  case 41:
#line 289 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1830 "parser.c" /* yacc.c:1646  */
    break;

  case 42:
#line 290 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1836 "parser.c" /* yacc.c:1646  */
    break;

  case 43:
#line 291 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1842 "parser.c" /* yacc.c:1646  */
    break;

  case 44:
#line 295 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1848 "parser.c" /* yacc.c:1646  */
    break;

  case 45:
#line 297 "parser.y" /* yacc.c:1646  */
    {
        Node *temp;
        temp = New_Node("if", IF, VOID, yylloc.last_line, NULL);
        Add_Child(temp, (yyvsp[-4].node));
        Add_Child(temp, (yyvsp[-2].node));
        Add_Child(temp, (yyvsp[0].node));
        (yyval.node) = temp;
    }
#line 1861 "parser.c" /* yacc.c:1646  */
    break;

  case 46:
#line 309 "parser.y" /* yacc.c:1646  */
    {
        Node *temp;
        temp = New_Node("if", IF, VOID, yylloc.last_line, NULL);
        Add_Child(temp, (yyvsp[-2].node));
        Add_Child(temp, (yyvsp[0].node));
        (yyval.node) = temp;
    }
#line 1873 "parser.c" /* yacc.c:1646  */
    break;

  case 47:
#line 320 "parser.y" /* yacc.c:1646  */
    {
        Node *temp;
        temp = New_Node("if", IF, VOID, yylloc.last_line, NULL);
        Add_Child(temp, (yyvsp[-4].node));
        Add_Child(temp, (yyvsp[-2].node));
        Add_Child(temp, (yyvsp[0].node));
        (yyval.node) = temp;
    }
#line 1886 "parser.c" /* yacc.c:1646  */
    break;

  case 48:
#line 331 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1892 "parser.c" /* yacc.c:1646  */
    break;

  case 49:
#line 332 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1898 "parser.c" /* yacc.c:1646  */
    break;

  case 50:
#line 333 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1904 "parser.c" /* yacc.c:1646  */
    break;

  case 51:
#line 334 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1910 "parser.c" /* yacc.c:1646  */
    break;

  case 52:
#line 339 "parser.y" /* yacc.c:1646  */
    {
        Node *temp;
        temp = New_Node("write_int", WRITE_INT, VOID, yylloc.last_line, NULL);
        Add_Child(temp, (yyvsp[-1].node));
        (yyval.node) = temp;
    }
#line 1921 "parser.c" /* yacc.c:1646  */
    break;

  case 53:
#line 349 "parser.y" /* yacc.c:1646  */
    {
        Node *temp;
        temp = New_Node("write_char", WRITE_CHAR, VOID, yylloc.last_line, NULL);
        Add_Child(temp, (yyvsp[-1].node));
        (yyval.node) = temp;
    }
#line 1932 "parser.c" /* yacc.c:1646  */
    break;

  case 54:
#line 359 "parser.y" /* yacc.c:1646  */
    {
        Node *temp;
        temp = New_Node("write_bool", WRITE_BOOL, VOID, yylloc.last_line, NULL);
        Add_Child(temp, (yyvsp[-1].node));
        (yyval.node) = temp;
    }
#line 1943 "parser.c" /* yacc.c:1646  */
    break;

  case 55:
#line 369 "parser.y" /* yacc.c:1646  */
    {
        Node *temp;
        temp = New_Node("write_ln", WRITE_LN, VOID, yylloc.last_line, NULL);
        (yyval.node) = temp;
    }
#line 1953 "parser.c" /* yacc.c:1646  */
    break;

  case 56:
#line 378 "parser.y" /* yacc.c:1646  */
    {
        Node *temp;
        temp = New_Node("assignop", ASSIGNOP, VOID, yylloc.last_line, NULL);
        Add_Child(temp, (yyvsp[-2].node));
        Add_Child(temp, (yyvsp[0].node));
        (yyval.node) = temp;
    }
#line 1965 "parser.c" /* yacc.c:1646  */
    break;

  case 57:
#line 389 "parser.y" /* yacc.c:1646  */
    {
        Node *temp;
        temp = New_Node("while", WHILE, VOID, yylloc.last_line, NULL);
        Add_Child(temp, (yyvsp[-2].node));
        Add_Child(temp, (yyvsp[0].node));
        (yyval.node) = temp;
    }
#line 1977 "parser.c" /* yacc.c:1646  */
    break;

  case 58:
#line 400 "parser.y" /* yacc.c:1646  */
    {
        Node *temp;
        temp = New_Node("for", FOR, VOID, yylloc.last_line, NULL);
        Add_Child(temp, (yyvsp[-4].node)); // assignop
        Add_Child(temp, (yyvsp[-2].node)); // expression
        Add_Child(temp, (yyvsp[0].node)); // statements
        (yyval.node) = temp;
    }
#line 1990 "parser.c" /* yacc.c:1646  */
    break;

  case 59:
#line 411 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1996 "parser.c" /* yacc.c:1646  */
    break;

  case 60:
#line 413 "parser.y" /* yacc.c:1646  */
    {
        Node *temp;
        temp = New_Node("rel_expr", REL_EXPR, BOOLEAN, yylloc.last_line, NULL);
        Add_Child(temp, (yyvsp[-2].node));
        Add_Child(temp, (yyvsp[-1].node));
        Add_Child(temp, (yyvsp[0].node));
        (yyval.node) = temp;
    }
#line 2009 "parser.c" /* yacc.c:1646  */
    break;

  case 61:
#line 424 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2015 "parser.c" /* yacc.c:1646  */
    break;

  case 62:
#line 426 "parser.y" /* yacc.c:1646  */
    {
        Node *temp;
        Type type = ((Node *) (yyvsp[-1].node))->type;
        temp = New_Node("add_expr", ADD_EXPR, type, yylloc.last_line, NULL);
        Add_Child(temp, (yyvsp[-2].node));
        Add_Child(temp, (yyvsp[-1].node));
        Add_Child(temp, (yyvsp[0].node));
        (yyval.node) = temp;
    }
#line 2029 "parser.c" /* yacc.c:1646  */
    break;

  case 63:
#line 438 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2035 "parser.c" /* yacc.c:1646  */
    break;

  case 64:
#line 440 "parser.y" /* yacc.c:1646  */
    {
        Node *temp;
        Type type = ((Node *) (yyvsp[-1].node))->type;
        temp = New_Node("mul_expr", MUL_EXPR, type, yylloc.last_line, NULL);
        Add_Child(temp, (yyvsp[-2].node));
        Add_Child(temp, (yyvsp[-1].node));
        Add_Child(temp, (yyvsp[0].node));
        (yyval.node) = temp;
    }
#line 2049 "parser.c" /* yacc.c:1646  */
    break;

  case 65:
#line 452 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2055 "parser.c" /* yacc.c:1646  */
    break;

  case 66:
#line 454 "parser.y" /* yacc.c:1646  */
    {
        Node *temp;
        temp = New_Node("not_element", NOT_ELEMENT, BOOLEAN, yylloc.last_line, NULL);
        Add_Child(temp, (yyvsp[0].node));
        (yyval.node) = temp;
    }
#line 2066 "parser.c" /* yacc.c:1646  */
    break;

  case 67:
#line 463 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2072 "parser.c" /* yacc.c:1646  */
    break;

  case 68:
#line 464 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2078 "parser.c" /* yacc.c:1646  */
    break;

  case 69:
#line 465 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2084 "parser.c" /* yacc.c:1646  */
    break;

  case 70:
#line 466 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 2090 "parser.c" /* yacc.c:1646  */
    break;

  case 71:
#line 471 "parser.y" /* yacc.c:1646  */
    {
        Node *temp;
        temp = New_Node("call", CALL, VOID, yylloc.last_line, NULL);
        Add_Child(temp, (yyvsp[-3].node));
        Add_Child(temp, (yyvsp[-1].node));
        (yyval.node) = temp;
    }
#line 2102 "parser.c" /* yacc.c:1646  */
    break;

  case 72:
#line 481 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2108 "parser.c" /* yacc.c:1646  */
    break;

  case 73:
#line 483 "parser.y" /* yacc.c:1646  */
    {
        Node *temp;
        temp = New_Node("call_arg_list", CALL_ARG_LIST, VOID, yylloc.last_line, NULL);
        Add_Sibling((yyvsp[-1].node), (yyvsp[0].node));
        Add_Child(temp, (yyvsp[-1].node));
        (yyval.node) = temp;
    }
#line 2120 "parser.c" /* yacc.c:1646  */
    break;

  case 74:
#line 493 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2126 "parser.c" /* yacc.c:1646  */
    break;

  case 75:
#line 495 "parser.y" /* yacc.c:1646  */
    {
        Add_Sibling((yyvsp[-1].node), (yyvsp[0].node));
        (yyval.node) = (yyvsp[-1].node);
    }
#line 2135 "parser.c" /* yacc.c:1646  */
    break;

  case 76:
#line 503 "parser.y" /* yacc.c:1646  */
    {
        Node *temp;
        temp = New_Node("call_arg", CALL_ARG, ((Node *) (yyvsp[0].node))->type, yylloc.last_line, NULL);
        Add_Child(temp, (yyvsp[0].node));
        (yyval.node) = temp;
    }
#line 2146 "parser.c" /* yacc.c:1646  */
    break;

  case 77:
#line 513 "parser.y" /* yacc.c:1646  */
    {
        Node *temp;
        temp = New_Node((yyvsp[0].opiden), T_PLUS, INTEGER, yylloc.last_line, NULL);
        (yyval.node) = temp;
    }
#line 2156 "parser.c" /* yacc.c:1646  */
    break;

  case 78:
#line 519 "parser.y" /* yacc.c:1646  */
    {
        Node *temp;
        temp = New_Node((yyvsp[0].opiden), T_MINUS, INTEGER, yylloc.last_line, NULL);
        (yyval.node) = temp;
    }
#line 2166 "parser.c" /* yacc.c:1646  */
    break;

  case 79:
#line 525 "parser.y" /* yacc.c:1646  */
    {
        Node *temp;
        temp = New_Node((yyvsp[0].opiden), T_OR, BOOLEAN, yylloc.last_line, NULL);
        (yyval.node) = temp;
    }
#line 2176 "parser.c" /* yacc.c:1646  */
    break;

  case 80:
#line 534 "parser.y" /* yacc.c:1646  */
    {
        Node *temp;
        temp = New_Node((yyvsp[0].opiden), T_MUL, INTEGER, yylloc.last_line, NULL);
        (yyval.node) = temp;
    }
#line 2186 "parser.c" /* yacc.c:1646  */
    break;

  case 81:
#line 540 "parser.y" /* yacc.c:1646  */
    {
        Node *temp;
        temp = New_Node((yyvsp[0].opiden), T_DIV, INTEGER, yylloc.last_line, NULL);
        (yyval.node) = temp;
    }
#line 2196 "parser.c" /* yacc.c:1646  */
    break;

  case 82:
#line 546 "parser.y" /* yacc.c:1646  */
    {
        Node *temp;
        temp = New_Node((yyvsp[0].opiden), T_AND, BOOLEAN, yylloc.last_line, NULL);
        (yyval.node) = temp;
    }
#line 2206 "parser.c" /* yacc.c:1646  */
    break;

  case 83:
#line 555 "parser.y" /* yacc.c:1646  */
    {
        Node *temp;
        temp = New_Node((yyvsp[0].opiden), T_CLT, BOOLEAN, yylloc.last_line, NULL);
        (yyval.node) = temp;
    }
#line 2216 "parser.c" /* yacc.c:1646  */
    break;

  case 84:
#line 561 "parser.y" /* yacc.c:1646  */
    {
        Node *temp;
        temp = New_Node((yyvsp[0].opiden), T_CLE, BOOLEAN, yylloc.last_line, NULL);
        (yyval.node) = temp;
    }
#line 2226 "parser.c" /* yacc.c:1646  */
    break;

  case 85:
#line 567 "parser.y" /* yacc.c:1646  */
    {
        Node *temp;
        temp = New_Node((yyvsp[0].opiden), T_CGT, BOOLEAN, yylloc.last_line, NULL);
        (yyval.node) = temp;
    }
#line 2236 "parser.c" /* yacc.c:1646  */
    break;

  case 86:
#line 573 "parser.y" /* yacc.c:1646  */
    {
        Node *temp;
        temp = New_Node((yyvsp[0].opiden), T_CGE, BOOLEAN, yylloc.last_line, NULL);
        (yyval.node) = temp;
    }
#line 2246 "parser.c" /* yacc.c:1646  */
    break;

  case 87:
#line 579 "parser.y" /* yacc.c:1646  */
    {
        Node *temp;
        temp = New_Node((yyvsp[0].opiden), T_CEQ, BOOLEAN, yylloc.last_line, NULL);
        (yyval.node) = temp;
    }
#line 2256 "parser.c" /* yacc.c:1646  */
    break;

  case 88:
#line 585 "parser.y" /* yacc.c:1646  */
    {
        Node *temp;
        temp = New_Node((yyvsp[0].opiden), T_CNE, BOOLEAN, yylloc.last_line, NULL);
        (yyval.node) = temp;
    }
#line 2266 "parser.c" /* yacc.c:1646  */
    break;

  case 89:
#line 593 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2272 "parser.c" /* yacc.c:1646  */
    break;

  case 90:
#line 598 "parser.y" /* yacc.c:1646  */
    {
        Node *temp;

        temp = New_Node("identifier", T_IDENTIFIER, VOID, yylloc.last_line, NULL);
        temp->symbol = New_Symbol((yyvsp[0].opiden));
        (yyval.node) = temp;
    }
#line 2284 "parser.c" /* yacc.c:1646  */
    break;

  case 91:
#line 609 "parser.y" /* yacc.c:1646  */
    {
        Node *temp;
        temp = New_Node("int", T_INT, INTEGER, yylloc.last_line, NULL);
        Set_Int(&temp->value, (yyvsp[0].integer));
        (yyval.node) = temp;
    }
#line 2295 "parser.c" /* yacc.c:1646  */
    break;

  case 92:
#line 616 "parser.y" /* yacc.c:1646  */
    {
        Node *temp;
        temp = New_Node("bool", T_BOOL, BOOLEAN, yylloc.last_line, NULL);
        Set_Bool(&temp->value, (yyvsp[0].boolean));
        (yyval.node) = temp;
    }
#line 2306 "parser.c" /* yacc.c:1646  */
    break;

  case 93:
#line 623 "parser.y" /* yacc.c:1646  */
    {
        Node *temp;
        temp = New_Node("char", T_CHAR, CHAR, yylloc.last_line, NULL);
        Set_Char(&temp->value, (yyvsp[0].character));
        (yyval.node) = temp;
    }
#line 2317 "parser.c" /* yacc.c:1646  */
    break;


#line 2321 "parser.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose Синтаксическая ошибка message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("Синтаксическая ошибка"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("Синтаксическая ошибка");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc);
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

  yyerror_range[1] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both Синтаксическая ошибка and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp);
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
  return yyresult;
}
#line 631 "parser.y" /* yacc.c:1906  */

static void yyerror (const char *msg)
{
    fprintf(stderr, "Ошибка в строке № %d: %s\n", yyget_lineno(), msg);
}

int main (int argc, char **argv)
{
    setlocale(6, "Russia");

    Action *action;
	fptr = fopen("result.ill", "wb");

    if (argc > optind)
	{
        yyin = fopen(argv[optind], "r");

		if (yyin==NULL)
		{
			printf("404 - Файл не найден\n");
			exit(1);
			return 1;
		}
	}
    else
        yyin = stdin;

    yyparse();

    if (Check_Errors(global_node))
    {
        fprintf(stderr, "Слишком много ошибок\n");
        exit(1);
		return 1;
    }else {
        printf("Успешно\n");
        return 0;
    }

    
}
