
#include<stdio.h>
int dia, mes, A, mes1, AA;
int main(void){

printf("Dame un dia\n");
scanf("%i", & dia);
printf("Dame un mes\n");
scanf("%i", & mes);
printf("Dame un año\n");
scanf("%i", & A);

if(AA%2==0){
AA=0;
}
switch (mes){
	case 1:
		mes1 = dia - 14;	
	break;
		case 2:
		mes1 = dia + AA + 31; 
	break;
		case 3:
		mes1 = dia + AA + 59; 
	break;
		case 4:
			mes1 = dia + AA + 90; 	
	break;
		case 5:
		mes1 = dia + AA + 110; 
	break;
		case 6:
		mes1 = dia + AA + 151; 
	break;
		case 7:
		mes1 = dia + AA + 181; 
	break;
		case 8:
		mes1 = dia + AA + 212; 
	break;
		case 9:
     	mes1 = dia + AA + 243; 
	break;
		case 10:
		mes1 = dia + AA + 273; 
	break;
		case 11:
		mes1 = dia + AA + 304; 
	break;
		case 12:
		mes1 = dia + AA + 334; 
	break;
	default:
		printf("ERROR\n");
}


printf("Han pasado %i", mes1, "dias");

}



