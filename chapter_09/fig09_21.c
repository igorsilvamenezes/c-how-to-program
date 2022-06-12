/* Fig 9.21: fig09_21.c
	Usando um conjunto de varredura */
#include <stdio.h>

int main( void )
{
	char z[ 9 ]; /* declara array z */
	
	printf( "Digite a string: " );
	scanf( "%[aeiou]", z ); /* procura por um conjunto de caracteres */
	
	printf( "A entrada foi \"%s\"\n", z );
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
