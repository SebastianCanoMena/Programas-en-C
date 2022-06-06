//secuencia fibunachi
//program que calcule 50 elementos de la secuencia fibunacci
#include <stdio.h>
int n1,n2,a,x;
int main(void){
n1=0;

n2=1;

for(x=1;x<=50; x++){
a=n1+n2;
printf("\n %i- %i", x, n1);
n1=n2;
n2=a;
 }
 }
 
 
