/* Fig 9.18: fig09_18.c
	Lendo inteiros */
#include <stdio.h>

int main( void )
{
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	int g;
	
	printf( "Digite sete inteiros: " );
	scanf( "%d%i%i%i%o%u%x", &a, &b, &c, &d, &e, &f, &g );
	
	printf( "A entrada exibida como inteiro decimal eh: \n" );
	printf( "%d %d %d %d %d %d %d\n", a, b, c, d, e, f, g );
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
