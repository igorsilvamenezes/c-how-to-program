/* Fig. 9.4: fig09_04.c
	Imprimento n�meros de ponto flutuante com
	especificadores de convers�o de ponto flutuante */

#include <stdio.h>

int main( void )
{
	printf( "%e\n", 1234567.89 );
	printf( "%e\n", +1234567.89 );
	printf( "%e\n", -1234567.89 );
	printf( "%E\n", 1234567.89 );
	printf( "%f\n", 1234567.89 );
	printf( "%g\n", 1234567.89 );
	printf( "%G\n", 1234567.89 );
	return 0; /* indica conclus�o bem-sucedida */
} /* fim do main */
