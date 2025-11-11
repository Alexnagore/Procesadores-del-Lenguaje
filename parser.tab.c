/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

	#include <stdio.h>
	#include "nombresDeTipos.h"
	#include "literal.h"
	#include "tablaDeConstantes.h"
	int yylex(); // Usamos la funcion que se crea gracias a flex
	void yyerror(char *); // Prototipo de una funcion necesaria
	extern FILE* yyin; // Usamos la varible de Flex en la que viene la entrada
	TablaDeConstantes tc; //Es donde guardaremos las constantes
	#define YYDEBUG 1 //Permite activar el modo Debugg de Bison

#line 83 "parser.tab.c"

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

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_operador_asignacionTK = 3,      /* operador_asignacionTK  */
  YYSYMBOL_operador_comp_secTK = 4,        /* operador_comp_secTK  */
  YYSYMBOL_operador_separadorTK = 5,       /* operador_separadorTK  */
  YYSYMBOL_operador_subrangoTK = 6,        /* operador_subrangoTK  */
  YYSYMBOL_puntoTK = 7,                    /* puntoTK  */
  YYSYMBOL_operador_def_tipoTK = 8,        /* operador_def_tipoTK  */
  YYSYMBOL_operador_entoncesTK = 9,        /* operador_entoncesTK  */
  YYSYMBOL_operador_elseTK = 10,           /* operador_elseTK  */
  YYSYMBOL_operador_igualTK = 11,          /* operador_igualTK  */
  YYSYMBOL_operador_inicio_arrayTK = 12,   /* operador_inicio_arrayTK  */
  YYSYMBOL_operador_fin_arrayTK = 13,      /* operador_fin_arrayTK  */
  YYSYMBOL_relacional_distintoTK = 14,     /* relacional_distintoTK  */
  YYSYMBOL_relacional_menor_igualTK = 15,  /* relacional_menor_igualTK  */
  YYSYMBOL_relacional_mayor_igualTK = 16,  /* relacional_mayor_igualTK  */
  YYSYMBOL_relacional_menorTK = 17,        /* relacional_menorTK  */
  YYSYMBOL_relacional_mayorTK = 18,        /* relacional_mayorTK  */
  YYSYMBOL_aritmetico_sumaTK = 19,         /* aritmetico_sumaTK  */
  YYSYMBOL_aritmetico_restaTK = 20,        /* aritmetico_restaTK  */
  YYSYMBOL_aritmetico_productoTK = 21,     /* aritmetico_productoTK  */
  YYSYMBOL_aritmetico_divisionTK = 22,     /* aritmetico_divisionTK  */
  YYSYMBOL_inicio_parentesisTK = 23,       /* inicio_parentesisTK  */
  YYSYMBOL_fin_parentesisTK = 24,          /* fin_parentesisTK  */
  YYSYMBOL_tipoTK = 25,                    /* tipoTK  */
  YYSYMBOL_tipoTablaTK = 26,               /* tipoTablaTK  */
  YYSYMBOL_tipoRefTK = 27,                 /* tipoRefTK  */
  YYSYMBOL_conjuncionTK = 28,              /* conjuncionTK  */
  YYSYMBOL_disyuncionTK = 29,              /* disyuncionTK  */
  YYSYMBOL_tipo_atributo_entTK = 30,       /* tipo_atributo_entTK  */
  YYSYMBOL_tipo_atributo_salTK = 31,       /* tipo_atributo_salTK  */
  YYSYMBOL_tipo_atributo_ent_salTK = 32,   /* tipo_atributo_ent_salTK  */
  YYSYMBOL_operacionTK = 33,               /* operacionTK  */
  YYSYMBOL_continuarTK = 34,               /* continuarTK  */
  YYSYMBOL_deTK = 35,                      /* deTK  */
  YYSYMBOL_devTK = 36,                     /* devTK  */
  YYSYMBOL_hacerTK = 37,                   /* hacerTK  */
  YYSYMBOL_hastaTK = 38,                   /* hastaTK  */
  YYSYMBOL_noTK = 39,                      /* noTK  */
  YYSYMBOL_inicio_accionTK = 40,           /* inicio_accionTK  */
  YYSYMBOL_fin_accionTK = 41,              /* fin_accionTK  */
  YYSYMBOL_inicio_algoritmoTK = 42,        /* inicio_algoritmoTK  */
  YYSYMBOL_fin_algoritmoTK = 43,           /* fin_algoritmoTK  */
  YYSYMBOL_inicio_siTK = 44,               /* inicio_siTK  */
  YYSYMBOL_fin_siTK = 45,                  /* fin_siTK  */
  YYSYMBOL_inicio_mientrasTK = 46,         /* inicio_mientrasTK  */
  YYSYMBOL_fin_mientrasTK = 47,            /* fin_mientrasTK  */
  YYSYMBOL_inicio_varTK = 48,              /* inicio_varTK  */
  YYSYMBOL_fin_varTK = 49,                 /* fin_varTK  */
  YYSYMBOL_inicio_constTK = 50,            /* inicio_constTK  */
  YYSYMBOL_fin_constTK = 51,               /* fin_constTK  */
  YYSYMBOL_inicio_funcionTK = 52,          /* inicio_funcionTK  */
  YYSYMBOL_fin_funcionTK = 53,             /* fin_funcionTK  */
  YYSYMBOL_inicio_paraTK = 54,             /* inicio_paraTK  */
  YYSYMBOL_fin_paraTK = 55,                /* fin_paraTK  */
  YYSYMBOL_inicio_tuplaTK = 56,            /* inicio_tuplaTK  */
  YYSYMBOL_fin_tuplaTK = 57,               /* fin_tuplaTK  */
  YYSYMBOL_inicio_tipoTK = 58,             /* inicio_tipoTK  */
  YYSYMBOL_fin_tipoTK = 59,                /* fin_tipoTK  */
  YYSYMBOL_identificadorTK = 60,           /* identificadorTK  */
  YYSYMBOL_identificadorBooleanoTK = 61,   /* identificadorBooleanoTK  */
  YYSYMBOL_identificadorConstanteTK = 62,  /* identificadorConstanteTK  */
  YYSYMBOL_literal_booleanoTK = 63,        /* literal_booleanoTK  */
  YYSYMBOL_literal_enteroTK = 64,          /* literal_enteroTK  */
  YYSYMBOL_literal_realTK = 65,            /* literal_realTK  */
  YYSYMBOL_literal_caracterTK = 66,        /* literal_caracterTK  */
  YYSYMBOL_literal_cadenaTK = 67,          /* literal_cadenaTK  */
  YYSYMBOL_comentarioTK = 68,              /* comentarioTK  */
  YYSYMBOL_aritmetico_divisionRealTK = 69, /* aritmetico_divisionRealTK  */
  YYSYMBOL_aritmetico_moduloTK = 70,       /* aritmetico_moduloTK  */
  YYSYMBOL_YYACCEPT = 71,                  /* $accept  */
  YYSYMBOL_desc_algoritmoV = 72,           /* desc_algoritmoV  */
  YYSYMBOL_cabecera_algV = 73,             /* cabecera_algV  */
  YYSYMBOL_bloque_algV = 74,               /* bloque_algV  */
  YYSYMBOL_decl_globalesV = 75,            /* decl_globalesV  */
  YYSYMBOL_decl_a_fV = 76,                 /* decl_a_fV  */
  YYSYMBOL_bloqueV = 77,                   /* bloqueV  */
  YYSYMBOL_declaracionesV = 78,            /* declaracionesV  */
  YYSYMBOL_declaracion_tipoV = 79,         /* declaracion_tipoV  */
  YYSYMBOL_declaracion_constV = 80,        /* declaracion_constV  */
  YYSYMBOL_declaracion_varV = 81,          /* declaracion_varV  */
  YYSYMBOL_lista_d_tipoV = 82,             /* lista_d_tipoV  */
  YYSYMBOL_declaracionTipoV = 83,          /* declaracionTipoV  */
  YYSYMBOL_d_tipoV = 84,                   /* d_tipoV  */
  YYSYMBOL_expresion_tV = 85,              /* expresion_tV  */
  YYSYMBOL_lista_camposV = 86,             /* lista_camposV  */
  YYSYMBOL_declaracionCampoV = 87,         /* declaracionCampoV  */
  YYSYMBOL_lista_d_cteV = 88,              /* lista_d_cteV  */
  YYSYMBOL_declaracionDeConstanteV = 89,   /* declaracionDeConstanteV  */
  YYSYMBOL_lista_d_varV = 90,              /* lista_d_varV  */
  YYSYMBOL_declaracionDeVariableV = 91,    /* declaracionDeVariableV  */
  YYSYMBOL_lista_idV = 92,                 /* lista_idV  */
  YYSYMBOL_declaracionDeListaIdV = 93,     /* declaracionDeListaIdV  */
  YYSYMBOL_decl_ent_salV = 94,             /* decl_ent_salV  */
  YYSYMBOL_decl_entV = 95,                 /* decl_entV  */
  YYSYMBOL_decl_salV = 96,                 /* decl_salV  */
  YYSYMBOL_exp_aV = 97,                    /* exp_aV  */
  YYSYMBOL_exp_bV = 98,                    /* exp_bV  */
  YYSYMBOL_expresionV = 99,                /* expresionV  */
  YYSYMBOL_operando_aV = 100,              /* operando_aV  */
  YYSYMBOL_operando_bV = 101,              /* operando_bV  */
  YYSYMBOL_instruccionesV = 102,           /* instruccionesV  */
  YYSYMBOL_instruccionV = 103,             /* instruccionV  */
  YYSYMBOL_asignacion_aV = 104,            /* asignacion_aV  */
  YYSYMBOL_asignacion_bV = 105,            /* asignacion_bV  */
  YYSYMBOL_alternativaV = 106,             /* alternativaV  */
  YYSYMBOL_lista_opcionesV = 107,          /* lista_opcionesV  */
  YYSYMBOL_iteracionV = 108,               /* iteracionV  */
  YYSYMBOL_it_cota_expV = 109,             /* it_cota_expV  */
  YYSYMBOL_it_cota_fijaV = 110,            /* it_cota_fijaV  */
  YYSYMBOL_accion_dV = 111,                /* accion_dV  */
  YYSYMBOL_funcion_dV = 112,               /* funcion_dV  */
  YYSYMBOL_a_cabeceraV = 113,              /* a_cabeceraV  */
  YYSYMBOL_f_cabeceraV = 114,              /* f_cabeceraV  */
  YYSYMBOL_d_par_formV = 115,              /* d_par_formV  */
  YYSYMBOL_d_p_formV = 116,                /* d_p_formV  */
  YYSYMBOL_accion_llV = 117,               /* accion_llV  */
  YYSYMBOL_funcion_llV = 118,              /* funcion_llV  */
  YYSYMBOL_l_llV = 119                     /* l_llV  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYLAST   348

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  110
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  246

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   325


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

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
      65,    66,    67,    68,    69,    70
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   100,   100,   104,   108,   113,   115,   117,   122,   124,
     126,   130,   135,   137,   139,   141,   145,   149,   153,   157,
     159,   162,   165,   167,   169,   171,   173,   175,   178,   180,
     183,   185,   188,   192,   194,   197,   201,   203,   206,   209,
     211,   214,   218,   220,   222,   225,   228,   232,   234,   236,
     238,   240,   242,   244,   246,   248,   250,   252,   255,   258,
     260,   262,   264,   266,   268,   270,   272,   274,   276,   278,
     281,   283,   285,   288,   290,   292,   294,   297,   299,   301,
     303,   307,   309,   312,   314,   316,   318,   320,   322,   325,
     328,   331,   334,   336,   339,   341,   344,   347,   351,   354,
     357,   360,   363,   365,   368,   370,   372,   376,   379,   382,
     384
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"",
  "operador_asignacionTK", "operador_comp_secTK", "operador_separadorTK",
  "operador_subrangoTK", "puntoTK", "operador_def_tipoTK",
  "operador_entoncesTK", "operador_elseTK", "operador_igualTK",
  "operador_inicio_arrayTK", "operador_fin_arrayTK",
  "relacional_distintoTK", "relacional_menor_igualTK",
  "relacional_mayor_igualTK", "relacional_menorTK", "relacional_mayorTK",
  "aritmetico_sumaTK", "aritmetico_restaTK", "aritmetico_productoTK",
  "aritmetico_divisionTK", "inicio_parentesisTK", "fin_parentesisTK",
  "tipoTK", "tipoTablaTK", "tipoRefTK", "conjuncionTK", "disyuncionTK",
  "tipo_atributo_entTK", "tipo_atributo_salTK", "tipo_atributo_ent_salTK",
  "operacionTK", "continuarTK", "deTK", "devTK", "hacerTK", "hastaTK",
  "noTK", "inicio_accionTK", "fin_accionTK", "inicio_algoritmoTK",
  "fin_algoritmoTK", "inicio_siTK", "fin_siTK", "inicio_mientrasTK",
  "fin_mientrasTK", "inicio_varTK", "fin_varTK", "inicio_constTK",
  "fin_constTK", "inicio_funcionTK", "fin_funcionTK", "inicio_paraTK",
  "fin_paraTK", "inicio_tuplaTK", "fin_tuplaTK", "inicio_tipoTK",
  "fin_tipoTK", "identificadorTK", "identificadorBooleanoTK",
  "identificadorConstanteTK", "literal_booleanoTK", "literal_enteroTK",
  "literal_realTK", "literal_caracterTK", "literal_cadenaTK",
  "comentarioTK", "aritmetico_divisionRealTK", "aritmetico_moduloTK",
  "$accept", "desc_algoritmoV", "cabecera_algV", "bloque_algV",
  "decl_globalesV", "decl_a_fV", "bloqueV", "declaracionesV",
  "declaracion_tipoV", "declaracion_constV", "declaracion_varV",
  "lista_d_tipoV", "declaracionTipoV", "d_tipoV", "expresion_tV",
  "lista_camposV", "declaracionCampoV", "lista_d_cteV",
  "declaracionDeConstanteV", "lista_d_varV", "declaracionDeVariableV",
  "lista_idV", "declaracionDeListaIdV", "decl_ent_salV", "decl_entV",
  "decl_salV", "exp_aV", "exp_bV", "expresionV", "operando_aV",
  "operando_bV", "instruccionesV", "instruccionV", "asignacion_aV",
  "asignacion_bV", "alternativaV", "lista_opcionesV", "iteracionV",
  "it_cota_expV", "it_cota_fijaV", "accion_dV", "funcion_dV",
  "a_cabeceraV", "f_cabeceraV", "d_par_formV", "d_p_formV", "accion_llV",
  "funcion_llV", "l_llV", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-126)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-25)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       9,   -11,    66,    78,  -126,   -31,    64,    60,   118,     5,
     -31,   -31,   141,   -10,  -126,   145,    16,  -126,   117,   143,
     134,    79,   118,   118,   118,   162,   169,    58,     5,     5,
    -126,  -126,   183,  -126,  -126,   128,  -126,  -126,  -126,    72,
    -126,    53,  -126,   259,  -126,  -126,    20,    20,   198,   267,
    -126,   175,   178,  -126,   287,  -126,  -126,  -126,  -126,  -126,
    -126,  -126,  -126,  -126,  -126,   275,   118,   277,   118,   117,
     117,   206,   281,  -126,  -126,  -126,   297,   150,   150,    20,
      99,    20,   255,    33,  -126,  -126,  -126,  -126,   312,   311,
     176,   209,   270,    43,   105,  -126,  -126,  -126,   117,   128,
    -126,   295,   235,   190,   316,    20,    20,   260,    20,  -126,
      20,   261,    20,  -126,    79,   181,   280,   117,   288,   117,
     117,  -126,  -126,  -126,   150,  -126,    94,    94,    77,   121,
     270,   160,  -126,  -126,   315,    97,  -126,    20,  -126,   160,
     150,   150,   150,   150,   150,    20,    20,    20,    20,    20,
      20,    20,    20,  -126,   321,    79,    79,    20,   225,   302,
     270,  -126,   254,   270,  -126,   262,  -126,   117,   117,   117,
     303,   324,  -126,   -12,    20,    77,  -126,  -126,   323,   128,
    -126,  -126,   306,  -126,    94,    94,  -126,  -126,  -126,  -126,
     304,    17,   278,   278,   278,    17,    17,  -126,   325,   286,
      15,    20,  -126,  -126,  -126,   166,   240,   251,   327,   181,
     298,     7,   160,   332,  -126,    20,   293,  -126,    20,  -126,
     128,   128,   128,  -126,  -126,   128,  -126,   326,  -126,   246,
    -126,   217,  -126,  -126,  -126,   333,   305,    79,    79,  -126,
     128,   325,   289,  -126,  -126,  -126
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,     7,     0,     0,    15,    10,
       7,     7,     0,     0,    33,     0,     0,    19,     0,     0,
       0,     0,    15,    15,    15,     0,     0,     0,    10,    10,
       5,     6,     0,    17,    34,     0,    16,    20,    41,     0,
      36,     0,    39,     0,     4,    83,     0,     0,     0,    73,
      77,     0,     0,    11,    82,    84,    85,    86,    87,    95,
      94,    88,    12,    13,    14,     0,    15,     0,    15,     0,
       0,     0,    42,    44,     8,     9,     0,     0,     0,     0,
      27,     0,     0,    73,    62,    54,    55,    29,     0,     0,
      70,    71,    28,    53,    61,    72,    18,    37,     0,     0,
       2,    73,     0,     0,     0,     0,     0,     0,     0,    76,
       0,     0,     0,    80,     0,   103,     0,     0,     0,    45,
      46,     3,    43,    35,     0,    73,    57,    56,    70,    71,
       0,     0,    26,    60,     0,     0,    30,     0,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    40,     0,     0,     0,     0,   110,     0,
      89,    74,     0,    90,    78,     0,    81,     0,     0,     0,
       0,     0,    98,     0,     0,     0,    52,    69,     0,     0,
      22,    31,     0,    25,    47,    48,    49,    50,    51,    58,
      59,    68,    63,    64,    65,    66,    67,    38,    93,     0,
       0,     0,   107,    75,    79,     0,     0,     0,     0,   103,
       0,     0,     0,     0,   108,     0,     0,    96,     0,   109,
       0,     0,     0,   100,   102,     0,    99,     0,    32,     0,
      91,     0,   104,   105,   106,     0,     0,     0,     0,   101,
       0,    93,     0,    23,    92,    97
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -126,  -126,  -126,  -126,   272,   285,   -24,   284,   292,   294,
    -126,  -126,   329,   -79,  -125,  -126,   207,  -126,   328,   -53,
     -29,   142,   245,  -126,  -126,   274,   -70,   -68,   -43,   -21,
     -19,  -109,  -126,  -126,  -126,  -126,   106,  -126,  -126,  -126,
    -126,  -126,  -126,  -126,   139,  -126,  -126,  -126,  -122
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     8,    19,     9,    27,    20,    21,    22,    23,
      24,    16,    17,    88,    89,   135,   136,    13,    14,    39,
      40,    41,    42,    71,    72,    73,    90,    91,    92,    93,
      94,    53,    54,    55,    56,    57,   216,    58,    59,    60,
      28,    29,    66,    68,   170,   171,    61,    95,   159
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      51,   132,    52,   102,   103,   166,   178,   126,   127,   128,
      97,   129,   210,   133,   183,   182,   119,   120,   147,     6,
     154,   148,   149,   150,   151,   152,   147,     7,   -25,   148,
     149,   150,   151,   152,   -25,   -25,   130,   -24,   130,    77,
      78,    33,   116,    79,   118,    25,   198,   199,    38,     3,
     107,     1,    12,   218,   175,   108,   137,    26,    98,    81,
     226,    99,   158,   160,   173,   162,     4,   163,   109,   165,
     184,   185,   186,   187,   188,    36,    15,   189,   190,   219,
     101,    50,     5,    84,    85,    86,   161,   227,    69,    70,
      97,    97,   164,    51,   158,    52,   140,   141,   142,   143,
     213,   176,   130,   130,   191,   192,   193,   194,   195,   196,
     144,   131,   111,    45,   200,   142,   143,   112,    77,    78,
      15,    96,    79,    46,    80,    47,    12,   144,   241,   242,
     113,   211,    38,    48,    51,    51,    52,    52,    81,    49,
      50,   232,   233,   234,    97,   177,   235,    77,    78,   145,
     146,    79,    32,    80,   180,    82,    35,   134,   158,    83,
      50,   243,    84,    85,    86,    87,    18,    81,     6,    77,
      78,    98,   229,   124,   220,   231,     7,    38,   106,    77,
      78,   110,   107,    79,    82,   111,    43,   108,    83,    50,
     112,    84,    85,    86,    87,   140,   141,   142,   143,    81,
     109,   147,    44,   113,   148,   149,   150,   151,   152,   144,
     125,   167,   168,   169,    85,    86,    51,    51,    52,    52,
     101,    50,    65,    84,    85,    86,    87,   156,   147,    67,
     201,   148,   149,   150,   151,   152,   147,   145,   146,   148,
     149,   150,   151,   152,   155,    98,   147,    76,   221,   148,
     149,   150,   151,   152,   238,   237,    98,   147,   104,   222,
     148,   149,   150,   151,   152,   147,   100,   203,   148,   149,
     150,   151,   152,   147,   121,   204,   148,   149,   150,   151,
     152,   147,    30,    31,   148,   149,   150,   151,   152,   147,
     105,   114,   -25,   -25,   -25,   151,   152,    10,   115,    11,
     117,   123,    10,    10,    11,    11,    62,    63,    64,   205,
     206,   207,    70,    74,    75,   134,   138,   139,   137,   157,
     125,   172,    50,   179,   174,   197,   202,   208,   209,   212,
     214,   223,   145,   217,   225,   215,   228,   239,   230,   236,
     240,    34,   181,   153,   245,    37,   122,   244,   224
};

static const yytype_uint8 yycheck[] =
{
      21,    80,    21,    46,    47,   114,   131,    77,    78,    79,
      39,    79,    24,    81,   139,   137,    69,    70,    11,    50,
      99,    14,    15,    16,    17,    18,    11,    58,    11,    14,
      15,    16,    17,    18,    17,    18,    79,     4,    81,    19,
      20,    51,    66,    23,    68,    40,   155,   156,    60,    60,
       7,    42,    62,    38,   124,    12,    23,    52,     5,    39,
      53,     8,   105,   106,   117,   108,     0,   110,    25,   112,
     140,   141,   142,   143,   144,    59,    60,   145,   146,   201,
      60,    61,     4,    63,    64,    65,   107,   212,    30,    31,
     119,   120,   111,   114,   137,   114,    19,    20,    21,    22,
     179,    24,   145,   146,   147,   148,   149,   150,   151,   152,
      33,    12,     7,    34,   157,    21,    22,    12,    19,    20,
      60,    49,    23,    44,    25,    46,    62,    33,   237,   238,
      25,   174,    60,    54,   155,   156,   155,   156,    39,    60,
      61,   220,   221,   222,   173,    24,   225,    19,    20,    28,
      29,    23,    11,    25,    57,    56,    11,    60,   201,    60,
      61,   240,    63,    64,    65,    66,    48,    39,    50,    19,
      20,     5,   215,    23,     8,   218,    58,    60,     3,    19,
      20,     3,     7,    23,    56,     7,    43,    12,    60,    61,
      12,    63,    64,    65,    66,    19,    20,    21,    22,    39,
      25,    11,    68,    25,    14,    15,    16,    17,    18,    33,
      60,    30,    31,    32,    64,    65,   237,   238,   237,   238,
      60,    61,    60,    63,    64,    65,    66,    37,    11,    60,
       5,    14,    15,    16,    17,    18,    11,    28,    29,    14,
      15,    16,    17,    18,     9,     5,    11,    64,     8,    14,
      15,    16,    17,    18,    37,     9,     5,    11,    60,     8,
      14,    15,    16,    17,    18,    11,     7,    13,    14,    15,
      16,    17,    18,    11,    68,    13,    14,    15,    16,    17,
      18,    11,    10,    11,    14,    15,    16,    17,    18,    11,
      23,     4,    14,    15,    16,    17,    18,     5,    23,     5,
      23,     4,    10,    11,    10,    11,    22,    23,    24,   167,
     168,   169,    31,    28,    29,    60,     4,     6,    23,     3,
      60,    41,    61,     8,    36,     4,    24,    24,     4,     6,
      24,     4,    28,    47,    36,    10,     4,     4,    45,    13,
      35,    13,   135,    98,    55,    16,    72,   241,   209
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    42,    72,    60,     0,     4,    50,    58,    73,    75,
      79,    80,    62,    88,    89,    60,    82,    83,    48,    74,
      77,    78,    79,    80,    81,    40,    52,    76,   111,   112,
      75,    75,    11,    51,    89,    11,    59,    83,    60,    90,
      91,    92,    93,    43,    68,    34,    44,    46,    54,    60,
      61,   100,   101,   102,   103,   104,   105,   106,   108,   109,
     110,   117,    78,    78,    78,    60,   113,    60,   114,    30,
      31,    94,    95,    96,    76,    76,    64,    19,    20,    23,
      25,    39,    56,    60,    63,    64,    65,    66,    84,    85,
      97,    98,    99,   100,   101,   118,    49,    91,     5,     8,
       7,    60,    99,    99,    60,    23,     3,     7,    12,    25,
       3,     7,    12,    25,     4,    23,    77,    23,    77,    90,
      90,    68,    96,     4,    23,    60,    97,    97,    97,    98,
      99,    12,    84,    98,    60,    86,    87,    23,     4,     6,
      19,    20,    21,    22,    33,    28,    29,    11,    14,    15,
      16,    17,    18,    93,    84,     9,    37,     3,    99,   119,
      99,   100,    99,    99,   101,    99,   102,    30,    31,    32,
     115,   116,    41,    90,    36,    97,    24,    24,    85,     8,
      57,    87,   119,    85,    97,    97,    97,    97,    97,    98,
      98,    99,    99,    99,    99,    99,    99,     4,   102,   102,
      99,     5,    24,    13,    13,    92,    92,    92,    24,     4,
      24,    99,     6,    84,    24,    10,   107,    47,    38,   119,
       8,     8,     8,     4,   115,    36,    53,    85,     4,    99,
      45,    99,    84,    84,    84,    84,    13,     9,    37,     4,
      35,   102,   102,    84,   107,    55
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    71,    72,    73,    74,    75,    75,    75,    76,    76,
      76,    77,    78,    78,    78,    78,    79,    80,    81,    82,
      82,    83,    84,    84,    84,    84,    84,    84,    85,    85,
      86,    86,    87,    88,    88,    89,    90,    90,    91,    92,
      92,    93,    94,    94,    94,    95,    96,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      99,    99,    99,   100,   100,   100,   100,   101,   101,   101,
     101,   102,   102,   103,   103,   103,   103,   103,   103,   104,
     105,   106,   107,   107,   108,   108,   109,   110,   111,   112,
     113,   114,   115,   115,   116,   116,   116,   117,   118,   119,
     119
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     7,     4,     2,     2,     2,     0,     2,     2,
       0,     2,     2,     2,     2,     0,     3,     3,     3,     1,
       2,     4,     3,     8,     1,     3,     2,     1,     1,     1,
       1,     2,     4,     1,     2,     4,     1,     2,     4,     1,
       3,     1,     1,     2,     1,     2,     2,     3,     3,     3,
       3,     3,     3,     1,     1,     1,     2,     2,     3,     3,
       2,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       1,     1,     1,     1,     3,     4,     2,     1,     3,     4,
       2,     3,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     6,     5,     0,     1,     1,     5,     9,     4,     6,
       5,     7,     3,     0,     4,     4,     4,     4,     4,     3,
       1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  case 2: /* desc_algoritmoV: inicio_algoritmoTK identificadorTK operador_comp_secTK cabecera_algV bloque_algV fin_algoritmoTK puntoTK  */
#line 100 "parser.y"
                                                                                                                         {
		}
#line 1396 "parser.tab.c"
    break;

  case 3: /* cabecera_algV: decl_globalesV decl_a_fV decl_ent_salV comentarioTK  */
#line 104 "parser.y"
                                                                   {
		}
#line 1403 "parser.tab.c"
    break;

  case 4: /* bloque_algV: bloqueV comentarioTK  */
#line 108 "parser.y"
                                  {
		}
#line 1410 "parser.tab.c"
    break;

  case 5: /* decl_globalesV: declaracion_tipoV decl_globalesV  */
#line 113 "parser.y"
                                                 {
		}
#line 1417 "parser.tab.c"
    break;

  case 6: /* decl_globalesV: declaracion_constV decl_globalesV  */
#line 115 "parser.y"
                                            {
		}
#line 1424 "parser.tab.c"
    break;

  case 7: /* decl_globalesV: %empty  */
#line 117 "parser.y"
                {
		}
#line 1431 "parser.tab.c"
    break;

  case 8: /* decl_a_fV: accion_dV decl_a_fV  */
#line 122 "parser.y"
                                    {
		}
#line 1438 "parser.tab.c"
    break;

  case 9: /* decl_a_fV: funcion_dV decl_a_fV  */
#line 124 "parser.y"
                               {
		}
#line 1445 "parser.tab.c"
    break;

  case 10: /* decl_a_fV: %empty  */
#line 126 "parser.y"
                {
		}
#line 1452 "parser.tab.c"
    break;

  case 11: /* bloqueV: declaracionesV instruccionesV  */
#line 130 "parser.y"
                                       {
		}
#line 1459 "parser.tab.c"
    break;

  case 12: /* declaracionesV: declaracion_tipoV declaracionesV  */
#line 135 "parser.y"
                                                 {
		}
#line 1466 "parser.tab.c"
    break;

  case 13: /* declaracionesV: declaracion_constV declaracionesV  */
#line 137 "parser.y"
                                            {
		}
#line 1473 "parser.tab.c"
    break;

  case 14: /* declaracionesV: declaracion_varV declaracionesV  */
#line 139 "parser.y"
                                          {
		}
#line 1480 "parser.tab.c"
    break;

  case 15: /* declaracionesV: %empty  */
#line 141 "parser.y"
                {
		}
#line 1487 "parser.tab.c"
    break;

  case 16: /* declaracion_tipoV: inicio_tipoTK lista_d_tipoV fin_tipoTK  */
#line 145 "parser.y"
                                                          {
		}
#line 1494 "parser.tab.c"
    break;

  case 17: /* declaracion_constV: inicio_constTK lista_d_cteV fin_constTK  */
#line 149 "parser.y"
                                                            {
		}
#line 1501 "parser.tab.c"
    break;

  case 18: /* declaracion_varV: inicio_varTK lista_d_varV fin_varTK  */
#line 153 "parser.y"
                                                      {
		}
#line 1508 "parser.tab.c"
    break;

  case 19: /* lista_d_tipoV: declaracionTipoV  */
#line 157 "parser.y"
                                {
		}
#line 1515 "parser.tab.c"
    break;

  case 20: /* lista_d_tipoV: lista_d_tipoV declaracionTipoV  */
#line 159 "parser.y"
                                         {
		}
#line 1522 "parser.tab.c"
    break;

  case 21: /* declaracionTipoV: identificadorTK operador_igualTK d_tipoV operador_comp_secTK  */
#line 162 "parser.y"
                                                                               {
		}
#line 1529 "parser.tab.c"
    break;

  case 22: /* d_tipoV: inicio_tuplaTK lista_camposV fin_tuplaTK  */
#line 165 "parser.y"
                                                  {
        }
#line 1536 "parser.tab.c"
    break;

  case 23: /* d_tipoV: tipoTK operador_inicio_arrayTK expresion_tV operador_subrangoTK expresion_tV operador_fin_arrayTK deTK d_tipoV  */
#line 167 "parser.y"
                                                                                                                     {
        }
#line 1543 "parser.tab.c"
    break;

  case 24: /* d_tipoV: identificadorTK  */
#line 169 "parser.y"
                      {
        }
#line 1550 "parser.tab.c"
    break;

  case 25: /* d_tipoV: expresion_tV operador_subrangoTK expresion_tV  */
#line 171 "parser.y"
                                                    {
        }
#line 1557 "parser.tab.c"
    break;

  case 26: /* d_tipoV: tipoTK d_tipoV  */
#line 173 "parser.y"
                     {
        }
#line 1564 "parser.tab.c"
    break;

  case 27: /* d_tipoV: tipoTK  */
#line 175 "parser.y"
             {
        }
#line 1571 "parser.tab.c"
    break;

  case 28: /* expresion_tV: expresionV  */
#line 178 "parser.y"
                         {
        }
#line 1578 "parser.tab.c"
    break;

  case 29: /* expresion_tV: literal_caracterTK  */
#line 180 "parser.y"
                         {
        }
#line 1585 "parser.tab.c"
    break;

  case 30: /* lista_camposV: declaracionCampoV  */
#line 183 "parser.y"
                                {
        }
#line 1592 "parser.tab.c"
    break;

  case 31: /* lista_camposV: lista_camposV declaracionCampoV  */
#line 185 "parser.y"
                                     {
        }
#line 1599 "parser.tab.c"
    break;

  case 32: /* declaracionCampoV: identificadorTK operador_def_tipoTK d_tipoV operador_comp_secTK  */
#line 188 "parser.y"
                                                                                   {
        }
#line 1606 "parser.tab.c"
    break;

  case 33: /* lista_d_cteV: declaracionDeConstanteV  */
#line 192 "parser.y"
                                       {
		}
#line 1613 "parser.tab.c"
    break;

  case 34: /* lista_d_cteV: lista_d_cteV declaracionDeConstanteV  */
#line 194 "parser.y"
                                               {
		}
#line 1620 "parser.tab.c"
    break;

  case 35: /* declaracionDeConstanteV: identificadorConstanteTK operador_igualTK literal_enteroTK operador_comp_secTK  */
#line 197 "parser.y"
                                                                                                        {
		}
#line 1627 "parser.tab.c"
    break;

  case 36: /* lista_d_varV: declaracionDeVariableV  */
#line 201 "parser.y"
                                      {
		}
#line 1634 "parser.tab.c"
    break;

  case 37: /* lista_d_varV: lista_d_varV declaracionDeVariableV  */
#line 203 "parser.y"
                                             {
		}
#line 1641 "parser.tab.c"
    break;

  case 38: /* declaracionDeVariableV: lista_idV operador_def_tipoTK d_tipoV operador_comp_secTK  */
#line 206 "parser.y"
                                                                                  {
		}
#line 1648 "parser.tab.c"
    break;

  case 39: /* lista_idV: declaracionDeListaIdV  */
#line 209 "parser.y"
                                  {
		}
#line 1655 "parser.tab.c"
    break;

  case 40: /* lista_idV: lista_idV operador_separadorTK declaracionDeListaIdV  */
#line 211 "parser.y"
                                                               {
		}
#line 1662 "parser.tab.c"
    break;

  case 41: /* declaracionDeListaIdV: identificadorTK  */
#line 214 "parser.y"
                                       {
		}
#line 1669 "parser.tab.c"
    break;

  case 42: /* decl_ent_salV: decl_entV  */
#line 218 "parser.y"
                          {
		}
#line 1676 "parser.tab.c"
    break;

  case 43: /* decl_ent_salV: decl_entV decl_salV  */
#line 220 "parser.y"
                              {
		}
#line 1683 "parser.tab.c"
    break;

  case 44: /* decl_ent_salV: decl_salV  */
#line 222 "parser.y"
                    {
		}
#line 1690 "parser.tab.c"
    break;

  case 45: /* decl_entV: tipo_atributo_entTK lista_d_varV  */
#line 225 "parser.y"
                                            {
		}
#line 1697 "parser.tab.c"
    break;

  case 46: /* decl_salV: tipo_atributo_salTK lista_d_varV  */
#line 228 "parser.y"
                                            {
		}
#line 1704 "parser.tab.c"
    break;

  case 47: /* exp_aV: exp_aV aritmetico_sumaTK exp_aV  */
#line 232 "parser.y"
                                         {
		}
#line 1711 "parser.tab.c"
    break;

  case 48: /* exp_aV: exp_aV aritmetico_restaTK exp_aV  */
#line 234 "parser.y"
                                           {
		}
#line 1718 "parser.tab.c"
    break;

  case 49: /* exp_aV: exp_aV aritmetico_productoTK exp_aV  */
#line 236 "parser.y"
                                              {
		}
#line 1725 "parser.tab.c"
    break;

  case 50: /* exp_aV: exp_aV aritmetico_divisionTK exp_aV  */
#line 238 "parser.y"
                                              {
		}
#line 1732 "parser.tab.c"
    break;

  case 51: /* exp_aV: exp_aV operacionTK exp_aV  */
#line 240 "parser.y"
                                    {
		}
#line 1739 "parser.tab.c"
    break;

  case 52: /* exp_aV: inicio_parentesisTK exp_aV fin_parentesisTK  */
#line 242 "parser.y"
                                                      {
		}
#line 1746 "parser.tab.c"
    break;

  case 53: /* exp_aV: operando_aV  */
#line 244 "parser.y"
                      {
		}
#line 1753 "parser.tab.c"
    break;

  case 54: /* exp_aV: literal_enteroTK  */
#line 246 "parser.y"
                           {
		}
#line 1760 "parser.tab.c"
    break;

  case 55: /* exp_aV: literal_realTK  */
#line 248 "parser.y"
                         {
		}
#line 1767 "parser.tab.c"
    break;

  case 56: /* exp_aV: aritmetico_restaTK exp_aV  */
#line 250 "parser.y"
                                    {
		}
#line 1774 "parser.tab.c"
    break;

  case 57: /* exp_aV: aritmetico_sumaTK exp_aV  */
#line 252 "parser.y"
                                   {
		}
#line 1781 "parser.tab.c"
    break;

  case 58: /* exp_bV: exp_bV conjuncionTK exp_bV  */
#line 255 "parser.y"
                                    {
		}
#line 1788 "parser.tab.c"
    break;

  case 59: /* exp_bV: exp_bV disyuncionTK exp_bV  */
#line 258 "parser.y"
                                   {
		}
#line 1795 "parser.tab.c"
    break;

  case 60: /* exp_bV: noTK exp_bV  */
#line 260 "parser.y"
                     {
		}
#line 1802 "parser.tab.c"
    break;

  case 61: /* exp_bV: operando_bV  */
#line 262 "parser.y"
                      {
		}
#line 1809 "parser.tab.c"
    break;

  case 62: /* exp_bV: literal_booleanoTK  */
#line 264 "parser.y"
                             {
		}
#line 1816 "parser.tab.c"
    break;

  case 63: /* exp_bV: expresionV relacional_distintoTK expresionV  */
#line 266 "parser.y"
                                                      {
		}
#line 1823 "parser.tab.c"
    break;

  case 64: /* exp_bV: expresionV relacional_menor_igualTK expresionV  */
#line 268 "parser.y"
                                                         {
		}
#line 1830 "parser.tab.c"
    break;

  case 65: /* exp_bV: expresionV relacional_mayor_igualTK expresionV  */
#line 270 "parser.y"
                                                         {
		}
#line 1837 "parser.tab.c"
    break;

  case 66: /* exp_bV: expresionV relacional_menorTK expresionV  */
#line 272 "parser.y"
                                                   {
		}
#line 1844 "parser.tab.c"
    break;

  case 67: /* exp_bV: expresionV relacional_mayorTK expresionV  */
#line 274 "parser.y"
                                                   {
		}
#line 1851 "parser.tab.c"
    break;

  case 68: /* exp_bV: expresionV operador_igualTK expresionV  */
#line 276 "parser.y"
                                                 {
		}
#line 1858 "parser.tab.c"
    break;

  case 69: /* exp_bV: inicio_parentesisTK exp_bV fin_parentesisTK  */
#line 278 "parser.y"
                                                      {
		}
#line 1865 "parser.tab.c"
    break;

  case 70: /* expresionV: exp_aV  */
#line 281 "parser.y"
                    {
		}
#line 1872 "parser.tab.c"
    break;

  case 71: /* expresionV: exp_bV  */
#line 283 "parser.y"
                 {
		}
#line 1879 "parser.tab.c"
    break;

  case 72: /* expresionV: funcion_llV  */
#line 285 "parser.y"
                      {
		}
#line 1886 "parser.tab.c"
    break;

  case 73: /* operando_aV: identificadorTK  */
#line 288 "parser.y"
                              {
		}
#line 1893 "parser.tab.c"
    break;

  case 74: /* operando_aV: operando_aV puntoTK operando_aV  */
#line 290 "parser.y"
                                          {
		}
#line 1900 "parser.tab.c"
    break;

  case 75: /* operando_aV: operando_aV operador_inicio_arrayTK expresionV operador_fin_arrayTK  */
#line 292 "parser.y"
                                                                              {
		}
#line 1907 "parser.tab.c"
    break;

  case 76: /* operando_aV: operando_aV tipoTK  */
#line 294 "parser.y"
                             {
		}
#line 1914 "parser.tab.c"
    break;

  case 77: /* operando_bV: identificadorBooleanoTK  */
#line 297 "parser.y"
                                      {
		}
#line 1921 "parser.tab.c"
    break;

  case 78: /* operando_bV: operando_bV puntoTK operando_bV  */
#line 299 "parser.y"
                                          {
		}
#line 1928 "parser.tab.c"
    break;

  case 79: /* operando_bV: operando_bV operador_inicio_arrayTK expresionV operador_fin_arrayTK  */
#line 301 "parser.y"
                                                                              {
		}
#line 1935 "parser.tab.c"
    break;

  case 80: /* operando_bV: operando_bV tipoTK  */
#line 303 "parser.y"
                             {
		}
#line 1942 "parser.tab.c"
    break;

  case 81: /* instruccionesV: instruccionV operador_comp_secTK instruccionesV  */
#line 307 "parser.y"
                                                                 {
		}
#line 1949 "parser.tab.c"
    break;

  case 82: /* instruccionesV: instruccionV  */
#line 309 "parser.y"
                       {
		}
#line 1956 "parser.tab.c"
    break;

  case 83: /* instruccionV: continuarTK  */
#line 312 "parser.y"
                           {
		}
#line 1963 "parser.tab.c"
    break;

  case 84: /* instruccionV: asignacion_aV  */
#line 314 "parser.y"
                        {
		}
#line 1970 "parser.tab.c"
    break;

  case 85: /* instruccionV: asignacion_bV  */
#line 316 "parser.y"
                        {
		}
#line 1977 "parser.tab.c"
    break;

  case 86: /* instruccionV: alternativaV  */
#line 318 "parser.y"
                       {
		}
#line 1984 "parser.tab.c"
    break;

  case 87: /* instruccionV: iteracionV  */
#line 320 "parser.y"
                     {
		}
#line 1991 "parser.tab.c"
    break;

  case 88: /* instruccionV: accion_llV  */
#line 322 "parser.y"
                     {
		}
#line 1998 "parser.tab.c"
    break;

  case 89: /* asignacion_aV: operando_aV operador_asignacionTK expresionV  */
#line 325 "parser.y"
                                                             {
		}
#line 2005 "parser.tab.c"
    break;

  case 90: /* asignacion_bV: operando_bV operador_asignacionTK expresionV  */
#line 328 "parser.y"
                                                             {
		}
#line 2012 "parser.tab.c"
    break;

  case 91: /* alternativaV: inicio_siTK expresionV operador_entoncesTK instruccionesV lista_opcionesV fin_siTK  */
#line 331 "parser.y"
                                                                                                  {
		}
#line 2019 "parser.tab.c"
    break;

  case 92: /* lista_opcionesV: operador_elseTK expresionV operador_entoncesTK instruccionesV lista_opcionesV  */
#line 334 "parser.y"
                                                                                                {
		}
#line 2026 "parser.tab.c"
    break;

  case 93: /* lista_opcionesV: %empty  */
#line 336 "parser.y"
                 {
		}
#line 2033 "parser.tab.c"
    break;

  case 94: /* iteracionV: it_cota_fijaV  */
#line 339 "parser.y"
                           {
		}
#line 2040 "parser.tab.c"
    break;

  case 95: /* iteracionV: it_cota_expV  */
#line 341 "parser.y"
                       {
		}
#line 2047 "parser.tab.c"
    break;

  case 96: /* it_cota_expV: inicio_mientrasTK expresionV hacerTK instruccionesV fin_mientrasTK  */
#line 344 "parser.y"
                                                                                  {
		}
#line 2054 "parser.tab.c"
    break;

  case 97: /* it_cota_fijaV: inicio_paraTK identificadorTK operador_asignacionTK expresionV hastaTK expresionV hacerTK instruccionesV fin_paraTK  */
#line 347 "parser.y"
                                                                                                                                    {
		}
#line 2061 "parser.tab.c"
    break;

  case 98: /* accion_dV: inicio_accionTK a_cabeceraV bloqueV fin_accionTK  */
#line 351 "parser.y"
                                                             {
		}
#line 2068 "parser.tab.c"
    break;

  case 99: /* funcion_dV: inicio_funcionTK f_cabeceraV bloqueV devTK expresionV fin_funcionTK  */
#line 354 "parser.y"
                                                                                 {
		}
#line 2075 "parser.tab.c"
    break;

  case 100: /* a_cabeceraV: identificadorTK inicio_parentesisTK d_par_formV fin_parentesisTK operador_comp_secTK  */
#line 357 "parser.y"
                                                                                                   {
		}
#line 2082 "parser.tab.c"
    break;

  case 101: /* f_cabeceraV: identificadorTK inicio_parentesisTK lista_d_varV fin_parentesisTK devTK d_tipoV operador_comp_secTK  */
#line 360 "parser.y"
                                                                                                                  {
		}
#line 2089 "parser.tab.c"
    break;

  case 102: /* d_par_formV: d_p_formV operador_comp_secTK d_par_formV  */
#line 363 "parser.y"
                                                        {
		}
#line 2096 "parser.tab.c"
    break;

  case 103: /* d_par_formV: %empty  */
#line 365 "parser.y"
                 {
		}
#line 2103 "parser.tab.c"
    break;

  case 104: /* d_p_formV: tipo_atributo_entTK lista_idV operador_def_tipoTK d_tipoV  */
#line 368 "parser.y"
                                                                      {
		}
#line 2110 "parser.tab.c"
    break;

  case 105: /* d_p_formV: tipo_atributo_salTK lista_idV operador_def_tipoTK d_tipoV  */
#line 370 "parser.y"
                                                                    {
		}
#line 2117 "parser.tab.c"
    break;

  case 106: /* d_p_formV: tipo_atributo_ent_salTK lista_idV operador_def_tipoTK d_tipoV  */
#line 372 "parser.y"
                                                                        {
		}
#line 2124 "parser.tab.c"
    break;

  case 107: /* accion_llV: identificadorTK inicio_parentesisTK l_llV fin_parentesisTK  */
#line 376 "parser.y"
                                                                        {
		}
#line 2131 "parser.tab.c"
    break;

  case 108: /* funcion_llV: identificadorTK inicio_parentesisTK l_llV fin_parentesisTK  */
#line 379 "parser.y"
                                                                         {
		}
#line 2138 "parser.tab.c"
    break;

  case 109: /* l_llV: expresionV operador_separadorTK l_llV  */
#line 382 "parser.y"
                                              {
		}
#line 2145 "parser.tab.c"
    break;

  case 110: /* l_llV: expresionV  */
#line 384 "parser.y"
                     {
		}
#line 2152 "parser.tab.c"
    break;


#line 2156 "parser.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 388 "parser.y"


int main(int argc, char **argv){
	#if defined YYDEBUG
	yydebug=1;
	#endif
	++argv, --argc;
	if (argc > 0)
		yyin = fopen(argv[0], "r");
	else
		yyin = stdin;
	tc = nuevaTablaDeConstantes();
	yyparse();
	imprimeTablaDeConstantes(tc);
}


void yyerror(char * s){
	printf("\tBISON: ERROR, %s\n", s);
}
