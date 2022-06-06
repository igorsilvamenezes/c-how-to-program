/* Fig. 8.18: fig08_18.c
	Usando strcpy e strncpy */
#include <stdio.h>
#include <string.h>

int main( void )
{
	char x[] = "Parabens a voce"; /* inicializa array de char x */
	char y[ 25 ]; /* cria array de char y */
	char z[ 15 ]; /* cria array de char z */
	
	/* copia conteúdo de z em y */
	printf( "%s%s\n%s%s\n",
			"A string no array x eh: ", x,
			"A string no array y eh: ", strcpy( y, x ) );
			
	/*copia primeiros 14 caracteres de z em z.
		Não copia caractere nulo. */
	strncpy( z, x, 14 );
	
	z[ 14 ] = '\0'; /* termina string em z */
	printf( "A string no array z eh: %s\n", z );
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
