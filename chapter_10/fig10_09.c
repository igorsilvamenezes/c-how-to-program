/* Figura 10.9: fig10_09.c
	Usando operadores AND sobre bits, OR inclusivo sobre bits,
	OR exclusivo sobre bits e de complemento sobre bits */
#include <stdio.h>

void displayBits( unsigned value ); /* protótipo */

int main( void )
{
	unsigned number1;
	unsigned number2;
	unsigned mask;
	unsigned setBits;
	
	/* demonstra AND sobre bits (&) */
	number1 = 65535;
	mask = 1;
	printf( "O resultado da combinacao dos seguintes\n" );
	displayBits( number1 );
	displayBits( mask );
	printf( "usando o operador AND sobre bits & eh\n" );
	displayBits( number1 & mask );
	
	/* demostra OR inclusivo sobre bits (|) */
	number1 = 15;
	setBits = 241;
	printf( "\nO resultador da combinacao dos seguintes\n" );
	displayBits( number1 );
	displayBits( setBits );
	printf( "usando o operador OR inclusivo sobre bits \n" );
	displayBits( number1 | setBits );
	
	/* demostra OR exclusivo sobre bits (^) */
	number1 = 139;
	number2 = 199;
	printf( "\nO resultado da combinacao dos seguintes\n" );
	displayBits( number1 );
	displayBits( number2 );
	printf( "usando o operador OR exclusivo sobre bits ^ eh\n" );
	displayBits( number1 ^ number2 );
	
	/* demostra complemento sobre bits (~) */
	number1 = 21845;
	printf( "\nO complemento de um \n" );
	displayBits( number1 );
	printf( "eh\n" );
	displayBits( ~number1 );	
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */

/* mostra bits de um valor inteiro sem sinal */
void displayBits( unsigned value )
{
	unsigned c; /* contador */
	
	/* declara displayMask e deesloca 31 bits a esquerda */
	unsigned displayMask = 1 << 31;
	
	printf( "%10u = ", value );
	
	/* loop pelos bits */
	for( c = 1; c <= 32; c++ ){
		putchar( value & displayMask ? '1' : '0' );
		value <<= 1; /* desloca valor 1 bit a esquerda */
		
		if( c % 8 == 0 ){ /* apresenta espaço apos 8 bits */
			putchar( ' ' );
		} /* fim do if */
	} /* fim do for */
	
	putchar( '\n' );
} /* fim da função displayBits */
