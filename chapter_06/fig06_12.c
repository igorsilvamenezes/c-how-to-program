/* Figura 6.12: fig06_12.c 
	O nome do array � o mesmo que o endere�o de &array[ 0 ]  */
	
#include <stdio.h>

/* fun��o main inicia a execu��o do programa */
int main( void ){
	char array[ 5 ]; /* define um array de tamanho 5 */
	
	printf( " array = %p\n &array[0] = %p\n &array = %p\n", 
		array, &array[ 0 ], &array );
		
	return 0; /* indica conclus�o bem-sucedida */
} /* fim do main */
