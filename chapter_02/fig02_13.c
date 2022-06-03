/*Figura 2,13: fig02_13.c
* Usando instruções if, operadores relacionar
* e operadores de igualdade
*/

#include <stdio.h>

/*função main inicia execução do programa*/
int main(void)
{
	int num1; /* primeiro número do usuário a ser lido */
	int num2; /* segundo número do usuário a ser lido */

	printf( "Enter com dois inteiros e eu lhe direi\n" );
	printf( "as relacores que eles satisfazem: " );

	scanf( "%d%d", &num1, &num2 ); /* lê dois inteiros */

	if (num1 == num2) {
		printf("%d eh igual a %d\n", num1, num2 );
	} /* fim do if */

	if (num1 != num2) {
		printf("%d nao eh igual a %d\n", num1, num2);
	} /* fim do if */

	if (num1 < num2) {
		printf("%d eh menor que %d\n", num1, num2);
	} /* fim do if */

	if (num1 > num2) {
		printf("%d eh maior que %d\n", num1, num2);
	} /* fim do if */

	if (num1 <= num2) {
		printf("%d eh menor ou igual a %d\n", num1, num2);
	} /* fim do if*/

	if (num1 >= num2) {
		printf("%d eh maior ou igual a %d\n", num1, num2);
	} /* fim do if*/

	return 0; /* indica que o programa foi concluido com sucesso */
} /* fim da função main */
