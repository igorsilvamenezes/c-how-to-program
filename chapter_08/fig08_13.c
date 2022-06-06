/* Fig. 8.13: fig08_13.c
	Usando gets e putchar */
#include <stdio.h>

void reverse( const char *const sPtr ); /* protótipo */

int main( void )
{
	char sentence[ 80 ]; /* cria array de char */
	
	printf( "Digite uma linha de texto:\n" );

	/* usa fgets para ler linha de texto */
	fgets( sentence, 80, stdin );
	
	printf( "\nA linha impressa na ordem inversa eh:\n" );
	reverse( sentence );
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */

/* envia caracteres recursivamente na string na ordem reversa */
void reverse( const char *const sPtr )
{
	/* se final da string */
	if( sPtr[ 0 ] == '\0' ){ /* caso básico */
		return;
	} /* fim do if */
	else{ /* se não for final da string */
		reverse( &sPtr[ 1 ] ); /* etapa de recursão */
		putchar( sPtr[ 0 ] ); /* usa putchar para exibir caractere */
	} /* fim do else */
} /* fim da função reverse */
