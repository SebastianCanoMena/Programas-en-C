#include <stdio.h>
#include <math.h>

int main (void){
float Result1, Result2, A, B, C;
	printf("A:");
	scanf("%f", & A);
	printf("B:");
	scanf("%f", & B);
	printf("C:");
	scanf("%f", & C);
	
Result1 = (-B+sqrt(B*B-4*A*C))/(2*A);
Result2 = (-B-sqrt(B*B-4*A*C))/(2*A);

printf("%f",  Result1);
printf("%f", Result2);
}
