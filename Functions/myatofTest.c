#include<stdio.h>
#include"getline.h"
#include"myatof.h"

#define MAXLINE 80
main(){

  char line[MAXLINE];
  double result;
  if(getLine(line,MAXLINE) > 0 ){
    printf("%f\n", myatof(line));
  }
}
