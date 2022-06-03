/* Figura 6.12: fig06_12.c 
	O nome do array é o mesmo que o endereço de &array[ 0 ]  */
	
#include <stdio.h>

/* função main inicia a execução do programa */
int main( void ){
	char array[ 5 ]; /* define um array de tamanho 5 */
	
	printf( " array = %p\n &array[0] = %p\n &array = %p\n", 
		array, &array[ 0 ], &array );
		
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
