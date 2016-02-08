#include<stdio.h>

main(){


  int x = 0, i = 0;

  for(i = 1; i <10; i++){
    if(i%2==1)
      x += i;
    else
      {
        x--;
        printf("%d\t",x);
      }
      printf("\nx=%d",x);

  }
}
