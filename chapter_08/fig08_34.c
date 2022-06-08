/* Fig. 8.34: fig08_34.c
	Usando memchr */
#include <stdio.h>
#include <string.h>

int main( void )
{
	const char *s = "Isso e uma string"; /* inicializa ponteiro de char */
	
	printf( "%s\'%c\'%s\"%s\"\n",
		"O restante de s apos o caractere ", 'r',
		" ser encontrado eh ", memchr( s, 'r', 16 ) );
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
