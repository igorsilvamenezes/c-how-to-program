/* Figura 10.13: fig10_13.c
	Usando os operadores de deslocamento sobre bits */
#include <stdio.h>

void displayBits( unsigned value ); /* protótipo */

int main( void )
{
	unsigned number1 = 960; /* inicializa number1 */
	
	/* demostra deslocamento a esquerda sobre bits */
	printf( "\nO resultado do deslocamento a esquerda de\n" );
	displayBits( number1 );
	printf( "por 8 posicoes de bits usando o " );
	printf( "operador de deslocamento a esquerda << eh\n" );
	displayBits( number1 << 8 );
	
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */

/* mostra bits de uma valor inteiro sem sinal */
void displayBits( unsigned value )
{
	unsigned c; /* contador */
	
	/* declara displayMask e desloca 31 bits a esquerda */
	unsigned displayMask = 1 << 31;
	
	printf( "%7u = ", value );
	
	/* loop pelos bits */
	for( c = 1; c <= 32; c++ ){
		putchar( value & displayMask ? '1' : '0' );
		value <<= 1; /* desloca valor 1 bit a esquerda */
		
		if( c % 8 == 0 ){ /* mostra um espaço após 8 bits */
			putchar( ' ' );
		} /* fim do if */
	} /* fim do for */
	
	putchar( '\n' );
} /* fim da função displayBits */
