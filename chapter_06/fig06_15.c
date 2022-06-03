/* Fingura 6.15: fig06_15.c
	Esse programa ordena os valores de um array em ordem crescente */
	
#include <stdio.h>
#define SIZE 10

/* função main inicia a execução do programa */
int main( void )
{
	/* inicializa a */
	int a[ SIZE ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
	int pass; /* contador de passada */
	int i; /* contador de comparação */
	int hold; /* local temporário usado para trocar elementos do array */
	
	printf( "Itens de dados na ordem original\n" );
	
	/* imprime array original */
	for( i = 0; i < SIZE; i++ ){
		printf( "%4d", a[ i ] );
	} /* fim do for */
	
	/* bubble sort */
	/* loop para controlar número de passadas */
	for( pass = 1; pass < SIZE; pass++ ){
		
		/* loop para controlar número de comparações por passada */
		for( i = 0; i < SIZE; i++ ){
			
			/* compara elementos adjacentes e os troca se o primeiro
				elemento for maior que o segundo elemento */
			if( a[ i ] > a[ i + 1 ] ){
				hold = a[ i ];
				a[ i ] = a[ i + 1 ];
				a[ i + 1 ] = hold;
			} /* fim do if */
		} /* fim do for interno*/
	} /* fim do for externo */
	
	printf( "\nItens de dados em ordem cresente\n" );
	
	/* imprime array ordenado */
	for( i = 0; i < SIZE; i ++ ){
		printf( "%4d", a[ i ] );
	} /* fim do for */
	
	printf( "\n" );
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
