/* Figura 7.24: fig07_24.c
	Programa de embaralhamento e distribuição de cartas */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* protótipos */
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
	
	srand( time( NULL ) ); /* semente do gerador de número aleatório */
	
	embaralha( baralho ); /* embaralha */
	distribui( baralho, face, suit ); /* distribui as cartas do baralho */
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */

/* embaralha cartas */
void embaralha( int wbaralho[][ 13 ] )
{
	int linha; /* número de linha */
	int coluna; /* número de coluna */
	int carta; /* contador */
	
	/* para cada uma das 52 cartas, escolhe slot de deck aleatoriamente */
	for( carta = 1; carta <= 52; carta++ ){
		
		/* escolhe novo local aleatório até que slot não ocupado seja encontrado */
		do{
			linha = rand() % 4;
			coluna = rand() % 13;
		}while( wbaralho[ linha ][ coluna ] != 0 ); /* fim do do..while */
		
		/* coloca número da carta no slot escolhido do baralho */
		wbaralho[ linha ][ coluna ] = carta;
	} /* fim do for */
}/* fim da função embaralha */

/* distribui cartas no baralha */
void distribui( const int wbaralho[][ 13 ], const char *wface[], 
const char *wsuit[] )
{
	int carta; /* contador de cartas */	
	int linha; /* contador de linhas */
	int coluna; /* contador de colunas */
	short encontrado;
	
	/* distribui cada uma das 52 cartas */
	for( carta = 1; carta <= 52; carta++ ){
		/* loop pelas lnhas de qbaralho */
		printf( "(n_%d, ", carta );
		
		encontrado = 0;
		
		for( linha = 0; linha <= 3 & encontrado == 0; linha++ ){
			printf( "[l_%d, ", linha );
			
			/* loop pelas colunas de wbaralho para linha atual */
			for( coluna = 0; coluna <= 12 & encontrado == 0; coluna++ ){
				printf( "{c_%d, ", coluna);
				
				printf( "v_%d, ", wbaralho[ linha ][ coluna ] );
				/* se slot contém cartão atual, mostra carta */
				if( wbaralho[ linha ][ coluna ] == carta ){
					printf( "'%s de %s'}", wface[ coluna ], wsuit[ linha ]);
					encontrado = 1;	
				} /* fim do if */
				
				printf( "}");
			} /* fim do for */
			
			printf( "]");
		} /* fim do for */
		
		printf( ")\n\n");
	} /* fim do for */
} /* fim da função distribui */
