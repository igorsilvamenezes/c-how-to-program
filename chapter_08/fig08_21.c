/* Fig. 8.21: fig08_21.c
	usando strcmp e strncmp */
#include <stdio.h>
#include <string.h>

int main( void )
{
	const char *s1 = "Feliz Ano Novo"; /* inicializa ponteiro char */
	const char *s2 = "Feliz Ano Novo"; /* inicializa ponteiro char */
	const char *s3 = "Boas Ferias"; /* inicializa ponteiro char */
	
	printf( "%s%s\n%s%s\n%s%s\n%s%2d\n%s%2d\n%s%2d\n\n",
		"s1 = ", s1, "s2 = ", s2, "s3 = ", s3,
		"strcmp( s1, s2 ) = ", strcmp( s1, s2 ),
		"strcpm( s1, s3 ) = ", strcmp( s1, s3 ),
		"strcmp( s3, s1 ) = ", strcmp( s3, s1 ) );
		
	printf( "%s%2d\n%s%2d\n%s%2d\n",
		"strncmp( s1, s3, 6 ) = ", strncmp( s1, s3, 6 ),
		"strncmp( s1, s3, 7 ) = ", strncmp( s1, s3, 7 ),
		"strncmp( s3, s1, 7 ) = ", strncmp( s3, s1, 7 ) );
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
