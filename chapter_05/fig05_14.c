/* Figura 5.14: fig05_14.c
	Fun��o recursiva fatorial */
	
#include <stdio.h>

long factorial( long number ); /* prot�tipo de fun��o */

/* fun��o main inicia a execu��o do programa */
int main( void )
{
	int i; /* contador */
	
	/* loop 11 vezes: durante cada intera��o, calcula
		fatorial( i ) e mostra o resultado */
	for( i = 0; i <= 10; i++ ){
		printf( "%2d! = %ld\n", i, factorial( i ) );
	} /* fim do for */
	
	return 0; /* indica conclus�o bem-sucedida */
} /* fim do main */

/* defini��o recursiva da fun��o fatorial */
long factorial( long number )
{
	/* caso b�sico */
	if( number <= 1 ){
		return 1;
	} /* fim fo if */
	else{ /* etapa recursiva */
		return ( number * factorial( number - 1 ) );
	} /* fim do else */
} /* fim da fun��o factorial */
