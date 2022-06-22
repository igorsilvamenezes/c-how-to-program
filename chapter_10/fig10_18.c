/* Figura 10.18: fig10_18.c
	Usando um tipo de enumeração */
#include <stdio.h>

/* constantes de enumeração representam meses do ano */
enum months {
	JAN = 1, FEV, MAR, ABR, MAI, JUN, JUL, AGO, SET, OUT, NOV, DEZ };

int main( void )
{
	enum months month; /* pode conter qualquer um dos 12 meses */
	
	/* inicializa array de ponteiros */
	const char *monthName[] = { "", "Janeiro", "Fevereiro", "Marco",
		"Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro",
		"NOvembro", "Dezembro" };
		
	/* loop pelos meses */
	for( month = JAN; month <= DEZ; month++ ){
		printf( "%2d%11s\n", month, monthName[ month ] );
	} /* fim do for */
	
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
