#include<stdio.h>

main(){

	int a = 1, b = 2, c = 3, d = 4;

	printf("a*b/c =%d\n",a*b/c);		//0
	printf("a*b%%c+1 =%d\n",a*b%c+1);	//3	// ( (a*b) %c) + 1
	printf("++a*b-c-- =%d\n",++a*b-c--);	//1	// ( (++a) * (b) ) - (c--) )
	printf("a--b*++d =%d\n",a-(-b) *++d);	//12	// (a) -((-b)  *(++d))

	a = 7, b= 45;
	//printf("7+++4 = %d\n",7+++4);	//error
	printf("a+++b = %d\n",a+++b);	//error	
	printf("a=%d\n",a);
	printf("++a++ = %d\n",++a++);
	printf("a=%d\n",a);

	





}
