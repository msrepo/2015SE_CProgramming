#include<stdio.h>

/* example of functions */


int add( int a, int b);		//function prototype

main(){
	int x = 5,y = 7,z;

	z = add(x,y);

	printf("%d + %d = %d \n",x,y,z);



}



int add( int a, int b){


	int c = a + b;

	return c;



}
