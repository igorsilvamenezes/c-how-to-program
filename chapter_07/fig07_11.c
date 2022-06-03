/* Figura 7.11: fig07_11.c
	Imprimindo uma string um caracter por vez usando
	um ponteiro não constante para dados constantes */
	
#include <stdio.h>

void printCharacters( const char *sPtr ); 

int main( void )
{
	/* inicializa array de char */
	char string[] = "imprime caracteres de uma string";
	
	printf( "A string eh:\n" );
	printCharacters( string );
	printf( "\n" );
	return 0; /* fim do main */
} /* fim do main */

/* sPtr não pode modificar o caractere ao qual aponta,
	ou seja, sPtr é um pondeiro "somente leitura" */
void printCharacters( const char *sPtr )
{
	/* loop pela string inteira */
	for( ; *sPtr != '\0'; sPtr++ ){ /* sem inicialização */
		printf( "%c", *sPtr );
	} /* fim do for */
} /* fim da função printCharacters */
