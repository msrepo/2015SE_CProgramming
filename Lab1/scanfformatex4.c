#include<stdio.h>

main(){

  char line[81];
  printf("Enter a sentence(maximum 80 characters long):");

  scanf("%80c",line);
  printf("%s\n",line );
}
