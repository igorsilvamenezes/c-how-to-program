/* Fig 9.13: fig09_13.c
	Imprimindo um espaço antes dos valores com sinal 
	não precedidos por + ou - */
#include <stdio.h>

int main( void )
{
	printf( "% d\n% d\n", 547, -547 );
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
