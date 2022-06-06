#include <stdio.h>

int main (void){
int  b, c, x, y, j[10][10]; 
	printf("Numero de filas:");
	scanf("%d", &x);	
	printf("Numero de columnas:");
	scanf("%d", &y);	
		for(c=0; c<y; c++){
			printf("\n");
			for(b=0; b<x; b++){			
			scanf("%d", & j[b][c]);
		} 
	}		
		for(c=0; c<y; c++){
			printf("\n");
			for(b=0; b<x;  b++){			
			printf("%3d", j[b][c]);
			}
		}
}
