/* Figura 4.1: fig04_01.c
	Repeti��o controlada por contador */

#include <stdio.h>

/* fun��o main inicia a execu��o do programa */
int main( void )
{
	int contador = 1; /* inicializa��o */
	
	while( contador <= 10 ){ /* condi��o de pereti��o */
		printf( "%d\n", contador );
		++contador;	/* incrementa */		
	} /* fim do while */
	
	return 0; /* indica que o programa foi concluido com sucesso */
} /* fim da fun��o main*/
