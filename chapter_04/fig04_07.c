/* Figura 4.7:fig_04_07.c
	Contando nots de letra */
	
#include <stdio.h>

/* função main inicia a execução do programa */
int main( void )
{
	int nota = 0;	/* uma nota */
	int aCont = 0;	/* número de As */
	int bCont = 0;	/* número de Bs */
	int cCont = 0;	/* número de Cs */
	int dCont = 0;	/* número de Ds */
	int fCont = 0;	/* número de Fs */
	
	printf( "Dgite as notas em Letra.\n" );
	printf( "Digite o caractere EOF para encerrar a entrada.\n" );
	
	/* loop até que o usuário digite sequência de fim de arquivo */
	while( ( nota = getchar() ) != EOF ){
		
		/* determina qual nota foi digitada */
		switch( nota ){ /* switch aninhado no while */
		
			case 'A':		/* nota foi 'A' maiusculo */
			case 'a':		/* ou 'a' minusculo */
				++aCont;	/* incrementa aCont */
				break;		/* sai do switch */
				
			case 'B':		/* nota foi 'B' maiusculo */
			case 'b':		/* ou 'b' minusculo */
				++bCont;	/* incrementa bCont */
				break;		/* sai do switch */
				
			case 'C':		/* a nota foi 'C' maiuscula */
			case 'c':		/* a nota foi 'c' minusculo */
				++cCont;	/* incrementa cCont */
				break;		/* sai do switch */
				
			case 'D':		/* a nota foi 'D' maiusculo */
			case 'd':		/* a nota foi 'd' minusculo */
				++dCont;	/* incrementa dCont*/
				break;		/* sai do switch */
				
			case 'F':		/* a nota foi 'F' maiusculo */
			case 'f':		/* a nota foi 'f' minusculo */
				++fCont;	/* incrementa fCont */
				break;		/* sai do switch */
				
			case '\n':		/* ignora caracterres de nota linha, */
			case '\t':		/* tabulações */
			case ' ':		/* e espaços na entrada */
				break;		/* sai do switch */
				
			default:		/* apanha todos os outros caracteres */
				printf( " Letra de nota incorreta. ");
				printf( " Digite nova nota. \n");
				break;		/* opcional: sairá do switch de qualquer forma */			
		} /* fim do switch */
	} /* fim do while */
	
	/* saida de resumo dos resultados */
	printf( "\nTotais para cada nota sao:\n" );
	printf( "A: %d\n", aCont );	/* exibe númeri de nitas A */
	printf( "B: %d\n", bCont );	/* exibe númeri de nitas B */
	printf( "C: %d\n", cCont );	/* exibe númeri de nitas C */
	printf( "D: %d\n", dCont );	/* exibe númeri de nitas D */
	printf( "F: %d\n", fCont );	/* exibe númeri de nitas F */
	
	return 0; /* indica que i programa foi executado com sucesso */
} /* fim da função main */
