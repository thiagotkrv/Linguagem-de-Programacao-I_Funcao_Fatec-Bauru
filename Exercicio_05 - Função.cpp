#include<stdio.h>

	
	char conceito (float nota){

		if((nota>=0.0) && (nota<=4.9)){
 		return 'D';
	}
		if((nota>=5.0) && (nota<=6.9)){
 		return 'C';
	}
		if((nota>=7.0) && (nota<=8.9)){
 		return 'B';
	}
		if((nota>=9.0) && (nota<=10.0)){
 		return 'A';
	}
}

int main(){
	
	float nota;
	char n1, n2, n3, n4, res;
		
	printf ("\n\n\t\t DIGITE A MEDIA FINAL de 0 a 10 \n\n");
	printf("\n NOTA: ");
	scanf("%f", & nota);
	res = conceito (nota);
	printf ("\n CONCEITO:\t %c \n", res);
}
