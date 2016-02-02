#include<stdio.h>

/* switch case - only constant integer values allowed in case */

main(){

	float x;	

	printf("Enter a number:");
	scanf("%f",x);

	switch(x){
	
	case 1.0:
		printf("\nCase 1 is executed.\n");
		break;
	default:

		printf("\nDefault case is executed.\n");
		break;




	}



}
