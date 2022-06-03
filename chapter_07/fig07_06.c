/* Figura 7.6: fig07_06.c
	Cubo de uma variável usando chamada por valor */
#include <stdio.h>

int cubeByValue( int n ); /* protótipo */

int main( void )
{
	int number = 5; /* inicializa número*/
	
	printf( "O valor original do numero eh: %d", number );
	
	/* passa número por valor a cubeByValue */
	number = cubeByValue( number );
	
	printf( "\nO novo valor do numero eh %d\n", number );
	return 0; /* indica conclusão bem-sucedida */
} /* fim do if */

/* calcula e retorna cubo do argumento inteiro */
int cubeByValue( int n )
{
	return n * n * n; /* calcula cubo da variável local n e retorna resultado */
} /* fim da função cubeByValue */
