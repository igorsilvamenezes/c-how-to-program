/* Fig 9.13: fig09_13.c
	Imprimindo um espa�o antes dos valores com sinal 
	n�o precedidos por + ou - */
#include <stdio.h>

int main( void )
{
	printf( "% d\n% d\n", 547, -547 );
	return 0; /* indica conclus�o bem-sucedida */
} /* fim do main */
