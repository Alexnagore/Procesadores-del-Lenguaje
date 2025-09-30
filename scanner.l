%{
	// Headers standard necesarios
	#include <stdio.h> //Para poder escribir en el terminal
	#include <stdlib.h> //Para usar exit()
	#include <strings.h> //Para trabajar con cadenas de caracteres
	
	void errorEnScanner(char*, char*); //prototipo necesario para compilar
	
%}

letraDR [a-z]|[A-Z]
cifraDR [0-9]
letra_o_cifraDR {letraDR}|{cifraDR}
identificadorDR {letraDR}{letra_o_cifraDR}*

literal_enteroDR    [+-]?{cifraDR}{cifraDR}*([eE]{cifraDR}{cifraDR}*)?
literal_realDR    [+-]?{cifraDR}{cifraDR}*(\.{cifraDR}{cifraDR}*)?([eE]{cifraDR}{cifraDR}*)?|{literal_enteroDR}[rR]
literal_booleanoDR (?i:verdadero|falso)
literal_caracterDR  \".\"
literal_cadenaDR    '.*'

%%

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

%%

void errorEnScanner(char* definicionDelError, char * variable){
	printf("\n\n\n\t%s %s \n", definicionDelError, variable);
	exit(EXIT_FAILURE);
}