/* Fig 9.7: fig09_07.c
	Usando os especificadores de convers�o p, n e % */
#include <stdio.h>

int main( void )
{
	int *ptr; /* declara ponteiro para int */
	int x = 12345; /* inicializa int x */
	int y; /* declara int y */
	
	ptr = &x; /* atribui endere�o de x a ptr */
	printf( "O valor de ptr eh %p\n", ptr );
	printf( "O endereco de x eh %p\n\n", &x );
	
	printf( "Total de caracteres impressos nessa linha:%n", &y );
	printf( " %d\n\n", y );
	
	y = printf( "Essa linha tem 29 caracteres\n" );
	printf( "%d caracteres foram impressos\n\n", y );
	
	printf( "Imprimindo um %% em uma string de controle de formato\n" );
	return 0; /* inidica conclus�o bem-sucedida */
} /* fim do main */
