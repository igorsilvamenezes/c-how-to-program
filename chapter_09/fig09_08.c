/* fig 9.8: fig09_08.c
	Imprimindo inteiros alinhados à direita */
#include <stdio.h>

int main( void )
{
	printf( "%4d\n", 1 );
	printf( "%4d\n", 12 );
	printf( "%4d\n", 123 );
	printf( "%4d\n", 1234 );
	printf( "%4d\n\n", 12345 );
	
	printf( "%4d\n", -1 );
	printf( "%4d\n", -12 );
	printf( "%4d\n", -123 );
	printf( "%4d\n", -1234 );
	printf( "%4d\n", -12345 );
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
