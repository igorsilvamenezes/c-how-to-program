/* Figura 7.21: fig07_21.c
	Copiando uma string usando nota��o de array e nota��o de ponteiro */
#include <stdio.h>

void copy1( char *const s1, const char *const s2 ); /* prot�tipo */
void copy2( char *s1, const char *s2 ); /* prot�tipo */

int main( void )
{
	char string1[ 10 ]; /* criar array string1 */
	char *string2 = "Ola"; /* cria um ponteiro para uma string */
	char string3[ 10 ]; /* cria array string2 */
	char string4[] = "Adeus"; /* cria um ponteiro para uma string */
	
	copy1( string1, string2 );
	printf( "string1 = %s\n", string1 );
	
	copy2( string3, string4 );
	printf( "string3 = %s\n", string3 );
	return 0; /* indica conclus�o bem-sucedida */
} /* fim do main */

/* copia s2 para s1 usando nota��o de array */
void copy1( char *const s1, const char *const s2 )
{
	int i; /* contador */
	
	/* loop pelas strings */
	for( i = 0; (s1[ i ] = s2[ i ] ) != '\0'; i++ ){
		; /* n�o faz nada no corpo */	
	} /* fim do for */
} /* fim da fun��o copy1 */	

/* copy s2 para s1 usando nota��o de ponteiro */
void copy2( char *s1, const char *s2 )
{
	/* loop pelas strings */
	for( ; (*s1 = *s2) != '\0'; s1++, s2++ ){
		; /** n�o faz nada no corpo */
	} /* fim do for */
} /* fim da fun��o copy2 */
