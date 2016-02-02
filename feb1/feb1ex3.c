#include<stdio.h>

/* Automatic Type Conversion */


main(){


	int i1 = -150.55;
	int i2;
	float f1 = 100.1;
	float f2;

	printf("i1 = %d\n",i1);
	f2 = i1;
	i2 = f1;
	printf("i2= %d \t f2 = %f \n", i2,f2);	// i2 = 100 f2 = -150.0000...
	
	i2 = i1 / f1;
	printf("i2= %d \t f2 = %f \n", i2,f2);	//i2 = -1  f2 = -150.00...
	
	f2 = i1 / i2;
	printf("i2= %d \t f2 = %f \n", i2,f2);	//i2 = -1  f2 = 150.0000

	i2 = 70;

	f2 = (float) i1 / (float) i2;
	printf("i2= %d \t f2 = %f \n", i2,f2);	//i2 = 70  f2 = 2.1....

	f2 = i1 / (float) i2;	
	printf("i2= %d \t f2 = %f \n", i2,f2);	//i2 = 70 f2 = 2.1....

	





}
