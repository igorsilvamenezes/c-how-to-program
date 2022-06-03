/* Figura 7.28: fig07_28.c
	Demostrando um array de ponteiros para fun��es */
#include <stdio.h>

/* prot�tipos */
void function1( int a );
void function2( int b );
void function3( int c );

int main( void )
{
	/* inicializa array de 3 ponteiros para fun��es que usam um
		argumento int e retornam void */
	void (*f[ 3 ])( int ) = { function1, function2, function3 };
	
	int choice; /* vari�vel para manter a escolha do usu�rio */
	
	printf( "Digite um numero entre 0 e 2, 3 pra sair: " );
	scanf( "%d", &choice );
	
	/* processa escolha do usu�rio */
	while( choice >= 0 && choice < 3 ){
		
		/* chama a fun��o para o local selecionado do array f e passa
			choice como argumento */
		(*f[ choice ])( choice );
		
		printf( "Digite um numero entre 0 e 2, 3 pra terminar: " );
		scanf( "%d", &choice );
	} /* fim do while */
	
	printf( "Execucao do programa concluida.\n" );
	return 0; /* indica conclus�o bem-sucedida */
} /* fim do main */

void function1( int a )
{
	printf( "Voce digitou %d, de modo que function1 foi chamada\n\n", a );
} /* fim de function1 */

void function2( int b )
{
	printf( "Voce digitou %d, de modo que function2 foi chamada\n\n", b );
} /* fim de function2 */

void function3( int c )
{
	printf( "Voce digitou %d, de modo que function3 foi chamada\n\n", c );
} /* fim de function3 */
