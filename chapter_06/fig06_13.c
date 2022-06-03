/* Figura 6.13: fig06_13.c
	Passando arrays e elementos individuais do array para funções */
	
#include <stdio.h>

#define SIZE 5

/* protótipos de função */
void modifyArray( int b[], int size );
void modifyElement( int e );

/* função main inicia a execução do programa */
int main( void )
{
	int a[ SIZE ] = { 0, 1, 2, 3, 4 }; /* inicializa a */
	int i; /* contador */
	
	printf( "Efeitos da passagem do array inteiro por referencia:\n\nOs valores do array original sao:\n");
	
	/* imprime na tela array original */
	for( i = 0; i < SIZE; i++ ){
		printf( "%3d", a[ i ] );
	} /* fim do for */
	
	printf( "\n " );
	
	/* passa array a um modifyArray por referencia */
	modifyArray( a, SIZE );
	
	printf( "Os valores do array modificados sao:\n" );
	
	/* array modificado na saída */
	for( i = 0; i < SIZE; i++ ){
		printf( "%3d", a[ i ] );
	} /* fim do for */
	
	/* valor de saída de a[ 3 ] */
	printf( "\n\nEfeitos de passar elemento do array por valor:\n\nO valor de a[ 3 ] eh %d\n", a[ 3 ] );
	
	modifyElement( a[ 3 ] ); /* passa elemento do array a[ 3 ] por valor */
	
	/* mostra valor de a[ 3 ] */
	printf( "O valor de a[ 3 ] eh %d\n", a[ 3 ] );
	
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */

/* na função modifyArray, "b" aponta para o array original "a" na memoria */
void modifyArray( int b[], int size ){
	int j; /* contador */
	
	/* multiplica cada elemento do array por 2 */
	for( j = 0; j < size; j++ ){
		b[ j ] *= 2;
	} /* fim do for */
} /* fim da função modifyArray */

/* na função modifyElement, "e" é uma cópia local do elemento do array a[ 3 ] passado de main */
void modifyElement( int e )
{
	/* multiplica parâmetro por 2 */
	printf( "Valor em modifyElement eh %d\n", e *= 2 );
} /* fim da função modifyElement */
