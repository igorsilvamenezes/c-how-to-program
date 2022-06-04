/* Fig. 8.11: fig08_11.c
	Usando strtoul */
#include <stdio.h>
#include <stdlib.h>

int main( void )
{
	const char *string = "1234567abc"; /* inicializa ponteiro de string */
	unsigned long x; /* variável para menter sequência convertida */
	char *remainderPtr; /* cria ponteiro de char */
	
	x = strtoul( string, &remainderPtr, 0 );
	
	printf( "%s\"%s\"\n%s%lu\n%s\"%s\"\n%s%lu\n",
		"A string origianl  eh ", string ,
		"O valor convertido eh ", x,
		"O resto da string original eh ",
		remainderPtr,
		"O valor convertido menos 567 eh ", x - 567 );
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
