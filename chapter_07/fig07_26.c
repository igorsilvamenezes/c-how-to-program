/* Figura 7.26: fig07_26.c
	Programa de classifica��o de m�ltiplas finalizades usando ponteiros para fun��o */
#include <stdio.h>
#define SIZE 10

/* prot�tipo */
void bubble( int work[], const int size, int (*compare)(int a, int b) );
int ascending( int a, int b );
int descending( int a, int b );

int main( void )
{
	int order; /* 1 para ordem crescente ou 2 para ordem decrescente */
	int counter; /* contador */
	
	/* inicializa array a */
	int a[ SIZE ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
	
	printf( "Digite 1 para classificar em ordem crescente,\n"
			"Digite 2 para classificar em ordem decrescente: " );
	scanf( "%d", &order );
	
	printf( "\nItens de dados na ordem original\n" );
	
	/* mostra array original */
	for( counter = 0; counter < SIZE; counter++ ){
		printf( "%5d", a[ counter ] );
	} /* fim do for */
	
	/* classifica array em ordem crescente; passa fun��o crescente como]
		um argumento para especificar classifica��o crescente */
	if( order == 1 ){
		bubble( a, SIZE, ascending );
		printf( "\nItens de dados em ordem crescente\n" );
	} /* fim do if */
	else{ /* passa fun��o decrescente */
		bubble( a, SIZE, descending );
		printf( "\nItens de dados em ordem decrescente\n" );
	} /* fim do else */
	
	/* mostra array ordenado */
	for( counter = 0; counter < SIZE; counter++ ){
		printf( "%5d", a[ counter ] );
	} /* fim do for */
	
	printf( "\n" );
	return 0; /* indica conclus�o bem-sucedida */
} /* fim do main */

/* bubble sort de multiplas funcionalidades; par�metro compare � um ponteiro 
	para a fun��o de compara��o que determina classifica��o */
void bubble( int work[], const int size, int (*compare)(int a, int b ) )
{
	int pass; /* contador de passadas */
	int counter; /* contador de compara��o */
	
	void invert( int *element1Ptr, int *element2Ptr ); /* prot�tipo */
	
	/* loop para controlar passadas */
	for(pass = 1; pass < size; pass++ ){
		
		/* loop para controlar n�mero de compara��es por passada */
		for( counter = 0; counter < size - 1; counter++ ){
			
			/* se elementos adjacentes est�o fora de ordem, inverta-os */
			if( (*compare)( work[ counter ], work[ counter + 1 ] ) ){
				invert( &work[ counter ], &work[ counter +1 ] );
			} /* fim do if */
		} /* fim do for */
	} /* fim do for */
} /* fim da fun��o bubbleSort */

/* troca valores nos locais da mem�ria aos quais element1Ptr e
	element2Ptr apontam */
void invert( int *element1Ptr, int *element2Ptr )
{
	int hold; /* vari�vel tempor�ria */
	
	hold = *element1Ptr;
	*element1Ptr = *element2Ptr;
	*element2Ptr = hold;
} /* fim da fun��o invert */

/* determina se os elementos est�o fora da ordem para uma ordem
	de classifica��o crescente */
int ascending( int a, int b )
{
	return b < a; /* troca se b for menor que a */
} /* fim da fun��o asceding */

/* determina se os elementos est�o fora de ordem para uma ordem
	 de classifica��o decending */
int descending( int a, int b )
{
	return b > a; /* troca se b for maio que a */
} /* fim da fun��o decrescente */
