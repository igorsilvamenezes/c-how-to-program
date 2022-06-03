/* Figura 6.21: fig06_22.c
	Exemplo de array com indice duplo */
#include <stdio.h>
#define STUDENTS 3
#define EXAMS 4

/* prot�tipo de fun��es */
int minimum( const int grades[][ EXAMS ], int pupils, int tests );
int maximum( const int grades[][ EXAMS ], int pupils, int tests );
double average( const int setOfGrades[], int tests );
void printArray( const int grades[][ EXAMS ], int pupils, int tests );

/* fun��o main inicia a execu��o do programa */
int main( void )
{
	int student; /* contador de alunos */
	
	/* inicializa notas de aluno para tr� alunos (linhas */
	const int studentGrades[ STUDENTS ][ EXAMS ] = 
		{ { 77, 68, 86, 73 },
		  {	96, 87, 89, 78 },
		  { 70, 90, 86, 81 } };
		  
	/* mostra array studentGrades */
	printf( "O array eh:\n" );
	printArray( studentGrades, STUDENTS, EXAMS );
	
	/* determina menor e maior valor de nota */
	printf( "\n\nMenor nota: %d\nMaior nota: %d\n", 
		minimum( studentGrades, STUDENTS, EXAMS ),
		maximum( studentGrades, STUDENTS, EXAMS ) );
		
	/* calcula nota m�dia de cada aluno */
	for( student = 0; student < STUDENTS; student++ ){
		printf( "A nota media do aluno %d eh %.2f\n",
			student, average( studentGrades[ student ], EXAMS ) );
	} /* fim do for */
	
	return 0; /* indica conclus�o bem-sucedida */
} /* fim do main */

/* Encontra a menor nota */
int minimum( const int grades[][ EXAMS ], int pupils, int tests )
{
	int i; /* contador de alunos */
	int j; /* contador de exames */
	int lowGrade = 100; /* inicializa para maior nota poss�vel */
	
	/* loop pelas linhas de notas */
	for( i = 0; i < pupils; i++ ){
		
		/* loop pelas colunas de notas */
		for( j = 0; j < tests; j++ ){
			
			if( grades[ i ][ j ] < lowGrade ){
				lowGrade = grades[ i ][ j ];
			} /* fim do if */
		} /* fim do for interno */
	} /* fim do for externo */
	
	return lowGrade; /* retorna menor nota */
} /* fim da fun��o minimum */

/* Acha a maior nota */
int maximum( const int grades[][ EXAMS ], int pupils, int tests )
{
	int i; /* contador de alunos */
	int j; /* contador de exames */
	int highGrade = 0; /* inicializa para menor nota poss�vel */
	
	/* loop pelas linhas de notas */
	for( i = 0; i < pupils; i++ ){
		
		/* loop pelas colunas de notas */
		for( j = 0; j < tests; j++ ){
			
			if( grades[ i ][ j ] > highGrade ){
				highGrade = grades[ i ][ j ];
			} /* fim do if */
		} /* fim do for interno */
	} /* fim do for externo */
	
	return highGrade; /* retorna nota m�xima */
} /* fim da fun��o maximum */

/* Determina a nota m�dia para determinado aluno */
double average( const int setOfGrades[], int tests )
{
	int i; /* contador de exames= */
	int total = 0; /* soma das notas de teste */
	
	/* soma todas as notas para um aluno */
	for( i = 0; i < tests; i++ ){
		total += setOfGrades[ i ];
	} /* fim do for */
	
	return (double) total / tests; /* m�dia */
} /* fim da fun��o average */

/* Mostra o array */
void printArray( const int grades[][ EXAMS ], int pupils, int tests )
{
	int i; /* contador de aluno */
	int j; /* contador de exame */
	
	/* mostra cabe�alho de coluna */
	printf( "                [0]  [1]  [2]  [3]" );
	
	/* mostra notas em formato tabular */
	for( i = 0; i < pupils; i++ ){
		
		/* mostra label para linha */
		printf( "\nstudentGrade[%d] ", i );
		
		/* mostra notas para um aluno */
		for( j = 0; j < tests; j++ ){
			printf( "%-5d", grades[ i ][ j ] );
		} /* fim do for  interno */
	} /* fim do for externo */
} /* fim da fun��o printArray */
