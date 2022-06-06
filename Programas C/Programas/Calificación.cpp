#include<stdio.h>
int v;
int main(void){
	printf("dime tu calificación");
	scanf("%i",& v);
	if ((v>10)||(v<0)){
		printf("Calificación no valida");
	}
	if ((v>=0)&&(v<6)){
		printf("Reprobado");
	}
	else {
		printf("Aprovado");
	}
	
	}

