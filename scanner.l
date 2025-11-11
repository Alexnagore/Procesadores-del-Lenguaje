%{
	#include <stdio.h> //Para poder escribir en el terminal
	#include <stdlib.h> //Para trabajar con NULL y usar exit()
	#include <strings.h> //Para trabajar con cadenas de caracteres
	#include <math.h>

	#include "nombresDeTipos.h" // Para saber los nombres de los tipos
	#include "literal.h" //Para poder usar el tipo Literal
	#include "parser.tab.h" // Lo crea automaticamente bison con la opcion -v

	void errorEnScanner(char*, char*); //prototipo necesario para compilar
	int potenciaDeDiez(char*);
%}

letraDR [[:alpha:]]
cifraDR [[:digit:]]
letra_o_cifraDR [[:alnum:]]

identificadorConstanteDR [A-Z][A-Z]*
identificadorDR {letraDR}{letra_o_cifraDR}*

literal_enteroDR    [+-]?{cifraDR}{cifraDR}*([eE]{cifraDR}{cifraDR}*)?
literal_realDR    [+-]?{cifraDR}{cifraDR}*(\.{cifraDR}{cifraDR}*)?([eE]{cifraDR}{cifraDR}*)?|{literal_enteroDR}[rR]
literal_booleanoDR (?i:verdadero|falso)
literal_caracterDR  \".\"
literal_cadenaDR    '([^']|\/')*'

comentarioDR	\{([^}]|\/\})*\}

tipoDR	(?i:booleano|cadena|caracter|entero|real)
tipoTablaDR	(?i:tabla)
tipoRefDR (?i:ref)
tipo_atributo_entDR	ent
tipo_atributo_salDR	sal
tipo_atributo_ent_salDR e\/s

conjuncionDR	(?i:y)
disyuncionDR	(?i:o)
continuarDR	(?i:continuar)
deDR	(?i:de)
devDR	(?i:dev)
hacerDR	(?i:hacer)
hastaDR	(?i:hasta)
noDR	(?i:no)


inicio_accionDR	(?i:accion)
fin_accionDR	(?i:faccion)

inicio_algoritmoDR	(?i:algoritmo)
fin_algoritmoDR	(?i:falgoritmo)

inicio_siDR	(?i:si)
fin_siDR	(?i:fsi)

inicio_mientrasDR	(?i:mientras)
fin_mientrasDR	(?i:fmientras)

inicio_varDR	(?i:var)
fin_varDR	(?i:fvar)

inicio_constDR	(?i:const)
fin_constDR	(?i:fconst)

inicio_funcionDR	(?i:funcion)
fin_funcionDR	(?i:ffuncion)

inicio_paraDR	(?i:para)
fin_paraDR	(?i:fpara)

inicio_tuplaDR	(?i:tupla)
fin_tuplaDR	(?i:ftupla)

inicio_tipoDR	(?i:tipo)
fin_tipoDR	(?i:ftipo)

operador_asignacionDR	:=
operador_comp_secDR	;
operador_separadorDR	,
operador_subrangoDR	\.\.
operador_def_tipoDR	:
operador_entoncesDR	(->)
operador_elseDR	\[\]
operador_igualDR	=
operador_inicio_arrayDR	\[
operador_fin_arrayDR	\]
puntoDR	\.

relacional_distintoDR <>
relacional_menor_igualDR	<=
relacional_mayor_igualDR	>=
relacional_menorDR	<
relacional_mayorDR	>

aritmetico_sumaDR	\+
aritmetico_restaDR	-
aritmetico_productoDR	\*
aritmetico_divisionDR	\/
aritmetico_divisionRealDR	(?i:div)
aritmetico_moduloDR (?i:mod)

%%

{operador_asignacionDR}	{
	return operador_asignacionTK;
}

{operador_comp_secDR}	{
	return operador_comp_secTK;
}

{operador_separadorDR}	{
	return operador_separadorTK;
}

{operador_subrangoDR}	{
	return operador_subrangoTK;
}

{operador_def_tipoDR}	{
	return operador_def_tipoTK;
}

{operador_entoncesDR}	{
	return operador_entoncesTK;
}

{operador_elseDR}	{
	return operador_elseTK;
}

{operador_igualDR}	{
	return operador_igualTK;
}

{operador_inicio_arrayDR}	{
	return operador_inicio_arrayTK;
}

{operador_fin_arrayDR}	{
	return operador_fin_arrayTK;
}

{puntoDR} {
	return puntoTK;
}

{relacional_distintoDR}	{
	return relacional_distintoTK;
}

{relacional_menor_igualDR}	{
	return relacional_menor_igualTK;
}

{relacional_mayor_igualDR}	{
	return relacional_mayor_igualTK;
}

{relacional_menorDR}	{
	return relacional_menorTK;
}

{relacional_mayorDR}	{
	return relacional_mayorTK;
}

{aritmetico_sumaDR}	{
	return aritmetico_sumaTK;
}

{aritmetico_restaDR}	{
	return aritmetico_restaTK;
}

{aritmetico_productoDR}	{
	return aritmetico_productoTK;
}

{aritmetico_divisionDR}	{
	return aritmetico_divisionTK;
}

{aritmetico_divisionRealDR}	{
	return aritmetico_divisionRealTK;
}

{aritmetico_moduloDR}	{
	return aritmetico_moduloTK;
}

{tipoDR}	{
	if (strcasecmp(yytext, "entero") == 0)
        yylval.tipo = ENTERO;
    else if (strcasecmp(yytext, "real") == 0)
        yylval.tipo = REAL;
    else if (strcasecmp(yytext, "cadena") == 0)
        yylval.tipo = CADENA;
    else if (strcasecmp(yytext, "caracter") == 0)
        yylval.tipo = CARACTER;
    else if (strcasecmp(yytext, "booleano") == 0)
        yylval.tipo = BOOLEANO;
    return tipoTK;
}

{tipoTablaDR}	{
	return tipoTablaTK;
}

{tipoRefDR}	{
	return tipoRefTK;
}

{conjuncionDR}	{
	return conjuncionTK;
}

{disyuncionDR}	{
	return disyuncionTK;
}

{tipo_atributo_entDR}	{
	return tipo_atributo_entTK;
}

{tipo_atributo_salDR}	{
	return tipo_atributo_salTK;
}

{tipo_atributo_ent_salDR}	{
	return tipo_atributo_ent_salTK;
}

{continuarDR}	{
	return continuarTK;
}

{deDR}	{
	return deTK;
}

{devDR}	{
	return devTK;
}

{hacerDR}	{
	return hacerTK;
}

{hastaDR}	{
	return hastaTK;
}

{noDR}	{
	return noTK;
}

{inicio_accionDR}	{
	return inicio_accionTK;
}
{fin_accionDR}	{
	return fin_accionTK;
}

{inicio_algoritmoDR}	{
	return inicio_algoritmoTK;
}

{fin_algoritmoDR}	{
	return fin_algoritmoTK;
}

{inicio_siDR}	{
	return inicio_siTK;
}
{fin_siDR}	{
	return fin_siTK;
}

{inicio_mientrasDR}	{
	return inicio_mientrasTK;
}
{fin_mientrasDR}	{
	return fin_mientrasTK;
}

{inicio_varDR}	{
	return inicio_varTK;
}
{fin_varDR}	{
	return fin_varTK;
}

{inicio_constDR}	{
	return inicio_constTK;
}
{fin_constDR}	{
	return fin_constTK;
}

{inicio_funcionDR}	{
	return inicio_funcionTK;
}
{fin_funcionDR}	{
	return fin_funcionTK;
}

{inicio_paraDR}	{
	return inicio_paraTK;
}
{fin_paraDR}	{
	return fin_paraTK;
}

{inicio_tuplaDR}	{
	return inicio_tuplaTK;
}
{fin_tuplaDR}	{
	return fin_tuplaTK;
}

{inicio_tipoDR}	{
	return inicio_tipoTK;
}
{fin_tipoDR}	{
	return fin_tipoTK;
}

{literal_booleanoDR}  {
    yylval.literal.tipoDelValor = BOOLEANO;

    if (strcasecmp(yytext, "verdadero") == 0)
        yylval.literal.valor.valorBooleano = VERDADERO;
    else
        yylval.literal.valor.valorBooleano = FALSO;

    return literal_booleanoTK;
}

{identificadorConstanteDR}   {
    yylval.literal.tipoDelValor = CADENA;
	if ((yylval.literal.valor.valorCadena = strdup(yytext)) == NULL )
	    errorEnScanner("No hay memoria para strdup() al leer %s\n", yytext);
	else
		return identificadorConstanteTK;
}

{identificadorDR}   {
    yylval.literal.tipoDelValor = CADENA;
	if ((yylval.literal.valor.valorCadena = strdup(yytext)) == NULL )
	    errorEnScanner("No hay memoria para strdup() al leer %s\n", yytext);
	else
		return identificadorTK;
}

{literal_enteroDR}  {
    yylval.literal.tipoDelValor = ENTERO;
	yylval.literal.valor.valorEntero = atoi(yytext);
	return literal_enteroTK;
}

{literal_realDR}  {
	yylval.literal.tipoDelValor = REAL;
	yylval.literal.valor.valorReal = atof(yytext);
	return literal_realTK;
}

{literal_caracterDR}  {
    yylval.literal.tipoDelValor = CARACTER;
	yylval.literal.valor.valorCaracter = yytext[1];
	return literal_caracterTK;
}

{literal_cadenaDR}  {
    yylval.literal.tipoDelValor = CADENA;
	if ((yylval.literal.valor.valorCadena = strdup(yytext)) == NULL )
	    errorEnScanner("No hay memoria para strdup() al leer %s\n", yytext);
	else
		return literal_cadenaTK;
}

{comentarioDR} {
    /* ignorar */
}

%%

void errorEnScanner(char* definicionDelError, char * variable){
	printf("\n\n\n\t%s %s \n", definicionDelError, variable);
	exit(EXIT_FAILURE);
}

int potenciaDeDiez(char* literalEntero){
	char entero[100];
	char exponente[100];
	int i = 0, j = 0;
	while ((literalEntero[i] != 'e' && literalEntero[i] != 'E') && literalEntero[i] != '\0'){
		entero[i] = literalEntero[i];
		i++;
	}
	if (literalEntero[i] == 'e' || literalEntero[i] == 'E') {
        i++;
    }
	while (literalEntero[i] != '\0'){
		exponente[j] = literalEntero[i];
		i++;
		j++;
	}
	int base = atoi(entero);
    int exp = atoi(exponente);

    return (int)(base * pow(10, exp));
}

int main(int argc, char **argv) {
    if (argc > 1) {
        FILE *f = fopen(argv[1], "r");
        if (!f) {
            perror("Error al abrir el archivo");
            return 1;
        }
        yyin = f;  // yyin es la variable global que Flex usa como fuente de entrada
    }

    yylex();  // Ejecuta el analizador léxico

    if (yyin != stdin) fclose(yyin);
    return 0;
}
