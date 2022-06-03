/* Figura 6.5: fig06_05.c
	Inicializa elementos do array s com inteiros pares de 2 a 20 */
	
#include <stdio.h>

#define SIZE 10 /* tamanho máximo do array */

/* função main inicia a execução do programa */
int main( void )
{
	/* constante simbólica SIZE pode ser usada para especificar tamanho do array */
	int s[ SIZE ]; /* array s tem SIZE  elementos */
	int j; /* contador */
	
	for( j = 0; j < SIZE; j++ ){ /* define os elementos */
		s[ j ] = 2 + 2 * j;
	} /* fim do for */
	
	printf( "%s%13s\n", "Elemento", "Valor" );
	
	/* lista de impressão do conteúdo do array s em formato tabular */
	for( j = 0; j < SIZE; j++ ){
		printf( "%7d%13d\n", j, s[ j ] );
	} /* fim do for */
	
	return 0; /* indica conclusão bem-sucedida*/
} /* fim do main */
