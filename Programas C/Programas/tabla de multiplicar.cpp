//leer un valor, mostrar valor multiplicado del 1-10
#include<stdio.h>

int main (void){
	int n, x, M;
	scanf("%i", &n);
	
	for(x=1; x<=10; x++){
		M = n*x;
		printf("%i x %i = %i\n", n, x, M);}
	}
