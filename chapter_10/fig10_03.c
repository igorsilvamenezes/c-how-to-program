/* Figura 10.3: fig10_03.c
	Programa para embaralhar e distribuir cartas usando estruturas */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* declaração da estrutura card */
struct card {
	const char *face; /* declara ponteiro face */
	const char *suit; /* declara ponteiro suit */
}; /* fim da estrutura card */

typedef struct card Card; /* novo nome de tipo para struct card */

/* portótipos */
void fillDeck( Card * const wDeck, const char *wFace[],
	const char *wSuit[] );
void shuffle( Card * const wDeck );
void deal( const Card * const wDeck );

int main ( void )
{
	Card deck[ 52 ]; /* declara array de cartas */
	
	/* inicializa array de ponteiros */
	const char *face[] = { "As", "Dois", "Tres", "Quatro", "Cinco",
		"Seis", "Sete", "Oito", "Nove", "Dez",
		"Valete", "Dama", "Rei" };
		
	/* inicializa array de ponteiros */
	const char *suit[] = { "Copas", "Ouros", "Paus", "Espadas" };
	
	srand( time( NULL ) ); /* torna aleatório */
	
	fillDeck( deck, face, suit ); /* carrega o baralho com Cards */	
	shuffle( deck ); /* coloca Cards em ordem aleatória */
	deal( deck ); /* distribui as 52 Cards */
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */

/* coloca strings nas estruturas Card */
void fillDeck( Card * const wDeck, const char * wFace[], 
	const char * wSuit[] )
{
	int i; /* contador */
	
	/* loop por wDeck */
	for( i = 0; i <= 51; i++ ){
		wDeck[ i ].face = wFace[ i % 13 ];
		wDeck[ i ].suit = wSuit[ i / 13 ];
	} /* fim do for */
} /* fim da função fillDeck */

/* mistura cartas */
void shuffle( Card *const wDeck )
{
	int i; /* contador */
	int j; /* variável para manter o valor aleatório entre 0 - 51 */
	Card temp; /* declara estrutura temporária para trocar Cards */
	
	/* loop por wDeck trocando cartas aleatóriamente */
	for( i = 0; i <= 51; i++ ){
		j = rand() % 52;
		temp = wDeck[ i ];
		wDeck[ i ] = wDeck[ j ];
		wDeck[ j ] = temp;
	} /* fim do for */
} /* fim da função shuffle */

/* distribui cartas */
void deal( const Card * const wDeck )
{
	int i; /* contador */
	
	/* loop por wDeck */
	for( i = 0; i <= 51; i++ ){
		printf( "%6s de %-8s%s", wDeck[ i ]. face, wDeck[ i ].suit,
			( i + 1 ) % 4 ? " " : "\n" );
	} /* fim do for */
} /* fim da função deal */
