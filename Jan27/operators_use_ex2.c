#include<stdio.h>

main(){

	int a,b=0,c=0;

	//a=b=c=0
	a=++b + ++c;
	//c=1 b=1 a=2	
	printf("%d %d %d\n",a,b,c);	
	
	
	a=b++ + c++;
	//c=2 b=2 a=2
	printf("%d %d %d\n",a,b,c);

	
	a=++b + c++;
	//c=3 b=3 a=5
	printf("%d %d %d\n",a,b,c);

	a=b-- + --c;
	//c=2 b=2 a=5
	printf("%d %d %d\n",a,b,c);



}
