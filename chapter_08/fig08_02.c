/* Figura 8.2: fig08_02.c
	Usando funções isdigit, isalpha, isalnum e isxdigit */
#include <stdio.h>
#include <ctype.h>


int main ( void )
{
	printf( "%s\n%s%s\n%s%s\n\n", "De acordo com isdigit: ",
		isdigit( '8' ) ? "8 eh um " : "8 nao eh um ", "digito",
		isdigit( '#' ) ? "# eh um " : "# nao eh um ", "digito" );
		
	printf( "%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n",
		"De acordo com isalpha: ",
		isalpha( 'A') ? "A eh uma " : "A nao eh uma ", "letra",
		isalpha( 'b') ? "b eh uma " : "b nao eh uma ", "letra",
		isalpha( '&') ? "& eh uma " : "& nao eh uma ", "letra",
		isalpha( '4') ? "4 eh uma " : "4 nao eh uma ", "letra" );
		
	printf( "%s\n%s%s\n%s%s\n%s%s\n\n",
		"De acordo com isalnum: ",
		isalnum( 'A' ) ? "A eh um " : "A nao eh um ",
		"digito ou uma letra",
		isalnum( '8' ) ? "8 eh um " : "8 nao eh um ",
		"digito ou uma letra",
		isalnum( '#' ) ? "# eh um " : "# nao eh um ",
		"digito ou uma letra");
		
	printf( "%s\n%s%s\n%s%s\n%s%s\n%s%s\n%s%s\n",
		"De acordo com isxdigit: ",
		isxdigit( 'F') ? "F eh um " : "F nao eh um ",
		"digito hexadecimal",
		isxdigit( 'J') ? "J eh um " : "J nao eh um ",
		"digito hexadecimal",
		isxdigit( '7') ? "7 eh um " : "7 nao eh um ",
		"digito hexadecimal",
		isxdigit( '$') ? "$ eh um " : "$ nao eh um ",
		"digito hexadecimal",
		isxdigit( 'f') ? "f eh um " : "f nao eh um ",
		"digito hexadecimal" );
		
	return 0; /* indica conclusão bem-sucedida */
} /*  fim do main */
