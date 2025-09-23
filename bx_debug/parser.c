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
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         bxparse
#define yylex           bxlex
#define yyerror         bxerror
#define yydebug         bxdebug
#define yynerrs         bxnerrs

#define yylval          bxlval
#define yychar          bxchar

/* Copy the first part of user declarations.  */
#line 5 "parser.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
#include "debug.h"

#if BX_DEBUGGER

// %left '-' '+'
// %left '*' '/'
// %right
// %nonassoc UMINUS

#line 87 "y.tab.c" /* yacc.c:339  */

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
#ifndef YY_BX_Y_TAB_H_INCLUDED
# define YY_BX_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int bxdebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    BX_TOKEN_REG_AL = 258,
    BX_TOKEN_REG_BL = 259,
    BX_TOKEN_REG_CL = 260,
    BX_TOKEN_REG_DL = 261,
    BX_TOKEN_REG_AH = 262,
    BX_TOKEN_REG_BH = 263,
    BX_TOKEN_REG_CH = 264,
    BX_TOKEN_REG_DH = 265,
    BX_TOKEN_REG_AX = 266,
    BX_TOKEN_REG_BX = 267,
    BX_TOKEN_REG_CX = 268,
    BX_TOKEN_REG_DX = 269,
    BX_TOKEN_REG_EAX = 270,
    BX_TOKEN_REG_EBX = 271,
    BX_TOKEN_REG_ECX = 272,
    BX_TOKEN_REG_EDX = 273,
    BX_TOKEN_REG_SI = 274,
    BX_TOKEN_REG_DI = 275,
    BX_TOKEN_REG_BP = 276,
    BX_TOKEN_REG_SP = 277,
    BX_TOKEN_REG_IP = 278,
    BX_TOKEN_REG_ESI = 279,
    BX_TOKEN_REG_EDI = 280,
    BX_TOKEN_REG_EBP = 281,
    BX_TOKEN_REG_ESP = 282,
    BX_TOKEN_REG_EIP = 283,
    BX_TOKEN_CS = 284,
    BX_TOKEN_ES = 285,
    BX_TOKEN_SS = 286,
    BX_TOKEN_DS = 287,
    BX_TOKEN_FS = 288,
    BX_TOKEN_GS = 289,
    BX_TOKEN_FLAGS = 290,
    BX_TOKEN_ON = 291,
    BX_TOKEN_OFF = 292,
    BX_TOKEN_CONTINUE = 293,
    BX_TOKEN_STEPN = 294,
    BX_TOKEN_STEP_OVER = 295,
    BX_TOKEN_NEXT_STEP = 296,
    BX_TOKEN_SET = 297,
    BX_TOKEN_DEBUGGER = 298,
    BX_TOKEN_LIST_BREAK = 299,
    BX_TOKEN_VBREAKPOINT = 300,
    BX_TOKEN_LBREAKPOINT = 301,
    BX_TOKEN_PBREAKPOINT = 302,
    BX_TOKEN_DEL_BREAKPOINT = 303,
    BX_TOKEN_ENABLE_BREAKPOINT = 304,
    BX_TOKEN_DISABLE_BREAKPOINT = 305,
    BX_TOKEN_INFO = 306,
    BX_TOKEN_QUIT = 307,
    BX_TOKEN_REGISTERS = 308,
    BX_TOKEN_CPU = 309,
    BX_TOKEN_FPU = 310,
    BX_TOKEN_SSE = 311,
    BX_TOKEN_ALL = 312,
    BX_TOKEN_IDT = 313,
    BX_TOKEN_GDT = 314,
    BX_TOKEN_LDT = 315,
    BX_TOKEN_TSS = 316,
    BX_TOKEN_DIRTY = 317,
    BX_TOKEN_LINUX = 318,
    BX_TOKEN_CONTROL_REGS = 319,
    BX_TOKEN_EXAMINE = 320,
    BX_TOKEN_XFORMAT = 321,
    BX_TOKEN_DISFORMAT = 322,
    BX_TOKEN_SETPMEM = 323,
    BX_TOKEN_SYMBOLNAME = 324,
    BX_TOKEN_QUERY = 325,
    BX_TOKEN_PENDING = 326,
    BX_TOKEN_TAKE = 327,
    BX_TOKEN_DMA = 328,
    BX_TOKEN_IRQ = 329,
    BX_TOKEN_DUMP_CPU = 330,
    BX_TOKEN_SET_CPU = 331,
    BX_TOKEN_DISASSEMBLE = 332,
    BX_TOKEN_INSTRUMENT = 333,
    BX_TOKEN_START = 334,
    BX_TOKEN_STOP = 335,
    BX_TOKEN_RESET = 336,
    BX_TOKEN_PRINT = 337,
    BX_TOKEN_STRING = 338,
    BX_TOKEN_DOIT = 339,
    BX_TOKEN_CRC = 340,
    BX_TOKEN_TRACEON = 341,
    BX_TOKEN_TRACEOFF = 342,
    BX_TOKEN_SWITCH_MODE = 343,
    BX_TOKEN_SIZE = 344,
    BX_TOKEN_PTIME = 345,
    BX_TOKEN_TIMEBP_ABSOLUTE = 346,
    BX_TOKEN_TIMEBP = 347,
    BX_TOKEN_RECORD = 348,
    BX_TOKEN_PLAYBACK = 349,
    BX_TOKEN_MODEBP = 350,
    BX_TOKEN_PRINT_STACK = 351,
    BX_TOKEN_WATCH = 352,
    BX_TOKEN_UNWATCH = 353,
    BX_TOKEN_READ = 354,
    BX_TOKEN_WRITE = 355,
    BX_TOKEN_SHOW = 356,
    BX_TOKEN_LOAD_SYMBOLS = 357,
    BX_TOKEN_SYMBOLS = 358,
    BX_TOKEN_LIST_SYMBOLS = 359,
    BX_TOKEN_GLOBAL = 360,
    BX_TOKEN_WHERE = 361,
    BX_TOKEN_PRINT_STRING = 362,
    BX_TOKEN_NUMERIC = 363,
    BX_TOKEN_LONG_NUMERIC = 364,
    BX_TOKEN_NE2000 = 365,
    BX_TOKEN_PIC = 366,
    BX_TOKEN_PAGE = 367,
    BX_TOKEN_TRACEREGON = 368,
    BX_TOKEN_TRACEREGOFF = 369,
    BX_TOKEN_HELP = 370,
    BX_TOKEN_CALC = 371,
    BX_TOKEN_VGA = 372,
    BX_TOKEN_RSHIFT = 373,
    BX_TOKEN_LSHIFT = 374,
    BX_TOKEN_IVT = 375,
    NOT = 376,
    NEG = 377
  };
#endif
/* Tokens.  */
#define BX_TOKEN_REG_AL 258
#define BX_TOKEN_REG_BL 259
#define BX_TOKEN_REG_CL 260
#define BX_TOKEN_REG_DL 261
#define BX_TOKEN_REG_AH 262
#define BX_TOKEN_REG_BH 263
#define BX_TOKEN_REG_CH 264
#define BX_TOKEN_REG_DH 265
#define BX_TOKEN_REG_AX 266
#define BX_TOKEN_REG_BX 267
#define BX_TOKEN_REG_CX 268
#define BX_TOKEN_REG_DX 269
#define BX_TOKEN_REG_EAX 270
#define BX_TOKEN_REG_EBX 271
#define BX_TOKEN_REG_ECX 272
#define BX_TOKEN_REG_EDX 273
#define BX_TOKEN_REG_SI 274
#define BX_TOKEN_REG_DI 275
#define BX_TOKEN_REG_BP 276
#define BX_TOKEN_REG_SP 277
#define BX_TOKEN_REG_IP 278
#define BX_TOKEN_REG_ESI 279
#define BX_TOKEN_REG_EDI 280
#define BX_TOKEN_REG_EBP 281
#define BX_TOKEN_REG_ESP 282
#define BX_TOKEN_REG_EIP 283
#define BX_TOKEN_CS 284
#define BX_TOKEN_ES 285
#define BX_TOKEN_SS 286
#define BX_TOKEN_DS 287
#define BX_TOKEN_FS 288
#define BX_TOKEN_GS 289
#define BX_TOKEN_FLAGS 290
#define BX_TOKEN_ON 291
#define BX_TOKEN_OFF 292
#define BX_TOKEN_CONTINUE 293
#define BX_TOKEN_STEPN 294
#define BX_TOKEN_STEP_OVER 295
#define BX_TOKEN_NEXT_STEP 296
#define BX_TOKEN_SET 297
#define BX_TOKEN_DEBUGGER 298
#define BX_TOKEN_LIST_BREAK 299
#define BX_TOKEN_VBREAKPOINT 300
#define BX_TOKEN_LBREAKPOINT 301
#define BX_TOKEN_PBREAKPOINT 302
#define BX_TOKEN_DEL_BREAKPOINT 303
#define BX_TOKEN_ENABLE_BREAKPOINT 304
#define BX_TOKEN_DISABLE_BREAKPOINT 305
#define BX_TOKEN_INFO 306
#define BX_TOKEN_QUIT 307
#define BX_TOKEN_REGISTERS 308
#define BX_TOKEN_CPU 309
#define BX_TOKEN_FPU 310
#define BX_TOKEN_SSE 311
#define BX_TOKEN_ALL 312
#define BX_TOKEN_IDT 313
#define BX_TOKEN_GDT 314
#define BX_TOKEN_LDT 315
#define BX_TOKEN_TSS 316
#define BX_TOKEN_DIRTY 317
#define BX_TOKEN_LINUX 318
#define BX_TOKEN_CONTROL_REGS 319
#define BX_TOKEN_EXAMINE 320
#define BX_TOKEN_XFORMAT 321
#define BX_TOKEN_DISFORMAT 322
#define BX_TOKEN_SETPMEM 323
#define BX_TOKEN_SYMBOLNAME 324
#define BX_TOKEN_QUERY 325
#define BX_TOKEN_PENDING 326
#define BX_TOKEN_TAKE 327
#define BX_TOKEN_DMA 328
#define BX_TOKEN_IRQ 329
#define BX_TOKEN_DUMP_CPU 330
#define BX_TOKEN_SET_CPU 331
#define BX_TOKEN_DISASSEMBLE 332
#define BX_TOKEN_INSTRUMENT 333
#define BX_TOKEN_START 334
#define BX_TOKEN_STOP 335
#define BX_TOKEN_RESET 336
#define BX_TOKEN_PRINT 337
#define BX_TOKEN_STRING 338
#define BX_TOKEN_DOIT 339
#define BX_TOKEN_CRC 340
#define BX_TOKEN_TRACEON 341
#define BX_TOKEN_TRACEOFF 342
#define BX_TOKEN_SWITCH_MODE 343
#define BX_TOKEN_SIZE 344
#define BX_TOKEN_PTIME 345
#define BX_TOKEN_TIMEBP_ABSOLUTE 346
#define BX_TOKEN_TIMEBP 347
#define BX_TOKEN_RECORD 348
#define BX_TOKEN_PLAYBACK 349
#define BX_TOKEN_MODEBP 350
#define BX_TOKEN_PRINT_STACK 351
#define BX_TOKEN_WATCH 352
#define BX_TOKEN_UNWATCH 353
#define BX_TOKEN_READ 354
#define BX_TOKEN_WRITE 355
#define BX_TOKEN_SHOW 356
#define BX_TOKEN_LOAD_SYMBOLS 357
#define BX_TOKEN_SYMBOLS 358
#define BX_TOKEN_LIST_SYMBOLS 359
#define BX_TOKEN_GLOBAL 360
#define BX_TOKEN_WHERE 361
#define BX_TOKEN_PRINT_STRING 362
#define BX_TOKEN_NUMERIC 363
#define BX_TOKEN_LONG_NUMERIC 364
#define BX_TOKEN_NE2000 365
#define BX_TOKEN_PIC 366
#define BX_TOKEN_PAGE 367
#define BX_TOKEN_TRACEREGON 368
#define BX_TOKEN_TRACEREGOFF 369
#define BX_TOKEN_HELP 370
#define BX_TOKEN_CALC 371
#define BX_TOKEN_VGA 372
#define BX_TOKEN_RSHIFT 373
#define BX_TOKEN_LSHIFT 374
#define BX_TOKEN_IVT 375
#define NOT 376
#define NEG 377

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 19 "parser.y" /* yacc.c:355  */

  char    *sval;
  Bit32u   uval;
  Bit64u   ulval;
  bx_bool  bval;
  bx_num_range uval_range;

#line 379 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE bxlval;

int bxparse (void);

#endif /* !YY_BX_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 396 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  271
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1331

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  136
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  52
/* YYNRULES -- Number of rules.  */
#define YYNRULES  256
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  474

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   377

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     130,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   133,     2,     2,     2,     2,   127,     2,
     134,   135,   125,   121,     2,   122,     2,   126,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   132,     2,
       2,   131,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   124,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   123,     2,     2,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   128,   129
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   167,   167,   168,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   219,   220,   221,   222,
     223,   224,   229,   234,   242,   250,   258,   266,   271,   279,
     287,   295,   303,   308,   316,   322,   328,   333,   338,   343,
     348,   353,   361,   366,   371,   379,   387,   395,   403,   408,
     416,   424,   425,   430,   435,   439,   443,   447,   454,   459,
     464,   469,   474,   479,   484,   489,   497,   505,   510,   518,
     523,   528,   533,   538,   543,   548,   553,   558,   563,   568,
     573,   578,   583,   588,   593,   598,   603,   608,   613,   618,
     623,   635,   636,   639,   643,   649,   657,   665,   673,   680,
     688,   696,   701,   706,   711,   719,   727,   735,   740,   745,
     753,   761,   766,   771,   776,   784,   785,   786,   787,   795,
     803,   811,   819,   827,   832,   837,   842,   847,   852,   857,
     862,   867,   872,   877,   882,   887,   892,   897,   902,   907,
     912,   917,   922,   927,   932,   937,   942,   947,   952,   957,
     962,   967,   976,   985,   992,  1005,  1013,  1023,  1043,  1057,
    1067,  1072,  1080,  1088,  1089,  1090,  1091,  1096,  1097,  1098,
    1099,  1104,  1105,  1106,  1107,  1108,  1109,  1110,  1111,  1116,
    1117,  1118,  1119,  1120,  1121,  1122,  1123,  1137,  1138,  1139,
    1140,  1141,  1142,  1143,  1144,  1145,  1146,  1147,  1148,  1149,
    1150,  1151,  1152,  1153,  1154,  1155,  1160,  1161,  1162,  1163,
    1164,  1165,  1166,  1167,  1168,  1169,  1170,  1171,  1172,  1173,
    1174,  1175,  1176,  1177,  1178,  1179,  1180
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BX_TOKEN_REG_AL", "BX_TOKEN_REG_BL",
  "BX_TOKEN_REG_CL", "BX_TOKEN_REG_DL", "BX_TOKEN_REG_AH",
  "BX_TOKEN_REG_BH", "BX_TOKEN_REG_CH", "BX_TOKEN_REG_DH",
  "BX_TOKEN_REG_AX", "BX_TOKEN_REG_BX", "BX_TOKEN_REG_CX",
  "BX_TOKEN_REG_DX", "BX_TOKEN_REG_EAX", "BX_TOKEN_REG_EBX",
  "BX_TOKEN_REG_ECX", "BX_TOKEN_REG_EDX", "BX_TOKEN_REG_SI",
  "BX_TOKEN_REG_DI", "BX_TOKEN_REG_BP", "BX_TOKEN_REG_SP",
  "BX_TOKEN_REG_IP", "BX_TOKEN_REG_ESI", "BX_TOKEN_REG_EDI",
  "BX_TOKEN_REG_EBP", "BX_TOKEN_REG_ESP", "BX_TOKEN_REG_EIP",
  "BX_TOKEN_CS", "BX_TOKEN_ES", "BX_TOKEN_SS", "BX_TOKEN_DS",
  "BX_TOKEN_FS", "BX_TOKEN_GS", "BX_TOKEN_FLAGS", "BX_TOKEN_ON",
  "BX_TOKEN_OFF", "BX_TOKEN_CONTINUE", "BX_TOKEN_STEPN",
  "BX_TOKEN_STEP_OVER", "BX_TOKEN_NEXT_STEP", "BX_TOKEN_SET",
  "BX_TOKEN_DEBUGGER", "BX_TOKEN_LIST_BREAK", "BX_TOKEN_VBREAKPOINT",
  "BX_TOKEN_LBREAKPOINT", "BX_TOKEN_PBREAKPOINT",
  "BX_TOKEN_DEL_BREAKPOINT", "BX_TOKEN_ENABLE_BREAKPOINT",
  "BX_TOKEN_DISABLE_BREAKPOINT", "BX_TOKEN_INFO", "BX_TOKEN_QUIT",
  "BX_TOKEN_REGISTERS", "BX_TOKEN_CPU", "BX_TOKEN_FPU", "BX_TOKEN_SSE",
  "BX_TOKEN_ALL", "BX_TOKEN_IDT", "BX_TOKEN_GDT", "BX_TOKEN_LDT",
  "BX_TOKEN_TSS", "BX_TOKEN_DIRTY", "BX_TOKEN_LINUX",
  "BX_TOKEN_CONTROL_REGS", "BX_TOKEN_EXAMINE", "BX_TOKEN_XFORMAT",
  "BX_TOKEN_DISFORMAT", "BX_TOKEN_SETPMEM", "BX_TOKEN_SYMBOLNAME",
  "BX_TOKEN_QUERY", "BX_TOKEN_PENDING", "BX_TOKEN_TAKE", "BX_TOKEN_DMA",
  "BX_TOKEN_IRQ", "BX_TOKEN_DUMP_CPU", "BX_TOKEN_SET_CPU",
  "BX_TOKEN_DISASSEMBLE", "BX_TOKEN_INSTRUMENT", "BX_TOKEN_START",
  "BX_TOKEN_STOP", "BX_TOKEN_RESET", "BX_TOKEN_PRINT", "BX_TOKEN_STRING",
  "BX_TOKEN_DOIT", "BX_TOKEN_CRC", "BX_TOKEN_TRACEON", "BX_TOKEN_TRACEOFF",
  "BX_TOKEN_SWITCH_MODE", "BX_TOKEN_SIZE", "BX_TOKEN_PTIME",
  "BX_TOKEN_TIMEBP_ABSOLUTE", "BX_TOKEN_TIMEBP", "BX_TOKEN_RECORD",
  "BX_TOKEN_PLAYBACK", "BX_TOKEN_MODEBP", "BX_TOKEN_PRINT_STACK",
  "BX_TOKEN_WATCH", "BX_TOKEN_UNWATCH", "BX_TOKEN_READ", "BX_TOKEN_WRITE",
  "BX_TOKEN_SHOW", "BX_TOKEN_LOAD_SYMBOLS", "BX_TOKEN_SYMBOLS",
  "BX_TOKEN_LIST_SYMBOLS", "BX_TOKEN_GLOBAL", "BX_TOKEN_WHERE",
  "BX_TOKEN_PRINT_STRING", "BX_TOKEN_NUMERIC", "BX_TOKEN_LONG_NUMERIC",
  "BX_TOKEN_NE2000", "BX_TOKEN_PIC", "BX_TOKEN_PAGE",
  "BX_TOKEN_TRACEREGON", "BX_TOKEN_TRACEREGOFF", "BX_TOKEN_HELP",
  "BX_TOKEN_CALC", "BX_TOKEN_VGA", "BX_TOKEN_RSHIFT", "BX_TOKEN_LSHIFT",
  "BX_TOKEN_IVT", "'+'", "'-'", "'|'", "'^'", "'*'", "'/'", "'&'", "NOT",
  "NEG", "'\\n'", "'='", "':'", "'!'", "'('", "')'", "$accept", "commands",
  "command", "BX_TOKEN_SEGREG", "timebp_command", "record_command",
  "playback_command", "modebp_command", "show_command", "ptime_command",
  "trace_on_command", "trace_off_command", "print_stack_command",
  "watch_point_command", "symbol_command", "where_command",
  "print_string_command", "continue_command", "stepN_command",
  "step_over_command", "set_command", "breakpoint_command",
  "blist_command", "slist_command", "info_command",
  "optional_numeric_range", "numeric_range", "regs_command",
  "dump_cpu_command", "delete_command", "bpe_command", "bpd_command",
  "quit_command", "examine_command", "setpmem_command", "query_command",
  "take_command", "set_cpu_command", "disassemble_command",
  "instrument_command", "doit_command", "crc_command",
  "trace_reg_on_command", "trace_reg_off_command", "help_command",
  "calc_command", "BX_TOKEN_8BH_REG", "BX_TOKEN_8BL_REG",
  "BX_TOKEN_16B_REG", "BX_TOKEN_32B_REG", "vexpression", "expression", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,    43,    45,   124,    94,    42,    47,    38,   376,   377,
      10,    61,    58,    33,    40,    41
};
# endif

#define YYPACT_NINF -160

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-160)))

#define YYTABLE_NINF -256

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1043,  -109,  -104,  -107,  1254,  -101,   713,   549,   379,   -74,
     -70,   -58,   386,   -71,   -68,   511,   -48,   -10,   -55,   -62,
     -54,   347,   -24,   -31,   -30,   -39,   -38,   -36,   -16,   -13,
      14,    37,    -5,   -95,   -35,   -84,   -78,   -69,   -77,     2,
      25,     6,     8,  1126,   845,  -160,   956,  -160,  -160,  -160,
    -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,
    -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,
    -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,
    -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,    15,
    -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,
    -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,
    -160,  -160,  -160,  -160,  -160,  -160,   -32,    -9,    13,    19,
      22,    23,  -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,
    -160,   877,  -160,   877,   877,  -160,  -160,  -160,  -160,  -160,
     705,    17,  -160,  -160,   845,  -160,   845,   845,  -160,  -160,
    -160,  -160,  -160,   114,  -160,   845,  -160,   129,    26,    29,
      32,    33,    34,    35,    38,    41,    42,    43,   845,   845,
     845,   845,    44,    47,    51,   -76,   -82,    52,    53,   845,
    -160,  -160,   681,  -160,   157,    49,    54,   -91,    55,  -160,
    -160,   845,    56,    24,    62,  -160,    97,    63,    77,    78,
      79,    83,    58,  -160,  -160,  -160,    84,    95,    96,    98,
    -160,   104,  -160,   112,   113,   119,   137,  -160,   141,   149,
    -160,   128,  -160,   -83,   177,   132,  -160,  -160,   133,  -160,
    -160,   134,   135,   136,   138,   139,   144,   147,   155,   158,
     160,   170,   208,   209,   240,   245,   272,   277,   287,   288,
     289,   290,   295,   296,   298,   301,   302,   304,   307,   308,
     321,   322,   323,   324,   327,   328,   329,   330,   331,  -160,
     352,  -160,  -160,  -160,   159,   333,   334,   845,   845,   845,
     845,  -160,  -160,   -37,   877,   877,   877,   877,   877,   877,
     877,   877,   877,   845,  -160,   335,   335,   -52,   845,   845,
     845,   845,   845,   845,   845,   845,   845,  -160,   845,   466,
    -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,
    -160,   336,   338,   342,   353,  -160,  -160,  -160,   355,  -160,
     319,  -160,  -160,  -160,   356,  -160,   481,  -160,   357,  -160,
     360,  -160,  -160,   361,  -160,   384,  -160,   845,   794,  -160,
    -160,  -160,  -160,  -160,   363,  -160,  -160,  -160,  -160,  -160,
    -160,  -160,   364,   365,   368,   369,  -160,   370,  -160,   394,
    -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,
    -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,
    -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,
    -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,
    -160,   375,  -160,  -160,   504,   529,   630,   647,  -160,  -160,
    -160,    16,    16,    16,    16,  -160,  -160,  -160,   674,  -160,
     335,   335,    85,    85,    85,    85,   335,   335,   335,   794,
    -160,  -160,  -160,  -160,  -160,  -160,   -51,  -160,  -160,   377,
    -160,  -160,   378,   297,  -160,  -160,  -160,  -160,  -160,  -160,
     380,  -160,  -160,  -160,  -160,  -160,  -160,   403,  -160,  -160,
    -160,  -160,   404,  -160
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      44,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   121,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    45,     0,     3,    30,    31,
      32,    33,    36,    29,    27,    28,    34,    35,    37,    38,
      39,     4,     5,     6,     7,     8,    11,    12,     9,    10,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    40,    41,    42,    43,    77,     0,
      78,    80,   197,   198,   199,   200,   193,   194,   195,   196,
     201,   202,   203,   204,   209,   210,   211,   212,   205,   206,
     207,   208,   213,   214,   215,   216,     0,     0,     0,     0,
       0,     0,    96,    46,    47,    48,    49,    50,    51,   217,
     218,     0,    88,     0,     0,   223,   220,   219,   221,   222,
       0,   238,   236,   237,     0,    90,     0,     0,   243,   240,
     239,   241,   242,     0,   238,     0,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   121,   121,
     121,   121,     0,     0,     0,     0,     0,     0,     0,   121,
     130,   125,     0,   134,     0,     0,     0,     0,     0,   126,
     140,   121,     0,     0,     0,   122,   123,     0,     0,     0,
       0,     0,     0,    60,    61,    59,     0,     0,     0,     0,
      56,     0,    62,     0,     0,     0,     0,    66,     0,     0,
      67,     0,    58,     0,     0,     0,    97,    75,     0,   151,
     152,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   191,
       0,     1,     2,    79,     0,     0,     0,     0,     0,     0,
       0,   234,   233,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    92,   255,   254,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    91,     0,     0,
      94,   127,   128,   129,   111,    99,   101,   100,   102,   103,
     104,     0,     0,     0,     0,   105,   112,   115,     0,   113,
       0,   116,   119,   120,     0,   132,     0,   133,     0,   136,
       0,   137,   139,     0,   143,     0,   141,     0,   124,   145,
     146,   147,   148,   149,     0,    53,    52,    54,    55,    63,
      65,    64,     0,     0,     0,     0,    57,     0,    72,     0,
      98,    76,   154,   155,   156,   186,   162,   157,   158,   159,
     160,   161,   187,   153,   179,   184,   180,   169,   170,   181,
     185,   164,   165,   166,   171,   173,   172,   175,   176,   163,
     174,   182,   183,   188,   177,   178,   167,   168,   190,   189,
     192,     0,    81,    82,     0,     0,     0,     0,   235,   228,
     229,   224,   225,   230,   231,   226,   227,   232,     0,   256,
     249,   250,   245,   246,   251,   252,   247,   248,   253,   244,
      95,   106,   108,   109,   110,   114,     0,   107,   131,     0,
     138,   142,     0,   246,   150,    68,    70,    69,    71,    73,
       0,    83,    85,    84,    86,    87,    89,     0,   117,   135,
     144,    74,     0,   118
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -160,  -160,   100,    57,  -160,  -160,  -160,  -160,  -160,  -160,
    -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,
    -160,  -160,  -160,  -160,  -160,  -159,  -160,  -160,  -160,  -160,
    -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,
    -160,  -160,  -160,  -160,  -160,  -160,    18,    27,    36,    45,
     -90,    -7
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    46,    47,   148,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,   194,   195,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,   149,   150,   151,   152,
     140,   196
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     153,   157,   467,   213,    89,   221,   225,   328,   184,   321,
     322,   323,   324,   211,   223,   218,   219,   340,   187,   188,
     334,    88,   118,    91,   136,   367,    90,   275,   276,   122,
     330,   119,   343,   137,   158,   212,   224,   270,   159,   341,
     120,   281,   138,   282,   283,   214,   220,   368,   331,   121,
     160,   139,   222,   226,   329,   197,   198,   199,   200,   180,
     185,   186,   181,   135,   215,   216,   298,   299,   189,   300,
     301,   302,   303,   304,   305,   306,   190,   201,   202,   468,
     308,   284,   285,   429,   286,   287,   288,   289,   290,   291,
     292,   203,   204,   206,   205,   217,   207,   208,   418,   274,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     209,   112,   113,   114,   115,   210,   123,   124,   125,   126,
     127,   128,   227,   228,   284,   285,   229,   295,   230,   296,
     297,   290,   291,   292,   277,   273,   272,   294,   309,   136,
     278,   136,   136,   279,   280,   345,   311,   338,   137,   312,
     137,   137,   313,   314,   315,   316,   354,   138,   317,   138,
     138,   318,   319,   320,   325,   336,   139,   326,   139,   139,
     154,   327,   332,   333,   339,   342,   344,     0,   135,   348,
     135,   135,   346,   349,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   298,   299,   142,   143,   350,   351,   352,
     304,   305,   306,   353,   355,   298,   299,   308,   300,   347,
     302,   303,   304,   305,   306,   356,   357,   362,   358,   308,
     146,   147,   298,   299,   359,   300,   301,   302,   303,   304,
     305,   306,   360,   361,   307,   363,   308,   298,   299,   364,
     300,   301,   302,   303,   304,   305,   306,   365,   366,   310,
     369,   308,   370,   371,   372,   373,   374,   411,   375,   376,
     414,   415,   416,   417,   377,   298,   299,   378,   300,   301,
     302,   303,   304,   305,   306,   379,   428,   337,   380,   308,
     381,   430,   431,   432,   433,   434,   435,   436,   437,   438,
     382,   439,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     138,   138,   138,   138,   138,   138,   138,   138,   138,   139,
     139,   139,   139,   139,   139,   139,   139,   139,   383,   384,
     453,   135,   135,   135,   135,   135,   135,   135,   135,   135,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     385,   112,   113,   114,   115,   386,   123,   124,   125,   126,
     127,   128,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   387,   112,   113,   114,   115,   388,   123,   124,
     125,   126,   127,   128,   191,  -255,  -255,   389,   390,   391,
     392,   161,  -255,  -255,  -255,   393,   394,   446,   395,   308,
     154,   396,   397,   162,   398,   192,   193,   399,   400,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   401,   402,   403,   404,   142,   143,   405,   406,   407,
     408,   409,   154,   412,   413,   449,   441,   308,   442,   144,
     298,   299,   443,   300,   301,   302,   303,   304,   305,   306,
     146,   147,   410,   444,   308,   445,   447,   142,   143,   175,
     450,   451,   452,   454,   455,   456,   176,   177,   457,   458,
     459,   144,   460,   178,   155,   461,   179,   469,   470,   156,
     471,   472,   146,   147,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   473,   112,   113,   114,   115,     0,
     123,   124,   125,   126,   127,   128,     0,     0,     0,     0,
       0,     0,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,     0,   112,   113,   114,   115,   182,   123,   124,
     125,   126,   127,   128,   298,   299,     0,   300,   301,   302,
     303,   304,   305,   306,   154,     0,   440,     0,   308,   298,
     299,     0,   300,   301,   302,   303,   304,   305,   306,     0,
       0,   448,     0,   308,     0,     0,     0,     0,     0,   142,
     143,     0,   298,   299,     0,   300,   301,   302,   303,   304,
     305,   306,   141,   144,   462,     0,   308,     0,     0,     0,
       0,   183,     0,     0,   146,   147,     0,   298,   299,     0,
     300,   301,   302,   303,   304,   305,   306,   142,   143,   463,
       0,   308,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   144,     0,     0,     0,     0,     0,     0,     0,   145,
       0,     0,   146,   147,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,     0,   112,   113,   114,   115,     0,
     123,   124,   125,   126,   127,   128,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,     0,   112,   113,   114,
     115,     0,   123,   124,   125,   126,   127,   128,   298,   299,
       0,   300,   301,   302,   303,   304,   305,   306,     0,     0,
     464,     0,   308,     0,   154,   298,   299,     0,   300,   301,
     302,   303,   304,   305,   306,     0,     0,   465,     0,   308,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   142,
     143,     0,   298,   299,     0,   300,   301,   302,   303,   304,
     305,   306,     0,   144,   466,     0,   308,     0,     0,     0,
       0,   335,     0,     0,   146,   147,     0,     0,     0,     0,
       0,   129,   130,   284,   285,     0,   286,   287,   288,   289,
     290,   291,   292,     0,     0,   131,     0,   293,     0,     0,
       0,     0,     0,   132,     0,     0,   133,   134,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,     0,   112,
     113,   114,   115,     0,   123,   124,   125,   126,   127,   128,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
       0,   112,   113,   114,   115,     0,   123,   124,   125,   126,
     127,   128,   298,   299,     0,   300,   301,   302,   303,   304,
     305,   306,     0,     0,     0,     0,   308,     0,   154,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   142,   143,     0,   271,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   144,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   146,   147,
       0,     0,     0,     0,     0,   129,   130,     0,     0,     0,
       0,     0,     0,     0,     1,     2,     3,     0,     4,   131,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
     133,   134,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    15,     0,     0,    16,     0,    17,     0,    18,     0,
       0,    19,    20,    21,    22,     0,     0,     0,     0,     0,
      23,    24,    25,    26,     0,     0,    27,    28,    29,    30,
      31,    32,    33,    34,    35,     0,     0,    36,    37,     0,
      38,     0,    39,    40,     0,     0,     0,     0,     0,    41,
      42,    43,    44,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     2,     3,     0,     4,    45,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    15,     0,
       0,    16,     0,    17,     0,    18,     0,     0,    19,    20,
      21,    22,     0,     0,     0,     0,     0,    23,    24,    25,
      26,     0,     0,    27,    28,    29,    30,    31,    32,    33,
      34,    35,     0,     0,    36,    37,     0,    38,     0,    39,
      40,     0,     0,     0,     0,     0,    41,    42,    43,    44,
       0,     0,     0,     0,   231,   232,   233,     0,   234,     0,
     235,   236,   237,    45,   238,   239,   240,   241,   242,   243,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   244,     0,     0,   245,     0,     0,     0,     0,     0,
       0,   246,   247,   248,   249,     0,     0,     0,     0,     0,
       0,   250,   251,   252,     0,     0,   253,   254,   255,   256,
     257,   258,   259,   260,   261,     0,     0,   262,   263,     0,
     264,     0,     0,     0,     0,     0,     0,     0,     0,   265,
     266,   267,   268,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   269,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,     0,   112,   113,
     114,   115,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   116,     0,     0,     0,     0,     0,     0,
       0,   117
};

static const yytype_int16 yycheck[] =
{
       7,     8,    53,    38,   108,    83,    83,    83,    15,   168,
     169,   170,   171,   108,    83,    99,   100,   108,    73,    74,
     179,   130,     4,   130,     6,   108,   130,    36,    37,   130,
     112,     4,   191,     6,   108,   130,   105,    44,   108,   130,
       4,   131,     6,   133,   134,    80,   130,   130,   130,     4,
     108,     6,   130,   130,   130,    79,    80,    81,    82,   130,
     108,    71,   130,     6,    99,   100,   118,   119,   130,   121,
     122,   123,   124,   125,   126,   127,   130,   108,   108,   130,
     132,   118,   119,   135,   121,   122,   123,   124,   125,   126,
     127,   130,   130,   109,   130,   130,   109,    83,   135,   131,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      83,    24,    25,    26,    27,   130,    29,    30,    31,    32,
      33,    34,   130,   108,   118,   119,   130,   144,   130,   146,
     147,   125,   126,   127,   131,   130,    46,   130,   155,   131,
     131,   133,   134,   131,   131,   131,   130,   108,   131,   130,
     133,   134,   130,   130,   130,   130,   108,   131,   130,   133,
     134,   130,   130,   130,   130,   182,   131,   130,   133,   134,
      83,   130,   130,   130,   130,   130,   130,    -1,   131,   196,
     133,   134,   130,   130,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   118,   119,   108,   109,   130,   130,   130,
     125,   126,   127,   130,   130,   118,   119,   132,   121,   122,
     123,   124,   125,   126,   127,   130,   130,   108,   130,   132,
     133,   134,   118,   119,   130,   121,   122,   123,   124,   125,
     126,   127,   130,   130,   130,   108,   132,   118,   119,   108,
     121,   122,   123,   124,   125,   126,   127,   108,   130,   130,
      83,   132,   130,   130,   130,   130,   130,   108,   130,   130,
     277,   278,   279,   280,   130,   118,   119,   130,   121,   122,
     123,   124,   125,   126,   127,   130,   293,   130,   130,   132,
     130,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     130,   308,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   130,   130,
     347,   284,   285,   286,   287,   288,   289,   290,   291,   292,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
     130,    24,    25,    26,    27,   130,    29,    30,    31,    32,
      33,    34,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,   130,    24,    25,    26,    27,   130,    29,    30,
      31,    32,    33,    34,    67,   118,   119,   130,   130,   130,
     130,    35,   125,   126,   127,   130,   130,   108,   130,   132,
      83,   130,   130,    47,   130,    88,    89,   130,   130,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,   130,   130,   130,   130,   108,   109,   130,   130,   130,
     130,   130,    83,   130,   130,   108,   130,   132,   130,   122,
     118,   119,   130,   121,   122,   123,   124,   125,   126,   127,
     133,   134,   130,   130,   132,   130,   130,   108,   109,   103,
     130,   130,   108,   130,   130,   130,   110,   111,   130,   130,
     130,   122,   108,   117,   125,   130,   120,   130,   130,   130,
     130,   108,   133,   134,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,   130,    24,    25,    26,    27,    -1,
      29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    24,    25,    26,    27,    66,    29,    30,
      31,    32,    33,    34,   118,   119,    -1,   121,   122,   123,
     124,   125,   126,   127,    83,    -1,   130,    -1,   132,   118,
     119,    -1,   121,   122,   123,   124,   125,   126,   127,    -1,
      -1,   130,    -1,   132,    -1,    -1,    -1,    -1,    -1,   108,
     109,    -1,   118,   119,    -1,   121,   122,   123,   124,   125,
     126,   127,    83,   122,   130,    -1,   132,    -1,    -1,    -1,
      -1,   130,    -1,    -1,   133,   134,    -1,   118,   119,    -1,
     121,   122,   123,   124,   125,   126,   127,   108,   109,   130,
      -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   130,
      -1,    -1,   133,   134,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    24,    25,    26,    27,    -1,
      29,    30,    31,    32,    33,    34,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    -1,    24,    25,    26,
      27,    -1,    29,    30,    31,    32,    33,    34,   118,   119,
      -1,   121,   122,   123,   124,   125,   126,   127,    -1,    -1,
     130,    -1,   132,    -1,    83,   118,   119,    -1,   121,   122,
     123,   124,   125,   126,   127,    -1,    -1,   130,    -1,   132,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,
     109,    -1,   118,   119,    -1,   121,   122,   123,   124,   125,
     126,   127,    -1,   122,   130,    -1,   132,    -1,    -1,    -1,
      -1,   130,    -1,    -1,   133,   134,    -1,    -1,    -1,    -1,
      -1,   108,   109,   118,   119,    -1,   121,   122,   123,   124,
     125,   126,   127,    -1,    -1,   122,    -1,   132,    -1,    -1,
      -1,    -1,    -1,   130,    -1,    -1,   133,   134,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    24,
      25,    26,    27,    -1,    29,    30,    31,    32,    33,    34,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    24,    25,    26,    27,    -1,    29,    30,    31,    32,
      33,    34,   118,   119,    -1,   121,   122,   123,   124,   125,
     126,   127,    -1,    -1,    -1,    -1,   132,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   108,   109,    -1,     0,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   133,   134,
      -1,    -1,    -1,    -1,    -1,   108,   109,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    39,    40,    -1,    42,   122,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
     133,   134,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    65,    -1,    -1,    68,    -1,    70,    -1,    72,    -1,
      -1,    75,    76,    77,    78,    -1,    -1,    -1,    -1,    -1,
      84,    85,    86,    87,    -1,    -1,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    -1,    -1,   101,   102,    -1,
     104,    -1,   106,   107,    -1,    -1,    -1,    -1,    -1,   113,
     114,   115,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    39,    40,    -1,    42,   130,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,
      -1,    68,    -1,    70,    -1,    72,    -1,    -1,    75,    76,
      77,    78,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,
      87,    -1,    -1,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    -1,    -1,   101,   102,    -1,   104,    -1,   106,
     107,    -1,    -1,    -1,    -1,    -1,   113,   114,   115,   116,
      -1,    -1,    -1,    -1,    38,    39,    40,    -1,    42,    -1,
      44,    45,    46,   130,    48,    49,    50,    51,    52,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    65,    -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,    77,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    86,    87,    -1,    -1,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    -1,    -1,   101,   102,    -1,
     104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
     114,   115,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   130,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    24,    25,
      26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    77
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    38,    39,    40,    42,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    65,    68,    70,    72,    75,
      76,    77,    78,    84,    85,    86,    87,    90,    91,    92,
      93,    94,    95,    96,    97,    98,   101,   102,   104,   106,
     107,   113,   114,   115,   116,   130,   137,   138,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   130,   108,
     130,   130,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    24,    25,    26,    27,    69,    77,   182,   183,
     184,   185,   130,    29,    30,    31,    32,    33,    34,   108,
     109,   122,   130,   133,   134,   139,   182,   183,   184,   185,
     186,    83,   108,   109,   122,   130,   133,   134,   139,   182,
     183,   184,   185,   187,    83,   125,   130,   187,   108,   108,
     108,    35,    47,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,   103,   110,   111,   117,   120,
     130,   130,    66,   130,   187,   108,    71,    73,    74,   130,
     130,    67,    88,    89,   161,   162,   187,    79,    80,    81,
      82,   108,   108,   130,   130,   130,   109,   109,    83,    83,
     130,   108,   130,    38,    80,    99,   100,   130,    99,   100,
     130,    83,   130,    83,   105,    83,   130,   130,   108,   130,
     130,    38,    39,    40,    42,    44,    45,    46,    48,    49,
      50,    51,    52,    53,    65,    68,    75,    76,    77,    78,
      85,    86,    87,    90,    91,    92,    93,    94,    95,    96,
      97,    98,   101,   102,   104,   113,   114,   115,   116,   130,
     187,     0,   138,   130,   131,    36,    37,   131,   131,   131,
     131,   186,   186,   186,   118,   119,   121,   122,   123,   124,
     125,   126,   127,   132,   130,   187,   187,   187,   118,   119,
     121,   122,   123,   124,   125,   126,   127,   130,   132,   187,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   161,   161,   161,   161,   130,   130,   130,    83,   130,
     112,   130,   130,   130,   161,   130,   187,   130,   108,   130,
     108,   130,   130,   161,   130,   131,   130,   122,   187,   130,
     130,   130,   130,   130,   108,   130,   130,   130,   130,   130,
     130,   130,   108,   108,   108,   108,   130,   108,   130,    83,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   108,   130,   130,   187,   187,   187,   187,   135,   186,
     186,   186,   186,   186,   186,   186,   186,   186,   187,   135,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     130,   130,   130,   130,   130,   130,   108,   130,   130,   108,
     130,   130,   108,   187,   130,   130,   130,   130,   130,   130,
     108,   130,   130,   130,   130,   130,   130,    53,   130,   130,
     130,   130,   108,   130
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   136,   137,   137,   138,   138,   138,   138,   138,   138,
     138,   138,   138,   138,   138,   138,   138,   138,   138,   138,
     138,   138,   138,   138,   138,   138,   138,   138,   138,   138,
     138,   138,   138,   138,   138,   138,   138,   138,   138,   138,
     138,   138,   138,   138,   138,   138,   139,   139,   139,   139,
     139,   139,   140,   140,   141,   142,   143,   144,   144,   145,
     146,   147,   148,   148,   149,   149,   149,   149,   149,   149,
     149,   149,   150,   150,   150,   151,   152,   153,   154,   154,
     155,   156,   156,   156,   156,   156,   156,   156,   157,   157,
     157,   157,   157,   157,   157,   157,   158,   159,   159,   160,
     160,   160,   160,   160,   160,   160,   160,   160,   160,   160,
     160,   160,   160,   160,   160,   160,   160,   160,   160,   160,
     160,   161,   161,   162,   162,   163,   164,   165,   166,   167,
     168,   169,   169,   169,   169,   170,   171,   172,   172,   172,
     173,   174,   174,   174,   174,   175,   175,   175,   175,   176,
     177,   178,   179,   180,   180,   180,   180,   180,   180,   180,
     180,   180,   180,   180,   180,   180,   180,   180,   180,   180,
     180,   180,   180,   180,   180,   180,   180,   180,   180,   180,
     180,   180,   180,   180,   180,   180,   180,   180,   180,   180,
     180,   180,   181,   182,   182,   182,   182,   183,   183,   183,
     183,   184,   184,   184,   184,   184,   184,   184,   184,   185,
     185,   185,   185,   185,   185,   185,   185,   186,   186,   186,
     186,   186,   186,   186,   186,   186,   186,   186,   186,   186,
     186,   186,   186,   186,   186,   186,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     3,     3,     2,     3,     2,     2,
       2,     2,     2,     3,     3,     3,     2,     2,     4,     4,
       4,     4,     3,     4,     5,     2,     3,     2,     2,     3,
       2,     4,     4,     5,     5,     5,     5,     5,     2,     5,
       2,     3,     3,     2,     3,     4,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     4,     4,     4,     4,
       4,     3,     3,     3,     4,     3,     3,     5,     7,     3,
       3,     0,     1,     1,     2,     2,     2,     3,     3,     3,
       2,     4,     3,     3,     2,     5,     3,     3,     4,     3,
       2,     3,     4,     3,     5,     3,     3,     3,     3,     3,
       4,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     3
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
        case 45:
#line 214 "parser.y" /* yacc.c:1646  */
    {
      }
#line 2031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 225 "parser.y" /* yacc.c:1646  */
    { (yyval.uval)=(yyvsp[0].uval); }
#line 2037 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 230 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_timebp_command(0, (yyvsp[-1].ulval));
	free((yyvsp[-2].sval));
	}
#line 2046 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 235 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_timebp_command(1, (yyvsp[-1].ulval));
	free((yyvsp[-2].sval));
	}
#line 2055 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 243 "parser.y" /* yacc.c:1646  */
    {
          bx_dbg_record_command((yyvsp[-1].sval));
          free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
          }
#line 2064 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 251 "parser.y" /* yacc.c:1646  */
    {
          bx_dbg_playback_command((yyvsp[-1].sval));
          free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
          }
#line 2073 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 259 "parser.y" /* yacc.c:1646  */
    {
          bx_dbg_modebp_command();
          free((yyvsp[-1].sval));
          }
#line 2082 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 267 "parser.y" /* yacc.c:1646  */
    {
          bx_dbg_show_command((yyvsp[-1].sval));
          free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
          }
#line 2091 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 272 "parser.y" /* yacc.c:1646  */
    {
          bx_dbg_show_command(0);
          free((yyvsp[-1].sval));
          }
#line 2100 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 280 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_ptime_command();
        free((yyvsp[-1].sval));
	}
#line 2109 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 288 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_trace_on_command();
        free((yyvsp[-1].sval));
	}
#line 2118 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 296 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_trace_off_command();
        free((yyvsp[-1].sval));
	}
#line 2127 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 304 "parser.y" /* yacc.c:1646  */
    {
          bx_dbg_print_stack_command(16);
          free((yyvsp[-1].sval));
	  }
#line 2136 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 309 "parser.y" /* yacc.c:1646  */
    {
          bx_dbg_print_stack_command((yyvsp[-1].uval));
          free((yyvsp[-2].sval));
	  }
#line 2145 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 317 "parser.y" /* yacc.c:1646  */
    {
          watchpoint_continue = 0;
	  dbg_printf("Will stop on watch points\n");
          free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
          }
#line 2155 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 323 "parser.y" /* yacc.c:1646  */
    {
          watchpoint_continue = 1;
          dbg_printf("Will not stop on watch points (they will still be logged)\n");
          free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
          }
#line 2165 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 329 "parser.y" /* yacc.c:1646  */
    {
          bx_dbg_watch(-1, 0);
          free((yyvsp[-1].sval));
          }
#line 2174 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 334 "parser.y" /* yacc.c:1646  */
    {
          bx_dbg_unwatch(-1, 0);
          free((yyvsp[-1].sval));
          }
#line 2183 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 339 "parser.y" /* yacc.c:1646  */
    {
          bx_dbg_watch(1, (yyvsp[-1].uval));
          free((yyvsp[-3].sval)); free((yyvsp[-2].sval));
          }
#line 2192 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 344 "parser.y" /* yacc.c:1646  */
    {
          bx_dbg_unwatch(1, (yyvsp[-1].uval));
          free((yyvsp[-3].sval)); free((yyvsp[-2].sval));
          }
#line 2201 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 349 "parser.y" /* yacc.c:1646  */
    {
          bx_dbg_watch(0, (yyvsp[-1].uval));
          free((yyvsp[-3].sval)); free((yyvsp[-2].sval));
          }
#line 2210 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 354 "parser.y" /* yacc.c:1646  */
    {
          bx_dbg_unwatch(0, (yyvsp[-1].uval));
          free((yyvsp[-3].sval)); free((yyvsp[-2].sval));
          }
#line 2219 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 362 "parser.y" /* yacc.c:1646  */
    {
	bx_dbg_symbol_command((yyvsp[-1].sval), 0, 0);
        free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
        }
#line 2228 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 367 "parser.y" /* yacc.c:1646  */
    {
	bx_dbg_symbol_command((yyvsp[-2].sval), 0, (yyvsp[-1].uval));
        free((yyvsp[-3].sval)); free((yyvsp[-2].sval));
        }
#line 2237 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 372 "parser.y" /* yacc.c:1646  */
    {
	bx_dbg_symbol_command((yyvsp[-2].sval), 1, (yyvsp[-1].uval));
        free((yyvsp[-4].sval)); free((yyvsp[-3].sval)); free((yyvsp[-2].sval));
        }
#line 2246 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 380 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_where_command();
        free((yyvsp[-1].sval));
        }
#line 2255 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 388 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_print_string_command((yyvsp[-1].uval));
        free((yyvsp[-2].sval));
        }
#line 2264 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 396 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_continue_command();
        free((yyvsp[-1].sval));
        }
#line 2273 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 404 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_stepN_command(1);
        free((yyvsp[-1].sval));
        }
#line 2282 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 409 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_stepN_command((yyvsp[-1].uval));
        free((yyvsp[-2].sval));
        }
#line 2291 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 417 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_step_over_command();
        free((yyvsp[-1].sval));
        }
#line 2300 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 426 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_set_auto_disassemble((yyvsp[-1].bval));
        free((yyvsp[-3].sval)); free((yyvsp[-2].sval));
        }
#line 2309 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 431 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_set_symbol_command((yyvsp[-3].sval), (yyvsp[-1].uval));
        free((yyvsp[-4].sval)); free((yyvsp[-3].sval));
        }
#line 2318 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 436 "parser.y" /* yacc.c:1646  */
    { 
        bx_dbg_set_reg8l_value((yyvsp[-3].uval), (yyvsp[-1].ulval));
        }
#line 2326 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 440 "parser.y" /* yacc.c:1646  */
    { 
        bx_dbg_set_reg8h_value((yyvsp[-3].uval), (yyvsp[-1].ulval));
        }
#line 2334 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 444 "parser.y" /* yacc.c:1646  */
    { 
        bx_dbg_set_reg16_value((yyvsp[-3].uval), (yyvsp[-1].ulval));
        }
#line 2342 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 448 "parser.y" /* yacc.c:1646  */
    { 
        bx_dbg_set_reg32_value((yyvsp[-3].uval), (yyvsp[-1].ulval));
        }
#line 2350 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 455 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_vbreakpoint_command(bkAtIP, 0, 0);
        free((yyvsp[-1].sval));
        }
#line 2359 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 460 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_vbreakpoint_command(bkRegular, (yyvsp[-3].ulval), (yyvsp[-1].ulval));
        free((yyvsp[-4].sval));
        }
#line 2368 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 465 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_lbreakpoint_command(bkAtIP, 0);
        free((yyvsp[-1].sval));
        }
#line 2377 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 470 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_lbreakpoint_command(bkRegular, (yyvsp[-1].ulval));
        free((yyvsp[-2].sval));
        }
#line 2386 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 475 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_lbreakpoint_symbol_command((yyvsp[-1].sval));
        free((yyvsp[-2].sval));free((yyvsp[-1].sval));
        }
#line 2395 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 480 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_pbreakpoint_command(bkAtIP, 0);
        free((yyvsp[-1].sval));
        }
#line 2404 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 485 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_pbreakpoint_command(bkRegular, (yyvsp[-1].ulval));
        free((yyvsp[-2].sval));
        }
#line 2413 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 490 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_pbreakpoint_command(bkRegular, (yyvsp[-1].ulval));
        free((yyvsp[-3].sval));
        }
#line 2422 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 498 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_info_bpoints_command();
        free((yyvsp[-1].sval));
        }
#line 2431 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 506 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_info_symbols_command(0);
        free((yyvsp[-1].sval));
        }
#line 2440 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 511 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_info_symbols_command((yyvsp[-1].sval));
        free((yyvsp[-2].sval));free((yyvsp[-1].sval));
        }
#line 2449 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 519 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_info_bpoints_command();
        free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
        }
#line 2458 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 524 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_dump_cpu_command();
        free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
        }
#line 2467 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 529 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_info_registers_command(BX_INFO_CPU_REGS);
        free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
        }
#line 2476 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 534 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_info_registers_command(BX_INFO_FPU_REGS);
        free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
        }
#line 2485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 539 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_info_registers_command(BX_INFO_SSE_REGS);
        free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
        }
#line 2494 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 544 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_info_registers_command(BX_INFO_CPU_REGS | BX_INFO_FPU_REGS | BX_INFO_SSE_REGS);
        free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
        }
#line 2503 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 549 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_info_dirty_command();
        free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
	}
#line 2512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 554 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_info_idt_command((yyvsp[-1].uval_range));
        free((yyvsp[-3].sval)); free((yyvsp[-2].sval));
        }
#line 2521 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 559 "parser.y" /* yacc.c:1646  */
    {
       bx_dbg_info_ivt_command((yyvsp[-1].uval_range));
       free((yyvsp[-3].sval)); free((yyvsp[-2].sval));
       }
#line 2530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 564 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_info_gdt_command((yyvsp[-1].uval_range));
        free((yyvsp[-3].sval)); free((yyvsp[-2].sval));
        }
#line 2539 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 569 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_info_ldt_command((yyvsp[-1].uval_range));
        free((yyvsp[-3].sval)); free((yyvsp[-2].sval));
        }
#line 2548 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 574 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_info_tss_command((yyvsp[-1].uval_range));
        free((yyvsp[-3].sval)); free((yyvsp[-2].sval));
        }
#line 2557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 579 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_info_flags();
        free((yyvsp[-2].sval));
        }
#line 2566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 584 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_info_linux_command();
        free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
        }
#line 2575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 589 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_info_symbols_command(0);
        free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
        }
#line 2584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 594 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_info_symbols_command((yyvsp[-1].sval));
        free((yyvsp[-3].sval)); free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
        }
#line 2593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 599 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_info_control_regs_command();
        free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
        }
#line 2602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 604 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_info_ne2k(-1, -1);
        free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
        }
#line 2611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 609 "parser.y" /* yacc.c:1646  */
    {
        free((yyvsp[-4].sval)); free((yyvsp[-3].sval)); free((yyvsp[-2].sval));
        bx_dbg_info_ne2k((yyvsp[-1].uval), -1);
        }
#line 2620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 614 "parser.y" /* yacc.c:1646  */
    {
        free((yyvsp[-6].sval)); free((yyvsp[-5].sval)); free((yyvsp[-4].sval)); free((yyvsp[-2].sval));
        bx_dbg_info_ne2k((yyvsp[-3].uval), (yyvsp[-1].uval));
        }
#line 2629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 619 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_info_pic();
        free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
        }
#line 2638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 624 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_info_vga();
        free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
        }
#line 2647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 635 "parser.y" /* yacc.c:1646  */
    { (yyval.uval_range) = make_num_range (EMPTY_ARG, EMPTY_ARG); }
#line 2653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 640 "parser.y" /* yacc.c:1646  */
    {
      (yyval.uval_range) = make_num_range ((yyvsp[0].ulval), (yyvsp[0].ulval));
    }
#line 2661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 644 "parser.y" /* yacc.c:1646  */
    {
      (yyval.uval_range) = make_num_range ((yyvsp[-1].ulval), (yyvsp[0].ulval));
    }
#line 2669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 650 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_info_registers_command(BX_INFO_CPU_REGS);
        free((yyvsp[-1].sval));
        }
#line 2678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 658 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_dump_cpu_command();
        free((yyvsp[-1].sval));
        }
#line 2687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 666 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_del_breakpoint_command((yyvsp[-1].uval));
        free((yyvsp[-2].sval));
        }
#line 2696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 674 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_en_dis_breakpoint_command((yyvsp[-1].uval), 1);
        free((yyvsp[-2].sval));
       }
#line 2705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 681 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_en_dis_breakpoint_command((yyvsp[-1].uval), 0);
        free((yyvsp[-2].sval));
       }
#line 2714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 689 "parser.y" /* yacc.c:1646  */
    {
	  bx_dbg_quit_command();
	  free((yyvsp[-1].sval));
        }
#line 2723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 697 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_examine_command((yyvsp[-3].sval), (yyvsp[-2].sval),1, (yyvsp[-1].ulval), 1);
        free((yyvsp[-3].sval)); free((yyvsp[-2].sval));
        }
#line 2732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 702 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_examine_command((yyvsp[-2].sval), (yyvsp[-1].sval),1, 0, 0);
        free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
        }
#line 2741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 707 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_examine_command((yyvsp[-2].sval), NULL,0, (yyvsp[-1].ulval), 1);
        free((yyvsp[-2].sval));
        }
#line 2750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 712 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_examine_command((yyvsp[-1].sval), NULL,0, 0, 0);
        free((yyvsp[-1].sval));
        }
#line 2759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 720 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_setpmem_command((yyvsp[-3].uval), (yyvsp[-2].uval), (yyvsp[-1].uval));
        free((yyvsp[-4].sval));
        }
#line 2768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 728 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_query_command((yyvsp[-1].sval));
        free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
        }
#line 2777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 736 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_take_command((yyvsp[-1].sval), 1);
        free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
        }
#line 2786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 741 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_take_command((yyvsp[-2].sval), (yyvsp[-1].uval));
        free((yyvsp[-3].sval)); free((yyvsp[-2].sval));
        }
#line 2795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 746 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_take_command((yyvsp[-1].sval), 1);
        free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
        }
#line 2804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 754 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_set_cpu_command();
        free((yyvsp[-1].sval));
        }
#line 2813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 762 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_disassemble_command(NULL, (yyvsp[-1].uval_range));
        free((yyvsp[-2].sval));
        }
#line 2822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 767 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_disassemble_command((yyvsp[-2].sval), (yyvsp[-1].uval_range));
	free((yyvsp[-3].sval)); free((yyvsp[-2].sval));
        }
#line 2831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 772 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_disassemble_switch_mode();
	free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
        }
#line 2840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 777 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_set_disassemble_size((yyvsp[-1].uval));
	free((yyvsp[-4].sval)); free((yyvsp[-3].sval));
        }
#line 2849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 788 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_instrument_command((yyvsp[-1].sval));
        free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
        }
#line 2858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 796 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_doit_command((yyvsp[-1].uval));
        free((yyvsp[-2].sval));
        }
#line 2867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 804 "parser.y" /* yacc.c:1646  */
    {
        bx_dbg_crc_command((yyvsp[-2].uval), (yyvsp[-1].uval));
        free((yyvsp[-3].sval));
        }
#line 2876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 812 "parser.y" /* yacc.c:1646  */
    {
	bx_dbg_trace_reg_on_command();
	free((yyvsp[-1].sval));
	}
#line 2885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 820 "parser.y" /* yacc.c:1646  */
    {
	bx_dbg_trace_reg_off_command();
	free((yyvsp[-1].sval));
	}
#line 2894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 828 "parser.y" /* yacc.c:1646  */
    {
         dbg_printf("q|quit|exit - quit debugger and emulator execution\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
         }
#line 2903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 833 "parser.y" /* yacc.c:1646  */
    {
         dbg_printf("c|cont|continue - continue executing\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
         }
#line 2912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 838 "parser.y" /* yacc.c:1646  */
    {
         dbg_printf("s|step|stepi [count] - execute #count instructions (default is one instruction)\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
         }
#line 2921 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 843 "parser.y" /* yacc.c:1646  */
    {
         dbg_printf("n|next|p - execute instruction stepping over subroutines\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
         }
#line 2930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 848 "parser.y" /* yacc.c:1646  */
    {
         dbg_printf("vb|vbreak <seg:offset> - set a virtual address instruction breakpoint\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
         }
#line 2939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 853 "parser.y" /* yacc.c:1646  */
    {
         dbg_printf("p|pb|break|pbreak <addr> - set a physical address instruction breakpoint\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
         }
#line 2948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 858 "parser.y" /* yacc.c:1646  */
    {
         dbg_printf("d|del|delete <n> - delete a breakpoint\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
         }
#line 2957 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 863 "parser.y" /* yacc.c:1646  */
    {
         dbg_printf("bpe <n> - enable a breakpoint\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
         }
#line 2966 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 868 "parser.y" /* yacc.c:1646  */
    {
         dbg_printf("bpd <n> - disable a breakpoint\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
         }
#line 2975 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 873 "parser.y" /* yacc.c:1646  */
    {
         dbg_printf("blist - list all breakpoints (same as 'info break')\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
         }
#line 2984 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 878 "parser.y" /* yacc.c:1646  */
    {
         dbg_printf("modebp - toggles mode switch breakpoint\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
         }
#line 2993 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 883 "parser.y" /* yacc.c:1646  */
    {
         dbg_printf("crc <addr1> <addr2> - show CRC32 for physical memory range addr1..addr2\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
         }
#line 3002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 888 "parser.y" /* yacc.c:1646  */
    {
         dbg_printf("trace-on - disassemble every executed instruction\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
         }
#line 3011 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 893 "parser.y" /* yacc.c:1646  */
    {
         dbg_printf("trace-off - disable instruction tracing\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
         }
#line 3020 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 898 "parser.y" /* yacc.c:1646  */
    {
         dbg_printf("trace-reg-on - print all registers every executed instruction\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
         }
#line 3029 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 903 "parser.y" /* yacc.c:1646  */
    {
         dbg_printf("trace-reg-off - disable registers state tracing\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
         }
#line 3038 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 908 "parser.y" /* yacc.c:1646  */
    {
         dbg_printf("dump_cpu - dump complete cpu state\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
         }
#line 3047 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 913 "parser.y" /* yacc.c:1646  */
    {
         dbg_printf("set_cpu - set complete cpu state\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
         }
#line 3056 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 918 "parser.y" /* yacc.c:1646  */
    {
         dbg_printf("ptime - print current time (number of ticks since start of simulation)\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
         }
#line 3065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 923 "parser.y" /* yacc.c:1646  */
    {
         dbg_printf("sb <delta> - insert a time breakpoint delta instructions into the future\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
         }
#line 3074 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 928 "parser.y" /* yacc.c:1646  */
    {
         dbg_printf("sba <time> - insert breakpoint at specific time\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
         }
#line 3083 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 933 "parser.y" /* yacc.c:1646  */
    {
         dbg_printf("print-stack [num_words] - print the num_words top 16 bit words on the stack\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
         }
#line 3092 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 938 "parser.y" /* yacc.c:1646  */
    {
         dbg_printf("record <filename> - record console input to file filename\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
         }
#line 3101 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 943 "parser.y" /* yacc.c:1646  */
    {
         dbg_printf("playback <filename> - playback console input from file filename\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
         }
#line 3110 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 948 "parser.y" /* yacc.c:1646  */
    {
         dbg_printf("load-symbols [global] <filename> [offset] - load symbols from file\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
         }
#line 3119 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 953 "parser.y" /* yacc.c:1646  */
    {
         dbg_printf("slist [string] - list symbols whose preffix is string (same as 'info symbols')\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
         }
#line 3128 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 958 "parser.y" /* yacc.c:1646  */
    {
         dbg_printf("r|reg|regs|registers - list of CPU registers and their contents (same as 'info registers')\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
         }
#line 3137 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 963 "parser.y" /* yacc.c:1646  */
    {
         dbg_printf("setpmem <addr> <datasize> <val> - set physical memory location of size 'datasize' to value 'val'\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
         }
#line 3146 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 968 "parser.y" /* yacc.c:1646  */
    {
         dbg_printf("u|disasm|disassemble [/count] <start> <end> - disassemble instructions for given linear address\n");
         dbg_printf("    Optional 'count' is the number of disassembled instructions\n");
         dbg_printf("u|disasm|disassemble switch-mode - switch between Intel and AT&T disassembler syntax\n");
         dbg_printf("u|disasm|disassemble size = n - tell debugger what segment size [16|32|64] to use\n");
         dbg_printf("       when \"disassemble\" command is used.\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
         }
#line 3159 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 977 "parser.y" /* yacc.c:1646  */
    {
         dbg_printf("watch - print current watch point status\n");
         dbg_printf("watch stop - stop simulation when a watchpoint is encountred\n");
         dbg_printf("watch continue - do not stop the simulation when watch point is encountred\n");
         dbg_printf("watch read addr - insert a read watch point at physical address addr\n");
         dbg_printf("watch write addr - insert a write watch point at physical address addr\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
         }
#line 3172 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 986 "parser.y" /* yacc.c:1646  */
    {
         dbg_printf("unwatch - remove all watch points\n");
         dbg_printf("unwatch read addr - remove a read watch point at physical address addr\n");
         dbg_printf("unwatch write addr - remove a write watch point at physical address addr\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
         }
#line 3183 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 993 "parser.y" /* yacc.c:1646  */
    {
         dbg_printf("x  /nuf <addr> - examine memory at linear address\n");
         dbg_printf("xp /nuf <addr> - examine memory at physical address\n");
         dbg_printf("    nuf is a sequence of numbers (how much values to display)\n");
         dbg_printf("    and one or more of the [mxduotcsibhwg] format specificators:\n");
         dbg_printf("    x,d,u,o,t,c,s,i select the format of the output (they stand for\n");
         dbg_printf("        hex, decimal, unsigned, octal, binary, char, asciiz, instr)\n");
         dbg_printf("    b,h,w,g select the size of a data element (for byte, half-word,\n");
         dbg_printf("        word and giant word)\n");
         dbg_printf("    m selects an alternative output format (memory dump)\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
         }
#line 3200 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1006 "parser.y" /* yacc.c:1646  */
    {
         dbg_printf("instrument start - calls bx_instr_start() callback\n");
         dbg_printf("instrument stop  - calls bx_instr_stop() callback\n");
         dbg_printf("instrument reset - calls bx_instr_reset() callback\n");
         dbg_printf("instrument print - calls bx_instr_print() callback\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
         }
#line 3212 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1014 "parser.y" /* yacc.c:1646  */
    {
         dbg_printf("set <regname> = <expr> - set register value to expression\n");
         dbg_printf("set $reg = val - set CPU register to value val\n");
         dbg_printf("set $auto_disassemble = 1 - cause debugger to disassemble current instruction\n");
         dbg_printf("       every time execution stops\n");
         dbg_printf("set u|disasm|disassemble on  - same as 'set $auto_disassemble = 1'\n");
         dbg_printf("set u|disasm|disassemble off - same as 'set $auto_disassemble = 0'\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
         }
#line 3226 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1024 "parser.y" /* yacc.c:1646  */
    {
         dbg_printf("info break - show information about current breakpoint status\n");
         dbg_printf("info dirty - show physical pages dirtied (written to) since last display\n");
         dbg_printf("info r|reg|regs|registers - list of CPU integer registers and their contents\n");
         dbg_printf("info cpu - list of CPU registers and their contents\n");
         dbg_printf("info fpu - list of FPU registers and their contents\n");
         dbg_printf("info sse - list of SSE registers and their contents\n");
         dbg_printf("info idt - show interrupt descriptor table\n");
         dbg_printf("info ivt - show interrupt vector table\n");
         dbg_printf("info gdt - show global descriptor table\n");
         dbg_printf("info tss - show current task state segment\n");
         dbg_printf("info cr - show CR0-4 registers\n");
         dbg_printf("info eflags - show decoded EFLAGS register\n");
         dbg_printf("info symbols [string] - list symbols whose prefix is string\n");
         dbg_printf("info pic - show PICs registers\n");
         dbg_printf("info ne2000 - show NE2000 registers\n");
         dbg_printf("info vga - show vga registers\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
         }
#line 3250 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1044 "parser.y" /* yacc.c:1646  */
    {
         dbg_printf("show \"string\" - toggles show symbolic info (calls to begin with)\n");
         dbg_printf("show - shows current show mode\n");
         dbg_printf("show \"mode\" - show, when processor switch mode\n");
         dbg_printf("show \"int\" - show, when interrupt is happens\n");
         dbg_printf("show \"call\" - show, when call is happens\n");
         dbg_printf("show \"ret\" - show, when iret is happens\n");
         dbg_printf("show \"off\" - toggles off symbolic info\n");
         dbg_printf("show \"dbg-all\" - turn on all show flags\n");
         dbg_printf("show \"none\" - turn off all show flags\n");
         dbg_printf("show \"tab\" - show page tables\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
         }
#line 3268 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1058 "parser.y" /* yacc.c:1646  */
    {
         dbg_printf("calc|? <expr> - calculate a expression and display the result.\n");
         dbg_printf("    'expr' can reference any general-purpose and segment\n");
         dbg_printf("    registers, use any arithmetic and logic operations, and\n");
         dbg_printf("    also the special ':' operator which computes the linear\n");
         dbg_printf("    address for a segment:offset (in real and v86 mode) or\n");
         dbg_printf("    of a selector:offset (in protected mode) pair.\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
         }
#line 3282 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1068 "parser.y" /* yacc.c:1646  */
    {
         bx_dbg_print_help();
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
         }
#line 3291 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1073 "parser.y" /* yacc.c:1646  */
    {
         bx_dbg_print_help();
         free((yyvsp[-1].sval));
         }
#line 3300 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1081 "parser.y" /* yacc.c:1646  */
    {
     bx_dbg_calc_command((yyvsp[-1].ulval));
     free((yyvsp[-2].sval));
     }
#line 3309 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1092 "parser.y" /* yacc.c:1646  */
    { (yyval.uval)=(yyvsp[0].uval); }
#line 3315 "y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1100 "parser.y" /* yacc.c:1646  */
    { (yyval.uval)=(yyvsp[0].uval); }
#line 3321 "y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1112 "parser.y" /* yacc.c:1646  */
    { (yyval.uval)=(yyvsp[0].uval); }
#line 3327 "y.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1124 "parser.y" /* yacc.c:1646  */
    { (yyval.uval)=(yyvsp[0].uval); }
#line 3333 "y.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1137 "parser.y" /* yacc.c:1646  */
    { (yyval.ulval) = (yyvsp[0].uval); }
#line 3339 "y.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1138 "parser.y" /* yacc.c:1646  */
    { (yyval.ulval) = (yyvsp[0].ulval); }
#line 3345 "y.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1139 "parser.y" /* yacc.c:1646  */
    { (yyval.ulval) = bx_dbg_get_reg8l_value((yyvsp[0].uval)); }
#line 3351 "y.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1140 "parser.y" /* yacc.c:1646  */
    { (yyval.ulval) = bx_dbg_get_reg8h_value((yyvsp[0].uval)); }
#line 3357 "y.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1141 "parser.y" /* yacc.c:1646  */
    { (yyval.ulval) = bx_dbg_get_reg16_value((yyvsp[0].uval)); }
#line 3363 "y.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1142 "parser.y" /* yacc.c:1646  */
    { (yyval.ulval) = bx_dbg_get_reg32_value((yyvsp[0].uval)); }
#line 3369 "y.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1143 "parser.y" /* yacc.c:1646  */
    { (yyval.ulval) = bx_dbg_get_selector_value((yyvsp[0].uval)); }
#line 3375 "y.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1144 "parser.y" /* yacc.c:1646  */
    { (yyval.ulval) = (yyvsp[-2].ulval) + (yyvsp[0].ulval); }
#line 3381 "y.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1145 "parser.y" /* yacc.c:1646  */
    { (yyval.ulval) = (yyvsp[-2].ulval) - (yyvsp[0].ulval); }
#line 3387 "y.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1146 "parser.y" /* yacc.c:1646  */
    { (yyval.ulval) = (yyvsp[-2].ulval) * (yyvsp[0].ulval); }
#line 3393 "y.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1147 "parser.y" /* yacc.c:1646  */
    { (yyval.ulval) = (yyvsp[-2].ulval) / (yyvsp[0].ulval); }
#line 3399 "y.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1148 "parser.y" /* yacc.c:1646  */
    { (yyval.ulval) = (yyvsp[-2].ulval) >> (yyvsp[0].ulval); }
#line 3405 "y.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1149 "parser.y" /* yacc.c:1646  */
    { (yyval.ulval) = (yyvsp[-2].ulval) << (yyvsp[0].ulval); }
#line 3411 "y.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1150 "parser.y" /* yacc.c:1646  */
    { (yyval.ulval) = (yyvsp[-2].ulval) | (yyvsp[0].ulval); }
#line 3417 "y.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1151 "parser.y" /* yacc.c:1646  */
    { (yyval.ulval) = (yyvsp[-2].ulval) ^ (yyvsp[0].ulval); }
#line 3423 "y.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1152 "parser.y" /* yacc.c:1646  */
    { (yyval.ulval) = (yyvsp[-2].ulval) & (yyvsp[0].ulval); }
#line 3429 "y.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 1153 "parser.y" /* yacc.c:1646  */
    { (yyval.ulval) = !(yyvsp[0].ulval); }
#line 3435 "y.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 1154 "parser.y" /* yacc.c:1646  */
    { (yyval.ulval) = -(yyvsp[0].ulval); }
#line 3441 "y.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 1155 "parser.y" /* yacc.c:1646  */
    { (yyval.ulval) = (yyvsp[-1].ulval); }
#line 3447 "y.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 1160 "parser.y" /* yacc.c:1646  */
    { (yyval.ulval) = (yyvsp[0].uval); }
#line 3453 "y.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 1161 "parser.y" /* yacc.c:1646  */
    { (yyval.ulval) = (yyvsp[0].ulval); }
#line 3459 "y.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 1162 "parser.y" /* yacc.c:1646  */
    { (yyval.ulval) = bx_dbg_get_symbol_value((yyvsp[0].sval)); free((yyvsp[0].sval));}
#line 3465 "y.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 1163 "parser.y" /* yacc.c:1646  */
    { (yyval.ulval) = bx_dbg_get_reg8l_value((yyvsp[0].uval)); }
#line 3471 "y.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 1164 "parser.y" /* yacc.c:1646  */
    { (yyval.ulval) = bx_dbg_get_reg8h_value((yyvsp[0].uval)); }
#line 3477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 1165 "parser.y" /* yacc.c:1646  */
    { (yyval.ulval) = bx_dbg_get_reg16_value((yyvsp[0].uval)); }
#line 3483 "y.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 1166 "parser.y" /* yacc.c:1646  */
    { (yyval.ulval) = bx_dbg_get_reg32_value((yyvsp[0].uval)); }
#line 3489 "y.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 1167 "parser.y" /* yacc.c:1646  */
    { (yyval.ulval) = bx_dbg_get_selector_value((yyvsp[0].uval));}
#line 3495 "y.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 1168 "parser.y" /* yacc.c:1646  */
    { (yyval.ulval) = bx_dbg_get_laddr ((yyvsp[-2].ulval), (yyvsp[0].ulval)); }
#line 3501 "y.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 1169 "parser.y" /* yacc.c:1646  */
    { (yyval.ulval) = (yyvsp[-2].ulval) + (yyvsp[0].ulval); }
#line 3507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 1170 "parser.y" /* yacc.c:1646  */
    { (yyval.ulval) = (yyvsp[-2].ulval) - (yyvsp[0].ulval); }
#line 3513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 1171 "parser.y" /* yacc.c:1646  */
    { (yyval.ulval) = (yyvsp[-2].ulval) * (yyvsp[0].ulval); }
#line 3519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 1172 "parser.y" /* yacc.c:1646  */
    { (yyval.ulval) = ((yyvsp[0].ulval) != 0) ? (yyvsp[-2].ulval) / (yyvsp[0].ulval) : 0; }
#line 3525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 1173 "parser.y" /* yacc.c:1646  */
    { (yyval.ulval) = (yyvsp[-2].ulval) >> (yyvsp[0].ulval); }
#line 3531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 1174 "parser.y" /* yacc.c:1646  */
    { (yyval.ulval) = (yyvsp[-2].ulval) << (yyvsp[0].ulval); }
#line 3537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 1175 "parser.y" /* yacc.c:1646  */
    { (yyval.ulval) = (yyvsp[-2].ulval) | (yyvsp[0].ulval); }
#line 3543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 1176 "parser.y" /* yacc.c:1646  */
    { (yyval.ulval) = (yyvsp[-2].ulval) ^ (yyvsp[0].ulval); }
#line 3549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 1177 "parser.y" /* yacc.c:1646  */
    { (yyval.ulval) = (yyvsp[-2].ulval) & (yyvsp[0].ulval); }
#line 3555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 1178 "parser.y" /* yacc.c:1646  */
    { (yyval.ulval) = !(yyvsp[0].ulval); }
#line 3561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 1179 "parser.y" /* yacc.c:1646  */
    { (yyval.ulval) = -(yyvsp[0].ulval); }
#line 3567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 1180 "parser.y" /* yacc.c:1646  */
    { (yyval.ulval) = (yyvsp[-1].ulval); }
#line 3573 "y.tab.c" /* yacc.c:1646  */
    break;


#line 3577 "y.tab.c" /* yacc.c:1646  */
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
#line 1183 "parser.y" /* yacc.c:1906  */

#endif  /* if BX_DEBUGGER */
/* The #endif is appended by the makefile after running yacc. */
