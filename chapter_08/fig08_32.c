/* Fig. 8.32: fig08_32.c
	Usando memmove */
#include <stdio.h>
#include <string.h>

int main( void )
{
	char x[] = "Home sweet home "; /* inicializa array char x */
	
	printf( "%s%s\n", "A String no array x antes de memmove eh: ", x );
	printf( "%s%s\n", "A string no array x depois de memmove eh: ",
		memmove( x, &x[ 5 ], 10) );
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
