/* Figura 3.8: fig03_08.c
	Programa de média da turma com repetição controlado por sentinela */
#include <stdio.h>

/* função main inicia execução do programa */
int main( void )
{
	int contador;	/* número de notas digitadas */	
	int nota;		/* valor da nota */
	int total;		/* soma das notas */
	
	float media;	/* número em ponto flutuante para a média */
	
	/* fase da inicialização */
	total = 0;		/* inicializa total */
	contador = 0;	/* inicializa o contador do loop */
	
	/* fase de processamento */
	/* recebe a primeira nota do usuário */
	printf( "Digite a nota, -1 no fim: ");	/* prompt para entrada */
	scanf( "%d", &nota); /* lê nota do usuário */
	
	/* loop enquando o valor da sentinela não foi lido */
	while( nota != -1 ){
		total = total + nota;		/* soma nota ao total */
		contador = contador + 1;	/* incrementa contador */
		
		/* recebe proxima nota do usuário */
		printf( "Digite a nota, -1 para finalizar: ");	/* prompt para entrada */
		scanf( "%d", &nota);		/* lê proxima nota */		
	} /* fim do while */
	
	/* fase de finalização */
	/* se o usuário digitou pelo menos uma nota */
	if( contador != 0 ){
		
		/* calcula média de todas as notas lidas */
		media = (float) total / contador;	/* evita truncar */
		
		/* exibir média com dois dígitos de precisão */
		printf( "Media da turma eh: %.2f\n", media);
	} /* fim do if */
	else{ /* se nenhuma nota doi informada, envia mensagem */
		printf( "Nenhuma nota doi informada\n");
	} /* fim do else */
	
	return 0;	/* indica que o programa foi concluido com sucesso */
} /* fim da função main */
