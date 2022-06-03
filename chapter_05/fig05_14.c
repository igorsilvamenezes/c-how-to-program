/* Figura 5.14: fig05_14.c
	Função recursiva fatorial */
	
#include <stdio.h>

long factorial( long number ); /* protótipo de função */

/* função main inicia a execução do programa */
int main( void )
{
	int i; /* contador */
	
	/* loop 11 vezes: durante cada interação, calcula
		fatorial( i ) e mostra o resultado */
	for( i = 0; i <= 10; i++ ){
		printf( "%2d! = %ld\n", i, factorial( i ) );
	} /* fim do for */
	
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */

/* definição recursiva da função fatorial */
long factorial( long number )
{
	/* caso básico */
	if( number <= 1 ){
		return 1;
	} /* fim fo if */
	else{ /* etapa recursiva */
		return ( number * factorial( number - 1 ) );
	} /* fim do else */
} /* fim da função factorial */
