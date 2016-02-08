#include<stdio.h>
/* scanf example showing use of whitespace in format string */
main(){

  int i;
  char c;

  printf("Enter a number and a charater(blankspace is skipped):");
  scanf("%i %c",&i,&c );
  //what if we use   scanf("%i %c",&i,&c );

  printf("Number was %d and character was \'%c\'.\n",i,c );


}
