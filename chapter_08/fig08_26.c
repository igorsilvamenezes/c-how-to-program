/* Fig. 8.26: fig08_26.c
	Usando strrchr */
#include <stdio.h>
#include <string.h>

int main( void )
{
	/* Inicializa ponteiro de char */
	const char *string1 = "Em um zoologico encontram-se muitos animais, inclusive zebras";
	
	int c = 'z'; /* caractere a ser procurado */
	
	printf( "%s\n%s'%c'%s\"%s\"\n",
		"O restante de string1 que comeca com a",
		"ultima ocorrencia do caractere ", c,
		" eh: ", strrchr( string1, c ) );
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
