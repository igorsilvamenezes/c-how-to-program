/* Figura 7.6: fig07_06.c
	Cubo de uma vari�vel usando chamada por valor */
#include <stdio.h>

int cubeByValue( int n ); /* prot�tipo */

int main( void )
{
	int number = 5; /* inicializa n�mero*/
	
	printf( "O valor original do numero eh: %d", number );
	
	/* passa n�mero por valor a cubeByValue */
	number = cubeByValue( number );
	
	printf( "\nO novo valor do numero eh %d\n", number );
	return 0; /* indica conclus�o bem-sucedida */
} /* fim do if */

/* calcula e retorna cubo do argumento inteiro */
int cubeByValue( int n )
{
	return n * n * n; /* calcula cubo da vari�vel local n e retorna resultado */
} /* fim da fun��o cubeByValue */
