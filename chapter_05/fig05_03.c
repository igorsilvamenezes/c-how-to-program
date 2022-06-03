/* Figura 5.3: fig05_03.c
	Criando e usando uma fun��o definida pelo programador */
	
#include <stdio.h>

int square( int y ); /* prot�tipo da fun��o */

/* fun��o main inicia a execu��o do programa */
int main( void )
{
	int x; /* contador */
	
	/* loop 10 vezes e calcula e exibe quadrado de x a cada vez */
	for( x = 1; x <= 10; x++ ){
		printf( "%d ", square( x )); /* chamada da fun��o */
	} /* fim do for */
	
	printf( "\n" );
	return 0; /* indica conclus�o bem-sucedida */
}

/* defini��o de fun��o square retorna quadrado do par�metro */
int square( int y) /* y � uma c�pia do argumento � fun��o */
{
	return y * y; /* retorna o quadrado de y como um int */
} /* fim da fun��o square */
