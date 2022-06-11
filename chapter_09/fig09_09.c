/* Fig 9.9: fig09_09.c
	Usando pricisão ao imprimir números inteiros,
	números em ponto flutuante e strings */
#include <stdio.h>

int main( void )
{
	int i = 873; /* inicializa int i */
	double f = 123.94536; /* inicializa double f */
	char s[] = "Feliz Aniversario"; /* inicializa array s de char */
	
	printf( "Usando precisao para inteiros\n" );
	printf( "\t%.4d\n\t%.9d\n\n", i, i );
	
	printf( "Usando precisao para numeros em ponto flutuante\n" );
	printf( "\t%.3f\n\t%.3e\n\t%.3g\n\n", f, f, f );
	
	printf( "Usando procisao para strings\n" );
	printf( "\t%.11s\n", s );
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
