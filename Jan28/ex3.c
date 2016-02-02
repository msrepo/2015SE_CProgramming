#include<stdio.h>
/* more arithmetic operators */

main(){

	int x = 45, y = 23, z = 21,a;


	x += 2;		//	x = x + 2; 
	printf("%d\n",x);	
	x -= 2;		//	x = x - 2;
	printf("%d\n",x);
	x /= 2;		//	x = x / 2;
	printf("%d\n",x);
	x *= 2;		//	x = x * 2;
	printf("%d\n",x);


	x++;	//x = x + 1	//postfix increment
	x--;	//x = x - 1	//postfix decrement

	++x;	//x = x + 1	//prefix increment
	--x;	//x = x - 1	//prefix decrement

	//at this point x = 44
	a = x++;
	printf("a = %d x = %d\n",a,x);	//a = 44 x = 45
	a = ++x;
	printf("a = %d x = %d\n",a,x);	//a = 46 x = 46


}
