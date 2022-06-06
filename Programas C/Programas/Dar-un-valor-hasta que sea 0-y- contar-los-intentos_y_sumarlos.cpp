
#include<stdio.h>
int x, y, m, n;
int main (void){
	x=1;
	while(x!=0){
		printf("dame otro valor\n");
		scanf("%i", &x);
		y++;
		m = m+x;
		}
			n = m/(y-1);
			printf("El Numero de intentos fue %i\n", y-1);	
			printf("la suma de los valores es %i\n", m);
			printf("el promedio es: %i", n);
}
