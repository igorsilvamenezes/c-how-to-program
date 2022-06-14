/* Figura 10.5: fig10_05.c
	Exemplo de uma união */
#include <stdio.h>

/* declaração da union number */
union number {
	int x;
	double y;
}; /* fim da union number */

int main( void )
{
	union number value; /* declara variável de union */
	
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
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
