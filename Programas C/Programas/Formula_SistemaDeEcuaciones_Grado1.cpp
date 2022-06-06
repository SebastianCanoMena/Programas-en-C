#include<stdio.h>
int a1x, a2x, b1y, b2y, c1, c2, x, y, parte_1y, parte_2y;
int main (void){
	
	printf("Sistema de ecuaciones de primer grado");
	
	printf("\nDame la primera ecuacion \n");
	
	//ecuación 1
		printf("x1: \n");
		scanf("%i", &a1x);
		
		printf("y1: \n");
		scanf("%i", &b1y);
			
		printf("c1: \n");
		scanf("%i", &c1);
		
//ecuacion 2

	printf("\nDame la segunda ecuacion \n");

				printf("x2: \n");
				scanf("%i", &a2x);
				
				
				printf("y2: \n");
				scanf("%i", &b2y);
				
				printf("c2: \n");
				scanf("%i", &c2);

	//resolución
	
	//sacando y 
	parte_1y =  ((a2x*(-1*c1)) + (a1x*c2));
	parte_2y = ((a2x*b1y) + (a1x*(-1*b2y)));
	y = parte_1y/(-1*parte_2y);
	//sacando x
	x = ((-1*(b1y*y))+c1)/a1x;
	
	//resultado
	printf("y = %i", y);
	printf("\nx = %i", x);
	
}

