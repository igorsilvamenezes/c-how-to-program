/* Fig 9.15: fig09_15.c
	Imprimir com a flag 0( zero ) preenche com zzeros iniciais */
#include <stdio.h>

int main( void )
{
	printf( "%+09d\n", 452 );
	printf( "%09d\n", 452 );
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
