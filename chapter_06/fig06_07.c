/* Figura 6.7: fig06_07.c
	Programa de pesquisa com estudantes */
	
#include <stdio.h>

#define RESPONSE_SIZE 40 /* define tamanhos dos array */
#define FREQUENCY_SIZE 11

/* função main inicia a execução do programa */
int main( void )
{
	int answer; /* contador para percorrer 40 respostas */
	int rating; /* contador para percorrer frequências 1-10 */
	
	/* inicializa contadores de frequeência em 0 */
	int frequency[ FREQUENCY_SIZE ] = { 0 };
	
	/* coloca as resposta da pesquisa no array responses */
	int responses[ RESPONSE_SIZE ] = { 1, 2, 6, 4, 8, 5, 9, 7, 8, 10,
		1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7, 5, 6, 6,
		5, 6, 7, 5, 6, 4, 8, 6, 8, 10 };
		
	/* para cada resposta, seleciona valor de um elemento do array responses 
		e usa esse valor como indice na frequência dos array para
		determinar elemento a ser incrementado */
	for( answer = 0; answer < RESPONSE_SIZE; answer++ ){
		++frequency[ responses[ answer ] ];
	} /* fim do for */
	
	/* mostra resultado */
	printf( "%s%17s\n", "Avaliacao", "Frequencia" );
	
	/* listas de impressão das frequências em um formato tabular */
	for( rating = 1; rating < FREQUENCY_SIZE; rating++ ){
		printf( "%6d%13d\n", rating, frequency[ rating ] );
	} /* fim do for */
	
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
