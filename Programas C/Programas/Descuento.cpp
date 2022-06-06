#include <stdio.h>
int h;
int j;
int main (void){
printf("Descuentos disponibles\n");
printf("Intrudusca lo que va a pagar");
scanf("%i", & h);
if (h>=100000){
j = h*.20 ;
	//printf("El total a pagar es: %i", j);
}
if ((h=50000) && (h <100000)){
j = h*.15;
//Printf("El total a pagar es: %i", j);
}
if ((h>=10000)&&(h<50000)){
j = h*.10;
//pritnf("el total a pagar es: %i" j );
}
if((h>0)&&(h<9999)){
	h = j;
	//printf("El total a pagar es: %i" j);
}
printf("El total a pagar es: %i",j);
}

