#include<stdio.h>
int v;
int main(void){
	printf("dime tu calificaci�n");
	scanf("%i",& v);
	if ((v>10)||(v<0)){
		printf("Calificaci�n no valida");
	}
	if ((v>=0)&&(v<6)){
		printf("Reprobado");
	}
	else {
		printf("Aprovado");
	}
	
	}

