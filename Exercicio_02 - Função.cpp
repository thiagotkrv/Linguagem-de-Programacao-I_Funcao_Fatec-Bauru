#include<stdio.h>

float maior (float x, float y, float z){
	if(x > y){
		
		return x;
   }
   
   	if(y > z){
		
		return y;
   }else{
   	return z;
   }
   }
   
main(){
	float n1, n2, n3;
	printf ("\n\n DIGITE 3 NUMEROS \t: ");
	scanf ("%f %f %f",&n1,&n2,&n3);
	float resultado = maior (n1,n2,n3);
	printf ("\n\n MAIOR VALOR %.2f", resultado);
}
