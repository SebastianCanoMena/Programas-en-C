#include<stdio.h>
#include<math.h>


int main(void){

float x1, x2, y1, y2, x_s, y_s, d;

	printf("Distancia entre dos puntos (x1, y1), (x2,y2): \n");
	printf("x1: \n");
	scanf("%f", &x1);
	
	printf("y1: \n");
	scanf("%f", &y1);
	
	printf("x2: \n");
	scanf("%f", &x2);
	
	printf("y2: \n");
	scanf("%f", &y2);

		//simplificando x, y 
		x_s = (x2-1*x1);
		y_s = (y2-1*y1);


			//obteniendo distancia
			d = sqrt((x_s*x_s)+(y_s*y_s));
			
			printf("la distancia es: %f", d);
			}
