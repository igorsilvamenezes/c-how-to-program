/* Fig. 8.25: fig08_25.c
	Usando strpbrk */
#include <stdio.h>
#include <string.h>

int main( void )
{
	const char *string1 = "Isso e um teste"; /* inicializa ponteiro de char */
	const char *string2 = "cerrado"; /* inicializa ponteiro de char */
	
	printf( "%s\"%s\"\n'%c'%s\n\"%s\"\n",
		"Dos caracteres em ", string2,
		*strpbrk( string1, string2 ),
		" aparace primeiro em ", string1 );
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
