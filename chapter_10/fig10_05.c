/* Figura 10.5: fig10_05.c
	Exemplo de uma uni�o */
#include <stdio.h>

/* declara��o da union number */
union number {
	int x;
	double y;
}; /* fim da union number */

int main( void )
{
	union number value; /* declara vari�vel de union */
	
	value.x = 100; /* coloca um inteiro da union */
	printf( "%s\n%s\n%s\n %d\n\n%s\n %f\n\n\n",
		"Coloca um valor no menbro inteiro",
		"e mostra os dois membros.",
		"int:", value.x,
		"double:", value.y );
		
	value.y = 100.0; /* coloca um double na mesma union */
	printf( "%s\n%s\n%s\n %d\n\n%s\n %f\n",
		"Coloca um valor no menbro de ponto flutuante",
		"e mostra os dois membros.",
		"int:", value.x,
		"double:", value.y );
	return 0; /* indica conclus�o bem-sucedida */
} /* fim do main */
