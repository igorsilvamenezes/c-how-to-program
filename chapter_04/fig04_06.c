/* Figura 4.6: fig04_06.c
	Calculando juros compostos */
	
#include <stdio.h>
#include <math.h>

/* função main inicia a execução do programa */
int main( void )
{
	double valor; /* valor do depósito */
	double principal = 1000.0; /* principal inicial */
	double taxa = .05; /* taxa anual de juros */
	int ano; /* comtador do ano */
	
	/* cabeçalho de coluna da tabela de resultados */
	printf( "%4s%21s\n", "Ano", "Valor da conta");
	
	/* Calcula valor em deposito para cada um dos dez anos */
	for( ano = 1; ano <= 10; ano++ ){
		
		/* calcula novo valor para o ano especifico */
		valor = principal * pow( 1.0 + taxa, ano);
		
		/* exibe uma linha da tabela */
		printf( "%4d%21.2f\n", ano, valor );
	} /* fim do for */
	
	return 0; /* indica que o programa foi concluido com sucesso */
} /* fim da função main */
