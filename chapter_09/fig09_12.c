/* Fig 9.12: fig09_12.c
	Imprimindo numeros com e sem a flag + */
#include <stdio.h>

int main( void )
{
	printf( "%d\n%d\n", 786, -786 );
	printf( "%+d\n%+d\n", 786, -786 );
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
