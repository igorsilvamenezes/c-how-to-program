/* Figura 7.12: fig07_12.c
	Tentando modificar dados por meio de um
	ponteiro n�o constante para dados constantes. */
#include <stdio.h>

void f( const int *xPtr ); /* prot�tipo */

int main( void )
{
	int y; /* define y */
	
	f( &y ); /* f tenta modifica��o ilegal */
	return 0; /* indica conclus�o bem-sucedida */
} /* fim do main */

/* xPtr n�o pode ser usado para modificar o valor
	da vari�vel 'a qual ele aponta */
void f( const int *xPtr )
{
	*xPtr = 100; /* erro: n�o pode modificar um objeto const */
} /* fim da fun��o f */
