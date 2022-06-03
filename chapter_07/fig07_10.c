/* Figura 7.10: fig07_10.c
	Convertendo uma String em maipusculas usando um
	ponteiro não constante para dados não constantes */
	
#include <stdio.h>
#include <ctype.h>

void convertToUppercase( char *sPtr ); /* protótipo */

int main( void )
{
	char string[] = "caracteres e R$32,98"; /* inicializa array de char */
	
	printf( "A string antes da conversao eh: %s", string );
	convertToUppercase( string );
	printf( "\nA string apos a conversao eh: %s\n", string );
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */

/* converte string em letras maiúsculas */
void convertToUppercase( char *sPtr )
{
	while( *sPtr != '\0' ){ /* caractere atual não é \0 */
		
		if( islower( *sPtr ) ){ /* se o caracter é minúsculo */
			*sPtr = toupper( * sPtr ); /* converte em maiúsculas */
		} /* fim do if */
		
		++sPtr; /* desloca sPtr para o caracter seguinte */
	} /* fim do while */
} /* fim da função convertToUppercase */
