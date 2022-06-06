/* Fig. 8.19: fig08_19.c
	usando strcat e strncat */
#include <stdio.h>
#include <string.h>

int main( void )
{
	char s1[ 20 ] = "Feliz "; /* inicialia array de char s1 */
	char s2[] = "Ano Novo "; /* inicializa array de char s2 */
	char s3[ 40 ] = ""; /* inicializa array de char s3 como vazio */
	
	printf( "s1 = %s\ns2 = %s\n", s1, s2 );
	
	/* concatena s2 com s1 */
	printf( "strcat( s1, s2 ) = %s\n", strcat( s1, s2 ) );
	
	/* concatena 6 primeiros caracteres de s1 com s3, Coloca '\0' 
		após último caractere */
	printf( "strncat( s3, s1, 6 ) = %s\n", strncat( s3, s1, 6 ) );
	
	/* concatena s1 com s3 */
	printf( "strcat( s3, s1 ) = %s\n", strcat( s3, s1 ) );
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
