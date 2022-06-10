/* Fig. 9.2: fig09_02.c
	Usando especificadores de conversão de inteiros */	
#include <stdio.h>

int main( void )
{
	printf( "%d\n", 455 );
	printf( "%i\n", 455 ); /* i é o mesmo que d em printf */
	printf( "%d\n", +455 );
	printf( "%d\n", -455 );
	printf( "%hd\n", 32000 );
	printf( "%ld\n", 2000000000L ); /* sufixo L torna a literal um long */
	printf( "%o\n", 455 );
	printf( "%u\n", 455 );
	printf( "%u\n", -455 );
	printf( "%x\n", 455 );
	printf( "%X\n", 455 );
	return 0; /* indica conclusão bem sucedida */
} /* fim do main */

