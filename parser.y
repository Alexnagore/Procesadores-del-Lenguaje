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
%token puntoTK
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
%token tipo_atributo_entTK
%token tipo_atributo_salTK
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
%token <cadena> identificadorConstanteTK
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

desc_algoritmoV: inicio_algoritmoTK identificadorTK operador_comp_secTK cabecera_algV bloque_algV fin_algoritmoTK puntoTK{
		}
	;

cabecera_algV : decl_globalesV decl_a_fV decl_ent_salV comentarioTK{
		}
	;

bloque_algV : bloqueV comentarioTK{
		}
	;

decl_globalesV :
		declaracionTiposV decl_globalesV
	| declaracionConstantesV decl_globalesV
	| %empty{
		}
	;

decl_a_fV :
		accion_dV decl_a_fV
	| funcio_dV decl_a_fV
	| %empty{
		}
	;

bloqueV : declaracionesV instruccionesV{
		}
	;

declaracionesV :
		declaracion_tipoV declaracionesV
	| declaracion_constV declaracionesV
	| declaracion_varV declaracionesV
	| %empty{
		}
	;

declaracion_tipoV : inicio_tipoTK lista_d_tipoV fin_tipoTK{
		}
	;

declaracion_constV : inicio_constTK lista_d_cteV fin_constTK{
		}
	;

declaracion_varV : inicio_varTK lista_d_varV fin_varTK{
		}
	;

lista_d_tipoV : declaracionTipoV{
		}
	| lista_d_tipoV declaracionTipoV {
		}
	;
declaracionTipoV: identificadorTK operador_igualTK d_tipoV operador_comp_secTK {
		}
	| %empty{
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
    | lista_camposV declaracionCampoV{
        }
    ;
declaracionCampoV: identificadorTK operador_def_tipoTK d_tipoV operador_comp_secTK {
        }
	| %empty{
		}
    ;

lista_d_cteV : declaracionDeConstanteV {
		}
	| lista_d_cteV declaracionDeConstanteV {
		}
	;
declaracionDeConstanteV : identificadorConstanteTK operador_igualTK literal_enteroTK operador_comp_secTK{
		}
	| %empty{
		}
	;

lista_d_varV : declaracionDeVariableV {
		}
	| lista_d_varV declaracionDeVariableV{
		}
	;
declaracionDeVariableV : lista_idV operador_def_tipoTK d_tipoV operador_comp_secTK{
		}
	| %empty{
		}
	;
lista_idV : declaracionDeListaIdV {
		}
	| lista_idV operador_separadorTK declaracionDeListaIdV {
		}
	;
declaracionDeListaIdV : identificadorTK{
		}
	;

decl_ent_salV :	decl_entV {
		}
	| decl_entV decl_salidaV {
		}
	| decl_salidaV {
		}
	;
decl_entV : tipo_atributo_entTK lista_d_varV{
		}
	;
decl_salV : tipo_atributo_salTK lista_d_varV{
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
