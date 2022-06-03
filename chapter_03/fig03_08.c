/* Figura 3.8: fig03_08.c
	Programa de m�dia da turma com repeti��o controlado por sentinela */
#include <stdio.h>

/* fun��o main inicia execu��o do programa */
int main( void )
{
	int contador;	/* n�mero de notas digitadas */	
	int nota;		/* valor da nota */
	int total;		/* soma das notas */
	
	float media;	/* n�mero em ponto flutuante para a m�dia */
	
	/* fase da inicializa��o */
	total = 0;		/* inicializa total */
	contador = 0;	/* inicializa o contador do loop */
	
	/* fase de processamento */
	/* recebe a primeira nota do usu�rio */
	printf( "Digite a nota, -1 no fim: ");	/* prompt para entrada */
	scanf( "%d", &nota); /* l� nota do usu�rio */
	
	/* loop enquando o valor da sentinela n�o foi lido */
	while( nota != -1 ){
		total = total + nota;		/* soma nota ao total */
		contador = contador + 1;	/* incrementa contador */
		
		/* recebe proxima nota do usu�rio */
		printf( "Digite a nota, -1 para finalizar: ");	/* prompt para entrada */
		scanf( "%d", &nota);		/* l� proxima nota */		
	} /* fim do while */
	
	/* fase de finaliza��o */
	/* se o usu�rio digitou pelo menos uma nota */
	if( contador != 0 ){
		
		/* calcula m�dia de todas as notas lidas */
		media = (float) total / contador;	/* evita truncar */
		
		/* exibir m�dia com dois d�gitos de precis�o */
		printf( "Media da turma eh: %.2f\n", media);
	} /* fim do if */
	else{ /* se nenhuma nota doi informada, envia mensagem */
		printf( "Nenhuma nota doi informada\n");
	} /* fim do else */
	
	return 0;	/* indica que o programa foi concluido com sucesso */
} /* fim da fun��o main */
