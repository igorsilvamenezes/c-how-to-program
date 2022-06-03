/* Figura 7.17: fig07_17.c
	Demonstrando o operador sizeof */
#include <stdio.h>

int main( void )
{
	char c;
	short s;
	int i;
	long l;
	float f;
	double d;
	long double ld;
	int array[ 20 ]; /* criar array de 20 elementos int */
	int *ptr = array; /* cria ponteiro para array */
	
	printf( "\t\tsizeof c = %d\tsizeof(char) = %d"
			"\n		sizeof s = %d\tsizeof(short) = %d"
			"\n		sizeof i = %d\tsizeof(int) = %d"
			"\n		sizeof l = %d\tsizeof(long) = %d"
			"\n		sizeof f = %d\tsizeof(float) = %d"
			"\n		sizeof d = %d\tsizeof(double) = %d"
			"\n		sizeof ld = %d\tsizeof(long double) = %d"
			"\n \t\tsizeof array = %d"
			"\n \t\tsizeof ptr = %d\n",
			sizeof c, sizeof( char ), sizeof s, sizeof( short), sizeof i,
			sizeof( int ), sizeof l, sizeof( long ), sizeof f,
			sizeof( float ), sizeof d, sizeof( double ), sizeof ld,
			sizeof( long double ), sizeof array, sizeof ptr );
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
