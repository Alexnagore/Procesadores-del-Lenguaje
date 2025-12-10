%{
	#include <stdio.h>
	#include <stdlib.h>	
	#include <string.h>
	#include <stdbool.h>
	#include "nombresDeTipos.h"
	#include "literal.h"
	#include "colaDeIdentificador.h"
	#include "tablaDeSimbolos.h"	
	#include "tablaDeCuadruplas.h"

	/* --- DEFINICIÓN DE COLORES ANSI --- */
    #define ANSI_COLOR_RED     "\x1b[31m"
    #define ANSI_COLOR_GREEN   "\x1b[32m"
    #define ANSI_COLOR_YELLOW  "\x1b[33m"
    #define ANSI_COLOR_BLUE    "\x1b[34m"
    #define ANSI_COLOR_MAGENTA "\x1b[35m"
    #define ANSI_COLOR_CYAN    "\x1b[36m"
    #define ANSI_COLOR_RESET   "\x1b[0m"
    /* ---------------------------------- */

	int yylex(); // Usamos la funcion que se crea gracias a flex
	void yyerror(char *); // Prototipo de una funcion necesaria
	extern FILE* yyin; // Usamos la varible de Flex en la que viene la entrada
	TablaDeSimbolos ts;
	TablaDeCuadruplas tc;
	tipoCola ci;
	int variablesSalida[50]; // Array para almacenar índices de variables de salida
	int numVariablesSalida = 0; // Contador de variables de salida
	#define YYDEBUG 1 //Permite activar el modo Debugg de Bison
%}

%code requires{

	#include "nombresDeTipos.h"
	#include "literal.h"
	#include "colaDeIdentificador.h"

typedef struct expresionArit{
    int place;
    int type;
} ExpresionArit;

typedef struct expresionBool{
	int type;
	int place;
	int verdadero[100];
	int sigVerdadero;
	int falso[100];
	int sigFalso;
} ExpresionBool;

typedef struct expresionV{
	int place;
	int type;
	int verdadero[100];
	int sigVerdadero;
	int falso[100];
	int sigFalso;
} ExpresionV;

typedef struct operando{
	int place;
	int type;
} Operando;

typedef struct asignacion{
	int place;
	int type;
} Asignacion;

typedef struct m{
	int quad;
} M;

}

%union{
	char caracter;
	char* cadena;
	LiteralT literal;
	int entero;
	NombreDeTipoT tipo;
	Operando paraOperando;
	ExpresionArit paraExpresionArit;
	ExpresionBool paraExpresionBool;
	Asignacion paraAsignacion;
	ExpresionV paraExpresionV;
	tipoCola* colaNombres;
	M paraM;
}

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
%token inicio_parentesisTK
%token fin_parentesisTK
%token <tipo> tipoTK
%token tipoTablaTK
%token tipoRefTK
%token conjuncionTK
%token disyuncionTK
%token tipo_atributo_entTK
%token tipo_atributo_salTK
%token tipo_atributo_ent_salTK
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
%token inicio_paraTK
%token fin_paraTK
%token inicio_tuplaTK
%token fin_tuplaTK
%token inicio_tipoTK
%token fin_tipoTK
%token <cadena> identificadorTK
%token <cadena> identificadorBooleanoTK
%token <cadena> identificadorConstanteTK
%token <literal> literal_booleanoTK
%token <literal> literal_enteroTK
%token <literal> literal_realTK
%token <literal> literal_caracterTK
%token comentarioTK

%left disyuncionTK
%left conjuncionTK
%nonassoc relacional_distintoTK relacional_menor_igualTK relacional_mayor_igualTK
%nonassoc relacional_menorTK relacional_mayorTK operador_igualTK
%right noTK
%left aritmetico_sumaTK aritmetico_restaTK
%left aritmetico_productoTK aritmetico_divisionTK aritmetico_divisionRealTK aritmetico_moduloTK
%left tipoTK
%left puntoTK operador_inicio_arrayTK

%type <paraExpresionArit> exp_aV
%type <paraExpresionBool> exp_bV
%type <tipo> d_tipoV
%type <paraOperando> operando_aV
%type <paraOperando> operando_bV
%type <paraAsignacion> asignacion_aV asignacion_bV
%type <paraExpresionV> expresionV
%type <colaNombres> lista_d_varV declaracionDeVariableV
%type <paraM> M

%%

desc_algoritmoV: inicio_algoritmoTK identificadorTK operador_comp_secTK cabecera_algV bloque_algV fin_algoritmoTK puntoTK{
		}
	;

cabecera_algV : decl_globalesV decl_a_fV decl_ent_salV comentarioTK{
		}
	;

bloque_algV : bloqueV comentarioTK{
		for (int i = 0; i < numVariablesSalida; i++) {
			gen(&tc, OUTPUT, variablesSalida[i], NULO, NULO);
		}
		}
	;

decl_globalesV :
		declaracion_tipoV decl_globalesV {
		}
	| declaracion_constV decl_globalesV {
		}
	| %empty{
		}
	;

decl_a_fV :
		accion_dV decl_a_fV {
		}
	| funcion_dV decl_a_fV {
		}
	| %empty{
		}
	;

bloqueV : declaracionesV instruccionesV{
		}
	;

declaracionesV :
		declaracion_tipoV declaracionesV {
		}
	| declaracion_constV declaracionesV {
		}
	| declaracion_varV declaracionesV {
		}
	| %empty{
		}
	;

declaracion_tipoV : inicio_tipoTK lista_d_tipoV fin_tipoTK operador_comp_secTK{
		}
	;

declaracion_constV : inicio_constTK lista_d_cteV fin_constTK operador_comp_secTK{
		}
	;

declaracion_varV : inicio_varTK lista_d_varV fin_varTK operador_comp_secTK{
		}
	;

lista_d_tipoV : declaracionTipoV{
		}
	| lista_d_tipoV declaracionTipoV {
		}
	;
declaracionTipoV: identificadorTK operador_igualTK d_tipoV operador_comp_secTK {
		}
	;
d_tipoV: inicio_tuplaTK lista_camposV fin_tuplaTK {
        }
    | tipoTablaTK operador_inicio_arrayTK expresion_tV operador_subrangoTK expresion_tV operador_fin_arrayTK deTK d_tipoV {
        }
    | identificadorTK {
        }
    | expresion_tV operador_subrangoTK expresion_tV {
        }
    | tipoRefTK d_tipoV {
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
    ;

lista_d_cteV : declaracionDeConstanteV {
		}
	| lista_d_cteV declaracionDeConstanteV {
		}
	;
declaracionDeConstanteV : identificadorConstanteTK operador_igualTK literal_enteroTK operador_comp_secTK{
		}
	;

lista_d_varV : declaracionDeVariableV {
		$$ = $1;
	}
	| lista_d_varV declaracionDeVariableV{
		while (!esNulaCola(*$2)) {
            char* nombre = frente(*$2);
            encolar($1, nombre);
            desencolar($2);
        }
		free($2);

        $$ = $1;
	}
	;
declaracionDeVariableV : lista_idV operador_def_tipoTK d_tipoV operador_comp_secTK{
			int tipoVariable = $3;
			tipoCola * colaLocal = (tipoCola*) malloc(sizeof(tipoCola));
			nuevaCola(colaLocal);
			while (!esNulaCola(ci)) {
				char *nombreVar = frente(ci);
				if (!insertaSimbolo(&ts, nombreVar, tipoVariable)) {
					printf(ANSI_COLOR_RED "Error Semántico: La variable '%s' ya ha sido declarada anteriormente.\n"ANSI_COLOR_RESET, nombreVar);
				}
				encolar(colaLocal, nombreVar);
				desencolar(&ci);
			}
			$$ = colaLocal;
		}
	;
lista_idV : declaracionDeListaIdV {
		}
	| lista_idV operador_separadorTK declaracionDeListaIdV {
		}
	;
declaracionDeListaIdV : identificadorTK{
			encolar(&ci, $1);
			printf("HE ENCOLADO %s\n\n\n", $1);
		}
		| identificadorBooleanoTK{
			encolar(&ci, $1);
			printf("HE ENCOLADO %s\n\n\n", $1);
		}
	;

decl_ent_salV :	decl_entV {
		}
	| decl_entV decl_salV {
		}
	| decl_salV {
		}
	;
decl_entV : tipo_atributo_entTK lista_d_varV{
		tipoCola* colaNombres = $2;

		while (!esNulaCola(*colaNombres)) {
			char* nombreVar = frente(*colaNombres);
			int indice = buscar_indice_TS(ts, nombreVar);
			if (indice != -1) {
				gen(&tc, INPUT, NULO, NULO, indice);
				printf(ANSI_COLOR_GREEN "  INPUT generado para: %s (índice %d)\n" ANSI_COLOR_RESET, nombreVar, indice);
			}
			desencolar(colaNombres);
		}
		free(colaNombres);
		numVariablesSalida = 0;
		}
	;
decl_salV : tipo_atributo_salTK lista_d_varV{
		tipoCola* colaNombres = $2;

		while (!esNulaCola(*colaNombres)) {
			char* nombreVar = frente(*colaNombres);
			int indice = buscar_indice_TS(ts, nombreVar);
			// if (indice != -1) {
			// 	bool esEntrada = false;
			// 	for(int i = 0; i < tc.nextQuad; i++) {
			// 		if (tc.cuadruplas[i].operador == INPUT && tc.cuadruplas[i].resultado == indice) {
			// 			tc.cuadruplas[i].operador = INPUTOUTPUT;
			// 			printf(ANSI_COLOR_CYAN "  Modificado a INPUT/OUTPUT para: %s (índice %d)\n" ANSI_COLOR_RESET, nombreVar, indice);
			// 			esEntrada = true;
			// 			break;
			// 		}
			// 	}
			// 	if (!esEntrada) {
			// 		variablesSalida[numVariablesSalida++] = indice;
			// 	}
			// }
			variablesSalida[numVariablesSalida++] = indice;
			desencolar(colaNombres);
		}
		free(colaNombres);
	}
	;

exp_aV : exp_aV aritmetico_sumaTK exp_aV {
		int T = newTemp(&ts);
		$$.place = T;
		if ($1.type == ENTERO && $3.type == ENTERO) {
			modificarTipoTS(&ts, T, ENTERO);
			gen(&tc, SUMA_ENTERO, $1.place, $3.place, T);
			$$.type = ENTERO;
		} else if ($1.type == ENTERO && $3.type == REAL){
			modificarTipoTS(&ts, T, REAL);
			gen(&tc, INT_TO_REAL, $1.place, NULO, T);           
			gen(&tc, SUMA_REAL, T, $3.place, T);
			$$.type = REAL;
		} else if ($1.type == REAL && $3.type == ENTERO){
			modificarTipoTS(&ts, T, REAL);
			gen(&tc,INT_TO_REAL, $3.place, NULO, T);
			gen(&tc, SUMA_REAL, T, $1.place, T);
			$$.type = REAL;
		} else if ($1.type == REAL && $3.type == REAL){
			modificarTipoTS(&ts, T, REAL);
			gen(&tc, SUMA_REAL, $1.place, $3.place, T);
			$$.type = REAL;
		} 
	}
	| exp_aV aritmetico_restaTK exp_aV {
		int T = newTemp(&ts);
		$$.place = T;
		if ($1.type == ENTERO && $3.type == ENTERO) {
			modificarTipoTS(&ts, T, ENTERO);
			gen(&tc, RESTA_ENTERO, $1.place, $3.place, T);
			$$.type = ENTERO;
		} else if ($1.type == ENTERO && $3.type == REAL){
			modificarTipoTS(&ts, T, REAL);
			gen(&tc, INT_TO_REAL, $1.place, NULO, T);
			gen(&tc, RESTA_REAL, T, $3.place, T);
			$$.type = REAL;
		} else if ($1.type == REAL && $3.type == REAL){
			modificarTipoTS(&ts, T, REAL);
			gen(&tc, RESTA_REAL, $1.place, $3.place, T);
			$$.type = REAL;
		} else if ($1.type == REAL && $3.type == ENTERO){
			modificarTipoTS(&ts, T, REAL);
			gen(&tc,INT_TO_REAL,$3.place,NULO,T);
			gen(&tc,RESTA_REAL, T, $1.place, T);
			$$.type = REAL;
		}
	}
	| exp_aV aritmetico_productoTK exp_aV {
		int T = newTemp(&ts);
		$$.place = T;
		if ($1.type == ENTERO && $3.type == ENTERO) {
			modificarTipoTS(&ts, T, ENTERO);
			gen(&tc, MULT_ENTERO, $1.place, $3.place, T);
			$$.type = ENTERO;
		} else if ($1.type == ENTERO && $3.type == REAL){
			modificarTipoTS(&ts, T, REAL);
			gen(&tc, INT_TO_REAL, $1.place, NULO, T);
			gen(&tc, MULT_REAL, T, $3.place, T);
			$$.type = REAL;
		} else if ($1.type == REAL && $3.type == REAL){
			modificarTipoTS(&ts, T, REAL);
			gen(&tc, MULT_REAL, $1.place, $3.place, T);
			$$.type = REAL;
		} else if ($1.type == REAL && $3.type == ENTERO){
			modificarTipoTS(&ts, T, REAL);
			gen(&tc, INT_TO_REAL, $3.place, NULO, T);
			gen(&tc, MULT_REAL, T, $1.place, T);
			$$.type = REAL;
		}
	}
	| exp_aV aritmetico_divisionTK exp_aV {
		int T = newTemp(&ts);
		$$.place = T;
		if ($1.type == ENTERO && $3.type == ENTERO) {
			modificarTipoTS(&ts, T, ENTERO);
			gen(&tc, DIV_ENTERO,$1.place,$3.place,T);
			$$.type = ENTERO;
		} else if($1.type == ENTERO && $3.type == REAL){
			modificarTipoTS(&ts, T, REAL);
			gen(&tc, INT_TO_REAL, $1.place, NULO, T);
			gen(&tc, DIV_REAL, T, $3.place, T);
			$$.type = REAL;
		} else if($1.type == REAL && $3.type == ENTERO){
			modificarTipoTS(&ts, T, REAL);
			gen(&tc, INT_TO_REAL, $3.place, NULO, T);
			gen(&tc, DIV_REAL, T, $1.place, T);
			$$.type = REAL;
		} else if($1.type == REAL && $3.type == REAL){
			modificarTipoTS(&ts, T, REAL);
			gen(&tc, DIV_REAL, $1.place, $3.place, T);
			$$.type = REAL;
		}
	}
	| exp_aV aritmetico_divisionRealTK exp_aV {
		int T = newTemp(&ts);
		$$.place = T;
		if ($1.type == ENTERO && $3.type == ENTERO) {
			modificarTipoTS(&ts, T, ENTERO);
			gen(&tc, DIV_ENTERO,$1.place,$3.place,T);
			$$.type = ENTERO;
		} else if($1.type == ENTERO && $3.type == REAL){
			modificarTipoTS(&ts, T, REAL);
			gen(&tc, INT_TO_REAL, $1.place, NULO, T);
			gen(&tc, DIV_REAL, T, $3.place, T);
			$$.type = REAL;
		} else if($1.type == REAL && $3.type == ENTERO){
			modificarTipoTS(&ts, T, REAL);
			gen(&tc, INT_TO_REAL, $3.place, NULO, T);
			gen(&tc, DIV_REAL, T, $1.place, T);
			$$.type = REAL;
		} else if($1.type == REAL && $3.type == REAL){
			modificarTipoTS(&ts, T, REAL);
			gen(&tc, DIV_REAL, $1.place, $3.place, T);
			$$.type = REAL;
		}
	}
	| exp_aV aritmetico_moduloTK exp_aV {
		int T = newTemp(&ts);
		$$.place = T;
		if ($1.type == ENTERO && $3.type == ENTERO) {
			modificarTipoTS(&ts, T, ENTERO);
			gen(&tc, MODULO,$1.place,$3.place,T);
			$$.type = ENTERO;
		} else if ($1.type == REAL || $3.type == REAL){
			printf(ANSI_COLOR_RED"Error Semántico: No se puede realizar una operación de módulo con algún operando real.\n"ANSI_COLOR_RESET);
		}
	}
	| inicio_parentesisTK exp_aV fin_parentesisTK {
		$$.place = $2.place;
		$$.type = $2.type;
	}
	| operando_aV {
		}
	| literal_enteroTK {
		char nombreLiteral[100];
		sprintf(nombreLiteral, "%d", $1.valor.valorEntero);
		printf(ANSI_COLOR_MAGENTA "Estoy en un literal entero %d\n" ANSI_COLOR_RESET, $1.valor.valorEntero);
		insertaSimbolo(&ts, nombreLiteral, ENTERO);
		int index = buscar_indice_TS(ts, nombreLiteral);
		modificarTipoTS(&ts, index, ENTERO);
		$$.place = index;
		$$.type = ENTERO;
		}
	| literal_realTK {
		}
	| aritmetico_restaTK exp_aV {
		int T = newTemp(&ts);
		$$.place = T;
		$$.type = $2.type;
		if ($2.type == ENTERO) {
			printf(ANSI_COLOR_MAGENTA"Estoy en un menos unario de enteros\n"ANSI_COLOR_RESET);
			modificarTipoTS(&ts, T, ENTERO);
			gen(&tc, NEG_ENTERO, $2.place, NULO, T);
		} else if ($2.type == REAL){
			printf(ANSI_COLOR_MAGENTA"Estoy en un menos unario de reales\n"ANSI_COLOR_RESET);
			modificarTipoTS(&ts, T, REAL);
			gen(&tc, NEG_REAL, $2.place, NULO, T);
		}
	}
	| aritmetico_sumaTK exp_aV {
		$$.place = $2.place;
		$$.type = $2.type;
	}
	;

exp_bV : exp_bV conjuncionTK M exp_bV {
		printf(ANSI_COLOR_MAGENTA "ENTRO EN CONJUNCION\n" ANSI_COLOR_RESET);
		backpatch(&tc, $1.verdadero, $1.sigVerdadero, $3.quad);
		merge($1.falso, $1.sigFalso, $4.verdadero, $4.sigVerdadero, $$.falso);
		copiaListas($$.verdadero, $4.verdadero, $4.sigVerdadero);
		$$.sigVerdadero = $4.sigVerdadero;
	}
	| exp_bV disyuncionTK M exp_bV {
		printf(ANSI_COLOR_MAGENTA "ENTRO EN DISYUNCION\n" ANSI_COLOR_RESET);
		backpatch(&tc, $1.falso, $1.sigFalso, $3.quad);
		merge($1.verdadero, $1.sigVerdadero, $4.verdadero, $4.sigVerdadero, $$.verdadero);
		copiaListas($$.falso, $4.falso, $4.sigFalso);
		$$.sigFalso = $4.sigFalso;
	}
	| noTK exp_bV {
		printf(ANSI_COLOR_MAGENTA "ENTRO EN NEGACION\n" ANSI_COLOR_RESET);
		copiaListas( $$.verdadero, $2.falso, $2.sigFalso);
		$$.sigVerdadero = $2.sigFalso;
		copiaListas( $$.falso, $2.verdadero, $2.sigVerdadero);
		$$.sigFalso = $2.sigVerdadero;
	}
	| operando_bV {
		}
	| literal_booleanoTK {
		}
	| expresionV relacional_distintoTK expresionV {
		printf(ANSI_COLOR_MAGENTA "ENTRO EN DISTINTO\n" ANSI_COLOR_RESET);
		int T = newTemp(&ts);
		$$.place = T;
		if (($1.type != $3.type) && ($1.type == REAL && $3.type == ENTERO)){
			gen(&tc, INT_TO_REAL, $3.place, NULO, T);
		} else if (($1.type != $3.type) && ($1.type == ENTERO && $3.type == REAL)){
			gen(&tc, INT_TO_REAL, $1.place, NULO, T);
		} else if ($1.type != $3.type){
			printf(ANSI_COLOR_RED "Error, tipos incompatibles en operador distinto\n" ANSI_COLOR_RESET);
			YYERROR;
		}
		gen(&tc, SIGNO_DISTINTO_OPERADOR, $1.place, $3.place, T);
	}
	| expresionV relacional_menor_igualTK expresionV {
		printf(ANSI_COLOR_MAGENTA "ENTRO EN MENOR O IGUAL\n" ANSI_COLOR_RESET);
		int T = newTemp(&ts);
		$$.place = T;
		if (($1.type != $3.type) && ($1.type == REAL && $3.type == ENTERO)){
			gen(&tc, INT_TO_REAL, $3.place, NULO, T);
		} else if (($1.type != $3.type) && ($1.type == ENTERO && $3.type == REAL)){
			gen(&tc, INT_TO_REAL, $1.place, NULO, T);
		} else if (($1.type != $3.type) || ($1.type != REAL && $1.type != ENTERO)) {
			printf(ANSI_COLOR_RED "Error, tipos incompatibles en operador distinto\n" ANSI_COLOR_RESET);
			YYERROR;
		}
		gen(&tc, SIGNO_MENOR_IGUAL_OPERADOR, $1.place, $3.place, T);
		}
	| expresionV relacional_mayor_igualTK expresionV {
		printf(ANSI_COLOR_MAGENTA "ENTRO EN MAYOR O IGUAL\n" ANSI_COLOR_RESET);
		int T = newTemp(&ts);
		$$.place = T;
		if (($1.type != $3.type) && ($1.type == REAL && $3.type == ENTERO)){
			gen(&tc, INT_TO_REAL, $3.place, NULO, T);
		} else if (($1.type != $3.type) && ($1.type == ENTERO && $3.type == REAL)){
			gen(&tc, INT_TO_REAL, $1.place, NULO, T);
		} else if (($1.type != $3.type) || ($1.type != REAL && $1.type != ENTERO)) {
			printf(ANSI_COLOR_RED "Error, tipos incompatibles en operador distinto\n" ANSI_COLOR_RESET);
			YYERROR;
		}
		gen(&tc, SIGNO_MAYOR_IGUAL_OPERADOR, $1.place, $3.place, T);
		}
	| expresionV relacional_menorTK expresionV {
		printf(ANSI_COLOR_MAGENTA "ENTRO EN MENOR\n" ANSI_COLOR_RESET);
		int T = newTemp(&ts);
		$$.place = T;
		if (($1.type != $3.type) && ($1.type == REAL && $3.type == ENTERO)){
			gen(&tc, INT_TO_REAL, $3.place, NULO, T);
		} else if (($1.type != $3.type) && ($1.type == ENTERO && $3.type == REAL)){
			gen(&tc, INT_TO_REAL, $1.place, NULO, T);
		} else if (($1.type != $3.type) || ($1.type != REAL && $1.type != ENTERO)) {
			printf(ANSI_COLOR_RED "Error, tipos incompatibles en operador distinto\n" ANSI_COLOR_RESET);
			YYERROR;
		}
		gen(&tc, SIGNO_MENOR_OPERADOR, $1.place, $3.place, T);
		}
	| expresionV relacional_mayorTK expresionV {
		printf(ANSI_COLOR_MAGENTA "ENTRO EN MAYOR\n" ANSI_COLOR_RESET);
		int T = newTemp(&ts);
		$$.place = T;
		if (($1.type != $3.type) && ($1.type == REAL && $3.type == ENTERO)){
			gen(&tc, INT_TO_REAL, $3.place, NULO, T);
		} else if (($1.type != $3.type) && ($1.type == ENTERO && $3.type == REAL)){
			gen(&tc, INT_TO_REAL, $1.place, NULO, T);
		} else if (($1.type != $3.type) || ($1.type != REAL && $1.type != ENTERO)) {
			printf(ANSI_COLOR_RED "Error, tipos incompatibles en operador distinto\n" ANSI_COLOR_RESET);
			YYERROR;
		}
		gen(&tc, SIGNO_MAYOR_OPERADOR, $1.place, $3.place, T);
		}	 
	| expresionV operador_igualTK expresionV {
		printf(ANSI_COLOR_MAGENTA "ENTRO EN IGUAL\n" ANSI_COLOR_RESET);
		int T = newTemp(&ts);
		$$.place = T;
		if (($1.type != $3.type) && ($1.type == REAL && $3.type == ENTERO)){
			gen(&tc, INT_TO_REAL, $3.place, NULO, T);
		} else if (($1.type != $3.type) && ($1.type == ENTERO && $3.type == REAL)){
			gen(&tc, INT_TO_REAL, $1.place, NULO, T);
		} else if ($1.type != $3.type){
			printf(ANSI_COLOR_RED "Error, tipos incompatibles en operador distinto\n" ANSI_COLOR_RESET);
			YYERROR;
		}
		gen(&tc, SIGNO_IGUAL_OPERADOR, $1.place, $3.place, T);
		}
	| inicio_parentesisTK exp_bV fin_parentesisTK {
		copiaListas($$.verdadero, $2.verdadero, $2.sigVerdadero);
		$$.sigVerdadero = $2.sigVerdadero;
		copiaListas($$.falso, $2.falso, $2.sigFalso);
		$$.sigFalso = $2.sigFalso;
		$$.type = BOOLEANO;
	}
	;
expresionV : exp_aV {
		}
	| exp_bV {
		$$.type = BOOLEANO;
		}
	| funcion_llV {
		}
	;
operando_aV : identificadorTK {
		$$.type = buscar_tipo_TS(ts, $1);
		$$.place = buscar_indice_TS(ts, $1);
	}
	| operando_aV puntoTK operando_aV {
		}
	| operando_aV operador_inicio_arrayTK expresionV operador_fin_arrayTK {
		}
	| operando_aV tipoTK {
		}
	;
operando_bV : identificadorBooleanoTK {
		$$.type = buscar_tipo_TS(ts, $1);
		$$.place = buscar_indice_TS(ts, $1);
	}
	| operando_bV puntoTK operando_bV {
		}
	| operando_bV operador_inicio_arrayTK expresionV operador_fin_arrayTK {
		}
	| operando_bV tipoTK {
		}
	;

instruccionesV : instruccionV operador_comp_secTK instruccionesV {
		}
	| instruccionV {
		}
	;
instruccionV : continuarTK {
		}
	| asignacion_aV {
		}
	| asignacion_bV {
		}
	| alternativaV {
		}
	| iteracionV {
		}
	| accion_llV {
		}
	;
asignacion_aV : operando_aV operador_asignacionTK expresionV {
		$$.place = $1.place;
		$$.type = $1.type;
		if ($3.type == $1.type) {
			gen(&tc, ASIGNACION_TC, $3.place, NULO, $1.place);
		} else if ($3.type == REAL && $1.type == ENTERO) {
			printf(ANSI_COLOR_RED "Error, no se puede asignar un Real a una variable Entera" ANSI_COLOR_RESET);
		} else if ($3.type == ENTERO && $1.type == REAL) {
			int T = newTemp(&ts);
			modificarTipoTS(&ts, T, REAL);
			gen(&tc, INT_TO_REAL, $3.place, NULO, T);
			gen(&tc, ASIGNACION_TC, T, NULO, $1.place);
		} else {
			printf(ANSI_COLOR_RED "Error, tipos incompatibles en la asignación" ANSI_COLOR_RESET);
		}
	}
	;
asignacion_bV : operando_bV operador_asignacionTK expresionV {
		int T = newTemp(&ts);
		printf(ANSI_COLOR_YELLOW "ASIGNACIÓN BOOLEANA => (T=%d)\n" ANSI_COLOR_RESET, T);
		printf(ANSI_COLOR_YELLOW "Operando lugar=%d tipo=%d\n" ANSI_COLOR_RESET, $3.place, $3.type);
		modificarTipoTS(&ts, T, BOOLEANO);
		$$.place = T;
		if ($3.type == BOOLEANO) {
			backpatch(&tc, $3.falso, $3.sigFalso, tc.nextQuad);
			gen(&tc, FALSO, NULO, NULO, $1.place);
			gen(&tc, GOTO, NULO, NULO, tc.nextQuad + 2);
			backpatch(&tc, $3.verdadero, $3.sigVerdadero, tc.nextQuad);
			gen(&tc, VERDADERO, NULO, NULO, $1.place);
		} else {
			printf(ANSI_COLOR_RED "Error, no se puede asignar un valor no booleano a una variable booleana" ANSI_COLOR_RESET);
		}
	}
	;
alternativaV : inicio_siTK expresionV operador_entoncesTK instruccionesV lista_opcionesV fin_siTK {
		}
	;
lista_opcionesV : operador_elseTK expresionV operador_entoncesTK instruccionesV lista_opcionesV {
		}
	| %empty {
		}
	;
iteracionV : it_cota_fijaV {
		}
	| it_cota_expV {
		}
	;
it_cota_expV : inicio_mientrasTK expresionV hacerTK instruccionesV fin_mientrasTK {
		}
	;
it_cota_fijaV : inicio_paraTK identificadorTK operador_asignacionTK expresionV hastaTK expresionV hacerTK instruccionesV fin_paraTK {
		}
	;

accion_dV : inicio_accionTK a_cabeceraV bloqueV fin_accionTK {
		}
	;
funcion_dV : inicio_funcionTK f_cabeceraV bloqueV devTK expresionV fin_funcionTK {
		}
	;
a_cabeceraV : identificadorTK inicio_parentesisTK d_par_formV fin_parentesisTK operador_comp_secTK {
		}
	;
f_cabeceraV : identificadorTK inicio_parentesisTK lista_d_varV fin_parentesisTK devTK d_tipoV operador_comp_secTK {
		}
	;
d_par_formV : d_p_formV operador_comp_secTK d_par_formV {
		}
	| %empty {
		}
	;
d_p_formV : tipo_atributo_entTK lista_idV operador_def_tipoTK d_tipoV {
		}
	| tipo_atributo_salTK lista_idV operador_def_tipoTK d_tipoV {
		}
	| tipo_atributo_ent_salTK lista_idV operador_def_tipoTK d_tipoV {
		}
	;

accion_llV : identificadorTK inicio_parentesisTK l_llV fin_parentesisTK {
		}
	;
funcion_llV : identificadorTK inicio_parentesisTK l_llV fin_parentesisTK {
		}
	;
l_llV : expresionV operador_separadorTK l_llV {
		}
	| expresionV {
		}
	;
M : %empty {
		$$.quad = tc.nextQuad;
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
	tc = nuevaTablaDeCuadruplas();
	nuevaCola(&ci);
	ts = nuevaTablaDeSimbolos();
	yyparse();
    printf("\n\n=================================================\n");
    printf("ESTADO FINAL DE LA TABLA DE SIMBOLOS:\n");
    printf("==================================================\n");
    imprimeTablaDeSimbolos(ts); 
    printf("==================================================\n");
	printf("\n\n=================================================\n");
    printf("ESTADO FINAL DE LA TABLA DE CUADRUPLAS:\n");
    printf("==================================================\n");
	imprimirTablaDeCuadruplas(&tc);
    printf("==================================================\n");
	printf("\n\n\n");
	imprimirOutputFinal(&tc, &ts);

}


void yyerror(char * s){
	printf("\tBISON: ERROR, %s\n", s);
}


