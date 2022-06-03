/* Figura 5.15: fig05_15.c
	Função recursiva fibonacci */
	
#include <stdio.h>

long fibonacci( long n ); /* protótipo da função */

/* função main inicia a execução do programa */
int main( void )
{
	long result; /* valor de fibonacci */
	long number; /* número fornecido pelo usuário */
	
	/* Obtém inteiro do usuário */
	printf( "Digite um inteiro: ");
	scanf( "%ld", &number );
	
	/* calcula valor de fibonacci para número informado pelo usuário */
	result = fibonacci( number );
	
	/* mostra resultado */
	printf( "Fibonacci( %ld ) = %ld\n", number, result );
	
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */

long fibonacci( long n)
{
	//printf( "   fibonacci( %ld )\n", n);
	
	/* caso básico */
	if( n == 0 | n == 1 ){
		return n;
	} /* fim do if */
	else{ /* etapa recursiva */
		return fibonacci( n -1 ) + fibonacci( n - 2);
	} /* fim do else */
} /* fim da função fibonacc */
