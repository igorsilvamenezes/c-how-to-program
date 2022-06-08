/* Fig. 8.34: fig08_35.c
	Usando memset */
#include <stdio.h>
#include <string.h>

int main( void )
{
	char string1[ 15 ] = "BBBBBBBBBBBBBB"; /* inicializa string1 */
	
	printf( "string1 = %s\n", string1 );
	printf( "string1 depois de memset = %s\n", memset( string1, 'b', 7 ) );
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
