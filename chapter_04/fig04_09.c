/* figura 4.9: fig_04_09.c
	Usando a estrutura de repeti��o do/while */
	
#include <stdio.h>

/* fun��o main inicia a execu��o do programa */
int main( void )
{
	int contador = 1;	/* inicializa contador */
	
	do{
		printf( "%d ", contador );	/* exibe contador */
	} while ( ++contador <= 10 );	/* fim de do..while */
	
	return 0; /* indica que o programa foi concluido com sucesso */
} /* fim da fun��o main */
