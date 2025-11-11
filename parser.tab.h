/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    operador_asignacionTK = 258,   /* operador_asignacionTK  */
    operador_comp_secTK = 259,     /* operador_comp_secTK  */
    operador_separadorTK = 260,    /* operador_separadorTK  */
    operador_subrangoTK = 261,     /* operador_subrangoTK  */
    puntoTK = 262,                 /* puntoTK  */
    operador_def_tipoTK = 263,     /* operador_def_tipoTK  */
    operador_entoncesTK = 264,     /* operador_entoncesTK  */
    operador_elseTK = 265,         /* operador_elseTK  */
    operador_igualTK = 266,        /* operador_igualTK  */
    operador_inicio_arrayTK = 267, /* operador_inicio_arrayTK  */
    operador_fin_arrayTK = 268,    /* operador_fin_arrayTK  */
    relacional_distintoTK = 269,   /* relacional_distintoTK  */
    relacional_menor_igualTK = 270, /* relacional_menor_igualTK  */
    relacional_mayor_igualTK = 271, /* relacional_mayor_igualTK  */
    relacional_menorTK = 272,      /* relacional_menorTK  */
    relacional_mayorTK = 273,      /* relacional_mayorTK  */
    aritmetico_sumaTK = 274,       /* aritmetico_sumaTK  */
    aritmetico_restaTK = 275,      /* aritmetico_restaTK  */
    aritmetico_productoTK = 276,   /* aritmetico_productoTK  */
    aritmetico_divisionTK = 277,   /* aritmetico_divisionTK  */
    inicio_parentesisTK = 278,     /* inicio_parentesisTK  */
    fin_parentesisTK = 279,        /* fin_parentesisTK  */
    tipoTK = 280,                  /* tipoTK  */
    conjuncionTK = 281,            /* conjuncionTK  */
    disyuncionTK = 282,            /* disyuncionTK  */
    tipo_atributo_entTK = 283,     /* tipo_atributo_entTK  */
    tipo_atributo_salTK = 284,     /* tipo_atributo_salTK  */
    tipo_atributo_ent_salTK = 285, /* tipo_atributo_ent_salTK  */
    operacionTK = 286,             /* operacionTK  */
    continuarTK = 287,             /* continuarTK  */
    deTK = 288,                    /* deTK  */
    devTK = 289,                   /* devTK  */
    hacerTK = 290,                 /* hacerTK  */
    hastaTK = 291,                 /* hastaTK  */
    noTK = 292,                    /* noTK  */
    inicio_accionTK = 293,         /* inicio_accionTK  */
    fin_accionTK = 294,            /* fin_accionTK  */
    inicio_algoritmoTK = 295,      /* inicio_algoritmoTK  */
    fin_algoritmoTK = 296,         /* fin_algoritmoTK  */
    inicio_siTK = 297,             /* inicio_siTK  */
    fin_siTK = 298,                /* fin_siTK  */
    inicio_mientrasTK = 299,       /* inicio_mientrasTK  */
    fin_mientrasTK = 300,          /* fin_mientrasTK  */
    inicio_varTK = 301,            /* inicio_varTK  */
    fin_varTK = 302,               /* fin_varTK  */
    inicio_constTK = 303,          /* inicio_constTK  */
    fin_constTK = 304,             /* fin_constTK  */
    inicio_funcionTK = 305,        /* inicio_funcionTK  */
    fin_funcionTK = 306,           /* fin_funcionTK  */
    inicio_paraTK = 307,           /* inicio_paraTK  */
    fin_paraTK = 308,              /* fin_paraTK  */
    inicio_tuplaTK = 309,          /* inicio_tuplaTK  */
    fin_tuplaTK = 310,             /* fin_tuplaTK  */
    inicio_tipoTK = 311,           /* inicio_tipoTK  */
    fin_tipoTK = 312,              /* fin_tipoTK  */
    identificadorTK = 313,         /* identificadorTK  */
    identificadorBooleanoTK = 314, /* identificadorBooleanoTK  */
    identificadorConstanteTK = 315, /* identificadorConstanteTK  */
    literal_booleanoTK = 316,      /* literal_booleanoTK  */
    literal_enteroTK = 317,        /* literal_enteroTK  */
    literal_realTK = 318,          /* literal_realTK  */
    literal_caracterTK = 319,      /* literal_caracterTK  */
    comentarioTK = 320,            /* comentarioTK  */
    relacional_menor_igualDR = 321, /* relacional_menor_igualDR  */
    aritmetico_divisionRealTK = 322, /* aritmetico_divisionRealTK  */
    aritmetico_moduloTK = 323      /* aritmetico_moduloTK  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 76 "parser.y"

	char* cadena;
	LiteralT literal;
	int entero;
	tipoDato tipo;

#line 139 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
