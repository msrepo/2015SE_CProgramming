

/* Program to show that printf returns the number of characters printed */


#include<stdio.h>


main(){

	int count1 = printf("Hello, World\n");

	int count2 = printf("abc\0abc\0");


	printf("No of characters printed:%d\n",count1);
	
	printf("No of characters printed:%d\n",count2);
}
