#include<stdio.h>
int x, y, m;
int main (void){
	printf("dame un valor\n");
	scanf("%i", &x);

	while(x!=0){
		printf("dame otro valor\n");
		scanf("%i", &x);
		m = y++;
		
		}
printf("El Numero de intentos fue %i", y);	
}
