/* Figura 7.20: fig07_20.c
	Usando notações de subscrito e ponteiro como arrays */

#include <stdio.h>

int main( void )
{
	int b[] = { 10, 20, 30, 40 }; /* inicializa array b */
	int *bPtr = b; /* define bPtr para apontar para array b */
	int i; /* contador */
	int offset; /* contador */
	
	/* mostra array b usando notação de subscrito de array */
	printf( "Array b impresso com:\nNotacao de subscrito de array\n" );
	
	/* loop pelo array b */
	for( i = 0; i < 4; i++ ){
		printf( "b[ %d ] = %d\n", i, b[ i ] );
	} /* fim do for */
	
	/* mostra array b usando nome do array e notação de ponteiro/deslocamento */
	printf( "\nNotacao de ponteiro/offset onde\n"
			"o ponteiro eh o nome do array\n" );
			
	/* loop pelo array b */
	for( offset = 0; offset < 4; offset++ ){
		printf( "*(b = %d ) = %d\n", offset, *( b + offset ) );
	} /* fim do for */
	
	/* mostra array b usando bPtr e notação de subscrito de array */
	printf( "\nNotacao de subscrito de ponteiro\n" );
	
	/* loop pelo array b */
	for( i = 0; i < 4; i++ ){
		printf( "bPtr[ %d ] = %d\n", i, bPtr[ i ] );
	} /* fim do for */
	
	/* mostra array b usando bPtr e notação de ponteiro/deslocamento */
	printf( "\nNotacao de ponteiro/deslocamento\n" );
	
	/* loop pelo array b */
	for( offset = 0; offset < 4; offset++ ){
		printf( "( bPtr + %d ) = %d\n", offset, *( bPtr + offset ) );
	} /* fim do for */
	
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
