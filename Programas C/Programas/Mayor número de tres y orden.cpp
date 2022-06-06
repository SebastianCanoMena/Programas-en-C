#include<stdio.h>
int k, o, g;
int main (void){
	printf(" dame el valor de k:");
	scanf("%i", & k);
	printf(" dame el valor de o:");
	scanf("%i", & o);
	printf(" dame el valor de g:");
	scanf("%i", & g);

	if((k>o && k>g) && (o>g)){
		printf("El numero  mas grande es k: %i y su orden ascendente es: %i %i %i ", k, g, o, k);
	}
	if((k>o && k>g) && (g>o)){
		printf("El numero  mas grande es k: %i y su orden ascendente es: %i %i %i ", k, o, g, k);
	}	
	if((o>k && o>g) && (k>g)){
		printf("El numero  mas grande es o: %i y su orden ascendente es: %i %i %i ", o, g, k, o);
	}
	if((o>k && o>g) && (g>k)){
		printf("El numero  mas grande es o: %i y su orden ascendente es: %i %i %i ", o, k ,g, o);
	}
	if((g>o && g>k) && (o>k)){
		printf("El numero  mas grande es g: %i y su orden ascendente es: %i %i %i ", g, k, o, g);
	}
	if((g>o && g>k) && (o>k) && (k>o)){
		printf("El numero  mas grande es g: %i y su orden ascendente es: %i %i %i ", g, o, k, g);
	}
	if(k==o && g==k){
		printf("Todos los valores son iguales");
	}
	if(k>o && k==g){
	printf("Todos los valores son iguales");
	}}
	
	
}


