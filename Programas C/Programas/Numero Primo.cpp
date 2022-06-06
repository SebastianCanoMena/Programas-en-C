#include<stdio.h>
int n, x, c;

	int main(void){
		printf("Dame un numero\n");
		scanf("%i \n", &n);
		for(x=1; x<=n; x++){
			if(n%x == 0){
				c=c+1;
			}
			}
		if(c<2){
			printf("Tu numero no es primo \n");
		}	
		else{
			printf("Tu numero es primo \n");
		}
		}
