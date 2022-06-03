/* Figura 5.10: fig05_10.c
	Craps */
	
#include <stdio.h>
#include <stdlib.h>
#include <time.h> /* contém protótipo para função time */

/* constantes de enumeração representam status do jogo */
enum Status { CONTINUE, WON, LOST };

int rollDice( void ); /* protótipo de função */

/* função main inicia a execução do programa */
int main( void )
{
	int sum; /* soma dos dados lançados */
	int myPoint; /* ponto ganho */
	
	enum Status gameStatus; /* pode conter CONTINUE, WON, LOST */
	
	/* randomiza gerador de número aleatório usando hora atual */
	srand( time( NULL ) );
	
	sum = rollDice(); /* primeiro lançamento dos dados */
	
	/* determina status do jogo com base na soma dos dados */
	switch( sum ) {
		
		/* vence na primeira jogada */
		case 7:
		case 11:
			gameStatus = WON;
			break;
			
		/* perde na primeira jogada */
		case 2:
		case 3:
		case 12:
			gameStatus = LOST;
			break;
			
		/* lembra ponto */
		default:
			gameStatus = CONTINUE;
			myPoint = sum;
			printf( "Ponto eh %d\n", myPoint );
			break; /* optional */
	} /* fim do switch */
	
	/* enquanto jogo não termina */
	
	while( gameStatus == CONTINUE ){
		sum = rollDice(); /* joga dados novemante */
		
		/* determina status do jogo */
		if( sum == myPoint ){ /* vence fazendo ponto */
			gameStatus = WON; /* jovo termina, jogador vence */
		} /* fim do if */
		else{
			if ( sum == 7 ){ /* perde por lançar 7 */
				gameStatus = LOST; /* jogo termina, jogador perde */
			} /* fim do if */
		} /* fim do else */
	} /* fim do while */
	
	/* mostra mensagem de vitória ou perda */
	if( gameStatus == WON ){ /* jogador venceu? */
		printf( "Jogador vence\n" );		
	} /* fim do if */
	else{ /* jogador perdeu */
		printf( "Jogador perde\n" );
	} /* fim do else */
	
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */

/* lança dados, calcula soma e exibe resultado */
int rollDice( void )
{
	int die1;	/* primeiro dado */
	int die2;	/* segundo dado */
	int workSum; /* soma dos dados */
	
	die1 = 1 + ( rand() % 6 );	/* escolhe valor aleatório die1 */
	die2 = 1 + ( rand() % 6 );	/* escolhe valor aleatório die2 */
	workSum = die1 + die2;		/* soma die1 e die2 */
	
	/* exibe resultado dessa jogada */
	printf( "Jogador rolou %d + %d = %d\n", die1, die2, workSum );
	
	return workSum; /* retorna sima dos dados */
} /* fim da função rollDice */
