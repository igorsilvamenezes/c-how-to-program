/* Figura 7.4: fig07_04.c
	Usando os oepradores & e *  */
#include <stdio.h>

int main( void )
{
	int a; /* a é um inteiro */
	int *aPtr; /* aPtr é um ponteiro para um inteiro */
	
	a = 7;
	aPtr = &a; /* aPtr definido para o endereço de a */
	
	printf( "O endereco de a eh %p"
			"\nO valor de aPtr eh %p", &a, aPtr );
			
	printf( "\n\nO valor de a eh %d"
			"\nO valor de *aPtr eh %d", a, *aPtr );
			
	printf( "\n\nMostrando que * e & sao complementos um "
			"do outro\n&*aPtr = %p"
			"\n*&aPtr = %p\n", &*aPtr, *&aPtr );
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
