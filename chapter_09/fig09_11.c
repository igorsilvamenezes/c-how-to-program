/* Fig 9.11: fig09_11.c
	Alinhando valores à direita e à esquerda */
#include <stdio.h>

int main( void )
{
	printf( "%10s%10d%10c%10f\n\n", "ola", 7, 'a', 1.23 );
	printf( "%-10s%-10d%-10c%-10f\n", "ola", 7, 'a', 1.23 );
	return 0; /* indica conclusao bem-sucedida */	
} /* fim do main */
