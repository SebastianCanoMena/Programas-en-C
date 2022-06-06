#include <stdio.h>

int main (void){
int j[3][3], x, y;	
		for(y=0; y<3; y++){
			printf("\n");
			for(x=0; x<3; x++){			
			scanf("%d", & j[x][y]);
		}
	}		
		for(y=0; y<3; y++){
			printf("\n");
			for(x=0; x<3; x++){			
			printf("%3d", j[y][x]);
			}
		}
}
