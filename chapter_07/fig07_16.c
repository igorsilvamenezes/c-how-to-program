/* Figura 7.16: fig07_16.c
	A aplica��o de sizeof a um nome de array retorna
	o n�mero de bytes no array */
#include <stdio.h>

size_t getSize( float *ptr ); /* prot�tipo */

int main( void )
{
	float array[ 20 ]; /* cria array */
	
	printf( "O numero de bytes no array eh %d"
			"\nO numero de bytes retornados por getSize eh %d\n",
			sizeof( array ), getSize( array ) );
	return 0; /* indica conclus�o bem-sucedida */
} /* fim do main */

/* retorna tamanho do ptr */
size_t getSize( float *ptr )
{
	return sizeof( ptr );
} /* fim da fun��o getSize */
