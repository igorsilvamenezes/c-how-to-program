/* Figura 7.13: fig07_13.c
	Tentando modificar um ponteiro constante para dados n�o constantes */
#include <stdio.h>

int main( void )
{
	int x; /* define x */
	int y; /* define y */
	
	/* ptr � um pondeiro constante para um inteiro que pode ser modificado por
		meio de ptr, mas ptr sempre aponta para o mesmo local da mem�ria */
	int * const ptr = &x;
	
	*ptr = 7; /* permitido: *ptr n�o � const */
	ptr = &y; /* erro: ptr � const; n�o pode atribuir novo endere�o */
	return 0; /* indica conclus�o bem-sucedida */
} /* fim do main */

