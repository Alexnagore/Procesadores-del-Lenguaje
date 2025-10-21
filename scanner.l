%{
	// Headers standard necesarios
	#include <stdio.h> //Para poder escribir en el terminal
	#include <stdlib.h> //Para usar exit()
	#include <strings.h> //Para trabajar con cadenas de caracteres
	#include <math.h>
	
	void errorEnScanner(char*, char*); //prototipo necesario para compilar
	int potenciaDeDiez(char*);
%}

letraDR [[:alpha:]]
cifraDR [[:digit:]]
letra_o_cifraDR [[:alnum:]]
identificadorDR {letraDR}{letra_o_cifraDR}*
identificadorConstanteDR [A-Z][A-Z]*

literal_enteroDR    [+-]?{cifraDR}{cifraDR}*([eE]{cifraDR}{cifraDR}*)?
literal_realDR    [+-]?{cifraDR}{cifraDR}*(\.{cifraDR}{cifraDR}*)?([eE]{cifraDR}{cifraDR}*)?|{literal_enteroDR}[rR]
literal_booleanoDR (?i:verdadero|falso)
literal_caracterDR  \".\"
literal_cadenaDR    '([^']|\/')*'

comentarioDR	\{([^}]|\/\})*\}

tipoDR	(?i:booleano|cadena|caracter|entero|real|tabla|ref)
tipo_atributo_entDR	ent
tipo_atributo_salDR	sal
operacionDR	(?i:div|mod)

conjuncionDR	(?i:o|y)
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

%%

{operador_asignacionDR}	{
	printf("(operador_asignacionTK, %s)\n", yytext);
}

{operador_comp_secDR}	{
	printf("(operador_comp_secTK, %s)\n", yytext);
}

{operador_separadorDR}	{
	printf("(operador_separadorTK, %s)\n", yytext);
}

{operador_subrangoDR}	{
	printf("(operador_subrangoTK, %s)\n", yytext);
}

{operador_def_tipoDR}	{
	printf("(operador_def_tipoTK, %s)\n", yytext);
}

{operador_entoncesDR}	{
	printf("(operador_entoncesTK, %s)\n", yytext);
}

{operador_elseDR}	{
	printf("(operador_elseTK, %s)\n", yytext);
}

{operador_igualDR}	{
	printf("(operador_igualTK, %s)\n", yytext);
}

{operador_inicio_arrayDR}	{
	printf("(operador_inicio_arrayTK, %s)\n", yytext);
}

{operador_fin_arrayDR}	{
	printf("(operador_fin_arrayTK, %s)\n", yytext);
}

{puntoDR} {
	printf("(puntoTK, %s)\n", yytext);
}

{relacional_distintoDR}	{
	printf("(relacional_distintoTK, %s)\n", yytext);
}

{relacional_menor_igualDR}	{
	printf("(relacional_menor_igualTK, %s)\n", yytext);
}

{relacional_mayor_igualDR}	{
	printf("(relacional_mayor_igualTK, %s)\n", yytext);
}

{relacional_menorDR}	{
	printf("(relacional_menorTK, %s)\n", yytext);
}

{relacional_mayorDR}	{
	printf("(relacional_mayorTK, %s)\n", yytext);
}

{aritmetico_sumaDR}	{
	printf("(aritmetico_sumaTK, %s)\n", yytext);
}

{aritmetico_restaDR}	{
	printf("(aritmetico_restaTK, %s)\n", yytext);
}

{aritmetico_productoDR}	{
	printf("(aritmetico_productoTK, %s)\n", yytext);
}

{aritmetico_divisionDR}	{
	printf("(aritmetico_divisionTK, %s)\n", yytext);
}

{tipoDR}	{
	printf("(tipoTK, %s)\n", yytext);
}

{conjuncionDR}	{
	printf("(conjuncionTK, %s)\n", yytext);
}

{tipo_atributo_entDR}	{
	printf("(tipo_atributo_entTK, %s)\n", yytext);
}

{tipo_atributo_salDR}	{
	printf("(tipo_atributo_salTK, %s)\n", yytext);
}

{operacionDR}	{
	printf("(operacionTK, %s)\n", yytext);
}

{continuarDR}	{
	printf("(continuarTK, %s)\n", yytext);
}

{deDR}	{
	printf("(deTK, %s)\n", yytext);
}

{devDR}	{
	printf("(devTK, %s)\n", yytext);
}

{hacerDR}	{
	printf("(hacerTK, %s)\n", yytext);
}

{hastaDR}	{
	printf("(hastaTK, %s)\n", yytext);
}

{noDR}	{
	printf("(noTK, %s)\n", yytext);
}

{inicio_accionDR}	{
	printf("(inicio_accionTK, %s)\n", yytext);
}
{fin_accionDR}	{
	printf("(fin_accionTK, %s)\n", yytext);
}

{inicio_algoritmoDR}	{
	printf("(inicio_algoritmoTK, %s)\n", yytext);
}
{fin_algoritmoDR}	{
	printf("(fin_algoritmoTK, %s)\n", yytext);
}

{inicio_siDR}	{
	printf("(inicio_siTK, %s)\n", yytext);
}
{fin_siDR}	{
	printf("(fin_siTK, %s)\n", yytext);
}

{inicio_mientrasDR}	{
	printf("(inicio_mientrasTK, %s)\n", yytext);
}
{fin_mientrasDR}	{
	printf("(fin_mientrasTK, %s)\n", yytext);
}

{inicio_varDR}	{
	printf("(inicio_varTK, %s)\n", yytext);
}
{fin_varDR}	{
	printf("(fin_varTK, %s)\n", yytext);
}

{inicio_constDR}	{
	printf("(inicio_constTK, %s)\n", yytext);
}
{fin_constDR}	{
	printf("(fin_constTK, %s)\n", yytext);
}

{inicio_funcionDR}	{
	printf("(inicio_funcionTK, %s)\n", yytext);
}
{fin_funcionDR}	{
	printf("(fin_funcionTK, %s)\n", yytext);
}

{inicio_paraDR}	{
	printf("(inicioParaTK, %s)\n", yytext);
}
{fin_paraDR}	{
	printf("(fin_paraTK, %s)\n", yytext);
}

{inicio_tuplaDR}	{
	printf("(inicio_tuplaTK, %s)\n", yytext);
}
{fin_tuplaDR}	{
	printf("(fin_tuplaTK, %s)\n", yytext);
}

{inicio_tipoDR}	{
	printf("(inicio_tipoTK, %s)\n", yytext);
}
{fin_tipoDR}	{
	printf("(fin_tipoTK, %s)\n", yytext);
}

{literal_booleanoDR}  {
    printf("(literal_booleanoTK, %s)\n", yytext);
}

{identificadorDR}   {
    printf("(identificadorTK, %s)\n", yytext);
}

{identificadorConstanteDR}   {
    printf("(identificadorConstanteTK, %s)\n", yytext);
}

{literal_enteroDR}  {
    printf("(literal_enteroTK, %d)\n", potenciaDeDiez(yytext));
}

{literal_realDR}  {
    printf("(literal_realTK, %f)\n", atof(yytext));
}

{literal_caracterDR}  {
    printf("(literal_caracterTK, %s)\n", yytext);
}

{literal_cadenaDR}  {
    printf("(literal_cadenaTK, %s)\n", yytext);
}

{comentarioDR} {
    printf("(comentarioTK, %s)\n", yytext);
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
