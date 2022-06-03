/* Figura 8.06: fig08_06.c
	Usando atof */
#include <stdio.h>
#include <stdlib.h>

int main( void )
{
	double d; /* variável para manter a string convertida */
	
	d = atof( "99.0" );
	
	printf( "%s%.3f\n%s%.3f\n",
		"A string \"99.0\" convertida em double eh ", d,
		"O valor convertido dividido por 2 eh ", d / 2.0 );
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
