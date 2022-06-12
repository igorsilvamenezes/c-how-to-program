/* Fig 9.20: fig09_20.c
	Lendo caracteres e strings */
#include <stdio.h>

int main( void )
{
	char x;
	char y[ 9 ];
	
	printf( "Digite uma string: " );
	scanf( "%c%s", &x, &y );
	
	printf( "A entrada foi:\n" );
	printf( "o caractere \"%c\" ", x );
	printf( "e a string \"%s\"\n", y );
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
