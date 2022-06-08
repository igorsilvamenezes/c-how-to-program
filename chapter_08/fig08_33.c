/* Fig. 8.33: fig08_33.c
	Usando memcpm */
#include <stdio.h>
#include <string.h>

int main( void )
{
	char s1[] = "ABCDEFG"; /* inicializa array de char s1 */
	char s2[] = "ABCDXYZ"; /* inicializa array de char s2 */
	
	printf( "%s%s\n%s%s\n\n%s%2d\n%s%2d\n%s%2d\n",
		"s1 = ", s1, "s2 = ", s2,
		"memcmp( s1, s2, 4 ) = ", memcmp( s1, s2, 4 ),
		"memcmp( s1, s2, 7 ) = ", memcmp( s1, s2, 7 ),
		"memcmp( s2, s1, 7 ) = ", memcmp( s2, s1, 7 ) );
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
