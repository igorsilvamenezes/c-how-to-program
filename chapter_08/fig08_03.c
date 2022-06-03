/* Figura 8.3: fig_08_03.c
	Usando funções islower, isupper, tolower, toupper */
#include <stdio.h>
#include <ctype.h>

int main( void )
{
	printf( "%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n",
		"De acordo com islower: ",
		islower( 'p' ) ? "p eh uma " : "p nao eh uma ",
		"letra minuscula",
		islower( 'P' ) ? "P eh uma " : "P nao eh uma ",
		"letra minuscula",
		islower( '5' ) ? "5 eh uma " : "5 nao eh uma ",
		"letra minuscula",
		islower( '!' ) ? "! eh uma " : "! nao eh uma ",
		"letra minuscula" );
		
	printf( "%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n",
		"De acordo com isupper: ",
		isupper( 'D' ) ? "p eh uma " : "p nao eh uma ",
		"letra maiuscula",
		isupper( 'd' ) ? "d eh uma " : "d nao eh uma ",
		"letra maiuscula",
		isupper( '8' ) ? "8 eh uma " : "8 nao eh uma ",
		"letra maiuscula",
		isupper( '$' ) ? "$ eh uma " : "$ nao eh uma ",
		"letra maiuscula" );
		
	printf( "%s%c\n%s%c\n%s%c\n%s%c\n",
		"u convertido em maiuscula eh ", toupper( 'u' ),
		"7 convertido em maiuscula eh ", toupper( '7' ),
		"$ convertido em maiuscula eh ", toupper( '$' ),
		"L convertido em minuscula eh ", tolower( 'L' ));
	return 0; /* indica coclunão bem-sucedida */
} /* fim do main */
