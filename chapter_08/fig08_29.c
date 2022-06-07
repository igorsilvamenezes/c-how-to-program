/* Fig. 8.29: fig08_29.c
	Usando strtok */
#include <stdio.h>
#include <string.h>

int main( void )
{
	/* inicializa o array string */
	char string[] = "Essa e uma sentenca com 7 tokens";
	char *tokenPtr; /* cria ponteiro char */
	
	printf( "%s\n%s\n\n%s\n",
		"A string a ser separada em tokens eh:", string,
		"O tokens sao:" );
		
	tokenPtr = strtok( string, " " ); /* inicia a separacao em tokens */
	
	/* continua a separar até que tokenPtr se transforme em NULL */
	while( tokenPtr != NULL ){
		printf( "%s\n", tokenPtr );
		tokenPtr = strtok( NULL, " " ); /* obtem próximo token */
	} /* fim do while */
	
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
