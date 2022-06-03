/* Figura 5.4: fig05_04.c
	Achando o m�ximo de tr�s inteiros */
	
#include <stdio.h>

int maximum( int x, int y, int z ); /* prot�tipo de fun��o */

/* fun��o main inicia a execu��o do programa */
int main( void )
{
	int number1;	/* primeiro inteiro */
	int number2;	/* segundo inteiro */
	int number3;	/* terceiro inteiro */
	
	printf( "Digite tres inteiros: " );
	scanf( "%d%d%d", &number1, &number2, &number3 );
	
	/* number1, number2 3 number3 s�o argumentos
		da chamada da funl��o maximum */
	printf( "Maximo eh: %d\n", maximum( number1, number2, number3 ) );
	return 0; /* indica conclus�o bem-sucedida */
} /* fim do main */

/* Defini��o da fun��o maximum */
/* x, y e z s�o par�metros */
int maximum( int x, int y, int z )
{
	int max = x;	/* considera que x � o maior */
	
	if( y > max ){	/* se y � maior que max, atribui y a max */
		max = y;
	} /* fim do if */
	
	if( z > max ){	/* se z � maior que maz, atribui z a max */
		max = z;
	} /* fim do if */
	
	return max;		/* max � o maior valor */
} /* fim da fun��o maximum */
