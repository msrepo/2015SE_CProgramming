#include<stdio.h>
/* use of asterisk in scanf format conversion string */
main(){
  int i;

  char text[10];
  char string[10];
  printf("Enter a Number string floating-type string:");
  scanf("%i %5c %*f %s",&i,text,string);

  printf("\n%i %s %s\n",i,text,string);

  {
    int i=0;
    while(text[i] != '\0')
      putchar(text[i++]);
  }

}
