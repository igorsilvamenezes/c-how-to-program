/* Fig 9.14: fig09_14.c
	Usando a flag # com especificadores de conversão
	o, x, X e qualquer especificador de ponto flutuante */
#include <stdio.h>

int main( void )
{
	int c = 1427; /* inicializa c */
	double p = 1427.0; /* inicializa p */
	
	printf( "%#o\n", c );
	printf( "%#x\n", c );
	printf( "%#X\n", c );
	printf( "\n%g\n", p );
	printf( "%#g\n", p );
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
