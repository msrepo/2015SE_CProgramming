#include<stdio.h>

/* program to calculate power of 2 
	This will be an example of using prefix increment operator


*/

main(){

	int x = 7;

	int y = 2;
	int z = 1;

	while( x-- >0){
		
		z *= y;
		


	}

	printf("2^7 = %d\n",z);


}
