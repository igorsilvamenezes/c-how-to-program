/* Figura 5.9: fig05_09.c
	Randomizando o program de lan�amento de dados */
	
#include <stdio.h>
#include <stdlib.h>
//#include <time.h>

/* fun��o main inicia a execu��o do programa */
int main( void )
{
	int i; /* contador */
	unsigned seed; /* n�mero usado para criar semente de gerador de n�mero aleat�rio */
	
	printf( "Digite a semente: ");
	scanf( "%u", &seed ); /* observe o %u de unsigned */
	
	srand( seed ); /* inicia o gerador de n�mero aleat�rio */
	
	//srand( time( NULL ) ); //Randimizar sem incluir uma semente a cada vez
	
	/* loop 10 vezes */
	for( i = 1; i <= 10; i++ ){
		
		/*escolhe n�mero aleat�rio de 1 a 6 e o imprime */
		printf( "%10d", 1 + ( rand() % 6 ) );
		
		/*se o contador � divis�vel por 5, inicia nova linha de impress�o */
		if( i % 5 == 0 ){
			printf( "\n" );
		} /* fim do if */
	} /* fim do for */
	
	return 0; /* indica conclus�o bem-sucedida */
} /* fim do main */
