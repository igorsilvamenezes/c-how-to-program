/* Figura 5.15: fig05_15.c
	Fun��o recursiva fibonacci */
	
#include <stdio.h>

long fibonacci( long n ); /* prot�tipo da fun��o */

/* fun��o main inicia a execu��o do programa */
int main( void )
{
	long result; /* valor de fibonacci */
	long number; /* n�mero fornecido pelo usu�rio */
	
	/* Obt�m inteiro do usu�rio */
	printf( "Digite um inteiro: ");
	scanf( "%ld", &number );
	
	/* calcula valor de fibonacci para n�mero informado pelo usu�rio */
	result = fibonacci( number );
	
	/* mostra resultado */
	printf( "Fibonacci( %ld ) = %ld\n", number, result );
	
	return 0; /* indica conclus�o bem-sucedida */
} /* fim do main */

long fibonacci( long n)
{
	//printf( "   fibonacci( %ld )\n", n);
	
	/* caso b�sico */
	if( n == 0 | n == 1 ){
		return n;
	} /* fim do if */
	else{ /* etapa recursiva */
		return fibonacci( n -1 ) + fibonacci( n - 2);
	} /* fim do else */
} /* fim da fun��o fibonacc */
