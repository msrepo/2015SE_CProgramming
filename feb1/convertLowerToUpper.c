#include<stdio.h>

main(){

	int c;
	c = getchar();
	while(c != '\n'){
		if( c >= 'a' && c <='z')
			putchar(c - ('a' - 'A'));
		else
			putchar(c);
		
	 c = getchar();
	}
	putchar('\n');
}
