/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "b.y" /* yacc.c:339  */

    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    
    int yylex(void);
    extern int lineno;
    void yyerror(char *);
    
    struct node
    {
        char name[20];
        int nChilds;
        int isToken;
        char tokValue[20];
        struct node *childs[10];
    };
    void updateChild(struct node *newNode, struct node *$1, struct node *$2, struct node *$3, struct node *$4, struct node *$5, struct node *$6, struct node *$7, struct node *$8, struct node *$9, struct node *$10);
    struct node * errorNode();
    struct node *root;
    
    struct node *bfs[500];
    int start=0, end=0;
    void push(struct node *n);
    
    struct node *pop();
    

#line 95 "y.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NEGATION = 258,
    PLUS = 259,
    MINUS = 260,
    TIMES = 261,
    DIV = 262,
    LTE = 263,
    GTE = 264,
    LT = 265,
    GT = 266,
    EQU = 267,
    ASSIGN = 268,
    SEMI = 269,
    COMMA = 270,
    COLON = 271,
    LP = 272,
    RP = 273,
    NUM = 274,
    IF = 275,
    THEN = 276,
    ELSE = 277,
    WHILE = 278,
    DO = 279,
    BEGIN1 = 280,
    END = 281,
    INT = 282,
    BOOL = 283,
    CHAR = 284,
    VOID = 285,
    TRUE = 286,
    FALSE = 287,
    CHARACTER = 288,
    CIN = 289,
    COUT = 290,
    ID = 291,
    LL = 292,
    GG = 293,
    RETURN = 294
  };
#endif
/* Tokens.  */
#define NEGATION 258
#define PLUS 259
#define MINUS 260
#define TIMES 261
#define DIV 262
#define LTE 263
#define GTE 264
#define LT 265
#define GT 266
#define EQU 267
#define ASSIGN 268
#define SEMI 269
#define COMMA 270
#define COLON 271
#define LP 272
#define RP 273
#define NUM 274
#define IF 275
#define THEN 276
#define ELSE 277
#define WHILE 278
#define DO 279
#define BEGIN1 280
#define END 281
#define INT 282
#define BOOL 283
#define CHAR 284
#define VOID 285
#define TRUE 286
#define FALSE 287
#define CHARACTER 288
#define CIN 289
#define COUT 290
#define ID 291
#define LL 292
#define GG 293
#define RETURN 294

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 34 "b.y" /* yacc.c:355  */

    struct node *node1;

#line 217 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 232 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  46
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   142

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  85
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  129

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   294

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
      35,    36,    37,    38,    39
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    89,    89,    93,    94,    95,    96,   100,   104,   112,
     113,   117,   118,   122,   126,   130,   131,   132,   136,   137,
     143,   144,   149,   150,   151,   152,   153,   154,   155,   158,
     159,   164,   165,   169,   174,   175,   179,   180,   184,   185,
     186,   187,   188,   192,   196,   197,   198,   202,   206,   207,
     208,   212,   213,   216,   217,   218,   219,   222,   223,   227,
     231,   232,   236,   237,   238,   242,   245,   246,   249,   250,
     253,   255,   258,   259,   263,   264,   267,   268,   273,   274,
     277,   278,   281,   282,   286,   287
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NEGATION", "PLUS", "MINUS", "TIMES",
  "DIV", "LTE", "GTE", "LT", "GT", "EQU", "ASSIGN", "SEMI", "COMMA",
  "COLON", "LP", "RP", "NUM", "IF", "THEN", "ELSE", "WHILE", "DO",
  "BEGIN1", "END", "INT", "BOOL", "CHAR", "VOID", "TRUE", "FALSE",
  "CHARACTER", "CIN", "COUT", "ID", "LL", "GG", "RETURN", "$accept", "S1",
  "S", "func_decl1", "func_decl", "opt_arg_list", "arg_list", "arg",
  "func_defn", "func_stmt", "rt", "stmt_list", "stmt", "then", "opt_else",
  "else_stmt", "expr", "rel", "operator", "expr1", "add_sub", "expr2",
  "mul_div", "expr3", "term", "opt_stmt_list", "var_decl", "id_list",
  "datatype", "func_call", "opt_expr_list", "expr_list", "io", "gg", "ll",
  "rp", "colon", "semi", "end", "do", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294
};
# endif

#define YYPACT_NINF -72

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-72)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     106,     8,     8,   106,   -72,   -72,   -72,     2,     9,    59,
       5,   -72,   106,    22,   106,   106,    21,   -15,    21,    21,
       8,     8,   -72,   -72,     7,    12,    92,    51,    79,   -72,
     -72,    25,   -72,   106,    19,    -4,   -72,   -72,     6,   -72,
     -72,     8,   -72,   -72,     8,    46,   -72,   -72,   -72,   -72,
      45,   -72,   -72,   -72,   -72,    47,   -72,   -72,   -72,   -72,
      33,   -72,   -72,   106,   -72,   -72,   -72,   -72,   -72,   -72,
       8,     8,     8,   -72,     8,     8,   -72,   -72,   -72,   106,
     -72,   -72,   -72,   -72,    48,   -72,   -72,    54,    33,   -72,
       8,     8,    19,    45,    -4,     1,   -72,   -72,   -72,    44,
     -72,   -72,   -72,   -72,   -72,   -72,     8,   -72,    21,    21,
     -72,   -72,   -72,   -72,    33,   -72,    56,    52,   106,   -72,
     -72,   -72,   -72,   -72,   -72,     1,   -72,   -72,   -72
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       6,     0,     0,    58,    62,    63,    64,     0,     0,     0,
       0,     2,     6,     0,     6,     6,     0,     0,     0,     0,
       0,     0,    54,    56,    53,     0,    37,    46,    50,    52,
      55,     0,    57,    21,     0,     0,    73,    72,     0,    75,
      74,     0,    79,    78,    67,     0,     1,     4,    81,    80,
      17,     7,     3,     5,    26,    61,    59,    27,    28,    51,
       0,    30,    29,     0,    38,    39,    42,    41,    40,    34,
       0,     0,     0,    43,     0,     0,    47,    85,    84,     0,
      20,    83,    82,    25,    61,    70,    71,    69,     0,    66,
       0,    19,     0,    17,     0,    10,    77,    76,    35,    32,
      36,    44,    45,    48,    49,    24,     0,    65,     0,     0,
      18,    14,    15,    60,     0,     9,    12,     0,     0,    23,
      31,    68,    22,    16,     8,     0,    13,    33,    11
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -72,   -72,    38,   -72,   -72,   -72,   -43,   -72,   -72,    -3,
     -72,   -31,    -2,   -72,   -72,   -72,    37,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,    -5,     0,     4,
     -72,   -14,   -72,   -72,   -72,   -71,   -72,   -10,    13,   -72
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    10,    11,    12,    13,   114,   115,   116,    14,    92,
     109,    32,    15,    63,   119,   120,    87,    69,    70,    26,
      73,    27,    76,    28,    29,    34,    16,    56,    35,    30,
      88,    89,    19,    38,    41,    98,    45,    51,    83,    79
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      17,    33,    80,    36,    18,    46,    54,    18,    57,    58,
      39,    20,    17,    61,    17,    17,    18,   107,    18,    18,
      81,    55,    48,    48,    44,    21,    77,    22,     4,     5,
       6,    33,    84,    62,    96,    49,    49,    18,    25,    31,
      37,    23,    85,   124,    24,    82,    40,    50,    93,    78,
      47,    97,    52,    53,    18,    71,    72,    59,    60,    90,
      42,    99,    94,    94,    95,     1,   118,    18,     2,   106,
       3,   125,     4,     5,     6,    43,    44,   105,    86,     7,
       8,     9,   128,    18,    91,    74,    75,   127,   126,   113,
     112,    93,   121,     0,     0,   117,     0,    18,   122,   123,
      64,    65,    66,    67,    68,   111,     0,   100,   101,   102,
       0,   103,   104,     0,     0,     0,    33,     0,     0,     0,
       0,     0,    18,     0,     0,   117,     1,   108,   110,     2,
       0,     3,     0,     4,     5,     6,     0,     0,     0,     0,
       7,     8,     9
};

static const yytype_int8 yycheck[] =
{
       0,     3,    33,     1,     0,     0,    16,     3,    18,    19,
       1,     3,    12,     1,    14,    15,    12,    88,    14,    15,
       1,    36,     1,     1,    17,    17,     1,    19,    27,    28,
      29,    33,    36,    21,     1,    14,    14,    33,     1,     2,
      38,    33,    36,   114,    36,    26,    37,    25,    50,    24,
      12,    18,    14,    15,    50,     4,     5,    20,    21,    13,
       1,    63,    15,    15,    17,    20,    22,    63,    23,    15,
      25,    15,    27,    28,    29,    16,    17,    79,    41,    34,
      35,    36,   125,    79,    39,     6,     7,   118,    36,    94,
      93,    93,   106,    -1,    -1,    95,    -1,    93,   108,   109,
       8,     9,    10,    11,    12,    92,    -1,    70,    71,    72,
      -1,    74,    75,    -1,    -1,    -1,   118,    -1,    -1,    -1,
      -1,    -1,   118,    -1,    -1,   125,    20,    90,    91,    23,
      -1,    25,    -1,    27,    28,    29,    -1,    -1,    -1,    -1,
      34,    35,    36
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    20,    23,    25,    27,    28,    29,    34,    35,    36,
      41,    42,    43,    44,    48,    52,    66,    68,    69,    72,
       3,    17,    19,    33,    36,    56,    59,    61,    63,    64,
      69,    56,    51,    52,    65,    68,     1,    38,    73,     1,
      37,    74,     1,    16,    17,    76,     0,    42,     1,    14,
      25,    77,    42,    42,    77,    36,    67,    77,    77,    56,
      56,     1,    21,    53,     8,     9,    10,    11,    12,    57,
      58,     4,     5,    60,     6,     7,    62,     1,    24,    79,
      51,     1,    26,    78,    36,    36,    56,    56,    70,    71,
      13,    39,    49,    52,    15,    17,     1,    18,    75,    52,
      56,    56,    56,    56,    56,    52,    15,    75,    56,    50,
      56,    78,    49,    67,    45,    46,    47,    68,    22,    54,
      55,    71,    77,    77,    75,    15,    36,    51,    46
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    40,    41,    42,    42,    42,    42,    43,    44,    45,
      45,    46,    46,    47,    48,    49,    49,    49,    50,    50,
      51,    51,    52,    52,    52,    52,    52,    52,    52,    53,
      53,    54,    54,    55,    56,    56,    57,    57,    58,    58,
      58,    58,    58,    59,    60,    60,    60,    61,    62,    62,
      62,    63,    63,    64,    64,    64,    64,    65,    65,    66,
      67,    67,    68,    68,    68,    69,    70,    70,    71,    71,
      72,    72,    73,    73,    74,    74,    75,    75,    76,    76,
      77,    77,    78,    78,    79,    79
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     2,     0,     2,     5,     1,
       0,     3,     1,     2,     4,     2,     3,     0,     1,     0,
       2,     1,     5,     5,     4,     3,     2,     2,     2,     1,
       1,     1,     0,     2,     2,     3,     2,     0,     1,     1,
       1,     1,     1,     2,     2,     2,     0,     2,     2,     2,
       0,     2,     1,     1,     1,     1,     1,     1,     0,     2,
       3,     1,     1,     1,     1,     4,     1,     0,     3,     1,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1
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
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
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
   about the unexpected token YYTOKEN for the state stack whose top is
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
  /* Number of reported tokens (one for the "unexpected", one per
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
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
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
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

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

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 89 "b.y" /* yacc.c:1646  */
    {printf("S1 : S\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "S1");    newNode->nChilds=1; newNode->childs[0]=(yyvsp[0]. node1 ); (yyval. node1 )=newNode; root=(yyval. node1 );}
#line 1407 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 93 "b.y" /* yacc.c:1646  */
    {  printf("S : func_defn S\n");  struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "S");    newNode->nChilds=1; updateChild(newNode, (yyvsp[-1]. node1 ), NULL, NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL); (yyval. node1 )=newNode;}
#line 1413 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 94 "b.y" /* yacc.c:1646  */
    {  printf("S : func_decl1 S\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "S");    newNode->nChilds=2; updateChild(newNode, (yyvsp[-1]. node1 ), (yyvsp[0]. node1 ), NULL, NULL,NULL,NULL,NULL,NULL,NULL,NULL); (yyval. node1 )=newNode;}
#line 1419 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 95 "b.y" /* yacc.c:1646  */
    {  printf("S : stmt S\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "S");    newNode->nChilds=2; updateChild(newNode, (yyvsp[-1]. node1 ), (yyvsp[0]. node1 ), NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL); (yyval. node1 )=newNode;}
#line 1425 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 96 "b.y" /* yacc.c:1646  */
    {  printf("S : epsilon\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "S");    newNode->nChilds=1; newNode->childs[0]=NULL; (yyval. node1 )=newNode; }
#line 1431 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 100 "b.y" /* yacc.c:1646  */
    {   printf("func_decl1 : func_decl semi\n");  struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "func_decl1");    newNode->nChilds=2; updateChild(newNode, (yyvsp[-1]. node1 ), (yyvsp[0]. node1 ), NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL); (yyval. node1 )=newNode;   }
#line 1437 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 104 "b.y" /* yacc.c:1646  */
    {  printf("func_decl : func_type ID LP opt_arg_list rp\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "func_decl");    newNode->nChilds=5; updateChild(newNode, (yyvsp[-4]. node1 ), (yyvsp[-3]. node1), (yyvsp[-2]. node1), (yyvsp[-1]. node1 ), (yyvsp[0]. node1 ),  NULL,NULL,NULL,NULL,NULL); (yyval. node1 )=newNode;}
#line 1443 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 112 "b.y" /* yacc.c:1646  */
    {  printf("opt_arg_list : arg_list\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "opt_arg_list");    newNode->nChilds=1; updateChild(newNode, (yyvsp[0]. node1 ), NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL); (yyval. node1 )=newNode;}
#line 1449 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 113 "b.y" /* yacc.c:1646  */
    {  printf("opt_arg_list : epsilon\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "opt_arg_list");    newNode->nChilds=1; newNode->childs[0]=NULL; (yyval. node1 )=newNode;}
#line 1455 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 117 "b.y" /* yacc.c:1646  */
    {  printf("arg_list : arg COMMA arg_list\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "arg_list");    newNode->nChilds=3; updateChild(newNode, (yyvsp[-2]. node1 ), (yyvsp[-1]. node1), (yyvsp[0]. node1 ), NULL,NULL,NULL,NULL,NULL,NULL, NULL); (yyval. node1 )=newNode;}
#line 1461 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 118 "b.y" /* yacc.c:1646  */
    {  printf("arg_list : arg\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "arg_list");    newNode->nChilds=1; updateChild(newNode, (yyvsp[0]. node1 ), NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL); (yyval. node1 )=newNode;}
#line 1467 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 122 "b.y" /* yacc.c:1646  */
    {  printf("arg : datatype ID\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "arg");    newNode->nChilds=2; updateChild(newNode, (yyvsp[-1]. node1 ), (yyvsp[0]. node1), NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL); (yyval. node1 )=newNode;}
#line 1473 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 126 "b.y" /* yacc.c:1646  */
    {   printf("func_defn : func_decl BEGIN1 func_stmt end\n");    struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "func_defn");    newNode->nChilds=4; updateChild(newNode, (yyvsp[-3]. node1 ), (yyvsp[-2]. node1), (yyvsp[-1]. node1 ), (yyvsp[0]. node1 ), NULL,NULL,NULL,NULL,NULL,NULL); (yyval. node1 )=newNode;}
#line 1479 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 130 "b.y" /* yacc.c:1646  */
    {   printf("func_stmt : stmt func_stmt\n");    struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "func_stmt");    newNode->nChilds=2; updateChild(newNode, (yyvsp[-1]. node1 ), (yyvsp[0]. node1 ), NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL); (yyval. node1 )=newNode;}
#line 1485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 131 "b.y" /* yacc.c:1646  */
    {   printf("func_stmt : RETURN rt semi\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "func_stmt");    newNode->nChilds=3; updateChild(newNode, (yyvsp[-2]. node1), (yyvsp[-1]. node1 ), (yyvsp[0]. node1 ), NULL,NULL,NULL,NULL,NULL,NULL,NULL); (yyval. node1 )=newNode;}
#line 1491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 132 "b.y" /* yacc.c:1646  */
    {   printf("func_stmt : epsilon\n");  struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "func_stmt");    newNode->nChilds=1; newNode->childs[0]=NULL; (yyval. node1 )=newNode; }
#line 1497 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 136 "b.y" /* yacc.c:1646  */
    {   printf("rt : expr\n");   struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "rt");    newNode->nChilds=1; updateChild(newNode, (yyvsp[0]. node1 ), NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL); (yyval. node1 )=newNode; }
#line 1503 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 137 "b.y" /* yacc.c:1646  */
    {   printf("rt : epsilon\n");   struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "S");    newNode->nChilds=1; newNode->childs[0]=NULL; (yyval. node1 )=newNode;}
#line 1509 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 143 "b.y" /* yacc.c:1646  */
    {  printf("stmt_list : stmt stmt_list\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "stmt_list");    newNode->nChilds=2; updateChild(newNode, (yyvsp[-1]. node1 ), (yyvsp[0]. node1 ), NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL); (yyval. node1 )=newNode;}
#line 1515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 144 "b.y" /* yacc.c:1646  */
    {  printf("stmt_list : stmt\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "stmt_list");    newNode->nChilds=1; updateChild(newNode, (yyvsp[0]. node1 ), NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL); (yyval. node1 )=newNode;}
#line 1521 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 149 "b.y" /* yacc.c:1646  */
    {  printf("stmt : ID COLON ASSIGN expr semi\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "stmt");    newNode->nChilds=5; updateChild(newNode, (yyvsp[-4]. node1), (yyvsp[-3]. node1 ), (yyvsp[-2]. node1), (yyvsp[-1]. node1 ), (yyvsp[0]. node1 ), NULL,NULL,NULL,NULL,NULL); (yyval. node1 )=newNode;}
#line 1527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 150 "b.y" /* yacc.c:1646  */
    {  printf("stmt : IF expr then stmt opt_else\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "stmt");    newNode->nChilds=5; updateChild(newNode, (yyvsp[-4]. node1), (yyvsp[-3]. node1 ), (yyvsp[-2]. node1 ), (yyvsp[-1]. node1 ), (yyvsp[0]. node1 ), NULL,NULL,NULL,NULL,NULL); (yyval. node1 )=newNode;}
#line 1533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 151 "b.y" /* yacc.c:1646  */
    {  printf("stmt : WHILE expr do stmt\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "stmt");    newNode->nChilds=4; newNode->childs[0]=(yyvsp[-3]. node1);newNode->childs[1]=(yyvsp[-2]. node1 );newNode->childs[2]=(yyvsp[-1]. node1 );newNode->childs[3]=(yyvsp[0]. node1 ); (yyval. node1 )=newNode;}
#line 1539 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 152 "b.y" /* yacc.c:1646  */
    {  printf("stmt : BEGIN1  opt_stmt_list end\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "stmt");    newNode->nChilds=3; newNode->childs[0]=(yyvsp[-2]. node1);newNode->childs[1]=(yyvsp[-1]. node1 );newNode->childs[2]=(yyvsp[0]. node1 ); (yyval. node1 )=newNode;}
#line 1545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 153 "b.y" /* yacc.c:1646  */
    {  printf("stmt : var_decl semi\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "stmt");    newNode->nChilds=2; newNode->childs[0]=(yyvsp[-1]. node1 );newNode->childs[1]=(yyvsp[0]. node1 ); (yyval. node1 )=newNode;}
#line 1551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 154 "b.y" /* yacc.c:1646  */
    {  printf("stmt : func_call semi\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "stmt");    newNode->nChilds=2; newNode->childs[0]=(yyvsp[-1]. node1 );newNode->childs[1]=(yyvsp[0]. node1 ); (yyval. node1 )=newNode;}
#line 1557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 155 "b.y" /* yacc.c:1646  */
    {  printf("stmt : io semi\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "stmt");    newNode->nChilds=2; newNode->childs[0]=(yyvsp[-1]. node1 );newNode->childs[1]=(yyvsp[0]. node1 ); (yyval. node1 )=newNode;}
#line 1563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 158 "b.y" /* yacc.c:1646  */
    {   printf("then : THEN\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "then");    newNode->nChilds=1; newNode->childs[0] = (yyvsp[0]. node1); (yyval. node1 )=newNode;}
#line 1569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 159 "b.y" /* yacc.c:1646  */
    {  yyerror("then missing ");  struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "then");    newNode->nChilds=1; newNode->childs[0] = errorNode(); (yyval. node1 )=newNode;}
#line 1575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 164 "b.y" /* yacc.c:1646  */
    {  printf("opt_else : else_stmt\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "opt_else");    newNode->nChilds=1; newNode->childs[0]=(yyvsp[0]. node1 ); (yyval. node1 )=newNode;}
#line 1581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 165 "b.y" /* yacc.c:1646  */
    { printf("opt_else : epsilon\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "opt_else");    newNode->nChilds=1; newNode->childs[0]=NULL; (yyval. node1 )=newNode;    }
#line 1587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 169 "b.y" /* yacc.c:1646  */
    {  printf("else_stmt : ELSE stmt_list\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "else_stmt");    newNode->nChilds=2; newNode->childs[0]=(yyvsp[-1]. node1);newNode->childs[1]=(yyvsp[0]. node1 ); (yyval. node1 )=newNode; }
#line 1593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 174 "b.y" /* yacc.c:1646  */
    {  printf("expr : expr1 rel\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "expr");    newNode->nChilds=2; newNode->childs[0]=(yyvsp[-1]. node1 );newNode->childs[1]=(yyvsp[0]. node1 ); (yyval. node1 )=newNode;}
#line 1599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 175 "b.y" /* yacc.c:1646  */
    {  printf("expr : LP expr rp\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "expr");    newNode->nChilds=3; newNode->childs[0]=(yyvsp[-2]. node1);newNode->childs[1]=(yyvsp[-1]. node1 );newNode->childs[2]=(yyvsp[0]. node1 ); (yyval. node1 )=newNode;}
#line 1605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 179 "b.y" /* yacc.c:1646  */
    {  printf("rel : operator expr\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "rel");    newNode->nChilds=2; newNode->childs[0]=(yyvsp[-1]. node1 );newNode->childs[1]=(yyvsp[0]. node1 ); (yyval. node1 )=newNode;}
#line 1611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 180 "b.y" /* yacc.c:1646  */
    {  printf("rel : epsilon\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "rel");    newNode->nChilds=1; newNode->childs[0]=NULL; (yyval. node1 )=newNode;}
#line 1617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 184 "b.y" /* yacc.c:1646  */
    {  printf("operator : LTE\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "operator");    newNode->nChilds=1; newNode->childs[0]=(yyvsp[0]. node1); (yyval. node1 )=newNode;}
#line 1623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 185 "b.y" /* yacc.c:1646  */
    {  printf("operator : GTE\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "operator");    newNode->nChilds=1; newNode->childs[0]=(yyvsp[0]. node1); (yyval. node1 )=newNode;}
#line 1629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 186 "b.y" /* yacc.c:1646  */
    {  printf("operator : EQU\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "operator");    newNode->nChilds=1; newNode->childs[0]=(yyvsp[0]. node1); (yyval. node1 )=newNode;}
#line 1635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 187 "b.y" /* yacc.c:1646  */
    {  printf("operator : GT\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "operator");    newNode->nChilds=1; newNode->childs[0]=(yyvsp[0]. node1); (yyval. node1 )=newNode;}
#line 1641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 188 "b.y" /* yacc.c:1646  */
    {  printf("operator : LT\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "operator");    newNode->nChilds=1; newNode->childs[0]=(yyvsp[0]. node1); (yyval. node1 )=newNode;}
#line 1647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 192 "b.y" /* yacc.c:1646  */
    {  printf("expr1 : expr2 add_sub\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "expr1");    newNode->nChilds=2; newNode->childs[0]=(yyvsp[-1]. node1 );newNode->childs[1]=(yyvsp[0]. node1 ); (yyval. node1 )=newNode; }
#line 1653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 196 "b.y" /* yacc.c:1646  */
    {  printf("add_sub : PLUS expr\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "add_sub");    newNode->nChilds=2; newNode->childs[0]=(yyvsp[-1]. node1);newNode->childs[1]=(yyvsp[0]. node1 ); (yyval. node1 )=newNode;}
#line 1659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 197 "b.y" /* yacc.c:1646  */
    {  printf("add_sub : MINUS expr\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "add_sub");    newNode->nChilds=2; newNode->childs[0]=(yyvsp[-1]. node1);newNode->childs[1]=(yyvsp[0]. node1 ); (yyval. node1 )=newNode;}
#line 1665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 198 "b.y" /* yacc.c:1646  */
    {  printf("add_sub : epsilon\n");  struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "add_sub");    newNode->nChilds=1; newNode->childs[0] =NULL; (yyval. node1 )=newNode;}
#line 1671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 202 "b.y" /* yacc.c:1646  */
    {  printf("expr2 : expr3 mul_div\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "expr2");    newNode->nChilds=2; newNode->childs[0]=(yyvsp[-1]. node1 );newNode->childs[1]=(yyvsp[0]. node1 ); (yyval. node1 )=newNode; }
#line 1677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 206 "b.y" /* yacc.c:1646  */
    {  printf("mul_div : TIMES expr\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "mul_div");    newNode->nChilds=2; newNode->childs[0]=(yyvsp[-1]. node1);newNode->childs[1]=(yyvsp[0]. node1 ); (yyval. node1 )=newNode;}
#line 1683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 207 "b.y" /* yacc.c:1646  */
    {  printf("mul_div : DIV expr\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "mul_div");    newNode->nChilds=2; newNode->childs[0]=(yyvsp[-1]. node1); newNode->childs[1]=(yyvsp[0]. node1 ); (yyval. node1 )=newNode;}
#line 1689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 208 "b.y" /* yacc.c:1646  */
    {  printf("mul_div : epsilon\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "mul_div");    newNode->nChilds=1; newNode->childs[0] = NULL; (yyval. node1 )=newNode;}
#line 1695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 212 "b.y" /* yacc.c:1646  */
    {  printf("expr3 : NEGATION expr\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "expr3");    newNode->nChilds=2; newNode->childs[0]=(yyvsp[-1]. node1);newNode->childs[1]=(yyvsp[0]. node1 ); (yyval. node1 )=newNode;}
#line 1701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 213 "b.y" /* yacc.c:1646  */
    {  printf("expr3 : term\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "expr3");    newNode->nChilds=1; newNode->childs[0]=(yyvsp[0]. node1 ); (yyval. node1 )=newNode; }
#line 1707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 216 "b.y" /* yacc.c:1646  */
    {  printf("term : ID\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "term");    newNode->nChilds=1; newNode->childs[0] = (yyvsp[0]. node1); (yyval. node1 )=newNode; }
#line 1713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 217 "b.y" /* yacc.c:1646  */
    {  printf("term : NUM\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "term");    newNode->nChilds=1; newNode->childs[0] = (yyvsp[0]. node1 ); (yyval. node1 )=newNode; }
#line 1719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 218 "b.y" /* yacc.c:1646  */
    {   printf("term : func_call\n");   struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "term");    newNode->nChilds=1; newNode->childs[0] = (yyvsp[0]. node1 ); (yyval. node1 )=newNode;}
#line 1725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 219 "b.y" /* yacc.c:1646  */
    {   printf("term : CHARACTER\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "term");    newNode->nChilds=1; newNode->childs[0] = (yyvsp[0]. node1); (yyval. node1 )=newNode;}
#line 1731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 222 "b.y" /* yacc.c:1646  */
    {  printf("opt_stmt_list : stmt_list\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "opt_stmt_list");    newNode->nChilds=1; newNode->childs[0] = (yyvsp[0]. node1 ); (yyval. node1 )=newNode;}
#line 1737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 223 "b.y" /* yacc.c:1646  */
    {  printf("opt_stmt_list : epsilon\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "opt_stmt_list");    newNode->nChilds=1; newNode->childs[0]=NULL; (yyval. node1 )=newNode;}
#line 1743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 227 "b.y" /* yacc.c:1646  */
    {  printf("var_decl : datatype id_list\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "var_decl");    newNode->nChilds=2; newNode->childs[0] = (yyvsp[-1]. node1 ); newNode->childs[1] = (yyvsp[0]. node1 ); (yyval. node1 )=newNode;}
#line 1749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 231 "b.y" /* yacc.c:1646  */
    {  printf("id_list : ID COMMA id_list \n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "id_list");    newNode->nChilds=3; newNode->childs[0] = (yyvsp[-2]. node1); newNode->childs[1] = (yyvsp[-1]. node1); newNode->childs[2]=(yyvsp[0]. node1 );  (yyval. node1 )=newNode;}
#line 1755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 232 "b.y" /* yacc.c:1646  */
    {  printf("id_list : ID\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "id_list");    newNode->nChilds=1; newNode->childs[0] = (yyvsp[0]. node1); (yyval. node1 )=newNode;}
#line 1761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 236 "b.y" /* yacc.c:1646  */
    {  printf("datatype : INT\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "datatype");    newNode->nChilds=1; newNode->childs[0] = (yyvsp[0]. node1); (yyval. node1 )=newNode;}
#line 1767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 237 "b.y" /* yacc.c:1646  */
    {  printf("datatype : BOOL\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "datatype");    newNode->nChilds=1; newNode->childs[0] = (yyvsp[0]. node1); (yyval. node1 )=newNode; }
#line 1773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 238 "b.y" /* yacc.c:1646  */
    {  printf("datatype : CHAR\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "datatype");    newNode->nChilds=1; newNode->childs[0] = (yyvsp[0]. node1); (yyval. node1 )=newNode;}
#line 1779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 242 "b.y" /* yacc.c:1646  */
    {  printf("func_call : ID LP opt_expr_list rp\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "func_call");    newNode->nChilds=4; newNode->childs[0] = (yyvsp[-3]. node1); newNode->childs[1]=(yyvsp[-2]. node1); newNode->childs[2]=(yyvsp[-1]. node1 ); newNode->childs[3] = (yyvsp[0]. node1 ); (yyval. node1 )=newNode;}
#line 1785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 245 "b.y" /* yacc.c:1646  */
    {  printf("opt_expr_list : expr_list\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "opt_expr_list");    newNode->nChilds=1; newNode->childs[0] = (yyvsp[0]. node1 ); (yyval. node1 )=newNode;}
#line 1791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 246 "b.y" /* yacc.c:1646  */
    {  printf("opt_expr_list : epsilon\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "opt_expr_list");    newNode->nChilds=1; newNode->childs[0] = NULL; (yyval. node1 )=newNode;}
#line 1797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 249 "b.y" /* yacc.c:1646  */
    {  printf("expr_list : expr COMMA expr_list\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "expr_list");    newNode->nChilds=3; newNode->childs[0] = (yyvsp[-2]. node1 ); newNode->childs[1]= (yyvsp[-1]. node1); newNode->childs[2]=(yyvsp[0]. node1 ); (yyval. node1 )=newNode;}
#line 1803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 250 "b.y" /* yacc.c:1646  */
    {  printf("expr_list : expr\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "expr_list");    newNode->nChilds=1; newNode->childs[0] = (yyvsp[0]. node1 ); (yyval. node1 )=newNode;}
#line 1809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 253 "b.y" /* yacc.c:1646  */
    {  printf("io : CIN gg ID\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "io");    newNode->nChilds=3; newNode->childs[0] = (yyvsp[-2]. node1); newNode->childs[1] = (yyvsp[-1]. node1 ); newNode->childs[2] = (yyvsp[0]. node1); (yyval. node1 )=newNode;}
#line 1815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 255 "b.y" /* yacc.c:1646  */
    {   printf("io : COUT ll expr\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "io");    newNode->nChilds=3; newNode->childs[0] = (yyvsp[-2]. node1); newNode->childs[1] = (yyvsp[-1]. node1 ); newNode->childs[2] = (yyvsp[0]. node1 ); (yyval. node1 )=newNode;}
#line 1821 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 258 "b.y" /* yacc.c:1646  */
    {   printf("gg : GG\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "gg");    newNode->nChilds=1; newNode->childs[0] = (yyvsp[0]. node1); (yyval. node1 )=newNode;}
#line 1827 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 259 "b.y" /* yacc.c:1646  */
    {  yyerror("stream direction missing ");  struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "gg");    newNode->nChilds=1; newNode->childs[0] = errorNode(); (yyval. node1 )=newNode;}
#line 1833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 263 "b.y" /* yacc.c:1646  */
    {   printf("ll : LL\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "ll");    newNode->nChilds=1; newNode->childs[0] = (yyvsp[0]. node1); (yyval. node1 )=newNode;}
#line 1839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 264 "b.y" /* yacc.c:1646  */
    {  yyerror("stream direction missing ");  struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "ll");    newNode->nChilds=1; newNode->childs[0] = errorNode(); (yyval. node1 )=newNode;}
#line 1845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 267 "b.y" /* yacc.c:1646  */
    {   printf("rp : RP\n"); struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "rp");    newNode->nChilds=1; newNode->childs[0] = (yyvsp[0]. node1); (yyval. node1 )=newNode;}
#line 1851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 268 "b.y" /* yacc.c:1646  */
    {  yyerror("right parenthesis missing ");  struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "rp");    newNode->nChilds=1; newNode->childs[0] = errorNode(); (yyval. node1 )=newNode;}
#line 1857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 273 "b.y" /* yacc.c:1646  */
    {  printf("colon : COLON\n");  struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "colon");    newNode->nChilds=1; newNode->childs[0] = (yyvsp[0]. node1); (yyval. node1 )=newNode;}
#line 1863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 274 "b.y" /* yacc.c:1646  */
    {  yyerror("colon missing ");  struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "colon");    newNode->nChilds=1; newNode->childs[0] = errorNode(); (yyval. node1 )=newNode;}
#line 1869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 277 "b.y" /* yacc.c:1646  */
    {  printf("semi : SEMI\n");  struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "semi");    newNode->nChilds=1; newNode->childs[0] = (yyvsp[0]. node1); (yyval. node1 )=newNode;}
#line 1875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 278 "b.y" /* yacc.c:1646  */
    {  yyerror("semicolon missing ");  struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "semi");    newNode->nChilds=1; newNode->childs[0] = errorNode(); (yyval. node1 )=newNode;}
#line 1881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 281 "b.y" /* yacc.c:1646  */
    {  printf("end : END\n");  struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "end");    newNode->nChilds=1; newNode->childs[0] = (yyvsp[0]. node1); (yyval. node1 )=newNode;}
#line 1887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 282 "b.y" /* yacc.c:1646  */
    {  yyerror("end missing ");  struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "end");    newNode->nChilds=1; newNode->childs[0] = errorNode(); (yyval. node1 )=newNode;}
#line 1893 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 286 "b.y" /* yacc.c:1646  */
    {  printf("do : DO\n");  struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "do");    newNode->nChilds=1; newNode->childs[0] = (yyvsp[0]. node1); (yyval. node1 )=newNode;}
#line 1899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 287 "b.y" /* yacc.c:1646  */
    {  yyerror("do missing ");  struct node *newNode = (struct node *)malloc(sizeof(struct node)); newNode->isToken=0;  strcpy(newNode->name, "do");    newNode->nChilds=1; newNode->childs[0] = errorNode(); (yyval. node1 )=newNode;}
#line 1905 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1909 "y.tab.c" /* yacc.c:1646  */
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
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

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
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
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

  /* Do not reclaim the symbols of the rule whose action triggered
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


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 304 "b.y" /* yacc.c:1906  */


void yyerror(char *s) {
    fprintf(stderr, "ERROR: %s at line no. %d\n", s, lineno );
}


void updateChild(struct node *newNode, struct node *a, struct node *b, struct node *c, struct node *d, struct node *e, struct node *f, struct node *g, struct node *h, struct node *i, struct node *j)
    {
        int n=newNode->nChilds;
        if(n>=1)
            newNode->childs[0]=a;
        if(n>=2)
            newNode->childs[1]=b;
        if(n>=3)
            newNode->childs[2]=c;
        if(n>=4)
            newNode->childs[3]=d;
        if(n>=5)
            newNode->childs[4]=e;
        if(n>=6)
            newNode->childs[5]=f;
        if(n>=7)
            newNode->childs[6]=g;
        if(n>=8)
            newNode->childs[7]=h;
        if(n>=9)
            newNode->childs[8]=i;
        if(n>=10)
            newNode->childs[9]=j;
        
    }

    
    
struct node *errorNode()
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    strcpy(newNode->name, "error");
    newNode->nChilds=0;
    
}

void push(struct node *n)
{
    bfs[start]=n;
    start++;
    start%=500;
    
}
struct node *pop()
{
    int temp=end;
    end = (++end)%500;
    return bfs[temp];
}

printTree(struct node *root)
{
    FILE *fp = fopen("treeOut.txt", "w+");
    push(root);
    int next_nodes=1,i,j,curr_nodes=1;
    struct node *temp;
    while(start !=end)
    {
        curr_nodes = next_nodes;
        next_nodes = 0;
        for(j=0;j<curr_nodes;j++)
        {
            temp = pop();
            if(temp == NULL)
            {
                fprintf(fp, " epsilon ");
                continue;
            }
            else if( strcmp( temp -> name, "error") == 0 )
                fprintf(fp, " (error production) ");
            else if( temp->nChilds == 1 && temp->childs[0] == NULL )
            {
                fprintf(fp, " %s ( %d ) ", temp->name, temp->nChilds);
                
            }
            else if(temp -> isToken)
                fprintf(fp, "(%s: \"%s\", \"%d\") ", temp->name, temp->tokValue, temp->nChilds);
            else
                fprintf(fp, "(%s, \"%d\") ", temp->name, temp->nChilds);
            next_nodes += temp->nChilds;
            for(i=0; i<temp->nChilds; i++)
            {
                push(temp->childs[i]);
            }
        }
        fprintf(fp, "\n");
    }
    fclose(fp);
}


int main(void) {
    yyparse();
    
    printTree(root);
    return 0;
}
