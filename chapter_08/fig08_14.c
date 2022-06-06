/* Fig. 8.14: fig08_14.c
	Usando getchar e puts */
#include <stdio.h>

int main( void )
{
	char c; /* vari�vel para manter caractere digitado pelo usu�rio */
	char sentence[ 80 ]; /* cria array de char */
	int i = 0; /* inicializa contador i*/
	
	/* pede ao usu�rio que digite linha de texto */
	puts( "Digite um linha de texto:" );
	
	/* usa getchar para ler cada caractere */
	while( ( c = getchar() ) != '\n' ){
		sentence[ i++ ] = c;
	} /* fim do while */
	
	sentence[ i ] = '\0'; /*finaliza string */
	
	/* usa puts para exibir a senten�a */
	puts( "\nA linha digita foi: " );
	puts( sentence );
	return 0; /* indica conclus�o bem-sucedida */
} /* fim do main */
