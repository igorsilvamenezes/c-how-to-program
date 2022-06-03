/* Figura 5.9: fig05_09.c
	Randomizando o program de lançamento de dados */
	
#include <stdio.h>
#include <stdlib.h>
//#include <time.h>

/* função main inicia a execução do programa */
int main( void )
{
	int i; /* contador */
	unsigned seed; /* número usado para criar semente de gerador de número aleatório */
	
	printf( "Digite a semente: ");
	scanf( "%u", &seed ); /* observe o %u de unsigned */
	
	srand( seed ); /* inicia o gerador de número aleatório */
	
	//srand( time( NULL ) ); //Randimizar sem incluir uma semente a cada vez
	
	/* loop 10 vezes */
	for( i = 1; i <= 10; i++ ){
		
		/*escolhe número aleatório de 1 a 6 e o imprime */
		printf( "%10d", 1 + ( rand() % 6 ) );
		
		/*se o contador é divisível por 5, inicia nova linha de impressão */
		if( i % 5 == 0 ){
			printf( "\n" );
		} /* fim do if */
	} /* fim do for */
	
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
