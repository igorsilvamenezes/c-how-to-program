/** Figura 4.5: fig04_05.c
	Somat�rio com for */
	
#include <stdio.h>

/* fun��o main inicia a execu��o do programa */
int main( void )
{
	int soma = 0; /* inicializa soma */
	int numero; /* n�mero a ser acrescido � soma */
	
	for( numero = 2; numero <= 100; numero += 2){
		soma += numero; /* adiciona n�mero � soma */
	} /* fim do for */
	
	printf( "Soma eh %d\n", soma ); /* exime soma */
	return 0; /* indica que o programa foi concluido com sucesso */
} /* fim da fun��o main*/
