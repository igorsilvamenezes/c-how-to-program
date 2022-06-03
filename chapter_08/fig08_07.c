/* Figura 8.7: fig08_07.c
	Usando atoi */
#include <stdio.h>
#include <stdlib.h>

int main( void )
{
	int i; /* variável para manter string convertida */
	
	i = atoi( "2593" );
	
	printf( "%s%d\n%s%d\n",
		"A string \"2593\" convertida em int eh ", i,
		"O valor convertido menos 593 eh ", i - 593 );
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
