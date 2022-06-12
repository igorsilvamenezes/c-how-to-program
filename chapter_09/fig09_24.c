/* Fig 9.24: fig09_24.c
	Lendo e descartando caracteres do stream de entrada */
#include <stdio.h>

int main( void )
{
	int month1;
	int day1;
	int year1;
	int month2;
	int day2;
	int year2;
	
	printf( "Digite uma data no formato mm-dd-aaaa: " );
	scanf( "%d%*c%d%*c%d", &month1, &day1, &year1 );
	
	printf( "mes = %d dia = %d ano = %d\n\n", month1, day1, year1 );
	
	printf( "Digite uma data no formato mm/dd/aaaa: " );
	scanf( "%d%*c%d%*c%d", &month2, &day2, &year2 );
	
	printf( "mes = %d dia = %d ano = %d\n\n", month2, day2, year2 );
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
