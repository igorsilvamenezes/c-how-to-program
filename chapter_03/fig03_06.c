/* Figura 3,6: fig03_06.c
	Programa de m�dia da turma com repeti��o controlado por contador */
#include <stdio.h>
	
/* fun��o main inicia eecu��o do programa */
int main( void )
{
	int contador;	/* n�mero da nota a digitar em seguida */
	int nota;		/* valor da nota */
	int total;		/* soma das notas inseridas pelo usu�rio */
	int media;		/* m�dia das notas */
	
	/* fase de inicializa��o */
	total = 0;		/* inicializa total */
	contador = 1;	/* inicializa contador do loop */
	
	/* fase de processamento */
	while( contador <= 10 ){			/* loop 10 vezes */
		printf( "Digite a nota: " );	/* prompt para inser��o */
		scanf( "%d", &nota );			/* l� a nota do usu�rio */
		total = total + nota;			/* soma nota ao total */
		contador = contador + 1;		/* incrementa contador */
	} /* fim do while */
	
	/* fase de t�rmino */
	media = total / 10;					/* divis�o de inteiros */
	
	printf( "Media da turma eh %d\n", media); /* exibe resultado */
	return 0; /* indica que o programa foi concluido com sucesso */
} /* fim da fun��o main */
