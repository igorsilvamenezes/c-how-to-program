/* Figura 4.11: fig04_11.c
	Usando o comando break em uma estrutura for */
	
#include <stdio.h>

/* fun��o main inicia a execu��o do programa */
int main( void )
{
	int x;	/* contador */
	
	/* loop por 10 vezes */
	for( x = 1; x <= 10; x++ ){
		
		/* se x � 5, encerra o loop */
		if( x== 5 ){
			break; /* sai do loop somente se x � 5 */
		} /* fim do if */
		
		printf( "%d ", x );	/* exibe valor de x */
	} /* fim do for */
	
	printf( "\nSaiu do loop em x == %d\n", x );
	return 0; /* indica que i origrama foi concluido com sucesso */
} /* fim da fun��o main */
