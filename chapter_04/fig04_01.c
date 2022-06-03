/* Figura 4.1: fig04_01.c
	Repetição controlada por contador */

#include <stdio.h>

/* função main inicia a execução do programa */
int main( void )
{
	int contador = 1; /* inicialização */
	
	while( contador <= 10 ){ /* condição de peretição */
		printf( "%d\n", contador );
		++contador;	/* incrementa */		
	} /* fim do while */
	
	return 0; /* indica que o programa foi concluido com sucesso */
} /* fim da função main*/
