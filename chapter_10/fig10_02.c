/* Figura 10.2: fig10_02.c
	Usando os operadores de membro da estrutura
	e de ponteiro da estrutura */
#include <stdio.h>

/* declaração da estrutura card */
struct card {
	char *face; /* declara ponteiro face */	
	char *suit; /* declara ponteiro suit */
}; /* fim da estrutura card */

int main( void )
{
	struct card aCard; /* declara uma variável struct card */
	struct card *cardPtr; /* declara ponteiro para uma struct card */
	
	/* coloca string em aCard */
	aCard.face = "As";
	aCard.suit = "Espadas";
	
	cardPtr = &aCard; /* atribui endereço de aCard a cardPtr */
	
	printf( "%s%s%s\n%s%s%s\n%s%s%s\n", aCard.face, " de ", aCard.suit,
		cardPtr->face, " de ", cardPtr->suit,
		( *cardPtr ).face, " de ", ( *cardPtr ).suit  );
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
