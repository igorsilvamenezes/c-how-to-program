/* Figura 10.16: fig10_16.c
	Representando cartas com campos em uma struct */

#include <stdio.h>

/* declaração da estrutura bitCard com campos de bit */
struct bitCard {
	unsigned face : 4; /* 4 bits; 0-15 */
	unsigned suit : 2; /* 2 bits; 0-3 */
	unsigned color : 1; /* 1 bit; 0-1 */
}; /* fim da  struct bitCard */

typedef struct bitCard Card; /* novo nome de tipo para a struct bitCard */ 

void fillDeck( Card * const wDeck ); /* protótipo */
void deal( const Card * const wDeck ); /* protótipo */

int main( void )
{
	Card deck[ 52 ]; /* cria array de Cards */
	
	fillDeck( deck );
	deal( deck );
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */

/* inicializa Cards */
void fillDeck( Card * const wDeck )
{
	int i; /* contador */
	
	/* loop por wDeck */
	for( i = 0; i <= 51; i++ ){
		wDeck[ i ].face = i % 13;
		wDeck[ i ].suit = i / 13;
		wDeck[ i ].color = i / 26;
	} /* fim fo for */
} /* fim da função fillDeck */

/* apresenta cartas em formato de duas colunas; cartas 0-25 subscritadas 
	com k1 (coluna 1); cartas 26-51 subscritadas com k2 (coluna 2)*/
void deal( const Card * const wDeck )
{
	int k1; /* subscrito 0-25 */
	int k2; /* subscriot 26-51 */
	
	/* loop por wDeck */
	for( k1 = 0, k2 = k1 + 26; k1 <= 25; k1++, k2++ ){
		printf( "Carta:%3d  Naipe:%2d  Cor:%2d  ",
			wDeck[ k1 ].face, wDeck[ k1 ].suit, wDeck[ k1 ].color );
		printf( "Carta:%3d  Naipe:%2d  Cor:%2d\n",
			wDeck[ k2 ].face, wDeck[ k2 ].suit, wDeck[ k2 ].color );
	} /* fim do for */
} /* fim da função deal */
