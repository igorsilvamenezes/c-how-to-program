/** Figura 4.5: fig04_05.c
	Somatório com for */
	
#include <stdio.h>

/* função main inicia a execução do programa */
int main( void )
{
	int soma = 0; /* inicializa soma */
	int numero; /* número a ser acrescido à soma */
	
	for( numero = 2; numero <= 100; numero += 2){
		soma += numero; /* adiciona número à soma */
	} /* fim do for */
	
	printf( "Soma eh %d\n", soma ); /* exime soma */
	return 0; /* indica que o programa foi concluido com sucesso */
} /* fim da função main*/
