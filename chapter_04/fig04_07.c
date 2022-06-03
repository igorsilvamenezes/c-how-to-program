/* Figura 4.7:fig_04_07.c
	Contando nots de letra */
	
#include <stdio.h>

/* fun��o main inicia a execu��o do programa */
int main( void )
{
	int nota = 0;	/* uma nota */
	int aCont = 0;	/* n�mero de As */
	int bCont = 0;	/* n�mero de Bs */
	int cCont = 0;	/* n�mero de Cs */
	int dCont = 0;	/* n�mero de Ds */
	int fCont = 0;	/* n�mero de Fs */
	
	printf( "Dgite as notas em Letra.\n" );
	printf( "Digite o caractere EOF para encerrar a entrada.\n" );
	
	/* loop at� que o usu�rio digite sequ�ncia de fim de arquivo */
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
			case '\t':		/* tabula��es */
			case ' ':		/* e espa�os na entrada */
				break;		/* sai do switch */
				
			default:		/* apanha todos os outros caracteres */
				printf( " Letra de nota incorreta. ");
				printf( " Digite nova nota. \n");
				break;		/* opcional: sair� do switch de qualquer forma */			
		} /* fim do switch */
	} /* fim do while */
	
	/* saida de resumo dos resultados */
	printf( "\nTotais para cada nota sao:\n" );
	printf( "A: %d\n", aCont );	/* exibe n�meri de nitas A */
	printf( "B: %d\n", bCont );	/* exibe n�meri de nitas B */
	printf( "C: %d\n", cCont );	/* exibe n�meri de nitas C */
	printf( "D: %d\n", dCont );	/* exibe n�meri de nitas D */
	printf( "F: %d\n", fCont );	/* exibe n�meri de nitas F */
	
	return 0; /* indica que i programa foi executado com sucesso */
} /* fim da fun��o main */
