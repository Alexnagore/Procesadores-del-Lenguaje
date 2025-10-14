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
# define YYDEBUG 1
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
    operador_def_tipoTK = 262,     /* operador_def_tipoTK  */
    operador_entoncesTK = 263,     /* operador_entoncesTK  */
    operador_elseTK = 264,         /* operador_elseTK  */
    operador_igualTK = 265,        /* operador_igualTK  */
    operador_inicio_arrayTK = 266, /* operador_inicio_arrayTK  */
    operador_fin_arrayTK = 267,    /* operador_fin_arrayTK  */
    relacional_distintoTK = 268,   /* relacional_distintoTK  */
    relacional_menor_igualTK = 269, /* relacional_menor_igualTK  */
    relacional_mayor_igualTK = 270, /* relacional_mayor_igualTK  */
    relacional_menorTK = 271,      /* relacional_menorTK  */
    relacional_mayorTK = 272,      /* relacional_mayorTK  */
    aritmetico_sumaTK = 273,       /* aritmetico_sumaTK  */
    aritmetico_restaTK = 274,      /* aritmetico_restaTK  */
    aritmetico_productoTK = 275,   /* aritmetico_productoTK  */
    aritmetico_divisionTK = 276,   /* aritmetico_divisionTK  */
    tipoTK = 277,                  /* tipoTK  */
    conjuncionTK = 278,            /* conjuncionTK  */
    tipo_atributoTK = 279,         /* tipo_atributoTK  */
    operacionTK = 280,             /* operacionTK  */
    continuarTK = 281,             /* continuarTK  */
    deTK = 282,                    /* deTK  */
    devTK = 283,                   /* devTK  */
    hacerTK = 284,                 /* hacerTK  */
    hastaTK = 285,                 /* hastaTK  */
    noTK = 286,                    /* noTK  */
    inicio_accionTK = 287,         /* inicio_accionTK  */
    fin_accionTK = 288,            /* fin_accionTK  */
    inicio_algoritmoTK = 289,      /* inicio_algoritmoTK  */
    fin_algoritmoTK = 290,         /* fin_algoritmoTK  */
    inicio_siTK = 291,             /* inicio_siTK  */
    fin_siTK = 292,                /* fin_siTK  */
    inicio_mientrasTK = 293,       /* inicio_mientrasTK  */
    fin_mientrasTK = 294,          /* fin_mientrasTK  */
    inicio_varTK = 295,            /* inicio_varTK  */
    fin_varTK = 296,               /* fin_varTK  */
    inicio_constTK = 297,          /* inicio_constTK  */
    fin_constTK = 298,             /* fin_constTK  */
    inicio_funcionTK = 299,        /* inicio_funcionTK  */
    fin_funcionTK = 300,           /* fin_funcionTK  */
    inicioParaTK = 301,            /* inicioParaTK  */
    fin_paraTK = 302,              /* fin_paraTK  */
    inicio_tuplaTK = 303,          /* inicio_tuplaTK  */
    fin_tuplaTK = 304,             /* fin_tuplaTK  */
    inicio_tipoTK = 305,           /* inicio_tipoTK  */
    fin_tipoTK = 306,              /* fin_tipoTK  */
    identificadorTK = 307,         /* identificadorTK  */
    literal_booleanoTK = 308,      /* literal_booleanoTK  */
    literal_enteroTK = 309,        /* literal_enteroTK  */
    literal_realTK = 310,          /* literal_realTK  */
    literal_caracterTK = 311,      /* literal_caracterTK  */
    literal_cadenaTK = 312,        /* literal_cadenaTK  */
    comentarioTK = 313             /* comentarioTK  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 73 "parser.y"

    int entero;
    char* cadena;
    LiteralT literal;
    char caracter;

#line 129 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
