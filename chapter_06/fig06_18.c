/* Figura 6.18: fig06_18.c
	Pesquisa linear de um array */
#include <stdio.h>
#define SIZE 100

/* prot�tipo de fun��o */
int linearSearch( const int array[], int key, int size );

/* fun��o main inicia a execu��o do programa */
int main( void )
{
	int a[ SIZE ]; /* cria array a */
	int x; /* comntador para inicializar elementos 0-99 do array a */
	int searchKey; /* valor para localizar no array a */
	int element; /* vari�vel para manter local searchKey or -1 */
	
	/* criar dados */
	for( x = 0; x < SIZE; x++ ){
		a[ x ] = 2 * x;
	} /* fim do for */
	
	printf( "Digite chave de pesquisa de inteiro:\n" );
	scanf( "%d", &searchKey );
	
	/* tenta localizar searchKey no array a */
	element = linearSearch( a, searchKey, SIZE );
	
	/* exibe resultados */
	if( element != -1 ){
		printf( "Valor encontrado no elemento %d\n", element );
	} /* fim do if */
	else{
		printf( "Valor nao encontrado\n" );
	} /* fim do main */
	
	return 0; /* indica conclus�o bem-suedida */
} /* fim do main */

/* compara chave com cada elemento do array at� o local ser encontrado
	ou at� o final do array ser alcan�ado; retorna op indice do elemento
	se a chave foi encontrada ou -1 se a chave n�o foi encontrada */
int linearSearch( const int array[], int key, int size ){
	int n; /* contador */
	
	/* loop pelo array */
	for( n = 0; n < size; n++ ){
		
		if( array[ n ] == key ){
			return n; /* retorna o indece da chave */
		} /* fim do if */
	} /* fim do for */
	
	return -1; /* chave n�o encontrada */
} /* fim da fun��o linearSearch */
