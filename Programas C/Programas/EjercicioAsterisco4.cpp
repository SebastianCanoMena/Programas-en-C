#include <stdio.h>
int x, y, f, w;
int main (void){
	scanf("%i", & x);
		for(f=1; f<=x; f++){
          printf("\n");
		for(w=1; w<=f; w++){
		printf(" ");	
		}
	for(y=1; y<=x; y++){
		printf("*");

}
}

		for(f=x; f>=1; f--){
          printf("\n");
		for(w=1; w<=f; w++){
		printf(" ");	
		}
	for(y=1; y<=x; y++){
		printf("*");

}
}
	}
