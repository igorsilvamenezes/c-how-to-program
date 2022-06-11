/* Fig. 9.5: fig09_05.c 
	Imprimendo strings e caracteres */
#include <stdio.h>

int main( void )
{
	char character = 'A'; /* inicializa char */
	char string[] = "Isso eh uma string"; /* inicializa array de char */
	const char *stringPtr = "Isso tambem eh uma string"; /* ponteiro de char */
	
	printf( "%c\n", character );
	printf( "%s\n", "Isso eh uma string" );
	printf( "%s\n", string );
	printf( "%s\n", stringPtr );
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
