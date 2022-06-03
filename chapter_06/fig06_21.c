/* Figura 6.21: fig06_21.c
	Inicializando arrays multidimensionais */
#include <stdio.h>

void printArray( const int a[][ 3 ] ); /* protótipo de função */

/* função main inicia a execução do programa */
int main( void )
{
	/* inicializa array1, array2, array3 */
	int array1[ 2 ][ 3 ] = { { 1, 2, 3 }, { 4, 5, 6 } };
	int array2[ 2 ][ 3 ] = { 1, 2, 3, 4, 5 };
	int array3[ 2 ][ 3 ] = { { 1, 2 }, { 4 } };
	
	printf( "Valores em array1 por linha sao:\n");
	printArray( array1 );
	
	printf( "Valores em array2 por linha sao:\n" );
	printArray( array2 );
	
	printf( "Valores em array3 por linha sao:\n" );
	printArray( array3 );
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */

/* função para mostrar array com duas linhas e três colunas */
void printArray( const int a[][ 3 ] )
{
	int i; /* contador de linha */
	int j; /* contador de coluna */
	
	/* loop pelas linhas */
	for( i = 0; i <=1; i++ ){
		
		/* imprime valores nas colunas */
		for( j = 0; j <= 2; j++ ){
			printf( "%d ", a[ i ][ j ] );
		} /* fim do for interno */
		
		printf( "\n" ); /* inicia nova linha de resultado */
	} /* fim do for externo */
} /* fim da função printArray */
