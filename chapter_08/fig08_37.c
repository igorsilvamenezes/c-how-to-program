/* Fig. 8.37: fig08_37.c
	Usando strerror */
#include <stdio.h>
#include <string.h>

int main( void )
{
	printf( "%s\n", strerror( 2 ) );
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
