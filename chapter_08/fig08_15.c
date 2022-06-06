/* Fig. 8.15: fig08_15.c
	Usando sprintf */
#include <stdio.h>

int main( void )
{
	char s[ 80 ]; /* cria array de char */
	int x; /* valor x a ser inserido */
	double y; /* valor y a ser inserido */
	
	printf( "Digite um inteiro e um double:\n" );
	scanf( "%d%lf", &x, &y );
	
	sprintf( s, "inteiro:%6d\ndouble:%8.2f", x, y );
	
	printf( "%s\n%s\n",
			"A saida formatada armazenada no array s eh:", s );
	return 0; /* indica conclusão bem-sucedida */ 
} /* fim do main*/
