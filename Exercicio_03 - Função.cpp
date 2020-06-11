#include<stdio.h>

	float media (float x, float y, float z){
	if((x > z) && (z < y)){
		return (x + y)/2;
	}
	if((y > x) && (x < z )){
		return (y + z)/2;
	}
	
	else{
		return (z + x)/2;
   }
   }
   
main(){
	float n1, n2, n3, res;
	printf ("\n\n DIGITE 3 NOTAS: \n");
	scanf (" %f %f  %f", & n1, &n2, &n3);
	res = media (n1, n2, n3);
	printf ("\n\n MEDIA\t: %.1f", res);
}
