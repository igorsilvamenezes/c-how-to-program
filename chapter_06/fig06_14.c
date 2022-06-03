/* Figura 6.14: fig06_14.c 
	Demosntrando o qualificado de tipo const com arrays */
	
#include <stdio.h>

void tryToModifyArray( const int b[] ); /* prot�tipo de fun��o */

/* fun��o main inicia a execu��o do programa */
int main( void )
{
	int a[] = { 10, 20, 30 }; /* inicializa a */
	
	tryToModifyArray( a );
	
	printf( "%d %d %d\n", a[ 0 ], a[ 1 ], a[ 2 ] );
	return 0; /* indica conclus�o bem-sucedida */;
} /* fim do main */

/* na fun��o tryToModifyArray, array b eh const, de modo que n�o pode ser usado para modificar o array original a em main */
void tryToModifyArray( const int b[] )
{
	b[ 0 ] /= 2; /* erro */
	b[ 1 ] /= 2; /* erro */
	b[ 2 ] /= 2; /* erro */
} /* fim da fun��o tryToModifyArray */
