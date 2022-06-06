#include<stdio.h>
int n, x, c;

	int main(void){
		
	
	for(n=2; n<101; n++){
	
		for(x=1; x<=n; x++){
		
			
			if(n%x == 0){
					c=c+1;
			   
			}
				if(x==n && c<=2){
				 printf("%i \n", n);	
				 c=0;
				}
					if(x==n){
						c=0;
					}
			}	
}   
	}
