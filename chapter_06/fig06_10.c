/* Figura 6.10: fig06_10.c
	Tratando arrays de caracteres como strings */
	
#include <stdio.h>

/* função main inicia a execução do programa */
int main( void ){
	char string1[ 20 ]; /* reserva 20 cracteres */
	char string2[] = "string literal"; /* reserva 15 caracteres */
	int i; /* contador */
	
	/* lê substring do usuário para array string1 */
	printf( "Digite uma string: " );
	scanf( "%s", string1 ); /* entrada terminada com espaço em branco */
	
	/* mostra strings */
	printf( "string1 is: %s\nstring2 is: %s\nstring1 com espaços entre caracteres is:\n", string1, string2 );
	
	/* mostra caracteres até o caractere null ser alcançado */
	for( i = 0; string1[i] != '\0'; i++ ){
		printf( "%c ", string1[ i ] );
	} /* fim do for */
	
	printf( "\n" );
	
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
