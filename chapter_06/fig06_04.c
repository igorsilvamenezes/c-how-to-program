/* Figura 6.4: fig06_04.c
	Inicializando um array com uma lista de inicializadores */
	
#include <stdio.h>

/* fun��o main inicia a execu��o do programa */
int main( void )
{
	/* usa lista de inicializadores para inicializar array n */
	int a[ 10 ] = { 32, 27, 64, 18, 95, 14, 90, 70, 60, 37 };
	int i; /* contador */
	
	printf( "%s%13s\n", "Elemento", "Valor" );
	
	/* lista conte�do do array em formato tabular */
	for( i = 0; i < 10; i++ ){
		printf( "%7d%13d\n", i, a[ i ]);
	} /* fim do for */
	
	return 0; /* indica conclus�o bem-sucedida */
} /* fim do main */
