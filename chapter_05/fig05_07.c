/* Figura 5.7: fig05_07.c
	INteiros escalados e eslocados, prodizur por 1 + rand() % 6 */
	
#include <stdio.h>
#include <stdlib.h>

/* fun��o main inicia a execu��o do programa */
int main( void )
{
	int i; /* contador */
	
	/* loop 20 vezes */
	for( i = 1; i <= 20; i++){
		
		/* escolhe n�meros aleat�rio de 1 a 6 e imprime na tela */
		printf( "%10d", 1 + ( rand() % 6 ) );
		
		/* se contador � divis�vel por 5, inicia nova linha de impress�o */
		if( i % 5 == 0 ){
			printf( "\n" );
		} /* fim do if */
	} /* fim do for */
	
	return 0; /* indica conclus�o bem-sucedida */
} /* fim do main */
