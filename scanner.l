%{
	// Headers standard necesarios
	#include <stdio.h> //Para poder escribir en el terminal
	#include <stdlib.h> //Para usar exit()
	#include <strings.h> //Para trabajar con cadenas de caracteres
	
	void errorEnScanner(char*, char*); //prototipo necesario para compilar
	
%}

letraDR [[:alpha:]]
cifraDR [[:digit:]]
letra_o_cifraDR [[:alnum:]]
identificadorDR {letraDR}{letra_o_cifraDR}*

literal_enteroDR    [+-]?{cifraDR}{cifraDR}*([eE]{cifraDR}{cifraDR}*)?
literal_realDR    [+-]?{cifraDR}{cifraDR}*(\.{cifraDR}{cifraDR}*)?([eE]{cifraDR}{cifraDR}*)?|{literal_enteroDR}[rR]
literal_booleanoDR (?i:verdadero|falso)
literal_caracterDR  \".\"
literal_cadenaDR    '([^']|\/')*'

comentarioDR	\{([^}]|\/\})*\}

tipoDR	(?i:booleano|cadena|caracter|entero|real|tabla|ref)
tipo_atributo_accionDR	(?i:e\/s|sal|ent)
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

%%

{tipoDR}	{
	printf("(tipoTK, %s)\n", yytext);
}

{conjuncionDR}	{
	printf("(conjuncionTK, %s)\n", yytext);
}

{tipo_atributo_accionDR}	{
	printf("(tipo_atributo_accionTK, %s)\n", yytext);
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

{literal_enteroDR}  {
    printf("(literal_enteroTK, %s)\n", yytext);
}

{literal_realDR}  {
    printf("(literal_realTK, %s)\n", yytext);
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
