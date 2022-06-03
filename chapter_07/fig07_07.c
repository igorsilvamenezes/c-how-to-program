/* Figura 7.7: fig07_07.c
	Calcula o cubo de uma vari�vel usando chamada por refer�ncia com argumento ponteiro */
	
#include <stdio.h>

void cubeByReference( int *nPtr ); /* prot�tipo */

int main( void )
{
	int number = 5; /* inicializa n�mero */
	
	printf( "O valor original do numero eh %d", number );
	
	/* passa endere�o do n�mero a cubeByReference */
	cubeByReference( &number );
	
	printf( "\nO novo valor do numero eh %d\n", number );
	return 0; /* indica conclus�o bem-sucedida */
} /* fim do main */

/* calcula cubo de *nPtr; modifica vari�vel number em main */
void cubeByReference( int *nPtr )
{
	*nPtr = *nPtr * *nPtr * *nPtr; /* cubo de *nPtr */
} /* fim da fun��o cubeByReference */
