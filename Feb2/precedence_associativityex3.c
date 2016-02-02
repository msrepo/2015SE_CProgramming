#include<stdio.h>

main(){
	int i = 1, j = 2, k = 3, m = 4;

	i += j + k;
	printf("%d\n",i);
// + has higher priority that += so (j+k) is evaluated first.
// (j+k) = 5
//this simplifies to i = i + (j+k)
//so, i = i + 5
//	= 6
	
	j *= k = m + 5;
	printf("%d\n",j);

//(m+5) which has value 9.
//this simplifies to j *= k = 9
//because of equal precedence, and right to left associativity ,
// k = 9 is evaluated first, whose value is 9
// hence,  j*=9
//j=18 




}
