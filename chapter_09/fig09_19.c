/* Fig 9.19: fig09_19.c
	Lendo números de ponto flutuante */
#include <stdio.h>

int main( void )
{
	double a;
	double b;
	double c;
	
	printf( "Digite tres números de ponto flutuante: \n" );
	scanf( "%le%lf%lg", &a, &b, &c );
	
	printf( "Estes são os numeros em ponto flutuante: \n" );
	printf( "notacao de ponto flutuante simpes:\n" );
	printf( "%f\n%f\n%f\n", a, b, c );
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
