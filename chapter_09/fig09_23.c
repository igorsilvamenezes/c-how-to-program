/* Fig 9.23: fig09_23.c
	Inserindo dados com uma largura de campo */
#include <stdio.h>

int main( void )
{
	int x;
	int y;
	
	printf( "Digite um inteiro com seis digitos: " );
	scanf( "%2d%d", &x, &y );
	
	printf( "Os inteiros digitados foram %d e %d\n", x, y );
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
