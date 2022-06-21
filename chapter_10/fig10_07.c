/* Figura 10.7: fig10_07.c
	Imprimindo um inteiro sem sinal em bits */
#include <stdio.h>

void displayBits( unsigned value ); /* protótipo */

int main( void )
{
	unsigned x; /* variável para manter entrada do usuário */
	
	printf( "Digite um inteiro sem sinal: " );
	scanf( "%u", &x );
	
	displayBits( x );
	return 0; /* indica conclusão bem-sucedida */
} /* fim fo main */

/* mostra bits de uma valor inteiro sem sinal */
void displayBits( unsigned value )
{
	unsigned c; /* contador */
	
	/* declara displayMask e desloca 31 bits à esquerda */
	unsigned displayMask = 1 << 31;
	printf( "%s = %ud\n\n", "displayMask", displayMask);
	
	printf( "%10u = ", value );
	
	/* percorre os bits */
	for( c = 1; c <= 32; c++ ){
		putchar( value & displayMask ? '1' : '0' );
		value <<= 1; /* desloca valor à esquerda em 1 */
		
		if( c % 8 == 0 ){ /* gera espaço após 8 bits */
			putchar( ' ' );
		} /* fim do if */
	} /* fim do for */
	
	putchar( '\n' );
} /* fim da função displayBits */
