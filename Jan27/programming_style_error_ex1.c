/*
C will automatically provide an implicit declaration for a function if there is no prototype in scope (such as due to the omission of #include <stdio.h>). The implicit declaration would be:

int printf();

Meaning that printf is a function that returns an int and can take any number of arguments. This prototype happened to work for your call. You should #include <stdio.h>

Finally, I should add that the current C standard (ISO/IEC 9899:1999 or colloquially "C99") does not allow implicit declarations, and this program would not conform. Implicit declarations were removed. I believe your compiler does not support C99. 


*/

#include<stdio.h>

main(){
	float qx,zz,tt;

	printf("enter three numbers");
	scanf(	"%f%f	%f",&qx,&zz,&tt);
	printf("average is=%f",(qx+tt+zz)/3.0);

return 0;
}
