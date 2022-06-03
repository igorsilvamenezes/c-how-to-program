/* figura 4.12: fig04_12.c
	Usando o comando continue em uma estrutura for */
	
#include <stdio.h>

/* fun��o main inicia a execu��o do programa */
int main( void )
{
	int x; /* contador */
	
	/* loop por 10 vezes */
	for( x = 1; x <= 10; x++ ){
		
		/* se x � 5, continua com a pr�xima intera��o do loop */
		if( x== 5 ){
			continue; /* salta c�digo restante no corpo do loop */
		} /* fim do if */
		
		printf( "%d ", x ); /* exibe valor de x */ 
	} /* fim do for */
	
	printf( "\nUsou continue para pular a exi
	bicao  do valor 5\n" );
	
	return 0; /* indica que o progama foi executado com sucesso */
} /* fim da fun��o main */
