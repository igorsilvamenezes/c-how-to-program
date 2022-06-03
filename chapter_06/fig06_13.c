/* Figura 6.13: fig06_13.c
	Passando arrays e elementos individuais do array para fun��es */
	
#include <stdio.h>

#define SIZE 5

/* prot�tipos de fun��o */
void modifyArray( int b[], int size );
void modifyElement( int e );

/* fun��o main inicia a execu��o do programa */
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
	
	/* array modificado na sa�da */
	for( i = 0; i < SIZE; i++ ){
		printf( "%3d", a[ i ] );
	} /* fim do for */
	
	/* valor de sa�da de a[ 3 ] */
	printf( "\n\nEfeitos de passar elemento do array por valor:\n\nO valor de a[ 3 ] eh %d\n", a[ 3 ] );
	
	modifyElement( a[ 3 ] ); /* passa elemento do array a[ 3 ] por valor */
	
	/* mostra valor de a[ 3 ] */
	printf( "O valor de a[ 3 ] eh %d\n", a[ 3 ] );
	
	return 0; /* indica conclus�o bem-sucedida */
} /* fim do main */

/* na fun��o modifyArray, "b" aponta para o array original "a" na memoria */
void modifyArray( int b[], int size ){
	int j; /* contador */
	
	/* multiplica cada elemento do array por 2 */
	for( j = 0; j < size; j++ ){
		b[ j ] *= 2;
	} /* fim do for */
} /* fim da fun��o modifyArray */

/* na fun��o modifyElement, "e" � uma c�pia local do elemento do array a[ 3 ] passado de main */
void modifyElement( int e )
{
	/* multiplica par�metro por 2 */
	printf( "Valor em modifyElement eh %d\n", e *= 2 );
} /* fim da fun��o modifyElement */
