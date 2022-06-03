/* Figura 6.5: fig06_05.c
	Inicializa elementos do array s com inteiros pares de 2 a 20 */
	
#include <stdio.h>

#define SIZE 10 /* tamanho m�ximo do array */

/* fun��o main inicia a execu��o do programa */
int main( void )
{
	/* constante simb�lica SIZE pode ser usada para especificar tamanho do array */
	int s[ SIZE ]; /* array s tem SIZE  elementos */
	int j; /* contador */
	
	for( j = 0; j < SIZE; j++ ){ /* define os elementos */
		s[ j ] = 2 + 2 * j;
	} /* fim do for */
	
	printf( "%s%13s\n", "Elemento", "Valor" );
	
	/* lista de impress�o do conte�do do array s em formato tabular */
	for( j = 0; j < SIZE; j++ ){
		printf( "%7d%13d\n", j, s[ j ] );
	} /* fim do for */
	
	return 0; /* indica conclus�o bem-sucedida*/
} /* fim do main */
