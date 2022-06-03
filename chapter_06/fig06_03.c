/* Figura 6.3: fig06_03.c
	Inicializando um array */
	
#include <stdio.h>

/* fun��o main inicia a execu��o do programa */
int main( void )
{
	int n[ 10 ]; /* n � um array de 10 inteiros */
	int i; /* contador */
	
	/* inicialia elementos do array n como 0 */
	for(i = 0; i < 10; i++ ){
		n[ i ] = 0; /* define elemento no local i como 0 */
	} /* fim do for */
	
	printf( "%s%13s\n", "Elemento", "Valor" );
	
	/* sa�da na tela de conte�udo do array n em formato tabular */
	for( i = 0; i < 10; i++ ){
		printf( "%7d%13d\n", i, n[ i ] );
	} /* fim do for */
	
	return 0; /* indica conclus�o bem-sucedida */
} /* fim do main */
