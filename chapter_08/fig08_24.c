/* Fig. 8.24: fig08_24.c
	Usando strcspn */
#include <stdio.h>
#include <string.h>

int main( void )
{
	/* inicializa dois ponteiros char */
	const char *string1 = "O valor e 3.14159";
	const char *string2 = "1234567890";
	
	printf( "%s%s\n%s%s\n\n%s\n%s%u\n",
		"String1 = ", string1, "string2 = ", string2,
		"O comprimento do segmento inicial de string1",
		"que nao contem caracteres de string2 = ",
		strcspn( string1, string2 ) );
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
