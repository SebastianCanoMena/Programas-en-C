#include<stdio.h>
int k[5], x;
int main(void){
	for(x=0; x<5; x++){
		printf("dame valores");
		scanf("%i", & k[x]);
		}
	for(x=0; x<5; x++){
		printf("\n %i", k[x]);
	}
}
