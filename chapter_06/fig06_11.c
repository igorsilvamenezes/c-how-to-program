/* Figura 6.11: fig06_11.c 
	Arrays estáticos são inicializados em zero */
	
#include <stdio.h>

void staticArrayInt( void ); /* protótipo de função */
void automaticArrayInt( void ); /* protótipo de função */

/* função main inicia a execução do programa */
int main( void )
{
	printf( "Primeira chamada para cada funcao:\n" );
	staticArrayInt();
	automaticArrayInt();
	
	printf( "\n\nSegunda chamada para cada fucao:\n" );
	staticArrayInt();
	automaticArrayInt();
	
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */

/* função para demonstrar um array estático */
void staticArrayInt( void )
{
	/* inicializa elementos em 0 na primeira vez que a função é chamada */
	static int array1[ 3 ];
	int i; /* contador */
	
	printf( "\nValores na entrada de staticArrayInt:\n" );
	
	/* mostra conteúdo de array1 */
	for( i = 0; i <= 2; i++ ){
		printf( "array1[ %d ] = %d ", i, array1[ i ] );
	} /* fim do for */	
	
	printf( "\nValores na saida de staticArrayInt:\n" );
	
	/* modifica e mostra conteúdo de array1 */
	for( i = 0; i <= 2; i++ ){
		printf( "array1[ %d ] = %d ", i, array1[ i ]  += 5 );
	} /* fim do for */
} /* fim da função staticArrayInt */

/* função para demonstrar um array lógico automático */
void automaticArrayInt( void )
{
	/* inicializa elementos toda vez que a função é chamada */
	int array2[ 3 ] = { 1, 2, 3 };
	int i; /* contador */
	
	printf( "\n\nValores na entrada de automaticArrayInt:\n" );
	
	/* exibe conteúdo de array2 */
	for( i = 0; i <= 2; i++ ){
		printf( "array2[ %d ] = %d ", i, array2[ i ] );
	} /* fim do for */
	
	printf( "\nValores na saida de automaticArrayInt:\n" );
		
	/* modifica e exibe conteúdo de array2 */
	for( i = 0; i <= 2; i++ ){
		printf( "array2[ %d ] = %d ", i, array2[ i ] += 5  );
	} /* fim do for */
} /* fim da função automaticArrayInt */
