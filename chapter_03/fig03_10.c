/* Figura 3.10: fig03_10.c
	An�lise de resultados de exames */
#include <stdio.h>

/* fun��o main inicia execu��o do programa */
int main( void )
{
	/* inicializa vari�veis nas declara��es */
	int aprovados = 0;		/* numero de aprova��es */
	int reprovados = 0;		/* numero de reprovados */
	int aluno = 1;			/* contador de alunos */
	int resultado = 0;		/* un resultado de exame */
	
	/* processa 10 alunos usando loop controlado por contador */
	while( aluno <= 10 ){
		
		/* pede entrada do usu�rio e l� o valor digitado */
		printf( "Forne�a resultado ( 1=aprovado, 2=reprovado): ");
		scanf( "%d", &resultado);
		
		/* se resultado 1, incrementa aprovados */
		if( resultado == 1 ){
			aprovados = aprovados + 1;
		} /* fim do if */
		else { /* sen�o, incrementa reprovados */
			reprovados = reprovados + 1;			
		} /* fim do else */
		
		aluno = aluno + 1;	/* incrementa o contador de aluno */
	} /* fim do while */
	
	/* fase de finaliza��o, exime numero de aprovados e reprovados */
	printf( "Aprovados %d\n", aprovados);
	printf( "Reprovados %d\n", reprovados);
	
	/* se mais de oito aprovados, imprime 'Bonus ao instrutor!' */
	if( aprovados > 8 ){
		printf( "Bonus ao instrutor!");
	} /* fim do if */
	
	return 0;	/* indica que o programa foi concluido com sucesso */
}	/* fim da fun��o main */
