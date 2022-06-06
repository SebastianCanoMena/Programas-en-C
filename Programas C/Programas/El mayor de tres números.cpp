#include<stdio.h>
int k, o, g;
int main (void){
	printf(" dame el valor de k:");
	scanf("%i", & k);
	printf(" dame el valor de o:");
	scanf("%i", & o);
	printf(" dame el valor de g:");
	scanf("%i", & g);

	if((k>o) && (k>g)){
		printf("El numero  mas grande es k: %i", k);
	}
	if((o>k) && (o>g)){
		printf("El numero  mas grande es o: %i", o);
		
	}
	if((g>o) && (g>k)){
		printf("El numero  mas grande es g: %i", g);
		
	}
	else{
		printf("Datos erroneos ");
		
	}

}

