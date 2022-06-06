#include<stdio.h>
int x;
int main (void){
	printf("dame un valor\n");
	scanf("%i", &x);
	while(x!=0){
		printf("dame otro valor\n");
		scanf("%i", &x);
	}
}
