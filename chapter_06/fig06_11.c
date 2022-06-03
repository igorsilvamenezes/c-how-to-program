/* Figura 6.11: fig06_11.c 
	Arrays est�ticos s�o inicializados em zero */
	
#include <stdio.h>

void staticArrayInt( void ); /* prot�tipo de fun��o */
void automaticArrayInt( void ); /* prot�tipo de fun��o */

/* fun��o main inicia a execu��o do programa */
int main( void )
{
	printf( "Primeira chamada para cada funcao:\n" );
	staticArrayInt();
	automaticArrayInt();
	
	printf( "\n\nSegunda chamada para cada fucao:\n" );
	staticArrayInt();
	automaticArrayInt();
	
	return 0; /* indica conclus�o bem-sucedida */
} /* fim do main */

/* fun��o para demonstrar um array est�tico */
void staticArrayInt( void )
{
	/* inicializa elementos em 0 na primeira vez que a fun��o � chamada */
	static int array1[ 3 ];
	int i; /* contador */
	
	printf( "\nValores na entrada de staticArrayInt:\n" );
	
	/* mostra conte�do de array1 */
	for( i = 0; i <= 2; i++ ){
		printf( "array1[ %d ] = %d ", i, array1[ i ] );
	} /* fim do for */	
	
	printf( "\nValores na saida de staticArrayInt:\n" );
	
	/* modifica e mostra conte�do de array1 */
	for( i = 0; i <= 2; i++ ){
		printf( "array1[ %d ] = %d ", i, array1[ i ]  += 5 );
	} /* fim do for */
} /* fim da fun��o staticArrayInt */

/* fun��o para demonstrar um array l�gico autom�tico */
void automaticArrayInt( void )
{
	/* inicializa elementos toda vez que a fun��o � chamada */
	int array2[ 3 ] = { 1, 2, 3 };
	int i; /* contador */
	
	printf( "\n\nValores na entrada de automaticArrayInt:\n" );
	
	/* exibe conte�do de array2 */
	for( i = 0; i <= 2; i++ ){
		printf( "array2[ %d ] = %d ", i, array2[ i ] );
	} /* fim do for */
	
	printf( "\nValores na saida de automaticArrayInt:\n" );
		
	/* modifica e exibe conte�do de array2 */
	for( i = 0; i <= 2; i++ ){
		printf( "array2[ %d ] = %d ", i, array2[ i ] += 5  );
	} /* fim do for */
} /* fim da fun��o automaticArrayInt */
