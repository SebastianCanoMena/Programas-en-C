#include<stdio.h>
int x;
int main (void){
	printf("INDICADOR DE NUMERO PRIMO O IMPAR \n");
	printf("dime un numero");
	scanf("%i", & x);
	if (x%2==0) {
	printf("el valor es par");
	}
	else {
	printf("el valor no es par");
	}
	}
