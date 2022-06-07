/* Fig. 8.28: fig08_28.c
	Usando strstr */
#include <stdio.h>
#include <string.h>

int main( void )
{
	const char *string1 = "abcdefabcdef"; /* string a procurar */
	const char *string2 = "def"; /* string a ser procurada */
	
	printf( "%s%s\n%s%s\n\n%s\n%s%s\n",
		"string1 = ", string1, "string2 = ", string2,
		"O restante de string1 que comeca com a", 
		"primeira ocorrencia de string2 e: ",
		strstr( string1, string2 ) );
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
