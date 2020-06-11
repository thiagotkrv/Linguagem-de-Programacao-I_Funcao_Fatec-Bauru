#include<stdio.h>

int test(int a){
	if (a>=0){
		return 1;
		
	}else{
   return 0;
}
}
main(){
	int n;
	printf ("\n\n DIGITE 1 NUMERO\t: ");
	scanf ("%d",&n);
	int resultado = test (n);
	printf ("\n\n RESULTADO\t: %d", resultado);
}
