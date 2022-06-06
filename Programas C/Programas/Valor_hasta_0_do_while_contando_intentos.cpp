#include<stdio.h>
int x, y, m, n;
int main (void){
	do{
		printf("dame otro valor\n");
		scanf("%i", &x);
		y++;
			m = m+x;
		}	
	while(x!=0);
		n = m/(y-1);
		printf("El Numero de intentos fue %i\n la suma de los valores es %i\n el promedio es: %i", y-1, m, n);	
}
