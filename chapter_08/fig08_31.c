/* Fig. 8.31: fig08_31.c
	Usando memcpy */
#include <stdio.h>
#include <string.h>

int main( void )
{
	char s1[ 18 ]; /* cria array de char s1 */
	char s2[] = "Copie essa string"; /*  inicializa array de char s2 */
	
	memcpy( s1, s2, 18 );
	printf( "%s\n%s\"%s\"\n",
		"Depois que s2 eh copiado em sq com memcpy,",
		"s1 contem ", s1 );
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
