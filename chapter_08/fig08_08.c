/* Figura 8.08: fig08_08.c
	Usando atol */
#include <stdio.h>
#include <stdlib.h>

int main( void )
{
	long l; /* variável para manter a string convertida */
	
	l = atol( "1000000" );
	
	printf( "%s%ld\n%s%ld\n",
		"A string \"1000000\" convertida em long int eh ", l, 
		"O valor convertido dividido por 2 eh: ", l / 2 );
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
