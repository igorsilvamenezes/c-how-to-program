/* Fig. 8.38: fig08_38.c
	usando strlen */
#include <stdio.h>
#include <string.h>

int main( void )
{
	/* inicializa 3 ponteiros char */
	const char *string1 = "abcdefghijklmnopqrstuvwxyz";
	const char *string2 = "dois";
	const char *string3 = "Murici";
	
	printf( "%s\"%s\"%s%lu\n%s\"%s\"%s%lu\n%s\"%s\"%s%lu\n",
		"O comprimento de ", string1, " eh ",
		( unsigned long ) strlen( string1 ),
		"O comprimento de ", string2, " eh ",
		( unsigned long ) strlen( string2 ),
		"O comprimento de ", string3, " eh ",
		( unsigned long ) strlen( string3 ) );
	return 0; /* indica cinclusão bem-sucedida */
} /* fim do main */
