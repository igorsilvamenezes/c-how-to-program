/* Figura 7.24: fig07_24.c
	Programa de embaralhamento e distribui��o de cartas */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* prot�tipos */
void embaralha( int wbaralho[][ 13 ] );
void distribui( const int wbaralho[][ 13 ], const char *wface[],
		const char *wsuit[] );
			
int main( void )
{
	/* inicializa array naipe */
	const char *suit[ 4 ] = { "Copas", "Ouro", "Paus", "Espadas" };
	
	/* inicializa arra de face */
	const char *face[ 13 ] = 
			{ 	"As", "Dois", "Tres", "Quatro", 
				"Cinco", "Seis", "Sete", "Oito", 
				"Nove", "Dez", "Valete", "Dama", "Rei" };
			
	/* inicializa array baralho */
	int baralho[ 4 ][ 13 ] = { 0 };
	
	srand( time( NULL ) ); /* semente do gerador de n�mero aleat�rio */
	
	embaralha( baralho ); /* embaralha */
	distribui( baralho, face, suit ); /* distribui as cartas do baralho */
	return 0; /* indica conclus�o bem-sucedida */
} /* fim do main */

/* embaralha cartas */
void embaralha( int wbaralho[][ 13 ] )
{
	int linha; /* n�mero de linha */
	int coluna; /* n�mero de coluna */
	int carta; /* contador */
	
	/* para cada uma das 52 cartas, escolhe slot de deck aleatoriamente */
	for( carta = 1; carta <= 52; carta++ ){
		
		/* escolhe novo local aleat�rio at� que slot n�o ocupado seja encontrado */
		do{
			linha = rand() % 4;
			coluna = rand() % 13;
		}while( wbaralho[ linha ][ coluna ] != 0 ); /* fim do do..while */
		
		/* coloca n�mero da carta no slot escolhido do baralho */
		wbaralho[ linha ][ coluna ] = carta;
	} /* fim do for */
}/* fim da fun��o embaralha */

/* distribui cartas no baralha */
void distribui( const int wbaralho[][ 13 ], const char *wface[], 
const char *wsuit[] )
{
	int carta; /* contador de cartas */	
	int linha; /* contador de linhas */
	int coluna; /* contador de colunas */
	
	/* distribui cada uma das 52 cartas */
	for( carta = 1; carta <= 52; carta++ ){
		/* loop pelas lnhas de qbaralho */
		
		for( linha = 0; linha <= 3; linha++ ){
			
			/* loop pelas colunas de wbaralho para linha atual */
			for( coluna = 0; coluna <= 12; coluna++ ){
				
				/* se slot cont�m cart�o atual, mostra carta */
				if( wbaralho[ linha ][ coluna ] == carta ){
					printf( "%5s de %-8s%c", wface[ coluna ], wsuit[ linha ],
						carta % 2 == 0 ? '\n' : '\t' );	
				} /* fim do if */
			} /* fim do for */
		} /* fim do for */
	} /* fim do for */
} /* fim da fun��o distribui */
