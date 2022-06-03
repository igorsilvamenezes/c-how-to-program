/* Figura 6.19: fig06_19.c
	Pesquisa binária de um array ordenado */
#include <stdio.h>
#define SIZE 15

/* protótipo de funções */
int binarySearch( const int b[], int searchKey, int low, int high );
void printHeader( void );
void printRow( const int b[], int low, int mid, int high );

/* função main inicia a execução do programa */
int main( void )
{
	int a[ SIZE ]; /* criar array a */
	int i; /* contador para inicializar elementos 0-14 do array a */
	int key; /* valor a localizar no array a */
	int result; /* variável para manter local da chave ou -1 */
	
	/* cria dados */
	for( i = 0; i < SIZE; i++ ){
		a[ i ] = 2 * i;
	} /* fim do for */
	
	printf( "Digite um numero entre 0 e 28: " );
	scanf( "%d", &key );
	
	printHeader();
	
	/* procura chave no array a */
	result = binarySearch( a, key, 0, SIZE - 1 );
	
	/* mostra resultados */
	if( result != -1 ){
		printf( "\n%d encontrados no elemento de array %d\n", key, result );
	} /* fim fo if */
	else{
		printf( "\n%d nao encontrados\n", key );		
	} /* fim do else */
	
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */

/* função para realizar pesquisa binária de um array */
int binarySearch( const int b[], int searchKey, int low, int high )
{
	int middle; /* variável para manter elemento do meio do array */
	
	/* loop até o indice baixo ser maior que o indice alto */
	while( low <= high ){
		
		/* determina elemento do meio do subarray sendo pesquisado */
		middle = ( low + high ) / 2;
		
		/* exibe subarray usado nesta interação de loop */
		printRow( b, low, middle, high );
		
		/* se searchKey combinou com elemento do meio, retorna middle */
		if( searchKey == b[ middle ] ){
			return middle;
		} /* fim do if */
		
		/* se searchKey menor que o elemento do meio, define novo high */
		else if( searchKey < b[ middle ] ){
			high = middle - 1; /* procura extremidade baixa do array */
		} /* fim do else */
		
		/* se searchKey maior que o elemento do maio, define novo low */
		else {
			low = middle + 1; /* procura extermidade alta do array */
		} /* fim do else */
	} /* fim do while */
	
	return -1; /* searchKey não encontrado */
} /* fim da função binarySearch */

/* Imprime cabeçalho para a saída */
void printHeader( void )
{
	int i; /* contador */
	
	printf( "\nIndices:\n" );
	
	/* cabeçalho da coluna de saída */
	for( i = 0; i < SIZE; i++ ){
		printf( "%3d ", i );
	} /* fim do for */
	
	printf( "\n" ); /* inicia nova linha de saída */
	
	/* linha de saída de caracteres */
	for( i = 1; i <= 4 * SIZE; i++ ){
		printf( "-" );
	} /* fim do for */
	
	printf( "\n" ); /* inicia nova linha de saída */
} /* fim da função printHeader */

/* Imprime uma linha de saída mostrando a parte atual 
	do array sendo processado */
void printRow( const int b[], int low, int mid, int high )
{
	int i; /* contador para percorrer o array b */	
	
	/* loop pelo array inteiro */
	for( i = 0; i < SIZE; i++ ){
		
		/* mostra espaços se fora da faixa atual do subarray */
		if( i < low || i > high ){
			printf( "    " );
		} /* fim do if */
		else if( i == mid ){ /* mostra elemento do meio */
			printf( "%3d*", b[ i ] );
		} /* fim do else if */
		else { /* mostra outros elementos no subarray */
			printf( "%3d ", b[ i ] );
		} /* fim do else */
	} /* fim do for */
	
	printf( "\n" ); /* inicia nova linha de saída */
} /* fim da função printRow */
