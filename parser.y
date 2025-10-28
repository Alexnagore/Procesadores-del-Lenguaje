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
%token inicio_parentesisTK
%token fin_parentesisTK
%token <tipo> tipoTK
%token conjuncionTK
%token tipo_atributo_entTK
%token tipo_atributo_salTK
%token tipo_atributo_ent_salTK
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
%token inicio_paraTK
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

%union {
    int entero;
    char* cadena;
    TipoT tipo;
    char caracter;
}

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
		}
	| lista_d_varV declaracionDeVariableV{
		}
	;
declaracionDeVariableV : lista_idV operador_def_tipoTK d_tipoV operador_comp_secTK{
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
	| decl_entV decl_salV {
		}
	| decl_salV {
		}
	;
decl_entV : tipo_atributo_entTK lista_d_varV{
		}
	;
decl_salV : tipo_atributo_salTK lista_d_varV{
		}
	;

expresionV : exp_aV {
		}
	| exp_bV {
		}
	| funcion_llV {
		}
	;
exp_aV : exp_aV aritmetico_sumaTK exp_aV {
		}
	| exp_aV aritmetico_restaTK exp_aV {
		}
	| exp_aV aritmetico_productoTK exp_aV {
		}
	| exp_aV aritmetico_divisionTK exp_aV {
		}
	| exp_aV operacionTK exp_aV {
		}
	| inicio_parentesisTK exp_aV fin_parentesisTK {
		}
	| operandoV {
		}
	| literal_enteroTK {
		}
	| literal_realTK {
		}
	| aritmetico_restaTK exp_aV {
		}
	| aritmetico_sumaTK exp_aV {
		}
	;
exp_bV : exp_bV conjuncionTK exp_bV {
		}
	| noTK exp_bV {
		}
	| operandoV {
		}
	| literal_booleanoTK {
		}
	| expresionV relacional_distintoTK expresionV {
		}
	| expresionV relacional_menor_igualTK expresionV {
		}
	| expresionV relacional_mayor_igualTK expresionV {
		}
	| expresionV relacional_menorTK expresionV {
		}
	| expresionV relacional_mayorTK expresionV {
		}	 
	| expresionV operador_igualTK expresionV {
		}
	| inicio_parentesisTK exp_bV fin_parentesisTK {
		}
	;
operandoV : identificadorTK {
		}
	| operandoV puntoTK operandoV {
		}
	| operandoV operador_inicio_arrayTK expresionV operador_fin_arrayTK {
		}
	| operandoV tipoTK {
		}
	;

instruccionesV : instruccionV operador_comp_secTK instruccionesV {
		}
	| instruccionV {
		}
	;
instruccionV : continuarTK {
		}
	| asignacionV {
		}
	| alternativaV {
		}
	| iteracionV {
		}
	| accion_llV {
		}
	;
asignacionV : operandoV operador_asignacionTK expresionV {
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
