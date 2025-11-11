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
	#include "tablaDeConstantes.h"
	int yylex(); // Usamos la funcion que se crea gracias a flex
	void yyerror(char *); // Prototipo de una funcion necesaria
	extern FILE* yyin; // Usamos la varible de Flex en la que viene la entrada
	TablaDeConstantes tc; //Es donde guardaremos las constantes
	#define YYDEBUG 1 //Permite activar el modo Debugg de Bison

#line 82 "parser.tab.c"

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
  YYSYMBOL_conjuncionTK = 26,              /* conjuncionTK  */
  YYSYMBOL_disyuncionTK = 27,              /* disyuncionTK  */
  YYSYMBOL_tipo_atributo_entTK = 28,       /* tipo_atributo_entTK  */
  YYSYMBOL_tipo_atributo_salTK = 29,       /* tipo_atributo_salTK  */
  YYSYMBOL_tipo_atributo_ent_salTK = 30,   /* tipo_atributo_ent_salTK  */
  YYSYMBOL_operacionTK = 31,               /* operacionTK  */
  YYSYMBOL_continuarTK = 32,               /* continuarTK  */
  YYSYMBOL_deTK = 33,                      /* deTK  */
  YYSYMBOL_devTK = 34,                     /* devTK  */
  YYSYMBOL_hacerTK = 35,                   /* hacerTK  */
  YYSYMBOL_hastaTK = 36,                   /* hastaTK  */
  YYSYMBOL_noTK = 37,                      /* noTK  */
  YYSYMBOL_inicio_accionTK = 38,           /* inicio_accionTK  */
  YYSYMBOL_fin_accionTK = 39,              /* fin_accionTK  */
  YYSYMBOL_inicio_algoritmoTK = 40,        /* inicio_algoritmoTK  */
  YYSYMBOL_fin_algoritmoTK = 41,           /* fin_algoritmoTK  */
  YYSYMBOL_inicio_siTK = 42,               /* inicio_siTK  */
  YYSYMBOL_fin_siTK = 43,                  /* fin_siTK  */
  YYSYMBOL_inicio_mientrasTK = 44,         /* inicio_mientrasTK  */
  YYSYMBOL_fin_mientrasTK = 45,            /* fin_mientrasTK  */
  YYSYMBOL_inicio_varTK = 46,              /* inicio_varTK  */
  YYSYMBOL_fin_varTK = 47,                 /* fin_varTK  */
  YYSYMBOL_inicio_constTK = 48,            /* inicio_constTK  */
  YYSYMBOL_fin_constTK = 49,               /* fin_constTK  */
  YYSYMBOL_inicio_funcionTK = 50,          /* inicio_funcionTK  */
  YYSYMBOL_fin_funcionTK = 51,             /* fin_funcionTK  */
  YYSYMBOL_inicio_paraTK = 52,             /* inicio_paraTK  */
  YYSYMBOL_fin_paraTK = 53,                /* fin_paraTK  */
  YYSYMBOL_inicio_tuplaTK = 54,            /* inicio_tuplaTK  */
  YYSYMBOL_fin_tuplaTK = 55,               /* fin_tuplaTK  */
  YYSYMBOL_inicio_tipoTK = 56,             /* inicio_tipoTK  */
  YYSYMBOL_fin_tipoTK = 57,                /* fin_tipoTK  */
  YYSYMBOL_identificadorTK = 58,           /* identificadorTK  */
  YYSYMBOL_identificadorBooleanoTK = 59,   /* identificadorBooleanoTK  */
  YYSYMBOL_identificadorConstanteTK = 60,  /* identificadorConstanteTK  */
  YYSYMBOL_literal_booleanoTK = 61,        /* literal_booleanoTK  */
  YYSYMBOL_literal_enteroTK = 62,          /* literal_enteroTK  */
  YYSYMBOL_literal_realTK = 63,            /* literal_realTK  */
  YYSYMBOL_literal_caracterTK = 64,        /* literal_caracterTK  */
  YYSYMBOL_comentarioTK = 65,              /* comentarioTK  */
  YYSYMBOL_relacional_menor_igualDR = 66,  /* relacional_menor_igualDR  */
  YYSYMBOL_aritmetico_divisionRealTK = 67, /* aritmetico_divisionRealTK  */
  YYSYMBOL_aritmetico_moduloTK = 68,       /* aritmetico_moduloTK  */
  YYSYMBOL_YYACCEPT = 69,                  /* $accept  */
  YYSYMBOL_desc_algoritmoV = 70,           /* desc_algoritmoV  */
  YYSYMBOL_cabecera_algV = 71,             /* cabecera_algV  */
  YYSYMBOL_bloque_algV = 72,               /* bloque_algV  */
  YYSYMBOL_decl_globalesV = 73,            /* decl_globalesV  */
  YYSYMBOL_decl_a_fV = 74,                 /* decl_a_fV  */
  YYSYMBOL_bloqueV = 75,                   /* bloqueV  */
  YYSYMBOL_declaracionesV = 76,            /* declaracionesV  */
  YYSYMBOL_declaracion_tipoV = 77,         /* declaracion_tipoV  */
  YYSYMBOL_declaracion_constV = 78,        /* declaracion_constV  */
  YYSYMBOL_declaracion_varV = 79,          /* declaracion_varV  */
  YYSYMBOL_lista_d_tipoV = 80,             /* lista_d_tipoV  */
  YYSYMBOL_declaracionTipoV = 81,          /* declaracionTipoV  */
  YYSYMBOL_d_tipoV = 82,                   /* d_tipoV  */
  YYSYMBOL_expresion_tV = 83,              /* expresion_tV  */
  YYSYMBOL_lista_camposV = 84,             /* lista_camposV  */
  YYSYMBOL_declaracionCampoV = 85,         /* declaracionCampoV  */
  YYSYMBOL_lista_d_cteV = 86,              /* lista_d_cteV  */
  YYSYMBOL_declaracionDeConstanteV = 87,   /* declaracionDeConstanteV  */
  YYSYMBOL_lista_d_varV = 88,              /* lista_d_varV  */
  YYSYMBOL_declaracionDeVariableV = 89,    /* declaracionDeVariableV  */
  YYSYMBOL_lista_idV = 90,                 /* lista_idV  */
  YYSYMBOL_declaracionDeListaIdV = 91,     /* declaracionDeListaIdV  */
  YYSYMBOL_decl_ent_salV = 92,             /* decl_ent_salV  */
  YYSYMBOL_decl_entV = 93,                 /* decl_entV  */
  YYSYMBOL_decl_salV = 94,                 /* decl_salV  */
  YYSYMBOL_exp_aV = 95,                    /* exp_aV  */
  YYSYMBOL_exp_bV = 96,                    /* exp_bV  */
  YYSYMBOL_expresionV = 97,                /* expresionV  */
  YYSYMBOL_operando_aV = 98,               /* operando_aV  */
  YYSYMBOL_operando_bV = 99,               /* operando_bV  */
  YYSYMBOL_instruccionesV = 100,           /* instruccionesV  */
  YYSYMBOL_instruccionV = 101,             /* instruccionV  */
  YYSYMBOL_asignacion_aV = 102,            /* asignacion_aV  */
  YYSYMBOL_asignacion_bV = 103,            /* asignacion_bV  */
  YYSYMBOL_alternativaV = 104,             /* alternativaV  */
  YYSYMBOL_lista_opcionesV = 105,          /* lista_opcionesV  */
  YYSYMBOL_iteracionV = 106,               /* iteracionV  */
  YYSYMBOL_it_cota_expV = 107,             /* it_cota_expV  */
  YYSYMBOL_it_cota_fijaV = 108,            /* it_cota_fijaV  */
  YYSYMBOL_accion_dV = 109,                /* accion_dV  */
  YYSYMBOL_funcion_dV = 110,               /* funcion_dV  */
  YYSYMBOL_a_cabeceraV = 111,              /* a_cabeceraV  */
  YYSYMBOL_f_cabeceraV = 112,              /* f_cabeceraV  */
  YYSYMBOL_d_par_formV = 113,              /* d_par_formV  */
  YYSYMBOL_d_p_formV = 114,                /* d_p_formV  */
  YYSYMBOL_accion_llV = 115,               /* accion_llV  */
  YYSYMBOL_funcion_llV = 116,              /* funcion_llV  */
  YYSYMBOL_l_llV = 117                     /* l_llV  */
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
#define YYLAST   350

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  110
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  246

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   323


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
      65,    66,    67,    68
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    96,    96,   100,   104,   109,   111,   113,   118,   120,
     122,   126,   131,   133,   135,   137,   141,   145,   149,   153,
     155,   158,   161,   163,   165,   167,   169,   171,   174,   176,
     179,   181,   184,   188,   190,   193,   197,   199,   202,   205,
     207,   210,   214,   216,   218,   221,   224,   228,   230,   232,
     234,   236,   238,   240,   242,   244,   246,   248,   251,   254,
     256,   258,   260,   262,   264,   266,   268,   270,   272,   274,
     277,   279,   281,   284,   286,   288,   290,   293,   295,   297,
     299,   303,   305,   308,   310,   312,   314,   316,   318,   321,
     324,   327,   330,   332,   335,   337,   340,   343,   347,   350,
     353,   356,   359,   361,   364,   366,   368,   372,   375,   378,
     380
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
  "tipoTK", "conjuncionTK", "disyuncionTK", "tipo_atributo_entTK",
  "tipo_atributo_salTK", "tipo_atributo_ent_salTK", "operacionTK",
  "continuarTK", "deTK", "devTK", "hacerTK", "hastaTK", "noTK",
  "inicio_accionTK", "fin_accionTK", "inicio_algoritmoTK",
  "fin_algoritmoTK", "inicio_siTK", "fin_siTK", "inicio_mientrasTK",
  "fin_mientrasTK", "inicio_varTK", "fin_varTK", "inicio_constTK",
  "fin_constTK", "inicio_funcionTK", "fin_funcionTK", "inicio_paraTK",
  "fin_paraTK", "inicio_tuplaTK", "fin_tuplaTK", "inicio_tipoTK",
  "fin_tipoTK", "identificadorTK", "identificadorBooleanoTK",
  "identificadorConstanteTK", "literal_booleanoTK", "literal_enteroTK",
  "literal_realTK", "literal_caracterTK", "comentarioTK",
  "relacional_menor_igualDR", "aritmetico_divisionRealTK",
  "aritmetico_moduloTK", "$accept", "desc_algoritmoV", "cabecera_algV",
  "bloque_algV", "decl_globalesV", "decl_a_fV", "bloqueV",
  "declaracionesV", "declaracion_tipoV", "declaracion_constV",
  "declaracion_varV", "lista_d_tipoV", "declaracionTipoV", "d_tipoV",
  "expresion_tV", "lista_camposV", "declaracionCampoV", "lista_d_cteV",
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
     -28,   -31,    34,    48,  -126,    63,     6,    24,    69,   -10,
      63,    63,    78,     0,  -126,   105,    18,  -126,    65,   116,
      74,   171,    69,    69,    69,    89,   124,    68,   -10,   -10,
    -126,  -126,   112,  -126,  -126,   129,  -126,  -126,  -126,    41,
    -126,    93,  -126,   201,  -126,  -126,    22,    22,   164,   197,
    -126,    32,   115,  -126,   228,  -126,  -126,  -126,  -126,  -126,
    -126,  -126,  -126,  -126,  -126,   213,    69,   225,    69,    65,
      65,   182,   230,  -126,  -126,  -126,   250,   175,   175,    22,
     101,    22,   207,    33,  -126,  -126,  -126,  -126,   262,   264,
     242,   143,   294,    36,    43,  -126,  -126,  -126,    65,   129,
    -126,   245,   260,   162,   269,    22,    22,   222,    22,  -126,
      22,   223,    22,  -126,   171,   293,   244,    65,   256,    65,
      65,  -126,  -126,  -126,   175,  -126,   183,   183,   236,   106,
     294,   148,  -126,  -126,   290,    98,  -126,    22,  -126,   148,
     175,   175,   175,   175,   175,    22,    22,    22,    22,    22,
      22,    22,    22,  -126,   310,   171,   171,    22,   235,   282,
     294,  -126,   278,   294,  -126,   286,  -126,    65,    65,    65,
     283,   311,  -126,    -5,    22,   236,  -126,  -126,   318,   129,
    -126,  -126,   307,  -126,   183,   183,  -126,  -126,  -126,   305,
    -126,   224,   302,   294,   302,   224,   224,  -126,   323,   289,
      15,    22,  -126,  -126,  -126,   176,   181,   226,   331,   293,
     304,     7,   148,   332,  -126,    22,   296,  -126,    22,  -126,
     129,   129,   129,  -126,  -126,   129,  -126,   324,  -126,   270,
    -126,   210,  -126,  -126,  -126,   336,   308,   171,   171,  -126,
     129,   323,   291,  -126,  -126,  -126
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
    -126,  -126,  -126,  -126,   189,   215,    44,   303,   140,   191,
    -126,  -126,   326,   -79,  -125,  -126,   208,  -126,   333,   -53,
     -29,   161,   247,  -126,  -126,   275,   -70,   -68,   -43,   -21,
     -19,  -109,  -126,  -126,  -126,  -126,   107,  -126,  -126,  -126,
    -126,  -126,  -126,  -126,   141,  -126,  -126,  -126,  -122
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
      97,   129,     1,   133,   183,   182,   119,   120,   147,   210,
     154,   148,   149,   150,   151,   152,   147,     3,    25,   148,
     149,   150,   151,   152,     4,   106,   130,   -24,   130,   107,
      26,    77,    78,   107,   108,    79,   198,   199,   108,    33,
     111,   218,     5,    38,   175,   112,   137,   109,   226,    81,
      12,   109,   158,   160,   173,   162,    12,   163,   113,   165,
     184,   185,   186,   187,   188,    36,    15,   189,   190,   219,
     101,    50,    15,    84,    85,    86,   161,   227,    96,    32,
      97,    97,   164,    51,   158,    52,    69,    70,    98,    38,
     213,    99,   130,   130,   191,   192,   193,   194,   195,   196,
     116,     6,   118,   131,   200,    18,    35,     6,   110,     7,
      77,    78,   111,    38,    79,     7,    80,   112,   241,   242,
     177,   211,   145,   146,    51,    51,    52,    52,    81,    44,
     113,   232,   233,   234,    97,    10,   235,    65,    77,    78,
      10,    10,    79,   180,    80,    82,   134,    43,   158,    83,
      50,   243,    84,    85,    86,    87,    81,    77,    78,   145,
     146,    79,   229,   147,    76,   231,   148,   149,   150,   151,
     152,    98,    67,    82,   220,    81,    98,    83,    50,   221,
      84,    85,    86,    87,    77,    78,    11,   156,   124,    30,
      31,    11,    11,    45,   142,   143,   101,    50,   100,    84,
      85,    86,    87,    46,   144,    47,    51,    51,    52,    52,
     105,   147,   104,    48,   148,   149,   150,   151,   152,    49,
      50,    98,   114,   125,   222,   -25,   115,    85,    86,   149,
     201,   -25,   -25,    74,    75,   238,   147,   121,   117,   148,
     149,   150,   151,   152,   123,   140,   141,   142,   143,    70,
     176,   140,   141,   142,   143,   134,   138,   144,   137,   155,
     139,   147,   157,   144,   148,   149,   150,   151,   152,   237,
     125,   147,    50,   172,   148,   149,   150,   151,   152,   147,
     174,   203,   148,   149,   150,   151,   152,   147,   179,   204,
     148,   149,   150,   151,   152,   147,   202,   208,   148,   149,
     150,   151,   152,   147,   197,   209,   -25,   149,   -25,   151,
     152,   167,   168,   169,   212,    62,    63,    64,   205,   206,
     207,   214,   146,   215,   217,   223,   228,   236,   225,   230,
     239,   240,    37,   181,   245,   153,    34,   122,   244,     0,
     224
};

static const yytype_int16 yycheck[] =
{
      21,    80,    21,    46,    47,   114,   131,    77,    78,    79,
      39,    79,    40,    81,   139,   137,    69,    70,    11,    24,
      99,    14,    15,    16,    17,    18,    11,    58,    38,    14,
      15,    16,    17,    18,     0,     3,    79,     4,    81,     7,
      50,    19,    20,     7,    12,    23,   155,   156,    12,    49,
       7,    36,     4,    58,   124,    12,    23,    25,    51,    37,
      60,    25,   105,   106,   117,   108,    60,   110,    25,   112,
     140,   141,   142,   143,   144,    57,    58,   145,   146,   201,
      58,    59,    58,    61,    62,    63,   107,   212,    47,    11,
     119,   120,   111,   114,   137,   114,    28,    29,     5,    58,
     179,     8,   145,   146,   147,   148,   149,   150,   151,   152,
      66,    48,    68,    12,   157,    46,    11,    48,     3,    56,
      19,    20,     7,    58,    23,    56,    25,    12,   237,   238,
      24,   174,    26,    27,   155,   156,   155,   156,    37,    65,
      25,   220,   221,   222,   173,     5,   225,    58,    19,    20,
      10,    11,    23,    55,    25,    54,    58,    41,   201,    58,
      59,   240,    61,    62,    63,    64,    37,    19,    20,    26,
      27,    23,   215,    11,    62,   218,    14,    15,    16,    17,
      18,     5,    58,    54,     8,    37,     5,    58,    59,     8,
      61,    62,    63,    64,    19,    20,     5,    35,    23,    10,
      11,    10,    11,    32,    21,    22,    58,    59,     7,    61,
      62,    63,    64,    42,    31,    44,   237,   238,   237,   238,
      23,    11,    58,    52,    14,    15,    16,    17,    18,    58,
      59,     5,     4,    58,     8,    11,    23,    62,    63,    15,
       5,    17,    18,    28,    29,    35,    11,    65,    23,    14,
      15,    16,    17,    18,     4,    19,    20,    21,    22,    29,
      24,    19,    20,    21,    22,    58,     4,    31,    23,     9,
       6,    11,     3,    31,    14,    15,    16,    17,    18,     9,
      58,    11,    59,    39,    14,    15,    16,    17,    18,    11,
      34,    13,    14,    15,    16,    17,    18,    11,     8,    13,
      14,    15,    16,    17,    18,    11,    24,    24,    14,    15,
      16,    17,    18,    11,     4,     4,    14,    15,    16,    17,
      18,    28,    29,    30,     6,    22,    23,    24,   167,   168,
     169,    24,    27,    10,    45,     4,     4,    13,    34,    43,
       4,    33,    16,   135,    53,    98,    13,    72,   241,    -1,
     209
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    40,    70,    58,     0,     4,    48,    56,    71,    73,
      77,    78,    60,    86,    87,    58,    80,    81,    46,    72,
      75,    76,    77,    78,    79,    38,    50,    74,   109,   110,
      73,    73,    11,    49,    87,    11,    57,    81,    58,    88,
      89,    90,    91,    41,    65,    32,    42,    44,    52,    58,
      59,    98,    99,   100,   101,   102,   103,   104,   106,   107,
     108,   115,    76,    76,    76,    58,   111,    58,   112,    28,
      29,    92,    93,    94,    74,    74,    62,    19,    20,    23,
      25,    37,    54,    58,    61,    62,    63,    64,    82,    83,
      95,    96,    97,    98,    99,   116,    47,    89,     5,     8,
       7,    58,    97,    97,    58,    23,     3,     7,    12,    25,
       3,     7,    12,    25,     4,    23,    75,    23,    75,    88,
      88,    65,    94,     4,    23,    58,    95,    95,    95,    96,
      97,    12,    82,    96,    58,    84,    85,    23,     4,     6,
      19,    20,    21,    22,    31,    26,    27,    11,    14,    15,
      16,    17,    18,    91,    82,     9,    35,     3,    97,   117,
      97,    98,    97,    97,    99,    97,   100,    28,    29,    30,
     113,   114,    39,    88,    34,    95,    24,    24,    83,     8,
      55,    85,   117,    83,    95,    95,    95,    95,    95,    96,
      96,    97,    97,    97,    97,    97,    97,     4,   100,   100,
      97,     5,    24,    13,    13,    90,    90,    90,    24,     4,
      24,    97,     6,    82,    24,    10,   105,    45,    36,   117,
       8,     8,     8,     4,   113,    34,    51,    83,     4,    97,
      43,    97,    82,    82,    82,    82,    13,     9,    35,     4,
      33,   100,   100,    82,   105,    53
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    69,    70,    71,    72,    73,    73,    73,    74,    74,
      74,    75,    76,    76,    76,    76,    77,    78,    79,    80,
      80,    81,    82,    82,    82,    82,    82,    82,    83,    83,
      84,    84,    85,    86,    86,    87,    88,    88,    89,    90,
      90,    91,    92,    92,    92,    93,    94,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      97,    97,    97,    98,    98,    98,    98,    99,    99,    99,
      99,   100,   100,   101,   101,   101,   101,   101,   101,   102,
     103,   104,   105,   105,   106,   106,   107,   108,   109,   110,
     111,   112,   113,   113,   114,   114,   114,   115,   116,   117,
     117
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
#line 96 "parser.y"
                                                                                                                         {
		}
#line 1395 "parser.tab.c"
    break;

  case 3: /* cabecera_algV: decl_globalesV decl_a_fV decl_ent_salV comentarioTK  */
#line 100 "parser.y"
                                                                   {
		}
#line 1402 "parser.tab.c"
    break;

  case 4: /* bloque_algV: bloqueV comentarioTK  */
#line 104 "parser.y"
                                  {
		}
#line 1409 "parser.tab.c"
    break;

  case 5: /* decl_globalesV: declaracion_tipoV decl_globalesV  */
#line 109 "parser.y"
                                                 {
		}
#line 1416 "parser.tab.c"
    break;

  case 6: /* decl_globalesV: declaracion_constV decl_globalesV  */
#line 111 "parser.y"
                                            {
		}
#line 1423 "parser.tab.c"
    break;

  case 7: /* decl_globalesV: %empty  */
#line 113 "parser.y"
                {
		}
#line 1430 "parser.tab.c"
    break;

  case 8: /* decl_a_fV: accion_dV decl_a_fV  */
#line 118 "parser.y"
                                    {
		}
#line 1437 "parser.tab.c"
    break;

  case 9: /* decl_a_fV: funcion_dV decl_a_fV  */
#line 120 "parser.y"
                               {
		}
#line 1444 "parser.tab.c"
    break;

  case 10: /* decl_a_fV: %empty  */
#line 122 "parser.y"
                {
		}
#line 1451 "parser.tab.c"
    break;

  case 11: /* bloqueV: declaracionesV instruccionesV  */
#line 126 "parser.y"
                                       {
		}
#line 1458 "parser.tab.c"
    break;

  case 12: /* declaracionesV: declaracion_tipoV declaracionesV  */
#line 131 "parser.y"
                                                 {
		}
#line 1465 "parser.tab.c"
    break;

  case 13: /* declaracionesV: declaracion_constV declaracionesV  */
#line 133 "parser.y"
                                            {
		}
#line 1472 "parser.tab.c"
    break;

  case 14: /* declaracionesV: declaracion_varV declaracionesV  */
#line 135 "parser.y"
                                          {
		}
#line 1479 "parser.tab.c"
    break;

  case 15: /* declaracionesV: %empty  */
#line 137 "parser.y"
                {
		}
#line 1486 "parser.tab.c"
    break;

  case 16: /* declaracion_tipoV: inicio_tipoTK lista_d_tipoV fin_tipoTK  */
#line 141 "parser.y"
                                                          {
		}
#line 1493 "parser.tab.c"
    break;

  case 17: /* declaracion_constV: inicio_constTK lista_d_cteV fin_constTK  */
#line 145 "parser.y"
                                                            {
		}
#line 1500 "parser.tab.c"
    break;

  case 18: /* declaracion_varV: inicio_varTK lista_d_varV fin_varTK  */
#line 149 "parser.y"
                                                      {
		}
#line 1507 "parser.tab.c"
    break;

  case 19: /* lista_d_tipoV: declaracionTipoV  */
#line 153 "parser.y"
                                {
		}
#line 1514 "parser.tab.c"
    break;

  case 20: /* lista_d_tipoV: lista_d_tipoV declaracionTipoV  */
#line 155 "parser.y"
                                         {
		}
#line 1521 "parser.tab.c"
    break;

  case 21: /* declaracionTipoV: identificadorTK operador_igualTK d_tipoV operador_comp_secTK  */
#line 158 "parser.y"
                                                                               {
		}
#line 1528 "parser.tab.c"
    break;

  case 22: /* d_tipoV: inicio_tuplaTK lista_camposV fin_tuplaTK  */
#line 161 "parser.y"
                                                  {
        }
#line 1535 "parser.tab.c"
    break;

  case 23: /* d_tipoV: tipoTK operador_inicio_arrayTK expresion_tV operador_subrangoTK expresion_tV operador_fin_arrayTK deTK d_tipoV  */
#line 163 "parser.y"
                                                                                                                     {
        }
#line 1542 "parser.tab.c"
    break;

  case 24: /* d_tipoV: identificadorTK  */
#line 165 "parser.y"
                      {
        }
#line 1549 "parser.tab.c"
    break;

  case 25: /* d_tipoV: expresion_tV operador_subrangoTK expresion_tV  */
#line 167 "parser.y"
                                                    {
        }
#line 1556 "parser.tab.c"
    break;

  case 26: /* d_tipoV: tipoTK d_tipoV  */
#line 169 "parser.y"
                     {
        }
#line 1563 "parser.tab.c"
    break;

  case 27: /* d_tipoV: tipoTK  */
#line 171 "parser.y"
             {
        }
#line 1570 "parser.tab.c"
    break;

  case 28: /* expresion_tV: expresionV  */
#line 174 "parser.y"
                         {
        }
#line 1577 "parser.tab.c"
    break;

  case 29: /* expresion_tV: literal_caracterTK  */
#line 176 "parser.y"
                         {
        }
#line 1584 "parser.tab.c"
    break;

  case 30: /* lista_camposV: declaracionCampoV  */
#line 179 "parser.y"
                                {
        }
#line 1591 "parser.tab.c"
    break;

  case 31: /* lista_camposV: lista_camposV declaracionCampoV  */
#line 181 "parser.y"
                                     {
        }
#line 1598 "parser.tab.c"
    break;

  case 32: /* declaracionCampoV: identificadorTK operador_def_tipoTK d_tipoV operador_comp_secTK  */
#line 184 "parser.y"
                                                                                   {
        }
#line 1605 "parser.tab.c"
    break;

  case 33: /* lista_d_cteV: declaracionDeConstanteV  */
#line 188 "parser.y"
                                       {
		}
#line 1612 "parser.tab.c"
    break;

  case 34: /* lista_d_cteV: lista_d_cteV declaracionDeConstanteV  */
#line 190 "parser.y"
                                               {
		}
#line 1619 "parser.tab.c"
    break;

  case 35: /* declaracionDeConstanteV: identificadorConstanteTK operador_igualTK literal_enteroTK operador_comp_secTK  */
#line 193 "parser.y"
                                                                                                        {
		}
#line 1626 "parser.tab.c"
    break;

  case 36: /* lista_d_varV: declaracionDeVariableV  */
#line 197 "parser.y"
                                      {
		}
#line 1633 "parser.tab.c"
    break;

  case 37: /* lista_d_varV: lista_d_varV declaracionDeVariableV  */
#line 199 "parser.y"
                                             {
		}
#line 1640 "parser.tab.c"
    break;

  case 38: /* declaracionDeVariableV: lista_idV operador_def_tipoTK d_tipoV operador_comp_secTK  */
#line 202 "parser.y"
                                                                                  {
		}
#line 1647 "parser.tab.c"
    break;

  case 39: /* lista_idV: declaracionDeListaIdV  */
#line 205 "parser.y"
                                  {
		}
#line 1654 "parser.tab.c"
    break;

  case 40: /* lista_idV: lista_idV operador_separadorTK declaracionDeListaIdV  */
#line 207 "parser.y"
                                                               {
		}
#line 1661 "parser.tab.c"
    break;

  case 41: /* declaracionDeListaIdV: identificadorTK  */
#line 210 "parser.y"
                                       {
		}
#line 1668 "parser.tab.c"
    break;

  case 42: /* decl_ent_salV: decl_entV  */
#line 214 "parser.y"
                          {
		}
#line 1675 "parser.tab.c"
    break;

  case 43: /* decl_ent_salV: decl_entV decl_salV  */
#line 216 "parser.y"
                              {
		}
#line 1682 "parser.tab.c"
    break;

  case 44: /* decl_ent_salV: decl_salV  */
#line 218 "parser.y"
                    {
		}
#line 1689 "parser.tab.c"
    break;

  case 45: /* decl_entV: tipo_atributo_entTK lista_d_varV  */
#line 221 "parser.y"
                                            {
		}
#line 1696 "parser.tab.c"
    break;

  case 46: /* decl_salV: tipo_atributo_salTK lista_d_varV  */
#line 224 "parser.y"
                                            {
		}
#line 1703 "parser.tab.c"
    break;

  case 47: /* exp_aV: exp_aV aritmetico_sumaTK exp_aV  */
#line 228 "parser.y"
                                         {
		}
#line 1710 "parser.tab.c"
    break;

  case 48: /* exp_aV: exp_aV aritmetico_restaTK exp_aV  */
#line 230 "parser.y"
                                           {
		}
#line 1717 "parser.tab.c"
    break;

  case 49: /* exp_aV: exp_aV aritmetico_productoTK exp_aV  */
#line 232 "parser.y"
                                              {
		}
#line 1724 "parser.tab.c"
    break;

  case 50: /* exp_aV: exp_aV aritmetico_divisionTK exp_aV  */
#line 234 "parser.y"
                                              {
		}
#line 1731 "parser.tab.c"
    break;

  case 51: /* exp_aV: exp_aV operacionTK exp_aV  */
#line 236 "parser.y"
                                    {
		}
#line 1738 "parser.tab.c"
    break;

  case 52: /* exp_aV: inicio_parentesisTK exp_aV fin_parentesisTK  */
#line 238 "parser.y"
                                                      {
		}
#line 1745 "parser.tab.c"
    break;

  case 53: /* exp_aV: operando_aV  */
#line 240 "parser.y"
                      {
		}
#line 1752 "parser.tab.c"
    break;

  case 54: /* exp_aV: literal_enteroTK  */
#line 242 "parser.y"
                           {
		}
#line 1759 "parser.tab.c"
    break;

  case 55: /* exp_aV: literal_realTK  */
#line 244 "parser.y"
                         {
		}
#line 1766 "parser.tab.c"
    break;

  case 56: /* exp_aV: aritmetico_restaTK exp_aV  */
#line 246 "parser.y"
                                    {
		}
#line 1773 "parser.tab.c"
    break;

  case 57: /* exp_aV: aritmetico_sumaTK exp_aV  */
#line 248 "parser.y"
                                   {
		}
#line 1780 "parser.tab.c"
    break;

  case 58: /* exp_bV: exp_bV conjuncionTK exp_bV  */
#line 251 "parser.y"
                                    {
		}
#line 1787 "parser.tab.c"
    break;

  case 59: /* exp_bV: exp_bV disyuncionTK exp_bV  */
#line 254 "parser.y"
                                   {
		}
#line 1794 "parser.tab.c"
    break;

  case 60: /* exp_bV: noTK exp_bV  */
#line 256 "parser.y"
                     {
		}
#line 1801 "parser.tab.c"
    break;

  case 61: /* exp_bV: operando_bV  */
#line 258 "parser.y"
                      {
		}
#line 1808 "parser.tab.c"
    break;

  case 62: /* exp_bV: literal_booleanoTK  */
#line 260 "parser.y"
                             {
		}
#line 1815 "parser.tab.c"
    break;

  case 63: /* exp_bV: expresionV relacional_distintoTK expresionV  */
#line 262 "parser.y"
                                                      {
		}
#line 1822 "parser.tab.c"
    break;

  case 64: /* exp_bV: expresionV relacional_menor_igualTK expresionV  */
#line 264 "parser.y"
                                                         {
		}
#line 1829 "parser.tab.c"
    break;

  case 65: /* exp_bV: expresionV relacional_mayor_igualTK expresionV  */
#line 266 "parser.y"
                                                         {
		}
#line 1836 "parser.tab.c"
    break;

  case 66: /* exp_bV: expresionV relacional_menorTK expresionV  */
#line 268 "parser.y"
                                                   {
		}
#line 1843 "parser.tab.c"
    break;

  case 67: /* exp_bV: expresionV relacional_mayorTK expresionV  */
#line 270 "parser.y"
                                                   {
		}
#line 1850 "parser.tab.c"
    break;

  case 68: /* exp_bV: expresionV operador_igualTK expresionV  */
#line 272 "parser.y"
                                                 {
		}
#line 1857 "parser.tab.c"
    break;

  case 69: /* exp_bV: inicio_parentesisTK exp_bV fin_parentesisTK  */
#line 274 "parser.y"
                                                      {
		}
#line 1864 "parser.tab.c"
    break;

  case 70: /* expresionV: exp_aV  */
#line 277 "parser.y"
                    {
		}
#line 1871 "parser.tab.c"
    break;

  case 71: /* expresionV: exp_bV  */
#line 279 "parser.y"
                 {
		}
#line 1878 "parser.tab.c"
    break;

  case 72: /* expresionV: funcion_llV  */
#line 281 "parser.y"
                      {
		}
#line 1885 "parser.tab.c"
    break;

  case 73: /* operando_aV: identificadorTK  */
#line 284 "parser.y"
                              {
		}
#line 1892 "parser.tab.c"
    break;

  case 74: /* operando_aV: operando_aV puntoTK operando_aV  */
#line 286 "parser.y"
                                          {
		}
#line 1899 "parser.tab.c"
    break;

  case 75: /* operando_aV: operando_aV operador_inicio_arrayTK expresionV operador_fin_arrayTK  */
#line 288 "parser.y"
                                                                              {
		}
#line 1906 "parser.tab.c"
    break;

  case 76: /* operando_aV: operando_aV tipoTK  */
#line 290 "parser.y"
                             {
		}
#line 1913 "parser.tab.c"
    break;

  case 77: /* operando_bV: identificadorBooleanoTK  */
#line 293 "parser.y"
                                      {
		}
#line 1920 "parser.tab.c"
    break;

  case 78: /* operando_bV: operando_bV puntoTK operando_bV  */
#line 295 "parser.y"
                                          {
		}
#line 1927 "parser.tab.c"
    break;

  case 79: /* operando_bV: operando_bV operador_inicio_arrayTK expresionV operador_fin_arrayTK  */
#line 297 "parser.y"
                                                                              {
		}
#line 1934 "parser.tab.c"
    break;

  case 80: /* operando_bV: operando_bV tipoTK  */
#line 299 "parser.y"
                             {
		}
#line 1941 "parser.tab.c"
    break;

  case 81: /* instruccionesV: instruccionV operador_comp_secTK instruccionesV  */
#line 303 "parser.y"
                                                                 {
		}
#line 1948 "parser.tab.c"
    break;

  case 82: /* instruccionesV: instruccionV  */
#line 305 "parser.y"
                       {
		}
#line 1955 "parser.tab.c"
    break;

  case 83: /* instruccionV: continuarTK  */
#line 308 "parser.y"
                           {
		}
#line 1962 "parser.tab.c"
    break;

  case 84: /* instruccionV: asignacion_aV  */
#line 310 "parser.y"
                        {
		}
#line 1969 "parser.tab.c"
    break;

  case 85: /* instruccionV: asignacion_bV  */
#line 312 "parser.y"
                        {
		}
#line 1976 "parser.tab.c"
    break;

  case 86: /* instruccionV: alternativaV  */
#line 314 "parser.y"
                       {
		}
#line 1983 "parser.tab.c"
    break;

  case 87: /* instruccionV: iteracionV  */
#line 316 "parser.y"
                     {
		}
#line 1990 "parser.tab.c"
    break;

  case 88: /* instruccionV: accion_llV  */
#line 318 "parser.y"
                     {
		}
#line 1997 "parser.tab.c"
    break;

  case 89: /* asignacion_aV: operando_aV operador_asignacionTK expresionV  */
#line 321 "parser.y"
                                                             {
		}
#line 2004 "parser.tab.c"
    break;

  case 90: /* asignacion_bV: operando_bV operador_asignacionTK expresionV  */
#line 324 "parser.y"
                                                             {
		}
#line 2011 "parser.tab.c"
    break;

  case 91: /* alternativaV: inicio_siTK expresionV operador_entoncesTK instruccionesV lista_opcionesV fin_siTK  */
#line 327 "parser.y"
                                                                                                  {
		}
#line 2018 "parser.tab.c"
    break;

  case 92: /* lista_opcionesV: operador_elseTK expresionV operador_entoncesTK instruccionesV lista_opcionesV  */
#line 330 "parser.y"
                                                                                                {
		}
#line 2025 "parser.tab.c"
    break;

  case 93: /* lista_opcionesV: %empty  */
#line 332 "parser.y"
                 {
		}
#line 2032 "parser.tab.c"
    break;

  case 94: /* iteracionV: it_cota_fijaV  */
#line 335 "parser.y"
                           {
		}
#line 2039 "parser.tab.c"
    break;

  case 95: /* iteracionV: it_cota_expV  */
#line 337 "parser.y"
                       {
		}
#line 2046 "parser.tab.c"
    break;

  case 96: /* it_cota_expV: inicio_mientrasTK expresionV hacerTK instruccionesV fin_mientrasTK  */
#line 340 "parser.y"
                                                                                  {
		}
#line 2053 "parser.tab.c"
    break;

  case 97: /* it_cota_fijaV: inicio_paraTK identificadorTK operador_asignacionTK expresionV hastaTK expresionV hacerTK instruccionesV fin_paraTK  */
#line 343 "parser.y"
                                                                                                                                    {
		}
#line 2060 "parser.tab.c"
    break;

  case 98: /* accion_dV: inicio_accionTK a_cabeceraV bloqueV fin_accionTK  */
#line 347 "parser.y"
                                                             {
		}
#line 2067 "parser.tab.c"
    break;

  case 99: /* funcion_dV: inicio_funcionTK f_cabeceraV bloqueV devTK expresionV fin_funcionTK  */
#line 350 "parser.y"
                                                                                 {
		}
#line 2074 "parser.tab.c"
    break;

  case 100: /* a_cabeceraV: identificadorTK inicio_parentesisTK d_par_formV fin_parentesisTK operador_comp_secTK  */
#line 353 "parser.y"
                                                                                                   {
		}
#line 2081 "parser.tab.c"
    break;

  case 101: /* f_cabeceraV: identificadorTK inicio_parentesisTK lista_d_varV fin_parentesisTK devTK d_tipoV operador_comp_secTK  */
#line 356 "parser.y"
                                                                                                                  {
		}
#line 2088 "parser.tab.c"
    break;

  case 102: /* d_par_formV: d_p_formV operador_comp_secTK d_par_formV  */
#line 359 "parser.y"
                                                        {
		}
#line 2095 "parser.tab.c"
    break;

  case 103: /* d_par_formV: %empty  */
#line 361 "parser.y"
                 {
		}
#line 2102 "parser.tab.c"
    break;

  case 104: /* d_p_formV: tipo_atributo_entTK lista_idV operador_def_tipoTK d_tipoV  */
#line 364 "parser.y"
                                                                      {
		}
#line 2109 "parser.tab.c"
    break;

  case 105: /* d_p_formV: tipo_atributo_salTK lista_idV operador_def_tipoTK d_tipoV  */
#line 366 "parser.y"
                                                                    {
		}
#line 2116 "parser.tab.c"
    break;

  case 106: /* d_p_formV: tipo_atributo_ent_salTK lista_idV operador_def_tipoTK d_tipoV  */
#line 368 "parser.y"
                                                                        {
		}
#line 2123 "parser.tab.c"
    break;

  case 107: /* accion_llV: identificadorTK inicio_parentesisTK l_llV fin_parentesisTK  */
#line 372 "parser.y"
                                                                        {
		}
#line 2130 "parser.tab.c"
    break;

  case 108: /* funcion_llV: identificadorTK inicio_parentesisTK l_llV fin_parentesisTK  */
#line 375 "parser.y"
                                                                         {
		}
#line 2137 "parser.tab.c"
    break;

  case 109: /* l_llV: expresionV operador_separadorTK l_llV  */
#line 378 "parser.y"
                                              {
		}
#line 2144 "parser.tab.c"
    break;

  case 110: /* l_llV: expresionV  */
#line 380 "parser.y"
                     {
		}
#line 2151 "parser.tab.c"
    break;


#line 2155 "parser.tab.c"

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

#line 384 "parser.y"


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
