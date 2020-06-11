#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include<conio.h>

struct produto{
    
    char  nome [20];
    int peso;
    float preco;
};

	float m (float preco){
  		return preco/2;
	  } 

 int main () {
	char op;
	int cont, preco;
	do{
		system ("cls");
		printf ("\n\n\t\t SELECIONE ABAIXO PARA PROSSEGUIR ");
		printf ("\n\n");
		printf (" 0 - SAIR \n");
		printf (" 1 - CADASTRAR PRODUTOS\n");
		printf (" 2 - CALCULAR MEDIA DE PRECOS \n");
		printf (" 3 - CALCULAR PRODUTO MAIS LEVE \n\n DIGITE: ");
		scanf ("%d", & op);
		
	switch (op){
		case 1:
			cad();
			break;
		case 2:
			m();
			break;
		case 3:
			leve();
			break;
		}
	}while (op!= 0);

    struct produto p [2];
    printf ("\n\t\t\t PREENCHA OS DADOS SOLICITADOS \n\n");
    
    for (cont=0; cont<2; cont++) {
        printf ("\n\n DIGITE O NOME: ");
        scanf ("%c", & p[cont].nome);
        fflush(stdin);
        printf ("\n DIGITE O PESO (KG): ");
        scanf ("%d", & p[cont].peso);
        printf ("\n DIGITE O PRECO (R$): ");
        scanf ("%f", & p[cont].preco);
        
    }
    printf ("\n\t VALORES CALCULADOS !!!\n\n");
	printf("\n A MEDIA DOS PRECOS E: R$ %.2f \n O PRODUTO MAIS LEVE E: %s  ", m(preco), p[cont].nome);
}

