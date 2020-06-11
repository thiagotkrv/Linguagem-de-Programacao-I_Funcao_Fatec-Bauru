#include<stdio.h>

int multiplica(int a){
		return a*10;
   }
   
main(){
	int n;
	printf ("\n\n DIGITE O NUMERO:\t ");
	scanf ("%d",& n);
	
	printf ("\n\n\t VALOR DIGITADO MULTIPLICADO POR 10 ");
	printf ("\n\n RESULTADO: %d ", multiplica (n));
} 
