/* Figura 5.4: fig05_04.c
	Achando o máximo de três inteiros */
	
#include <stdio.h>

int maximum( int x, int y, int z ); /* protótipo de função */

/* função main inicia a execução do programa */
int main( void )
{
	int number1;	/* primeiro inteiro */
	int number2;	/* segundo inteiro */
	int number3;	/* terceiro inteiro */
	
	printf( "Digite tres inteiros: " );
	scanf( "%d%d%d", &number1, &number2, &number3 );
	
	/* number1, number2 3 number3 são argumentos
		da chamada da funlção maximum */
	printf( "Maximo eh: %d\n", maximum( number1, number2, number3 ) );
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */

/* Definição da função maximum */
/* x, y e z são parâmetros */
int maximum( int x, int y, int z )
{
	int max = x;	/* considera que x é o maior */
	
	if( y > max ){	/* se y é maior que max, atribui y a max */
		max = y;
	} /* fim do if */
	
	if( z > max ){	/* se z é maior que maz, atribui z a max */
		max = z;
	} /* fim do if */
	
	return max;		/* max é o maior valor */
} /* fim da função maximum */
