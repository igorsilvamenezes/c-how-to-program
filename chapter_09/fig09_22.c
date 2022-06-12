/* Fig 9.22: fig09_22.c
	Usando um conjunto de varredura invertido */
#include <stdio.h>

int main( void )
{
	char z[ 9 ]; 
	
	printf( "Digite uma string: " );
	scanf( "%[^aeiou]", z ); /* conjunto de varredura invertido */
	
	printf( "A emtrada foi \"%s\"\n", z );
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
