%{
	#include <stdio.h>
	//#include "nombresDeTipos.h"
	#include "tablaDeConstantes.h"
	int yylex(); // Usamos la funcion que se crea gracias a flex
	void yyerror(char *); // Prototipo de una funcion necesaria
	extern FILE* yyin; // Usamos la varible de Flex en la que viene la entrada
	TablaDeConstantes tc; //Es donde guardaremos las constantes
	#define YYDEBUG 1 //Permite activar el modo Debugg de Bison
%}

%token operador_asignacionTK
%token <caracter> operador_comp_secTK
%token operador_separadorTK
%token operador_subrangoTK
%token operador_def_tipoTK
%token operador_entoncesTK
%token operador_elseTK
%token operador_igualTK
%token operador_inicio_arrayTK
%token operador_fin_arrayTK
%token relacional_distintoTK
%token relacional_menor_igualTK
%token relacional_mayor_igualTK
%token relacional_menorTK
%token relacional_mayorTK
%token aritmetico_sumaTK
%token aritmetico_restaTK
%token aritmetico_productoTK
%token aritmetico_divisionTK
%token <tipo> tipoTK
%token conjuncionTK
%token tipo_atributoTK
%token operacionTK
%token continuarTK
%token deTK
%token devTK
%token hacerTK
%token hastaTK
%token noTK
%token inicio_accionTK
%token fin_accionTK
%token inicio_algoritmoTK
%token fin_algoritmoTK
%token inicio_siTK
%token fin_siTK
%token inicio_mientrasTK
%token fin_mientrasTK
%token inicio_varTK
%token fin_varTK
%token inicio_constTK
%token fin_constTK
%token inicio_funcionTK
%token fin_funcionTK
%token inicioParaTK
%token fin_paraTK
%token inicio_tuplaTK
%token fin_tuplaTK
%token inicio_tipoTK
%token fin_tipoTK
%token <cadena> identificadorTK
%token literal_booleanoTK
%token <entero> literal_enteroTK
%token literal_realTK
%token literal_caracterTK
%token literal_cadenaTK
%token comentarioTK

%nonassoc inicio_constTK
%right fin_constTK
%left operador_comp_secTK

%union {
    int entero;
    char* cadena;
    TipoT tipo;
    char caracter;
}

%type <entero> lista_d_cteV

%%


declaracionConstantesV: inicio_constTK lista_d_cteV fin_constTK{
			}
	;
lista_d_cteV :  declaracionDeConstanteV {
			$$= 1;
		}
	| lista_d_cteV operador_comp_secTK lista_d_cteV {
			$$= $1 + $3;
		}
	;
declaracionDeConstanteV : identificadorTK operador_igualTK literal_enteroTK {
			insertaConstante(&tc, $1, $3);
		}
	;





declaracionTiposV: inicio_tipoTK lista_d_tipoV fin_tipoTK{
		}
	;
lista_d_tipoV: declaracionTipoV {
		}
	| lista_d_tipoV operador_comp_secTK lista_d_tipoV {
		}
	;
declaracionTipoV: identificadorTK operador_igualTK d_tipoV {
		}
	;
d_tipoV: inicio_tuplaTK lista_camposV fin_tuplaTK {

        }
    | tipoTK operador_inicio_arrayTK expresion_tV operador_subrangoTK expresion_tV operador_fin_arrayTK deTK d_tipoV {

        }
    | identificadorTK {

        }
    | expresion_tV operador_subrangoTK expresion_tV {

        }
    | tipoTK d_tipoV {

        }
    | tipoTK {

        }
    ;
expresion_tV: expresionV {

        }
    | literal_caracterTK {

        }
    ;
lista_camposV: declaracionCampoV{
        }
    | lista_camposV operador_comp_secTK lista_camposV {

        }
    ;
declaracionCampoV: identificadorTK operador_def_tipoTK d_tipo operador_comp_secTK {

        }
    ;

%%

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
