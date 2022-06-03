/* figura 4.12: fig04_12.c
	Usando o comando continue em uma estrutura for */
	
#include <stdio.h>

/* função main inicia a execução do programa */
int main( void )
{
	int x; /* contador */
	
	/* loop por 10 vezes */
	for( x = 1; x <= 10; x++ ){
		
		/* se x é 5, continua com a próxima interação do loop */
		if( x== 5 ){
			continue; /* salta código restante no corpo do loop */
		} /* fim do if */
		
		printf( "%d ", x ); /* exibe valor de x */ 
	} /* fim do for */
	
	printf( "\nUsou continue para pular a exi
	bicao  do valor 5\n" );
	
	return 0; /* indica que o progama foi executado com sucesso */
} /* fim da função main */
