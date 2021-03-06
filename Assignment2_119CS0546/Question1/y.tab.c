/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "Question1.y"

	#include <stdio.h>
	#include <math.h>
	#include <string.h>
	#include "symtable.h"
	
	_Bool errFlag = 0;
	double ans = NAN;
	
	int yylex(void);
	void yyerror(const char *s);
	void err(const char *s);

#line 84 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
    VAR = 258,
    FLOAT = 259,
    INT = 260,
    ANS = 261,
    SQR = 262,
    CUBE = 263,
    SQRT = 264,
    CBRT = 265,
    LOG10 = 266,
    LN = 267,
    INV = 268,
    ABS = 269,
    EXP = 270,
    LOG = 271,
    SIN = 272,
    COS = 273,
    TAN = 274,
    SEC = 275,
    CSC = 276,
    COT = 277,
    ASIN = 278,
    ACOS = 279,
    ATAN = 280,
    ASEC = 281,
    ACSC = 282,
    ACOT = 283,
    SINH = 284,
    COSH = 285,
    TANH = 286,
    SECH = 287,
    CSCH = 288,
    COTH = 289,
    ASINH = 290,
    ACOSH = 291,
    ATANH = 292,
    ASECH = 293,
    ACSCH = 294,
    ACOTH = 295,
    FLOOR = 296,
    CEIL = 297,
    FRAC = 298,
    SET = 299,
    QUIT = 300,
    NL = 301
  };
#endif
/* Tokens.  */
#define VAR 258
#define FLOAT 259
#define INT 260
#define ANS 261
#define SQR 262
#define CUBE 263
#define SQRT 264
#define CBRT 265
#define LOG10 266
#define LN 267
#define INV 268
#define ABS 269
#define EXP 270
#define LOG 271
#define SIN 272
#define COS 273
#define TAN 274
#define SEC 275
#define CSC 276
#define COT 277
#define ASIN 278
#define ACOS 279
#define ATAN 280
#define ASEC 281
#define ACSC 282
#define ACOT 283
#define SINH 284
#define COSH 285
#define TANH 286
#define SECH 287
#define CSCH 288
#define COTH 289
#define ASINH 290
#define ACOSH 291
#define ATANH 292
#define ASECH 293
#define ACSCH 294
#define ACOTH 295
#define FLOOR 296
#define CEIL 297
#define FRAC 298
#define SET 299
#define QUIT 300
#define NL 301

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 15 "Question1.y"

	double doubleVal;
	char * strVal;

#line 233 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  101
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   641

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  6
/* YYNRULES -- Number of rules.  */
#define YYNRULES  67
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  205

#define YYUNDEFTOK  2
#define YYMAXUTOK   301


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    47,     2,     2,     2,    52,     2,     2,
      54,    55,    50,    49,    60,    48,     2,    51,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    56,     2,    57,    53,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    58,     2,    59,     2,     2,     2,     2,
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
static const yytype_int16 yyrline[] =
{
       0,    35,    35,    36,    37,    43,    49,    55,    63,    66,
      67,    68,    69,    75,    83,    84,    95,    96,    97,    98,
      99,   100,   106,   107,   113,   119,   125,   126,   127,   136,
     137,   138,   139,   140,   146,   152,   158,   164,   165,   171,
     177,   178,   179,   180,   181,   182,   188,   194,   195,   201,
     208,   214,   220,   227,   228,   229,   230,   231,   232,   238,
     239,   240,   243,   256,   269,   282,   283,   290
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "VAR", "FLOAT", "INT", "ANS", "SQR",
  "CUBE", "SQRT", "CBRT", "LOG10", "LN", "INV", "ABS", "EXP", "LOG", "SIN",
  "COS", "TAN", "SEC", "CSC", "COT", "ASIN", "ACOS", "ATAN", "ASEC",
  "ACSC", "ACOT", "SINH", "COSH", "TANH", "SECH", "CSCH", "COTH", "ASINH",
  "ACOSH", "ATANH", "ASECH", "ACSCH", "ACOTH", "FLOOR", "CEIL", "FRAC",
  "SET", "QUIT", "NL", "'!'", "'-'", "'+'", "'*'", "'/'", "'%'", "'^'",
  "'('", "')'", "'['", "']'", "'{'", "'}'", "','", "$accept", "CALC", "S",
  "EXPR", "NUMBER", "NUM", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,    33,    45,    43,
      42,    47,    37,    94,    40,    41,    91,    93,   123,   125,
      44
};
# endif

#define YYPACT_NINF (-48)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-5)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     124,     3,   -48,   108,   -48,    62,    65,    67,    75,   117,
     120,   121,   122,   123,   125,   131,   170,   172,   173,   176,
     177,   178,   179,   181,   183,   193,   194,   195,   196,   197,
     207,   208,   209,   210,   220,   221,   582,   583,   584,   585,
     586,   587,    63,   -48,   -48,   111,   111,   180,   180,   180,
     246,    64,     4,   -48,   -48,     0,   180,   180,   180,   180,
     180,   180,   180,   180,   180,   180,   180,   180,   180,   180,
     180,   180,   180,   180,   180,   180,   180,   180,   180,   180,
     180,   180,   180,   180,   180,   180,   180,   180,   180,   180,
     180,   180,   180,   180,   180,   -48,   -48,   -48,   230,   219,
     206,   -48,   -48,   -48,   -48,   180,   180,   180,   180,   180,
     180,   -48,   256,   269,   239,   248,   257,   266,   275,   284,
     293,   302,   311,   192,   320,   329,   338,   347,   356,   365,
     374,   383,   392,   401,   410,   419,   428,   437,   446,   455,
     464,   473,   482,   491,   500,   509,   518,   527,   536,   545,
     554,   573,   581,   -48,   -48,   -48,   -45,   -45,   231,   231,
     231,   231,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   180,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   563,   -48
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    58,    67,    65,    66,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    57,     8,     0,     0,     0,     0,     0,
       0,     0,     0,    56,    61,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    60,    59,    58,     0,     0,
       0,     1,     3,     7,    15,     0,     0,     0,     0,     0,
       0,    62,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    16,    17,    18,    10,     9,    11,    12,
      13,    14,    64,    63,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,     6,     5,     0,    28
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -48,   242,   -48,   -47,   -48,    78
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    50,    51,    52,    53,    54
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      98,    99,   100,    -4,   111,   107,   108,   109,   110,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   112,   113,
     103,   104,   105,   106,   107,   108,   109,   110,   156,   157,
     158,   159,   160,   161,    -2,     1,    93,     2,     3,    94,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    55,    45,    46,     2,     3,    56,     4,    47,    57,
      48,    58,    49,    95,    96,     1,   203,     2,     3,    59,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    60,    45,    46,    61,    62,    63,    64,    47,    65,
      48,    97,    49,     2,     3,    66,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    67,    43,    68,    69,    45,    46,
      70,    71,    72,    73,    47,    74,    48,    75,    49,   104,
     105,   106,   107,   108,   109,   110,   101,    76,    77,    78,
      79,    80,   173,   104,   105,   106,   107,   108,   109,   110,
     162,    81,    82,    83,    84,   155,   104,   105,   106,   107,
     108,   109,   110,   163,    85,    86,   154,   104,   105,   106,
     107,   108,   109,   110,   110,   153,   104,   105,   106,   107,
     108,   109,   110,   102,   164,   104,   105,   106,   107,   108,
     109,   110,     0,   165,   104,   105,   106,   107,   108,   109,
     110,     0,   166,   104,   105,   106,   107,   108,   109,   110,
       0,   167,   104,   105,   106,   107,   108,   109,   110,     0,
     168,   104,   105,   106,   107,   108,   109,   110,     0,   169,
     104,   105,   106,   107,   108,   109,   110,     0,   170,   104,
     105,   106,   107,   108,   109,   110,     0,   171,   104,   105,
     106,   107,   108,   109,   110,     0,   172,   104,   105,   106,
     107,   108,   109,   110,     0,   174,   104,   105,   106,   107,
     108,   109,   110,     0,   175,   104,   105,   106,   107,   108,
     109,   110,     0,   176,   104,   105,   106,   107,   108,   109,
     110,     0,   177,   104,   105,   106,   107,   108,   109,   110,
       0,   178,   104,   105,   106,   107,   108,   109,   110,     0,
     179,   104,   105,   106,   107,   108,   109,   110,     0,   180,
     104,   105,   106,   107,   108,   109,   110,     0,   181,   104,
     105,   106,   107,   108,   109,   110,     0,   182,   104,   105,
     106,   107,   108,   109,   110,     0,   183,   104,   105,   106,
     107,   108,   109,   110,     0,   184,   104,   105,   106,   107,
     108,   109,   110,     0,   185,   104,   105,   106,   107,   108,
     109,   110,     0,   186,   104,   105,   106,   107,   108,   109,
     110,     0,   187,   104,   105,   106,   107,   108,   109,   110,
       0,   188,   104,   105,   106,   107,   108,   109,   110,     0,
     189,   104,   105,   106,   107,   108,   109,   110,     0,   190,
     104,   105,   106,   107,   108,   109,   110,     0,   191,   104,
     105,   106,   107,   108,   109,   110,     0,   192,   104,   105,
     106,   107,   108,   109,   110,     0,   193,   104,   105,   106,
     107,   108,   109,   110,     0,   194,   104,   105,   106,   107,
     108,   109,   110,     0,   195,   104,   105,   106,   107,   108,
     109,   110,     0,   196,   104,   105,   106,   107,   108,   109,
     110,     0,   197,   104,   105,   106,   107,   108,   109,   110,
       0,   198,   104,   105,   106,   107,   108,   109,   110,     0,
     199,   104,   105,   106,   107,   108,   109,   110,     0,   200,
     104,   105,   106,   107,   108,   109,   110,     0,   204,   201,
     104,   105,   106,   107,   108,   109,   110,   202,   104,   105,
     106,   107,   108,   109,   110,     0,    87,    88,    89,    90,
      91,    92
};

static const yytype_int16 yycheck[] =
{
      47,    48,    49,     0,     4,    50,    51,    52,    53,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    48,    49,
      46,    47,    48,    49,    50,    51,    52,    53,   105,   106,
     107,   108,   109,   110,     0,     1,     3,     3,     4,     6,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,     3,    48,    49,     3,     4,    54,     6,    54,    54,
      56,    54,    58,    45,    46,     1,   173,     3,     4,    54,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    54,    48,    49,    54,    54,    54,    54,    54,    54,
      56,     1,    58,     3,     4,    54,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    54,    45,    54,    54,    48,    49,
      54,    54,    54,    54,    54,    54,    56,    54,    58,    47,
      48,    49,    50,    51,    52,    53,     0,    54,    54,    54,
      54,    54,    60,    47,    48,    49,    50,    51,    52,    53,
       4,    54,    54,    54,    54,    59,    47,    48,    49,    50,
      51,    52,    53,     4,    54,    54,    57,    47,    48,    49,
      50,    51,    52,    53,    53,    55,    47,    48,    49,    50,
      51,    52,    53,    51,    55,    47,    48,    49,    50,    51,
      52,    53,    -1,    55,    47,    48,    49,    50,    51,    52,
      53,    -1,    55,    47,    48,    49,    50,    51,    52,    53,
      -1,    55,    47,    48,    49,    50,    51,    52,    53,    -1,
      55,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
      47,    48,    49,    50,    51,    52,    53,    -1,    55,    47,
      48,    49,    50,    51,    52,    53,    -1,    55,    47,    48,
      49,    50,    51,    52,    53,    -1,    55,    47,    48,    49,
      50,    51,    52,    53,    -1,    55,    47,    48,    49,    50,
      51,    52,    53,    -1,    55,    47,    48,    49,    50,    51,
      52,    53,    -1,    55,    47,    48,    49,    50,    51,    52,
      53,    -1,    55,    47,    48,    49,    50,    51,    52,    53,
      -1,    55,    47,    48,    49,    50,    51,    52,    53,    -1,
      55,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
      47,    48,    49,    50,    51,    52,    53,    -1,    55,    47,
      48,    49,    50,    51,    52,    53,    -1,    55,    47,    48,
      49,    50,    51,    52,    53,    -1,    55,    47,    48,    49,
      50,    51,    52,    53,    -1,    55,    47,    48,    49,    50,
      51,    52,    53,    -1,    55,    47,    48,    49,    50,    51,
      52,    53,    -1,    55,    47,    48,    49,    50,    51,    52,
      53,    -1,    55,    47,    48,    49,    50,    51,    52,    53,
      -1,    55,    47,    48,    49,    50,    51,    52,    53,    -1,
      55,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
      47,    48,    49,    50,    51,    52,    53,    -1,    55,    47,
      48,    49,    50,    51,    52,    53,    -1,    55,    47,    48,
      49,    50,    51,    52,    53,    -1,    55,    47,    48,    49,
      50,    51,    52,    53,    -1,    55,    47,    48,    49,    50,
      51,    52,    53,    -1,    55,    47,    48,    49,    50,    51,
      52,    53,    -1,    55,    47,    48,    49,    50,    51,    52,
      53,    -1,    55,    47,    48,    49,    50,    51,    52,    53,
      -1,    55,    47,    48,    49,    50,    51,    52,    53,    -1,
      55,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
      47,    48,    49,    50,    51,    52,    53,    -1,    55,    46,
      47,    48,    49,    50,    51,    52,    53,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    54,    54,    54,    54,
      54,    54
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     3,     4,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    48,    49,    54,    56,    58,
      62,    63,    64,    65,    66,     3,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,     3,     6,    66,    66,     1,    64,    64,
      64,     0,    62,    46,    47,    48,    49,    50,    51,    52,
      53,     4,    48,    49,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    55,    57,    59,    64,    64,    64,    64,
      64,    64,     4,     4,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    60,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    46,    46,    64,    55
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    61,    62,    62,    62,    63,    63,    63,    63,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    65,
      65,    65,    66,    66,    66,    66,    66,    66
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     4,     4,     2,     1,     3,
       3,     3,     3,     3,     3,     2,     3,     3,     3,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     6,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     1,     1,     1,     2,
       2,     1,     3,     4,     4,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 4:
#line 37 "Question1.y"
                {
		yyerrok;
		yyclearin;
	}
#line 1621 "y.tab.c"
    break;

  case 5:
#line 43 "Question1.y"
                    {
		if (!isnan((yyvsp[-1].doubleVal))) {
			printf("ans=%lf\n", (yyvsp[-1].doubleVal));
			ans = (yyvsp[-1].doubleVal);
		} else
			errFlag = 0;
	}
#line 1633 "y.tab.c"
    break;

  case 6:
#line 49 "Question1.y"
                            {
		if (!isnan((yyvsp[-1].doubleVal))) {
			printf("%s=%lf\n", (yyvsp[-2].strVal), (yyvsp[-1].doubleVal));
			addVar((yyvsp[-2].strVal), (yyvsp[-1].doubleVal));
		} else
			errFlag = 0;
	}
#line 1645 "y.tab.c"
    break;

  case 7:
#line 55 "Question1.y"
                    {
		if (errFlag)
			errFlag = 0;
		else {
			printf("ans=%lf\n", (yyvsp[-1].doubleVal));
			ans = (yyvsp[-1].doubleVal);
		}
	}
#line 1658 "y.tab.c"
    break;

  case 9:
#line 66 "Question1.y"
                     {(yyval.doubleVal) = (yyvsp[-2].doubleVal) + (yyvsp[0].doubleVal);}
#line 1664 "y.tab.c"
    break;

  case 10:
#line 67 "Question1.y"
                        {(yyval.doubleVal) = (yyvsp[-2].doubleVal) - (yyvsp[0].doubleVal);}
#line 1670 "y.tab.c"
    break;

  case 11:
#line 68 "Question1.y"
                        {(yyval.doubleVal) = (yyvsp[-2].doubleVal) * (yyvsp[0].doubleVal);}
#line 1676 "y.tab.c"
    break;

  case 12:
#line 69 "Question1.y"
                        {
		if ((yyvsp[0].doubleVal) == 0) {
			(yyval.doubleVal) = NAN;
			err("Division by 0 not allowed.\n");
		} else
			(yyval.doubleVal) = (yyvsp[-2].doubleVal) / (yyvsp[0].doubleVal);
	}
#line 1688 "y.tab.c"
    break;

  case 13:
#line 75 "Question1.y"
                          {
		double x1 = (yyvsp[-2].doubleVal), x2 = (yyvsp[0].doubleVal);
		if (x1 == (int)x1 && x2 == (int)x2)
			(yyval.doubleVal) = (int)x1 % (int)x2;
		else {
			(yyval.doubleVal) = NAN;
			err("Floating point modulo not supported\n");
		}
	}
#line 1702 "y.tab.c"
    break;

  case 14:
#line 83 "Question1.y"
                          {(yyval.doubleVal) = pow((yyvsp[-2].doubleVal), (yyvsp[0].doubleVal));}
#line 1708 "y.tab.c"
    break;

  case 15:
#line 84 "Question1.y"
                   {
		int reqNum = (yyvsp[-1].doubleVal);
		if (reqNum == 0) {(yyval.doubleVal) = 1;}
		else if (reqNum > 0 && reqNum == (int)reqNum) {
			ans = 1;
			for (int i = 1; i <= reqNum; ans *= i, i++);
			(yyval.doubleVal) = ans;
		} else {
			(yyval.doubleVal) = NAN;
			err("Factorial does not support floating point\n");
		}
	}
#line 1725 "y.tab.c"
    break;

  case 16:
#line 95 "Question1.y"
                         {(yyval.doubleVal) = (yyvsp[-1].doubleVal);}
#line 1731 "y.tab.c"
    break;

  case 17:
#line 96 "Question1.y"
                       {(yyval.doubleVal) = (yyvsp[-1].doubleVal);}
#line 1737 "y.tab.c"
    break;

  case 18:
#line 97 "Question1.y"
                       {(yyval.doubleVal) = (yyvsp[-1].doubleVal);}
#line 1743 "y.tab.c"
    break;

  case 19:
#line 98 "Question1.y"
                           {(yyval.doubleVal) = pow((yyvsp[-1].doubleVal), 2);}
#line 1749 "y.tab.c"
    break;

  case 20:
#line 99 "Question1.y"
                            {(yyval.doubleVal) = pow((yyvsp[-1].doubleVal), 3);}
#line 1755 "y.tab.c"
    break;

  case 21:
#line 100 "Question1.y"
                            {
		if ((yyvsp[-1].doubleVal) < 0) {
			(yyval.doubleVal) = NAN;
			err("sqrt of negative number not supported.\n");
		} else
			(yyval.doubleVal) = pow((yyvsp[-1].doubleVal), 0.5);
	}
#line 1767 "y.tab.c"
    break;

  case 22:
#line 106 "Question1.y"
                              {(yyval.doubleVal) = pow((yyvsp[-1].doubleVal), 1/3);}
#line 1773 "y.tab.c"
    break;

  case 23:
#line 107 "Question1.y"
                             {
		if ((yyvsp[-1].doubleVal) < 0) {
			(yyval.doubleVal) = NAN;
			err("log10 of negative number not supported.\n");
		} else
			(yyval.doubleVal) = log10((yyvsp[-1].doubleVal));
	}
#line 1785 "y.tab.c"
    break;

  case 24:
#line 113 "Question1.y"
                            {
		if ((yyvsp[-1].doubleVal) < 0) {
			(yyval.doubleVal) = NAN;
			err("ln of negative number not supported.\n");
		} else
			(yyval.doubleVal) = log((yyvsp[-1].doubleVal));
	}
#line 1797 "y.tab.c"
    break;

  case 25:
#line 119 "Question1.y"
                             {
		if ((yyvsp[-1].doubleVal) == 0) {
			(yyval.doubleVal) = NAN;
			err("inv(0) not supported.\n");
		} else
			(yyval.doubleVal) = 1 / (yyvsp[-1].doubleVal);
	}
#line 1809 "y.tab.c"
    break;

  case 26:
#line 125 "Question1.y"
                             {return fabs((yyvsp[-1].doubleVal));}
#line 1815 "y.tab.c"
    break;

  case 27:
#line 126 "Question1.y"
                           {return exp((yyvsp[-1].doubleVal));}
#line 1821 "y.tab.c"
    break;

  case 28:
#line 127 "Question1.y"
                                    {
		if ((yyvsp[-3].doubleVal) < 0 || (yyvsp[-1].doubleVal) < 0) {
			(yyval.doubleVal) = NAN;
			err("log of negative number not supported.\n");
		} else if ((yyvsp[-1].doubleVal) == 1) {
			(yyval.doubleVal) = NAN;
			err("Division by 0 not allowed.\n");
		} else
			(yyval.doubleVal) = log((yyvsp[-3].doubleVal)) / log((yyvsp[-1].doubleVal));
	}
#line 1836 "y.tab.c"
    break;

  case 29:
#line 136 "Question1.y"
                             {(yyval.doubleVal) = sin((yyvsp[-1].doubleVal));}
#line 1842 "y.tab.c"
    break;

  case 30:
#line 137 "Question1.y"
                           {(yyval.doubleVal) = cos((yyvsp[-1].doubleVal));}
#line 1848 "y.tab.c"
    break;

  case 31:
#line 138 "Question1.y"
                           {(yyval.doubleVal) = tan((yyvsp[-1].doubleVal));}
#line 1854 "y.tab.c"
    break;

  case 32:
#line 139 "Question1.y"
                           {(yyval.doubleVal) = 1 / cos((yyvsp[-1].doubleVal));}
#line 1860 "y.tab.c"
    break;

  case 33:
#line 140 "Question1.y"
                           {
		if ((yyvsp[-1].doubleVal) == 0) {
			(yyval.doubleVal) = NAN;
			err("csc(0) undefined\n");
		} else
			(yyval.doubleVal) = 1 / sin((yyvsp[-1].doubleVal));
	}
#line 1872 "y.tab.c"
    break;

  case 34:
#line 146 "Question1.y"
                             {
		if ((yyvsp[-1].doubleVal) == 0) {
			(yyval.doubleVal) = NAN;
			err("cot(0) undefined\n");
		} else
			(yyval.doubleVal) = 1 / tan((yyvsp[-1].doubleVal));
	}
#line 1884 "y.tab.c"
    break;

  case 35:
#line 152 "Question1.y"
                              {
		if ((yyvsp[-1].doubleVal) > 1 || (yyvsp[-1].doubleVal) < -1) {
			(yyval.doubleVal) = NAN;
			err("Domain of asin out of bounds.\n");
		} else
			(yyval.doubleVal) = asin((yyvsp[-1].doubleVal));
	}
#line 1896 "y.tab.c"
    break;

  case 36:
#line 158 "Question1.y"
                              {
		if ((yyvsp[-1].doubleVal) > 1 || (yyvsp[-1].doubleVal) < -1) {
			(yyval.doubleVal) = NAN;
			err("Domain of acos out of bounds.\n");
		} else
			(yyval.doubleVal) = acos((yyvsp[-1].doubleVal));
	}
#line 1908 "y.tab.c"
    break;

  case 37:
#line 164 "Question1.y"
                              {(yyval.doubleVal) = atan((yyvsp[-1].doubleVal));}
#line 1914 "y.tab.c"
    break;

  case 38:
#line 165 "Question1.y"
                            {
		if ((yyvsp[-1].doubleVal) < 1 && (yyvsp[-1].doubleVal) > -1) {
			(yyval.doubleVal) = NAN;
			err("Domain of asec out of bounds.\n");
		} else
			(yyval.doubleVal) = acos(1 / (yyvsp[-1].doubleVal));
	}
#line 1926 "y.tab.c"
    break;

  case 39:
#line 171 "Question1.y"
                              {
		if ((yyvsp[-1].doubleVal) < 1 && (yyvsp[-1].doubleVal) > -1) {
			(yyval.doubleVal) = NAN;
			err("Domain of acsc out of bounds.\n");
		} else
			(yyval.doubleVal) = asin(1 / (yyvsp[-1].doubleVal));
	}
#line 1938 "y.tab.c"
    break;

  case 40:
#line 177 "Question1.y"
                              {(yyval.doubleVal) = atan(1 / (yyvsp[-1].doubleVal));}
#line 1944 "y.tab.c"
    break;

  case 41:
#line 178 "Question1.y"
                            {(yyval.doubleVal) = sinh((yyvsp[-1].doubleVal));}
#line 1950 "y.tab.c"
    break;

  case 42:
#line 179 "Question1.y"
                            {(yyval.doubleVal) = cosh((yyvsp[-1].doubleVal));}
#line 1956 "y.tab.c"
    break;

  case 43:
#line 180 "Question1.y"
                            {(yyval.doubleVal) = tanh((yyvsp[-1].doubleVal));}
#line 1962 "y.tab.c"
    break;

  case 44:
#line 181 "Question1.y"
                            {(yyval.doubleVal) = 1 / cosh((yyvsp[-1].doubleVal));}
#line 1968 "y.tab.c"
    break;

  case 45:
#line 182 "Question1.y"
                            {
		if ((yyvsp[-1].doubleVal) == 0) {
			(yyval.doubleVal) = NAN;
			err("csch(0) undefined\n");
		} else
			(yyval.doubleVal) = 1 / sinh((yyvsp[-1].doubleVal));
	}
#line 1980 "y.tab.c"
    break;

  case 46:
#line 188 "Question1.y"
                              {
		if ((yyvsp[-1].doubleVal) == 0) {
			(yyval.doubleVal) = NAN;
			err("coth(0) undefined\n");
		} else
			(yyval.doubleVal) = 1 / tanh((yyvsp[-1].doubleVal));
	}
#line 1992 "y.tab.c"
    break;

  case 47:
#line 194 "Question1.y"
                               {(yyval.doubleVal) = asinh((yyvsp[-1].doubleVal));}
#line 1998 "y.tab.c"
    break;

  case 48:
#line 195 "Question1.y"
                             {
		if ((yyvsp[-1].doubleVal) < 1) {
			(yyval.doubleVal) = NAN;
			err("Domain of acosh out of bounds.\n");
		} else
			(yyval.doubleVal) = acosh((yyvsp[-1].doubleVal));
	}
#line 2010 "y.tab.c"
    break;

  case 49:
#line 201 "Question1.y"
                               {
		if ((yyvsp[-1].doubleVal) > -1 && (yyvsp[-1].doubleVal) < 1)
			(yyval.doubleVal) = atan((yyvsp[-1].doubleVal));
		else {
			(yyval.doubleVal) = NAN;
			err("Domain of atanh out of bounds.\n");
		}
	}
#line 2023 "y.tab.c"
    break;

  case 50:
#line 208 "Question1.y"
                               {
		if ((yyvsp[-1].doubleVal) <= 0 || (yyvsp[-1].doubleVal) > 1) {
			(yyval.doubleVal) = NAN;
			err("Domain of asech out of bounds.\n");
		} else
			(yyval.doubleVal) = acosh(1 / (yyvsp[-1].doubleVal));
	}
#line 2035 "y.tab.c"
    break;

  case 51:
#line 214 "Question1.y"
                               {
		if ((yyvsp[-1].doubleVal) == 0) {
			(yyval.doubleVal) = NAN;
			err("Domain of acsch out of bounds.\n");
		} else
			(yyval.doubleVal) = asin(1 / (yyvsp[-1].doubleVal));
	}
#line 2047 "y.tab.c"
    break;

  case 52:
#line 220 "Question1.y"
                               {
		if ((yyvsp[-1].doubleVal) < -1 || (yyvsp[-1].doubleVal) > 1)
			(yyval.doubleVal) = atanh(1 / (yyvsp[-1].doubleVal));
		else {
			(yyval.doubleVal) = NAN;
			err("Domain of acoth out of bounds.\n");
		}
	}
#line 2060 "y.tab.c"
    break;

  case 53:
#line 227 "Question1.y"
                               {(yyval.doubleVal) = floor((yyvsp[-1].doubleVal));}
#line 2066 "y.tab.c"
    break;

  case 54:
#line 228 "Question1.y"
                            {(yyval.doubleVal) = ceil((yyvsp[-1].doubleVal));}
#line 2072 "y.tab.c"
    break;

  case 55:
#line 229 "Question1.y"
                            {(yyval.doubleVal) = (yyvsp[-1].doubleVal) - floor((yyvsp[-1].doubleVal));}
#line 2078 "y.tab.c"
    break;

  case 56:
#line 230 "Question1.y"
                 {(yyval.doubleVal) = (yyvsp[0].doubleVal);}
#line 2084 "y.tab.c"
    break;

  case 57:
#line 231 "Question1.y"
               {return 0;}
#line 2090 "y.tab.c"
    break;

  case 58:
#line 232 "Question1.y"
                {
		(yyval.doubleVal) = NAN;
		err("Entered arithmetic expression is Invalid\n");
	}
#line 2099 "y.tab.c"
    break;

  case 59:
#line 238 "Question1.y"
                 {(yyval.doubleVal) = (yyvsp[0].doubleVal);}
#line 2105 "y.tab.c"
    break;

  case 60:
#line 239 "Question1.y"
                  {(yyval.doubleVal) = -(yyvsp[0].doubleVal);}
#line 2111 "y.tab.c"
    break;

  case 61:
#line 240 "Question1.y"
              {(yyval.doubleVal) = (yyvsp[0].doubleVal);}
#line 2117 "y.tab.c"
    break;

  case 62:
#line 243 "Question1.y"
                      {
		if (!strcmp((yyvsp[-1].strVal), "e") || !strcmp((yyvsp[-1].strVal), "E")) {
			double expVal = (yyvsp[0].doubleVal);
			if (expVal == (int)expVal)
				(yyval.doubleVal) = (yyvsp[-2].doubleVal) * pow(10, expVal);
			else {
				(yyval.doubleVal) = NAN;
				err("Floating point exponent not supported in scientific notation\n");
			}
		} else {
			(yyval.doubleVal) = NAN;
			err("Entered arithmetic expression is Invalid\n");
		}
	}
#line 2136 "y.tab.c"
    break;

  case 63:
#line 256 "Question1.y"
                                {
		if (!strcmp((yyvsp[-2].strVal), "e") || !strcmp((yyvsp[-2].strVal), "E")) {
			double expVal = (yyvsp[0].doubleVal);
			if (expVal == (int)expVal)
				(yyval.doubleVal) = (yyvsp[-3].doubleVal) * pow(10, expVal);
			else {
				(yyval.doubleVal) = NAN;
				err("Floating point exponent not supported in scientific notation\n");
			}
		} else {
			(yyval.doubleVal) = NAN;
			err("Entered arithmetic expression is Invalid\n");
		}
	}
#line 2155 "y.tab.c"
    break;

  case 64:
#line 269 "Question1.y"
                                {
		if (!strcmp((yyvsp[-2].strVal), "e") || !strcmp((yyvsp[-2].strVal), "E")) {
			double expVal = -(yyvsp[0].doubleVal);
			if (expVal == (int)expVal)
				(yyval.doubleVal) = (yyvsp[-3].doubleVal) * pow(10, expVal);
			else {
				(yyval.doubleVal) = NAN;
				err("Floating point exponent not supported in scientific notation\n");
			}
		} else {
			(yyval.doubleVal) = NAN;
			err("Entered arithmetic expression is Invalid\n");
		}
	}
#line 2174 "y.tab.c"
    break;

  case 65:
#line 282 "Question1.y"
                  {(yyval.doubleVal) = (yyvsp[0].doubleVal);}
#line 2180 "y.tab.c"
    break;

  case 66:
#line 283 "Question1.y"
              {
		if (isnan(ans)) {
			(yyval.doubleVal) = NAN;
			err("ans uninitialized.\n");
		} else
			(yyval.doubleVal) = ans;
	}
#line 2192 "y.tab.c"
    break;

  case 67:
#line 290 "Question1.y"
              {
		double result = getVal((yyvsp[0].strVal));
		if (isnan(result)) {
			(yyval.doubleVal) = NAN;
			char * mes = (char*)malloc((strlen((yyvsp[0].strVal)) + 16) * sizeof(char));
			if (!mes) {
				(yyval.doubleVal) = NAN;
				err("Insufficient memory.\n");
			} else {
				sprintf(mes, "%s is undefined.\n", (yyvsp[0].strVal));
				err(mes);
			}
		} else
			(yyval.doubleVal) = result;
	}
#line 2212 "y.tab.c"
    break;


#line 2216 "y.tab.c"

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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 306 "Question1.y"


int main() {
	yyparse();
	return 0;
}

void yyerror(const char *s) {}

void err(const char *s) {
	if (!errFlag) {
		if (s)
			fprintf(stderr, "%s", s);
		else
			fprintf(stderr, "error\n"); 
		errFlag = 1;
	}
}
