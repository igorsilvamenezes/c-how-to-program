/* Figura 5.12: fig05_12.c
	Um exemplo de escopo */
	
#include <stdio.h>

void useLocal( void ); /* prototipo de fun��o */
void useStaticLocal( void ); /* prototipo de fun��o */
void useGlobal( void ); /* prototipo de fun��o */

int x = 1;	/* variavel global */

/* fun��o main inicia a execu��o do programa */
int main( void )
{
	int x = 5; /* variavel local para main */
	
	printf( "x local no escopo externo de main eh %d\n", x );
	
	{ /* inicia novo escopo */
		int x = 7; /* variavel local para novo escopo */
		
		printf( "x local no escopo interno de main eh %d\n", x );		
	} /* fim do novo escopo */
	
	printf( "x local no escopo externo de main eh %d\n", x );
	
	useLocal(); /* useLocal tem x local automatica */
	useStaticLocal(); /* useStaticLocal tem x local estatica */
	useGlobal();	/* useGlobal usa x global */
	
	useLocal(); /* useLocal reinicializa x local automatica */
	useStaticLocal(); /* x local estatica retehm seu valor anterior  */
	useGlobal();	/* x global tamb�m ret�m seu valor  */
	
	printf( "\nx local em main eh %d\n", x );
	
	return 0; /* indica conclus�o bem-sucedida */
} /* fim do main */

/* useLocal reinicializa variavel local x durante cada chamada */
void useLocal( void )
{
	int x = 2; /* inicializa toda vez que useLocal � chamada */
	
	printf( "\nx local em useLocal eh %d apos entrar em useLocal\n", x );
	x++;
	printf( "x local em useLocal eh %d antes de sair de useLocal\n", x );
} /* fim da fun��o useLocal */

/* useStaticLocal inicializa variavel local estatica x somente na 
	primeira vez em que essa fun��o � chamada: o valor de x �
	salvo entre as chamadas a essa fun��o */
void useStaticLocal( void )
{
	/* inicializada apenas na primeira vez que useStaticLocal eh chamada */
	static int x = 50;
	
	printf( "\nx estatica local eh %d na entrada de useStaticLocal\n", x );
	x++;
	printf( "x estatica local eh %d na saida de useStaticLocal\n", x );
} /* fim da fun��o useStaticLocal */

/* fun��o useGlobal modifica variavel global x durante cada chamada */
void useGlobal( void )
{
	printf( "\nx global eh %d na entrada de useGlobal\n", x );
	x *= 10;
	printf( "x global eh %d na saida de useGlobal\n", x );
} /* fim da fun��o useGlobal */
