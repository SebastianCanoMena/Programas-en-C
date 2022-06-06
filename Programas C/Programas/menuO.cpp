#include <stdio.h>
#include <math.h>
int  n,b,h;
float a,l,r,bm;
int main (void) {
while (n!=5){

	printf("1) area de un triangulo\n");
	printf("2) area de un cuadrado\n");
	printf("3) area de un circulo\n");
	printf("4) area de un trapecio\n");
	printf("5)Acabar el prorama\n");
	scanf("%i", & n);
	switch (n){
	case 1:
		printf("Da la base: ");
		scanf("%i", & b);
		printf("da la altura: ");
		scanf("%i",& h);
		a=b*h/2;
		printf("El area del triangulo es: %f",a);
		break;
	case 2:
		printf("da el lado: ");
		scanf("%i",& l);
		a=l*l;
		printf("El area del cuadrado es: %f",a);
		break;	
	case 3:
		printf("da el valor del radio: ");
		scanf("%i",& r);
		a=3.1416*r*r;
		printf("El area del circulo es: %f",a);
		break;
	case 4:
		printf("da la base mayor: ");
		scanf("%i",& bm);
		printf("da la base menor: ");
		scanf("%i",& bm);
		printf("da la altura: ");
		scanf("%i",& h);
		a=(bm+b*h)/2;
		printf("El area del trapecio es: %f",a);
		break;
	case 5:
		break;	
	default:
		printf("la opcion no es validad");
		}}}
