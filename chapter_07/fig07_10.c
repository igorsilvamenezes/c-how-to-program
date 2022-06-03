/* Figura 7.10: fig07_10.c
	Convertendo uma String em maipusculas usando um
	ponteiro n�o constante para dados n�o constantes */
	
#include <stdio.h>
#include <ctype.h>

void convertToUppercase( char *sPtr ); /* prot�tipo */

int main( void )
{
	char string[] = "caracteres e R$32,98"; /* inicializa array de char */
	
	printf( "A string antes da conversao eh: %s", string );
	convertToUppercase( string );
	printf( "\nA string apos a conversao eh: %s\n", string );
	return 0; /* indica conclus�o bem-sucedida */
} /* fim do main */

/* converte string em letras mai�sculas */
void convertToUppercase( char *sPtr )
{
	while( *sPtr != '\0' ){ /* caractere atual n�o � \0 */
		
		if( islower( *sPtr ) ){ /* se o caracter � min�sculo */
			*sPtr = toupper( * sPtr ); /* converte em mai�sculas */
		} /* fim do if */
		
		++sPtr; /* desloca sPtr para o caracter seguinte */
	} /* fim do while */
} /* fim da fun��o convertToUppercase */
