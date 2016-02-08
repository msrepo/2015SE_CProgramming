#include<stdio.h>

main(){
  char text[81];
  int conversion_count;

  printf("Enter a text followed by a newline: ");
  conversion_count = scanf("%[^\n]",text);

  printf("%s\n", text);
  printf("%d arguments converted.\n",conversion_count );
  {
    int i = 0;
    while(i++<81 )
      printf("%c",text[i] );

  }
}
