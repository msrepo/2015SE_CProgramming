
/* Round off an integer i to the next largest even multiple of another integer j,
	using Next_multiple = i + j - i % j
	Example: i = 256 j = 7
	Next_multiple  = 256 + 7 - 256 % 7
			= 259
*/

#include<stdio.h>


main(){

	int i = 256, j = 7;
	
	int next_multiple = i + j - i % j;

	int earlier_multiple = i - i % j;

	printf("%d + %d - %d %% %d = %d\n",i,j,i,j,next_multiple);
	
	printf("%d - %d %% %d = %d\n",i,i,j,earlier_multiple);
	



}	
