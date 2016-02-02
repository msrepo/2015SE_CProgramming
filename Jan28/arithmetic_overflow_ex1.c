#include<stdio.h>
#include<limits.h>
#include<math.h>

main(){

	int x = 2000000000 + 2000000000;
	printf("2000000000 + 2000000000=%d\n",x);


	printf("%d+2=%d\n",INT_MAX,INT_MAX+2);
	printf("%u+2=%u\n",UINT_MAX,UINT_MAX+2);
	printf("-(%d)=%d\n",INT_MIN,-INT_MIN);

	/*
		So, if you want to add two integers a and b (b 	>= 0),
		 the easiest way to find out if that overflows is 
		to check whether a+b<a

	*/

	//Issue 1: abs(-2147483648) < 0
	printf("absolute value of %d is %d\n",INT_MIN,abs(INT_MIN));
	



}
