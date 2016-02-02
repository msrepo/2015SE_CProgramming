#include<stdio.h>
main(){
	int a = 2, b = -3, c = 5, d = -7, e = 11;

	printf(" =%d\n",a/b/c);		//0
	printf(" =%d\n",7+c*--d/e);	//4
	printf(" =%d\n",2*a%-b+c+1);	//7 because,  ((2*a) % (-b)) + c + 1
	printf(" =%d\n",39/-++e-+29%c);
	//operator order
	//1. (++e) (+29)
	//2.  (39 / (-(++e)))  (+29)%c
	//3.(39 / (-(++e))) - (+29)%c ==> -3 - (4) = -7
			


	printf(" =%d\n",a+=b+=c+=1+2);	//c =5+3 = 8, b = -3 + 8 = 5, a= 2+5=7
	printf(" =%d\n",7- + ++a%(3+b));
	//int a = 2, b = 5, c = 5, d = -7, e = 11;
	//operator order
	//1.(3+b) = 8	
	//2.here, unary(+) and prefix(++) has same precedence but have associativity
	//right to left, so, + ++a is evaluated as (++a) and then +(++a) = 8
	
	//3. (+(++a))%(3+b) mod operator evaluation 8%8 = 0
	//4.	7 - ((+(++a))%(3+b))	7 - 0 = 7
	//finally, 	7 - ((+(++a))%(3+b)) = 7




}
