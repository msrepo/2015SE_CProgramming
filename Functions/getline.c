#include "getline.h"
#include<stdio.h>
/*
returns number of characters read into line
an empty line returns 0

*/
int getLine(char *line, int maxlength){
  size_t i;
    for( i = 0; i < maxlength-1 && (line[i] = getchar()) != EOF && line[i] != '\n';i++)
      ; //do nothing

      if(line[i] == EOF)
        line[i] = '\0';
      else
        line[i+1] = '\0';

      return i;
}
