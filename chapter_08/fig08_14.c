/* Fig. 8.14: fig08_14.c
	Usando getchar e puts */
#include <stdio.h>

int main( void )
{
	char c; /* variável para manter caractere digitado pelo usuário */
	char sentence[ 80 ]; /* cria array de char */
	int i = 0; /* inicializa contador i*/
	
	/* pede ao usuário que digite linha de texto */
	puts( "Digite um linha de texto:" );
	
	/* usa getchar para ler cada caractere */
	while( ( c = getchar() ) != '\n' ){
		sentence[ i++ ] = c;
	} /* fim do while */
	
	sentence[ i ] = '\0'; /*finaliza string */
	
	/* usa puts para exibir a sentença */
	puts( "\nA linha digita foi: " );
	puts( sentence );
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
