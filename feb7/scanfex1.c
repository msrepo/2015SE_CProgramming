#include<stdio.h>

/* example of scanf function */


main(){
  char name[20] = "sandip";
  int var1;
  printf("Hello, %s\n",name);

  printf("enter a number:\n");
  scanf("%d",&var1);
  printf("value is %d and location is %p",var1, &var1);



}
