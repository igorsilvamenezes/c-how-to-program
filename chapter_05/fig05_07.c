/* Figura 5.7: fig05_07.c
	INteiros escalados e eslocados, prodizur por 1 + rand() % 6 */
	
#include <stdio.h>
#include <stdlib.h>

/* função main inicia a execução do programa */
int main( void )
{
	int i; /* contador */
	
	/* loop 20 vezes */
	for( i = 1; i <= 20; i++){
		
		/* escolhe números aleatório de 1 a 6 e imprime na tela */
		printf( "%10d", 1 + ( rand() % 6 ) );
		
		/* se contador é divisível por 5, inicia nova linha de impressão */
		if( i % 5 == 0 ){
			printf( "\n" );
		} /* fim do if */
	} /* fim do for */
	
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
