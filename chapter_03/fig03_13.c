/* Figura 3.13: fig03_13.c
	Pre-incrementando e p�s-incrementando */
#include <stdio.h>

/* fun��o main inicia a execu��o do programa */
int main( void )
{
	int c;	/* define vari�vel */
	
	/* demonstra p�s-incremento*/
	c = 5;	/* atribui 5 a c */
	printf( "%d\n", c );	/* imprime 5*/
	printf( "%d\n", c++ );	/* imprime 5 e depois p�s-incrementa */
	printf( "%d\n\n", c);	/* imprime 6 */
	
	/* demonstra pr�-incremento */
	c = 5;	/* atribui 5 a c */
	printf( "%d\n", c );	/* imprime 5 */
	printf( "%d\n", ++c );	/* pr�-incremento e depois imprime 6 */
	printf( "%d\n", c);		/* imprime 6 */
	
	return 0;	/* indica que o programa foi concluido com sucesso */
} /* fim da fun��o main */
