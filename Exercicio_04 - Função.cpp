#include<stdio.h>
#include<stdlib.h>
#include<time.h>

	int dado (int x){
	srand(time(NULL));
	for(x=1; x<30; x++){
	return ("%d ", rand() % 60);
	}
}
main(){
	int n1;
	printf ("\n\n NUMERO SORTEADO \t: %d \n", dado (n1));
	}
