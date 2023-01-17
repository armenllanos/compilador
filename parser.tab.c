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
#line 2 "parser.y"

  #include <stdio.h>
  #include <stdbool.h>
  #include <math.h>
  #include "definiciones.h"
  #include "colaDobleCaracteres.h"
  #include "tablaCuadruplas.h"
  #include "tablaSimbolos.h"
  #define YYDEBUG 1
  int yylex (void);
  extern FILE *yyin;
  void yyerror (char const *);


#line 85 "parser.tab.c"

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
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
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
    id = 258,
    id_bool = 259,
    op_asignacion = 260,
    op_composicion_secuencial = 261,
    op_separador = 262,
    op_subrango = 263,
    op_definicion_tipo_variable = 264,
    op_entonces = 265,
    op_si_no_si = 266,
    op_inicio_array = 267,
    op_fin_array = 268,
    op_negativo = 269,
    op_positivo = 270,
    op_div = 271,
    op_mult = 272,
    op_relacional = 273,
    simbolo_igual = 274,
    pr_accion = 275,
    pr_algoritmo = 276,
    pr_const = 277,
    pr_continuar = 278,
    pr_de = 279,
    pr_dev = 280,
    pr_div = 281,
    pr_ent = 282,
    pr_ent_sal = 283,
    pr_faccion = 284,
    pr_falgoritmo = 285,
    pr_falso = 286,
    pr_fconst = 287,
    pr_ffuncion = 288,
    pr_fmientras = 289,
    pr_fpara = 290,
    pr_fsi = 291,
    pr_ftipo = 292,
    pr_ftupla = 293,
    pr_funcion = 294,
    pr_fvar = 295,
    pr_hacer = 296,
    pr_hasta = 297,
    pr_mientras = 298,
    pr_mod = 299,
    pr_no = 300,
    pr_o = 301,
    pr_para = 302,
    pr_ref = 303,
    pr_sal = 304,
    pr_si = 305,
    pr_tabla = 306,
    pr_tipo = 307,
    pr_tupla = 308,
    pr_var = 309,
    pr_verdadero = 310,
    pr_y = 311,
    t_literal_entero = 312,
    t_literal_real = 313,
    t_literal_caracter = 314,
    t_literal = 315,
    t_tipo_base = 316,
    t_comentario = 317,
    t_opa_nivel2 = 318,
    ce_punto = 319,
    ce_parentesis_apertura = 320,
    ce_parentesis_cierre = 321,
    ce_llave_apertura = 322,
    ce_llave_cierre = 323,
    ce_barra_baja = 324,
    t_literal_booleano = 325,
    t_literal_string = 326
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 117 "parser.y"

 struct tipo_base_pruba{
    int entero;
    bool booleano;
    char caracter;
    float real;
    char cadena[128];
 } paraLiterales;
 ts_exp paraExp;
 tiposBase paraTipos; 
 opRels paraOpRel;
 char paraNombres[128];
 int next;
 int quad;
 tipoColaDobleC miCola;

#line 226 "parser.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */



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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   263

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  72
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  97
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  231

#define YYUNDEFTOK  2
#define YYMAXUTOK   326


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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   156,   156,   160,   164,   168,   169,   170,   174,   175,
     176,   180,   184,   185,   186,   187,   191,   195,   199,   203,
     204,   208,   209,   210,   211,   212,   213,   217,   218,   222,
     223,   227,   228,   232,   239,   243,   246,   251,   252,   253,
     257,   261,   266,   272,   279,   285,   286,   287,   295,   303,
     312,   317,   318,   319,   323,   351,   374,   397,   421,   432,
     455,   458,   461,   466,   471,   476,   485,   497,   498,   499,
     503,   504,   508,   509,   510,   511,   512,   516,   531,   535,
     536,   540,   541,   545,   549,   553,   557,   561,   565,   569,
     570,   574,   575,   576,   580,   584,   588,   589
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "id", "id_bool", "op_asignacion",
  "op_composicion_secuencial", "op_separador", "op_subrango",
  "op_definicion_tipo_variable", "op_entonces", "op_si_no_si",
  "op_inicio_array", "op_fin_array", "op_negativo", "op_positivo",
  "op_div", "op_mult", "op_relacional", "simbolo_igual", "pr_accion",
  "pr_algoritmo", "pr_const", "pr_continuar", "pr_de", "pr_dev", "pr_div",
  "pr_ent", "pr_ent_sal", "pr_faccion", "pr_falgoritmo", "pr_falso",
  "pr_fconst", "pr_ffuncion", "pr_fmientras", "pr_fpara", "pr_fsi",
  "pr_ftipo", "pr_ftupla", "pr_funcion", "pr_fvar", "pr_hacer", "pr_hasta",
  "pr_mientras", "pr_mod", "pr_no", "pr_o", "pr_para", "pr_ref", "pr_sal",
  "pr_si", "pr_tabla", "pr_tipo", "pr_tupla", "pr_var", "pr_verdadero",
  "pr_y", "t_literal_entero", "t_literal_real", "t_literal_caracter",
  "t_literal", "t_tipo_base", "t_comentario", "t_opa_nivel2", "ce_punto",
  "ce_parentesis_apertura", "ce_parentesis_cierre", "ce_llave_apertura",
  "ce_llave_cierre", "ce_barra_baja", "t_literal_booleano",
  "t_literal_string", "$accept", "desc_algoritmo", "cabecera_alg",
  "bloque_alg", "decl_globales", "decl_a_f", "bloque", "declaraciones",
  "declaracion_tipo", "declaracion_cte", "declaracion_var", "lista_d_tipo",
  "d_tipo", "expresion_t", "lista_campos", "lista_d_cte", "lista_d_var",
  "lista_id", "decl_ent_sal", "decl_ent", "decl_sal", "exp_b", "M",
  "expresion", "exp_a", "operando", "instrucciones", "instruccion",
  "asignacion", "alternativa", "lista_opciones", "iteracion",
  "it_cota_exp", "it_cota_fija", "accion_d", "funcion_d", "a_cabecera",
  "f_cabecera", "d_par_form", "d_p_form", "accion_ll", "funcion_ll",
  "l_ll", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326
};
# endif

#define YYPACT_NINF (-117)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-24)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -1,    41,    56,     9,  -117,    -9,    65,    68,    -6,   140,
      -9,    -9,    57,    72,    92,    85,   106,   101,    53,   141,
      -6,    -6,    -6,   162,   177,     0,   140,   140,  -117,  -117,
      83,   168,    55,   205,   189,   172,   204,   150,  -117,   151,
    -117,    22,   212,    22,    90,  -117,   211,  -117,  -117,  -117,
    -117,  -117,  -117,  -117,  -117,  -117,   153,    -6,   154,    -6,
     106,   106,   158,   173,  -117,  -117,  -117,   215,  -117,     8,
     118,   118,  -117,    22,    55,   213,   220,  -117,  -117,  -117,
    -117,  -117,    22,   218,   219,    61,    32,   142,    89,  -117,
    -117,   106,   222,    55,  -117,    22,   161,    16,   224,   163,
      22,    22,  -117,   227,   141,   114,   202,   106,   207,  -117,
    -117,  -117,  -117,    65,    22,  -117,   118,   142,   142,    61,
      32,  -117,     7,   225,   198,   121,    15,    68,     7,  -117,
    -117,    22,    22,   118,   118,   118,   118,   118,   118,  -117,
    -117,   229,   171,   167,   141,    22,   141,    32,   179,    89,
    -117,   106,   106,   106,   174,   231,  -117,   176,    22,  -117,
     178,    15,   230,    55,  -117,  -117,  -117,  -117,  -117,    22,
      22,    32,    32,   142,   142,   142,   142,   142,   155,   106,
      22,  -117,   209,    21,   228,  -117,   232,   236,   237,   241,
     114,   223,   133,  -117,     7,   243,    61,   194,  -117,  -117,
    -117,    22,    22,   216,    55,    55,    55,  -117,  -117,    55,
    -117,   238,   220,    78,   175,  -117,  -117,  -117,  -117,   247,
     233,  -117,   141,   141,  -117,    55,   221,   228,  -117,  -117,
    -117
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,     7,    32,    20,    15,    10,
       7,     7,     0,     0,     0,     0,    34,     0,     0,     0,
      15,    15,    15,     0,     0,     0,    10,    10,     5,     6,
       0,     0,     0,     0,    36,     0,     0,     0,     4,    66,
      72,     0,     0,     0,     0,    11,    71,    73,    74,    75,
      82,    81,    76,    12,    13,    14,     0,    15,     0,    15,
      34,    34,     0,    37,    39,     8,     9,     0,    17,    66,
       0,     0,    46,     0,     0,     0,    30,    45,    62,    63,
      28,    26,     0,     0,     0,    52,    27,    51,    61,    53,
      16,     0,     0,     0,     2,     0,    66,     0,     0,     0,
       0,     0,    69,     0,     0,    90,     0,    34,     0,    40,
      41,     3,    38,    32,     0,    66,     0,    64,    65,    44,
       0,    25,     0,     0,     0,    52,    51,    20,     0,    50,
      50,     0,     0,     0,     0,     0,     0,     0,     0,    35,
      18,     0,    97,     0,     0,     0,     0,    77,     0,    67,
      70,     0,     0,     0,     0,     0,    85,     0,     0,    31,
       0,     0,     0,     0,    21,    49,    60,    19,    24,     0,
       0,    47,    48,    55,    54,    56,    57,    59,    58,    34,
       0,    94,     0,     0,    80,    68,     0,     0,     0,     0,
      90,     0,     0,    95,     0,     0,    43,    42,    33,    96,
      83,     0,     0,     0,     0,     0,     0,    87,    89,     0,
      86,     0,    30,     0,     0,    78,    91,    93,    92,     0,
       0,    29,     0,     0,    88,     0,     0,    80,    22,    84,
      79
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -117,  -117,  -117,  -117,   195,   183,   -33,    -3,   190,   197,
    -117,   127,   -70,  -116,    43,   145,   -53,   -63,  -117,  -117,
     196,   -71,   130,   -40,    12,   -19,   -99,  -117,  -117,  -117,
      34,  -117,  -117,  -117,  -117,  -117,  -117,  -117,    73,  -117,
    -117,  -117,  -105
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     8,    17,     9,    25,    18,    19,    20,    21,
      22,    15,    83,    84,   124,    13,    35,    36,    62,    63,
      64,    85,   169,    86,    87,    88,    45,    46,    47,    48,
     203,    49,    50,    51,    26,    27,    57,    59,   154,   155,
      52,    89,   143
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      44,    97,   119,    99,   121,   150,   162,   109,   110,   160,
      96,   125,   168,     6,   -23,     5,     6,    53,    54,    55,
       1,    70,    71,   141,   106,    96,   108,    60,   139,   133,
     134,   135,   136,   120,   131,   132,    70,    71,    72,   131,
     132,   137,   120,     7,     3,   182,     7,   184,    16,    61,
     131,   132,    73,    72,   157,   142,     4,   144,    69,   138,
     147,   148,    77,   201,    78,    79,    80,    73,    12,    70,
      71,    14,    82,   114,   142,   199,    30,    77,   211,    78,
      79,   166,   117,   118,   149,    44,    72,    82,   186,   187,
     188,   171,   172,   195,   126,   100,   131,   132,   196,   197,
      73,   101,   101,    74,    31,   183,    75,   129,    76,    34,
      77,    32,    78,    79,    80,    38,    81,   130,   192,   222,
      82,   115,    33,   226,   227,    44,   198,    44,   161,   120,
     120,    37,    70,    71,   216,   217,   218,   102,   102,   219,
     142,   151,   152,    67,    39,   173,   174,   175,   176,   177,
     178,   131,   132,   103,   103,   228,   133,   134,   135,   136,
      23,   213,   214,   153,    40,    56,   210,   129,   137,   133,
     134,   135,   136,   146,    68,    78,    79,   130,   180,    24,
      58,   131,   132,   116,    41,   223,   138,   165,    42,   131,
     132,    43,   185,   131,   132,    10,    91,   131,   132,   138,
      10,    10,    11,    44,    44,    28,    29,    11,    11,    65,
      66,    90,    92,    93,    94,    98,    95,   104,   105,   107,
     111,   113,    61,   123,   127,   122,   114,   128,   140,   145,
     115,   156,   158,   181,   163,   179,   164,   190,   194,   202,
     189,   204,   191,   200,   193,   205,   206,   207,   209,   212,
     130,   220,   215,   224,   167,   221,   229,   225,   159,   112,
     170,   230,     0,   208
};

static const yytype_int16 yycheck[] =
{
      19,    41,    73,    43,    74,   104,   122,    60,    61,   114,
       3,    82,   128,    22,     6,     6,    22,    20,    21,    22,
      21,    14,    15,    93,    57,     3,    59,    27,    91,    14,
      15,    16,    17,    73,    18,    19,    14,    15,    31,    18,
      19,    26,    82,    52,     3,   144,    52,   146,    54,    49,
      18,    19,    45,    31,   107,    95,     0,    41,     3,    44,
     100,   101,    55,    42,    57,    58,    59,    45,     3,    14,
      15,     3,    65,    65,   114,   180,    19,    55,   194,    57,
      58,    66,    70,    71,   103,   104,    31,    65,   151,   152,
     153,   131,   132,   163,    82,     5,    18,    19,   169,   170,
      45,    12,    12,    48,    32,   145,    51,    46,    53,     3,
      55,    19,    57,    58,    59,    62,    61,    56,   158,    41,
      65,     3,    37,   222,   223,   144,   179,   146,   116,   169,
     170,    30,    14,    15,   204,   205,   206,    48,    48,   209,
     180,    27,    28,    60,     3,   133,   134,   135,   136,   137,
     138,    18,    19,    64,    64,   225,    14,    15,    16,    17,
      20,   201,   202,    49,    23,     3,    33,    46,    26,    14,
      15,    16,    17,    10,     6,    57,    58,    56,     7,    39,
       3,    18,    19,    65,    43,    10,    44,    66,    47,    18,
      19,    50,    13,    18,    19,     5,     7,    18,    19,    44,
      10,    11,     5,   222,   223,    10,    11,    10,    11,    26,
      27,     6,    40,     9,    64,     3,    65,     6,    65,    65,
      62,     6,    49,     3,     6,    12,    65,     8,     6,     5,
       3,    29,    25,    66,     9,     6,    38,     6,     8,    11,
      66,     9,    66,    34,    66,     9,     9,     6,    25,     6,
      56,    13,    36,     6,   127,   212,    35,    24,   113,    63,
     130,   227,    -1,   190
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    21,    73,     3,     0,     6,    22,    52,    74,    76,
      80,    81,     3,    87,     3,    83,    54,    75,    78,    79,
      80,    81,    82,    20,    39,    77,   106,   107,    76,    76,
      19,    32,    19,    37,     3,    88,    89,    30,    62,     3,
      23,    43,    47,    50,    97,    98,    99,   100,   101,   103,
     104,   105,   112,    79,    79,    79,     3,   108,     3,   109,
      27,    49,    90,    91,    92,    77,    77,    60,     6,     3,
      14,    15,    31,    45,    48,    51,    53,    55,    57,    58,
      59,    61,    65,    84,    85,    93,    95,    96,    97,   113,
       6,     7,    40,     9,    64,    65,     3,    95,     3,    95,
       5,    12,    48,    64,     6,    65,    78,    65,    78,    88,
      88,    62,    92,     6,    65,     3,    65,    96,    96,    93,
      95,    84,    12,     3,    86,    93,    96,     6,     8,    46,
      56,    18,    19,    14,    15,    16,    17,    26,    44,    89,
       6,    84,    95,   114,    41,     5,    10,    95,    95,    97,
      98,    27,    28,    49,   110,   111,    29,    88,    25,    87,
     114,    96,    85,     9,    38,    66,    66,    83,    85,    94,
      94,    95,    95,    96,    96,    96,    96,    96,    96,     6,
       7,    66,    98,    95,    98,    13,    89,    89,    89,    66,
       6,    66,    95,    66,     8,    84,    93,    93,    88,   114,
      34,    42,    11,   102,     9,     9,     9,     6,   110,    25,
      33,    85,     6,    95,    95,    36,    84,    84,    84,    84,
      13,    86,    41,    10,     6,    24,    98,    98,    84,    35,
     102
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    72,    73,    74,    75,    76,    76,    76,    77,    77,
      77,    78,    79,    79,    79,    79,    80,    81,    82,    83,
      83,    84,    84,    84,    84,    84,    84,    85,    85,    86,
      86,    87,    87,    88,    88,    89,    89,    90,    90,    90,
      91,    92,    93,    93,    93,    93,    93,    93,    93,    93,
      94,    95,    95,    95,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    97,    97,    97,    97,
      98,    98,    99,    99,    99,    99,    99,   100,   101,   102,
     102,   103,   103,   104,   105,   106,   107,   108,   109,   110,
     110,   111,   111,   111,   112,   113,   114,   114
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     7,     4,     2,     2,     2,     0,     2,     2,
       0,     2,     2,     2,     2,     0,     4,     4,     4,     5,
       0,     3,     8,     1,     3,     2,     1,     1,     1,     5,
       0,     5,     0,     5,     0,     3,     1,     1,     2,     1,
       2,     2,     4,     4,     2,     1,     1,     3,     3,     3,
       0,     1,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     1,     1,     1,     2,     2,     1,     3,     4,     2,
       3,     1,     1,     1,     1,     1,     1,     3,     6,     5,
       0,     1,     1,     5,     9,     4,     6,     5,     7,     3,
       0,     4,     4,     4,     4,     4,     3,     1
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
  case 2:
#line 156 "parser.y"
                                                                                                 {printf("desc_algoritmo");}
#line 1581 "parser.tab.c"
    break;

  case 3:
#line 160 "parser.y"
                                                         {printf("cabecera_alg");}
#line 1587 "parser.tab.c"
    break;

  case 4:
#line 164 "parser.y"
                            {printf("bloque_alg");}
#line 1593 "parser.tab.c"
    break;

  case 5:
#line 168 "parser.y"
                                        {printf("decl_globales 1");}
#line 1599 "parser.tab.c"
    break;

  case 6:
#line 169 "parser.y"
                                        {printf("decl_globales 2");}
#line 1605 "parser.tab.c"
    break;

  case 7:
#line 170 "parser.y"
                 {printf("decl_globales 3");}
#line 1611 "parser.tab.c"
    break;

  case 8:
#line 174 "parser.y"
                          {printf("decl_a_f 1");}
#line 1617 "parser.tab.c"
    break;

  case 9:
#line 175 "parser.y"
                             {printf("decl_a_f 2");}
#line 1623 "parser.tab.c"
    break;

  case 10:
#line 176 "parser.y"
                {printf("decl_a_f 3");}
#line 1629 "parser.tab.c"
    break;

  case 11:
#line 180 "parser.y"
                                    {printf("bloque");}
#line 1635 "parser.tab.c"
    break;

  case 12:
#line 184 "parser.y"
                                       {printf("declaraciones 1");}
#line 1641 "parser.tab.c"
    break;

  case 13:
#line 185 "parser.y"
                                        {printf("declaraciones 2");}
#line 1647 "parser.tab.c"
    break;

  case 14:
#line 186 "parser.y"
                                        {printf("declaraciones 3");}
#line 1653 "parser.tab.c"
    break;

  case 15:
#line 187 "parser.y"
                 {printf("declaraciones 4");}
#line 1659 "parser.tab.c"
    break;

  case 16:
#line 191 "parser.y"
                                                                {printf("declaracion_tipo");}
#line 1665 "parser.tab.c"
    break;

  case 17:
#line 195 "parser.y"
                                                                 {printf("declaracion_cte");}
#line 1671 "parser.tab.c"
    break;

  case 18:
#line 199 "parser.y"
                                                             {printf("declaracion_var");}
#line 1677 "parser.tab.c"
    break;

  case 19:
#line 203 "parser.y"
                                                                       {printf("lista_d_tipo 1");}
#line 1683 "parser.tab.c"
    break;

  case 20:
#line 204 "parser.y"
                 {printf("lista_d_tipo 2");}
#line 1689 "parser.tab.c"
    break;

  case 21:
#line 208 "parser.y"
                                        {printf("d_tipo 1");}
#line 1695 "parser.tab.c"
    break;

  case 22:
#line 209 "parser.y"
                                                                                                 {printf("d_tipo 2");}
#line 1701 "parser.tab.c"
    break;

  case 23:
#line 210 "parser.y"
             {printf("d_tipo 3");}
#line 1707 "parser.tab.c"
    break;

  case 24:
#line 211 "parser.y"
                                              {printf("d_tipo 4");}
#line 1713 "parser.tab.c"
    break;

  case 25:
#line 212 "parser.y"
                        {printf("d_tipo 5");}
#line 1719 "parser.tab.c"
    break;

  case 26:
#line 213 "parser.y"
                      {(yyval.paraTipos)=(yyvsp[0].paraTipos);}
#line 1725 "parser.tab.c"
    break;

  case 27:
#line 217 "parser.y"
                  {printf("expresion_t 1");}
#line 1731 "parser.tab.c"
    break;

  case 28:
#line 218 "parser.y"
                             {printf("expresion_t 2");}
#line 1737 "parser.tab.c"
    break;

  case 29:
#line 222 "parser.y"
                                                                                     {printf("lista_campos 1");}
#line 1743 "parser.tab.c"
    break;

  case 30:
#line 223 "parser.y"
                 {printf("lista_campos 2");}
#line 1749 "parser.tab.c"
    break;

  case 31:
#line 227 "parser.y"
                                                                         {printf("lista_d_cte 1");}
#line 1755 "parser.tab.c"
    break;

  case 32:
#line 228 "parser.y"
                 {printf("lista_d_cte 2");}
#line 1761 "parser.tab.c"
    break;

  case 33:
#line 232 "parser.y"
                                                                                          {
        while(!esNulaColaDoble((yyvsp[-4].miCola))) { 
            printf("IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIID %s\n",elemUltimo((yyvsp[-4].miCola)));
            insertarSimboloTS(elemUltimo((yyvsp[-4].miCola)), (yyvsp[-2].paraTipos));
            desencolarUltimo(&((yyvsp[-4].miCola)));
        }
	}
#line 1773 "parser.tab.c"
    break;

  case 34:
#line 239 "parser.y"
                 {printf("lista_d_var 3");}
#line 1779 "parser.tab.c"
    break;

  case 35:
#line 243 "parser.y"
                                 {encolarPrimero(&((yyvsp[0].miCola)), (yyvsp[-2].paraNombres));(yyval.miCola) = (yyvsp[0].miCola); printf("IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIID4 %s\n",elemPrimero((yyval.miCola)));
                                printf("IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIID6 %s\n",elemUltimo((yyvsp[0].miCola)));
                                printf("IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIID4 %s\n",elemPrimero((yyval.miCola)));}
#line 1787 "parser.tab.c"
    break;

  case 36:
#line 246 "parser.y"
             {nuevaColaDoble(&((yyval.miCola)));
        encolarPrimero(&((yyval.miCola)), (yyvsp[0].paraNombres)); printf("IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIID3 %s\n",(yyvsp[0].paraNombres));printf("IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIID5 %s\n",elemUltimo((yyval.miCola)));}
#line 1794 "parser.tab.c"
    break;

  case 37:
#line 251 "parser.y"
                 {printf("decl_ent_sal 1");}
#line 1800 "parser.tab.c"
    break;

  case 38:
#line 252 "parser.y"
                            {printf("decl_ent_sal 2");}
#line 1806 "parser.tab.c"
    break;

  case 39:
#line 253 "parser.y"
                   {printf("decl_ent_sal 3");}
#line 1812 "parser.tab.c"
    break;

  case 40:
#line 257 "parser.y"
                           {printf("decl_ent");}
#line 1818 "parser.tab.c"
    break;

  case 41:
#line 261 "parser.y"
                           {printf("decl_sal");}
#line 1824 "parser.tab.c"
    break;

  case 42:
#line 266 "parser.y"
                           {backpatch((yyvsp[-3].paraExp).paraSaltos.falses,(yyvsp[-3].paraExp).paraSaltos.ultimoF,(yyvsp[-1].quad));
                        merge((yyval.paraExp).paraSaltos.trues,(yyvsp[-3].paraExp).paraSaltos.trues,(yyvsp[-3].paraExp).paraSaltos.ultimoT,(yyvsp[0].paraExp).paraSaltos.trues,(yyvsp[0].paraExp).paraSaltos.ultimoT);
                        (yyval.paraExp).paraSaltos.ultimoT = (yyvsp[-3].paraExp).paraSaltos.ultimoT+(yyvsp[0].paraExp).paraSaltos.ultimoT;
                        merge((yyval.paraExp).paraSaltos.falses, (yyvsp[0].paraExp).paraSaltos.falses,(yyvsp[0].paraExp).paraSaltos.ultimoF,(yyvsp[0].paraExp).paraSaltos.trues,0);
                        (yyval.paraExp).paraSaltos.ultimoF = (yyvsp[0].paraExp).paraSaltos.ultimoF;
                        }
#line 1835 "parser.tab.c"
    break;

  case 43:
#line 272 "parser.y"
                             {backpatch((yyvsp[-3].paraExp).paraSaltos.trues,(yyvsp[-3].paraExp).paraSaltos.ultimoT,(yyvsp[-1].quad));
                        merge((yyval.paraExp).paraSaltos.falses,(yyvsp[-3].paraExp).paraSaltos.falses,(yyvsp[-3].paraExp).paraSaltos.ultimoF,(yyvsp[0].paraExp).paraSaltos.falses,(yyvsp[0].paraExp).paraSaltos.ultimoF);
                        (yyval.paraExp).paraSaltos.ultimoF = (yyvsp[-3].paraExp).paraSaltos.ultimoF+(yyvsp[0].paraExp).paraSaltos.ultimoF;
                        merge((yyval.paraExp).paraSaltos.trues, (yyvsp[0].paraExp).paraSaltos.trues,(yyvsp[0].paraExp).paraSaltos.ultimoT,(yyvsp[0].paraExp).paraSaltos.trues,0);
                        (yyval.paraExp).paraSaltos.ultimoT = (yyvsp[0].paraExp).paraSaltos.ultimoT;
                            
                        }
#line 1847 "parser.tab.c"
    break;

  case 44:
#line 279 "parser.y"
                      { 
                    merge((yyval.paraExp).paraSaltos.trues, (yyvsp[0].paraExp).paraSaltos.falses,(yyvsp[0].paraExp).paraSaltos.ultimoF,(yyvsp[0].paraExp).paraSaltos.trues,0);
                    (yyval.paraExp).paraSaltos.ultimoT = (yyvsp[0].paraExp).paraSaltos.ultimoF;
                    merge((yyval.paraExp).paraSaltos.falses, (yyvsp[0].paraExp).paraSaltos.trues,(yyvsp[0].paraExp).paraSaltos.ultimoT,(yyvsp[0].paraExp).paraSaltos.trues,0);
                    (yyval.paraExp).paraSaltos.ultimoF = (yyvsp[0].paraExp).paraSaltos.ultimoT;
                }
#line 1858 "parser.tab.c"
    break;

  case 45:
#line 285 "parser.y"
                       {printf("exp_b 4");}
#line 1864 "parser.tab.c"
    break;

  case 46:
#line 286 "parser.y"
                   {printf("exp_b 5");}
#line 1870 "parser.tab.c"
    break;

  case 47:
#line 287 "parser.y"
                                            {makelist((yyval.paraExp).paraSaltos.trues,1,nextquad());
                                        makelist((yyval.paraExp).paraSaltos.falses,1,nextquad()+1);
                                        (yyval.paraExp).paraSaltos.ultimoT = 1;
                                        (yyval.paraExp).paraSaltos.ultimoF = 1;
                                        (yyval.paraExp).tipo = pr_booleano;
                                        gen((yyvsp[-1].paraOpRel),(yyvsp[-2].paraExp).place,(yyvsp[0].paraExp).place,OPNULO);
                                        gen(OPNULO,OPNULO,OPNULO,OPNULO);
                                        }
#line 1883 "parser.tab.c"
    break;

  case 48:
#line 295 "parser.y"
                                        {makelist((yyval.paraExp).paraSaltos.trues,1,nextquad());
                                        makelist((yyval.paraExp).paraSaltos.falses,1,nextquad()+1);
                                        (yyval.paraExp).paraSaltos.ultimoT = 1;
                                        (yyval.paraExp).paraSaltos.ultimoF = 1;
                                        (yyval.paraExp).tipo = pr_booleano;
                                        gen((yyvsp[-1].paraOpRel),(yyvsp[-2].paraExp).place,(yyvsp[0].paraExp).place,OPNULO);
                                        gen(OPNULO,OPNULO,OPNULO,OPNULO);
                                        }
#line 1896 "parser.tab.c"
    break;

  case 49:
#line 303 "parser.y"
                                                            {
                                                            merge((yyval.paraExp).paraSaltos.trues, (yyvsp[-1].paraExp).paraSaltos.trues,(yyvsp[-1].paraExp).paraSaltos.ultimoT,(yyvsp[-1].paraExp).paraSaltos.trues,0);
                                                            (yyval.paraExp).paraSaltos.ultimoT = (yyvsp[-1].paraExp).paraSaltos.ultimoT;
                                                            merge((yyval.paraExp).paraSaltos.falses, (yyvsp[-1].paraExp).paraSaltos.falses,(yyvsp[-1].paraExp).paraSaltos.ultimoF,(yyvsp[-1].paraExp).paraSaltos.trues,0);
                                                            (yyval.paraExp).paraSaltos.ultimoF = (yyvsp[-1].paraExp).paraSaltos.ultimoT;
                                                        }
#line 1907 "parser.tab.c"
    break;

  case 50:
#line 312 "parser.y"
               {(yyval.quad)=nextquad();}
#line 1913 "parser.tab.c"
    break;

  case 51:
#line 317 "parser.y"
              {printf("expresion 1");}
#line 1919 "parser.tab.c"
    break;

  case 52:
#line 318 "parser.y"
                {printf("expresion 2");}
#line 1925 "parser.tab.c"
    break;

  case 53:
#line 319 "parser.y"
                 {printf("expresion 3");}
#line 1931 "parser.tab.c"
    break;

  case 54:
#line 323 "parser.y"
                                {int T = insertarSimboloAnonimo(pr_entero);
                                (yyval.paraExp).place = T;
                                (yyval.paraExp).tipo = pr_entero;
                                printf("SSSSSSSSSSSSSSSSSSSSSSSSSsuma de %d y %d \n",(yyvsp[-2].paraExp).tipo,(yyvsp[0].paraExp).tipo);
                                if((yyvsp[-2].paraExp).tipo == pr_entero && (yyvsp[0].paraExp).tipo == pr_entero){
                                    printf("suma 1\n");
                                    gen(OPsuma,(yyvsp[-2].paraExp).place,(yyvsp[0].paraExp).place,T);
                                    (yyval.paraExp).tipo = pr_entero;
                                }
                                if((yyvsp[-2].paraExp).tipo == pr_entero && (yyvsp[0].paraExp).tipo == pr_real){
                                    printf("suma 2\n");
                                    gen(OPsuma,(yyvsp[-2].paraExp).place,(yyvsp[0].paraExp).place,T);
                                    (yyval.paraExp).tipo = pr_real;
                                    modificarSimboloTS(T,pr_real);
                                }
                                if((yyvsp[-2].paraExp).tipo == pr_real && (yyvsp[0].paraExp).tipo == pr_entero){
                                    printf("suma 3\n");
                                    gen(OPsuma,(yyvsp[-2].paraExp).place,(yyvsp[0].paraExp).place,T);
                                    (yyval.paraExp).tipo = pr_real;
                                    modificarSimboloTS(T,pr_real);
                                }
                                if((yyvsp[-2].paraExp).tipo == pr_real && (yyvsp[0].paraExp).tipo == pr_real){
                                    printf("suma 4\n");
                                    gen(OPsuma,(yyvsp[-2].paraExp).place,(yyvsp[0].paraExp).place,T);
                                    (yyval.paraExp).tipo = pr_real;
                                    modificarSimboloTS(T,pr_real);
                                }
                            }
#line 1964 "parser.tab.c"
    break;

  case 55:
#line 351 "parser.y"
                                  {int T = insertarSimboloAnonimo(pr_entero);
                                (yyval.paraExp).place = T;
                                (yyval.paraExp).tipo = pr_entero;
                                if((yyvsp[-2].paraExp).tipo == pr_entero && (yyvsp[0].paraExp).tipo == pr_entero){
                                    gen(OPresta,(yyvsp[-2].paraExp).place,(yyvsp[0].paraExp).place,T);
                                    (yyval.paraExp).tipo = pr_entero;
                                }
                                if((yyvsp[-2].paraExp).tipo == pr_entero && (yyvsp[0].paraExp).tipo == pr_real){
                                    gen(OPresta,(yyvsp[-2].paraExp).place,(yyvsp[0].paraExp).place,T);
                                    (yyval.paraExp).tipo = pr_real;
                                    modificarSimboloTS(T,pr_real);
                                }
                                if((yyvsp[-2].paraExp).tipo == pr_real && (yyvsp[0].paraExp).tipo == pr_entero){
                                    gen(OPresta,(yyvsp[-2].paraExp).place,(yyvsp[0].paraExp).place,T);
                                    (yyval.paraExp).tipo = pr_real;
                                    modificarSimboloTS(T,pr_real);
                                }
                                if((yyvsp[-2].paraExp).tipo == pr_real && (yyvsp[0].paraExp).tipo == pr_real){
                                    gen(OPresta,(yyvsp[-2].paraExp).place,(yyvsp[0].paraExp).place,T);
                                    (yyval.paraExp).tipo = pr_real;
                                    modificarSimboloTS(T,pr_real);
                                }
                               }
#line 1992 "parser.tab.c"
    break;

  case 56:
#line 374 "parser.y"
                             { int T = insertarSimboloAnonimo(pr_entero);
                                (yyval.paraExp).place = T;
                                (yyval.paraExp).tipo = pr_entero;
                                if((yyvsp[-2].paraExp).tipo == pr_entero && (yyvsp[0].paraExp).tipo == pr_entero){
                                    gen(OPdivision,(yyvsp[-2].paraExp).place,(yyvsp[0].paraExp).place,T);
                                    (yyval.paraExp).tipo = pr_entero;
                                }
                                if((yyvsp[-2].paraExp).tipo == pr_entero && (yyvsp[0].paraExp).tipo == pr_real){
                                    gen(OPdivision,(yyvsp[-2].paraExp).place,(yyvsp[0].paraExp).place,T);
                                    (yyval.paraExp).tipo = pr_real;
                                    modificarSimboloTS(T,pr_real);
                                }
                                if((yyvsp[-2].paraExp).tipo == pr_real && (yyvsp[0].paraExp).tipo == pr_entero){
                                    gen(OPdivision,(yyvsp[-2].paraExp).place,(yyvsp[0].paraExp).place,T);
                                    (yyval.paraExp).tipo = pr_real;
                                    modificarSimboloTS(T,pr_real);
                                }
                                if((yyvsp[-2].paraExp).tipo == pr_real && (yyvsp[0].paraExp).tipo == pr_real){
                                    gen(OPdivision,(yyvsp[-2].paraExp).place,(yyvsp[0].paraExp).place,T);
                                    (yyval.paraExp).tipo = pr_real;
                                    modificarSimboloTS(T,pr_real);
                                }
                                }
#line 2020 "parser.tab.c"
    break;

  case 57:
#line 397 "parser.y"
                          { int T = insertarSimboloAnonimo(pr_entero);
                                (yyval.paraExp).place = T;
                                (yyval.paraExp).tipo = pr_entero;
                                printf("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMULTIPLICA de %d y %d \n",(yyvsp[-2].paraExp).tipo,(yyvsp[0].paraExp).tipo);
                                if((yyvsp[-2].paraExp).tipo == pr_entero && (yyvsp[0].paraExp).tipo == pr_entero){
                                    gen(OPmultiplica,(yyvsp[-2].paraExp).place,(yyvsp[0].paraExp).place,T);
                                    (yyval.paraExp).tipo = pr_entero;
                                }
                                if((yyvsp[-2].paraExp).tipo == pr_entero && (yyvsp[0].paraExp).tipo == pr_real){
                                    gen(OPmultiplica,(yyvsp[-2].paraExp).place,(yyvsp[0].paraExp).place,T);
                                    (yyval.paraExp).tipo = pr_real;
                                    modificarSimboloTS(T,pr_real);
                                }
                                if((yyvsp[-2].paraExp).tipo == pr_real && (yyvsp[0].paraExp).tipo == pr_entero){
                                    gen(OPmultiplica,(yyvsp[-2].paraExp).place,(yyvsp[0].paraExp).place,T);
                                    (yyval.paraExp).tipo = pr_real;
                                    modificarSimboloTS(T,pr_real);
                                }
                                if((yyvsp[-2].paraExp).tipo == pr_real && (yyvsp[0].paraExp).tipo == pr_real){
                                    gen(OPmultiplica,(yyvsp[-2].paraExp).place,(yyvsp[0].paraExp).place,T);
                                    (yyval.paraExp).tipo = pr_real;
                                    modificarSimboloTS(T,pr_real);
                                }
                                }
#line 2049 "parser.tab.c"
    break;

  case 58:
#line 421 "parser.y"
                             {
                            int T = insertarSimboloAnonimo(pr_entero);
                                (yyval.paraExp).place = T;
                                (yyval.paraExp).tipo = pr_entero;
                                if((yyvsp[-2].paraExp).tipo == pr_entero && (yyvsp[0].paraExp).tipo == pr_entero){
                                    gen(OPmod,(yyvsp[-2].paraExp).place,(yyvsp[0].paraExp).place,T);
                                    (yyval.paraExp).tipo = pr_entero;
                                }else{
                                    printf("error, módulo entre reales");
                                }
                         }
#line 2065 "parser.tab.c"
    break;

  case 59:
#line 432 "parser.y"
                             {int T = insertarSimboloAnonimo(pr_entero);
                                (yyval.paraExp).place = T;
                                (yyval.paraExp).tipo = pr_entero;
                                if((yyvsp[-2].paraExp).tipo == pr_entero && (yyvsp[0].paraExp).tipo == pr_entero){
                                    gen(OPdivisionEnt,(yyvsp[-2].paraExp).place,(yyvsp[0].paraExp).place,T);
                                    (yyval.paraExp).tipo = pr_entero;
                                }
                                if((yyvsp[-2].paraExp).tipo == pr_entero && (yyvsp[0].paraExp).tipo == pr_real){
                                    gen(OPdivisionEnt,(yyvsp[-2].paraExp).place,(yyvsp[0].paraExp).place,T);
                                    (yyval.paraExp).tipo = pr_real;
                                    modificarSimboloTS(T,pr_real);
                                }
                                if((yyvsp[-2].paraExp).tipo == pr_real && (yyvsp[0].paraExp).tipo == pr_entero){
                                    gen(OPdivisionEnt,(yyvsp[-2].paraExp).place,(yyvsp[0].paraExp).place,T);
                                    (yyval.paraExp).tipo = pr_real;
                                    modificarSimboloTS(T,pr_real);
                                }
                                if((yyvsp[-2].paraExp).tipo == pr_real && (yyvsp[0].paraExp).tipo == pr_real){
                                    gen(OPdivisionEnt,(yyvsp[-2].paraExp).place,(yyvsp[0].paraExp).place,T);
                                    (yyval.paraExp).tipo = pr_real;
                                    modificarSimboloTS(T,pr_real);
                                }
                                }
#line 2093 "parser.tab.c"
    break;

  case 60:
#line 455 "parser.y"
                                                            {(yyval.paraExp).place = (yyvsp[-1].paraExp).place;
                                                         (yyval.paraExp).tipo = (yyvsp[-1].paraExp).tipo;
                                                        }
#line 2101 "parser.tab.c"
    break;

  case 61:
#line 458 "parser.y"
                   {(yyval.paraExp).place = (yyvsp[0].paraExp).place;
                (yyval.paraExp).tipo = (yyvsp[0].paraExp).tipo;
                }
#line 2109 "parser.tab.c"
    break;

  case 62:
#line 461 "parser.y"
                           {int T=insertarSimboloAnonimo(pr_entero);
                        insertarValorEnteroSimbolo(T,(yyvsp[0].paraLiterales).entero);
                        (yyval.paraExp).place = T;
                        (yyval.paraExp).tipo = pr_entero;
                        }
#line 2119 "parser.tab.c"
    break;

  case 63:
#line 466 "parser.y"
                         {int T=insertarSimboloAnonimo(pr_real);
                        insertarValorRealSimbolo(T,(yyvsp[0].paraLiterales).real);
                        (yyval.paraExp).place = T;
                        (yyval.paraExp).tipo = pr_real;
                      }
#line 2129 "parser.tab.c"
    break;

  case 64:
#line 471 "parser.y"
                            {int T = insertarSimboloAnonimo((yyvsp[0].paraExp).tipo);
                            gen(OPresta,0,(yyvsp[0].paraExp).place,(yyval.paraExp).place);
                            (yyval.paraExp).place = T;
                            (yyval.paraExp).tipo = (yyvsp[0].paraExp).tipo;
                        }
#line 2139 "parser.tab.c"
    break;

  case 65:
#line 476 "parser.y"
                      {int T = insertarSimboloAnonimo((yyvsp[0].paraExp).tipo);
                            gen(OPsuma,0,(yyvsp[0].paraExp).place,(yyval.paraExp).place);
                            (yyval.paraExp).place = T;
                            (yyval.paraExp).tipo = (yyvsp[0].paraExp).tipo;
                        }
#line 2149 "parser.tab.c"
    break;

  case 66:
#line 485 "parser.y"
           {ts_simbolo id; 
        id= buscarSimboloTS((yyvsp[0].paraNombres));
		if((id.sid) == -1) 
		{ 
			printf("error\n");
		} 
		else 
		{  
			(yyval.paraExp).place = id.sid;
			(yyval.paraExp).tipo = id.tipo; 
		}  
    }
#line 2166 "parser.tab.c"
    break;

  case 67:
#line 497 "parser.y"
                                     {printf("operando 2");}
#line 2172 "parser.tab.c"
    break;

  case 68:
#line 498 "parser.y"
                                                          {printf("operando 3");}
#line 2178 "parser.tab.c"
    break;

  case 69:
#line 499 "parser.y"
                          {printf("operando 4");}
#line 2184 "parser.tab.c"
    break;

  case 70:
#line 503 "parser.y"
                                                            {printf("instrucciones 1");}
#line 2190 "parser.tab.c"
    break;

  case 71:
#line 504 "parser.y"
                      {printf("instrucciones 2");}
#line 2196 "parser.tab.c"
    break;

  case 72:
#line 508 "parser.y"
                     {printf("instruccion 1");}
#line 2202 "parser.tab.c"
    break;

  case 73:
#line 509 "parser.y"
                     {printf("instruccion 2");}
#line 2208 "parser.tab.c"
    break;

  case 74:
#line 510 "parser.y"
                      {printf("instruccion 3");}
#line 2214 "parser.tab.c"
    break;

  case 75:
#line 511 "parser.y"
                    {printf("instruccion 4");}
#line 2220 "parser.tab.c"
    break;

  case 76:
#line 512 "parser.y"
                    {printf("instruccion 5");}
#line 2226 "parser.tab.c"
    break;

  case 77:
#line 516 "parser.y"
                                         {
	    if((yyvsp[-2].paraExp).tipo == (yyvsp[0].paraExp). tipo){
                gen(OPasigna,(yyvsp[0].paraExp).place,OPNULO,(yyvsp[-2].paraExp).place); 
        }
        if(((yyvsp[-2].paraExp).tipo == pr_real) && ((yyvsp[0].paraExp).tipo == pr_entero)){
                (yyvsp[0].paraExp).tipo = pr_real;
                modificarSimboloTS((yyvsp[0].paraExp),pr_real);
                gen(OPasigna,(yyvsp[0].paraExp).place,OPNULO,(yyvsp[-2].paraExp).place); 
	
	    }if(((yyvsp[-2].paraExp).tipo == pr_entero) && ((yyvsp[0].paraExp).tipo == pr_real)){
             printf("error, tipos distintos en la asignacion\n");
	    }
	}
#line 2244 "parser.tab.c"
    break;

  case 78:
#line 531 "parser.y"
                                                                        {printf("instruccion 1");}
#line 2250 "parser.tab.c"
    break;

  case 79:
#line 535 "parser.y"
                                                                       {printf("instruccion 1");}
#line 2256 "parser.tab.c"
    break;

  case 80:
#line 536 "parser.y"
                 {printf("instruccion 1");}
#line 2262 "parser.tab.c"
    break;

  case 81:
#line 540 "parser.y"
                     {printf("instruccion 1");}
#line 2268 "parser.tab.c"
    break;

  case 82:
#line 541 "parser.y"
                      {printf("instruccion 1");}
#line 2274 "parser.tab.c"
    break;

  case 83:
#line 545 "parser.y"
                                                                  {}
#line 2280 "parser.tab.c"
    break;

  case 84:
#line 549 "parser.y"
                                                                                              {}
#line 2286 "parser.tab.c"
    break;

  case 85:
#line 553 "parser.y"
                                               {}
#line 2292 "parser.tab.c"
    break;

  case 86:
#line 557 "parser.y"
                                                                  {}
#line 2298 "parser.tab.c"
    break;

  case 87:
#line 561 "parser.y"
                                                                                            {}
#line 2304 "parser.tab.c"
    break;

  case 88:
#line 565 "parser.y"
                                                                                                           {}
#line 2310 "parser.tab.c"
    break;

  case 89:
#line 569 "parser.y"
                                                      {}
#line 2316 "parser.tab.c"
    break;

  case 90:
#line 570 "parser.y"
                 {}
#line 2322 "parser.tab.c"
    break;

  case 91:
#line 574 "parser.y"
                                                           {}
#line 2328 "parser.tab.c"
    break;

  case 92:
#line 575 "parser.y"
                                                             {}
#line 2334 "parser.tab.c"
    break;

  case 93:
#line 576 "parser.y"
                                                                 {}
#line 2340 "parser.tab.c"
    break;

  case 94:
#line 580 "parser.y"
                                                            {}
#line 2346 "parser.tab.c"
    break;

  case 95:
#line 584 "parser.y"
                                                            {}
#line 2352 "parser.tab.c"
    break;

  case 96:
#line 588 "parser.y"
                                    {}
#line 2358 "parser.tab.c"
    break;

  case 97:
#line 589 "parser.y"
                    {}
#line 2364 "parser.tab.c"
    break;


#line 2368 "parser.tab.c"

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
#line 592 "parser.y"


/*
int main (void)
{
  return yyparse ();
}*/
#include <stdio.h>

/* Called by yyparse on error. */
void yyerror (char const *s)
{
  fprintf (stderr, "%s\n", s);
}

int main( int argc, char **argv )
{
    
    ++argv, --argc;  
    yydebug = 2;
    inicializarTS();
    inicializaTC();
    if ( argc > 0 )
        yyin = fopen( argv[0], "r" );
    else
        yyin = stdin;
    yyparse();
    printf("SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS");
    imprimirTablaTS();
    imprimirTablaCuadruplas();
}
    
