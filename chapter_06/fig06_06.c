/* Figura 6.6: fig06_06.c
	Calcula a soma dos elementos do array */
	
#include <stdio.h>

#define SIZE 12

/* função main inicia a execução do programa */
int main( void )
{
	/* usa lista inicializadora para inicializar array */
	int a[ SIZE ] = {1, 3, 5, 4, 7, 2, 99, 16, 45, 67, 89, 45 };
	int i; /* contador */
	int total = 0; /* soma do array */
	
	/* comteúdo da soma do array a */
	for( i = 0; i < SIZE; i++ ){
		total += a[ i ];
	} /* fim do for */
	
	printf( "Total de valores dos elementos do array eh %d\n", total );
	
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
