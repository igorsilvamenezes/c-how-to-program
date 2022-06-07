/* Fig. 8.23: fig08_23.c
	Usando strchr */
#include <stdio.h>
#include <string.h>

int main( void )
{
	const char *string = "Isso e um teste"; /* inicializa ponteiro de char */
	char character1 = 'u'; /* inicializa character1 */
	char character2 = 'z'; /* inicializa character2 */
	
	/* se character1 foi achado na string */
	if( strchr( string, character1 ) != NULL ){
		printf( "\'%c\' foi achado em \"%s\".\n",
			character1, string );
	} /* fim do if */
	else{ /* se o character1 não foi achado */
		printf( "\'%c\' nao foi achado em \"%s\".\n",
			character1, string );		
	} /* fim do else */
	
	/* se character2 foi achado na string */
	if( strchr( string, character2 ) != NULL ){
		printf( "\'%c\' foi achado em \"%s\".\n",
		character2, string );
	} /* fim do if */
	else{ /* se character2 não foi achado */
		printf( "\'%c\' nao foi achado em \"%s\".\n",
		character2, string );
	} /* fim do else */
	
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
