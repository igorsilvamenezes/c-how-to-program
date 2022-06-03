/* Figura 8.4: fig08_04.c
	Usando funções isspace, iscntrl, ispunct, isprint, isgraph */
#include <stdio.h>
#include <ctype.h>

int main( void )
{
	printf( "%s\n%s%s%s\n%s%s%s\n%s%s\n\n",
		"De acordo com ispace:",
		"Newline", isspace( '\n' ) ? " eh um " : " nao eh um ",
		"caractere de espaco em branco", "Tabulacao horizontal",
		isspace( '\t' ) ? " eh um " : " nao eh um ",
		"caractere de espaco em branco",
		isspace( '%' ) ? " eh um " : " nao eh um ",
		"caractere de espaco em branco" );
		
	printf( "%s\n%s%s%s\n%s%s%s\n\n", "De acordo com iscntrl:",
		"Newline", iscntrl( '\n' ) ? " eh um " : " nao eh um ",
		"caractere de controle",  iscntrl( '$' ) ? " & eh um " : 
		" $ nao eh um ", "caractere de controle" );

	printf( "%s\n%s%s\n%s%s\n%s%s\n\n",
		"De acordo com ispunct:",
		ispunct( ';' ) ? "; eh um " : "; nao eh um ",
		"caractere de pontuacao",
		ispunct( 'Y' ) ? "Y eh um " : "Y nao eh um ",
		"caractere de pontuacao",
		ispunct( '#' ) ? "# eh um " : "# nao eh um ",
		"caractere de pontuacao" );

	printf( "%s\n%s%s\n%s%s%s\n\n", "De acordo com isprint:",
		isprint( '$' ) ? "$ eh um " : "$ nao eh um ",
		"caractere imprimivel",
		"Alerta", isprint( '\a' ) ? " eh um " : " nao eh um ", 
		"caractere imprimivel" );
		
	printf( "%s\n%s%s\n%s%s%s\n\n", "De acordo com isgraph:",
		isgraph( 'Q' ) ? "Q eh um " : "Q nao eh um ",
		"caractere imprimivel diferente de um espaco",
		"Space", isgraph( ' ' ) ? " eh um " : " nao eh um ", 
		"caractere imprimivel diferente de um espaco" );		
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
