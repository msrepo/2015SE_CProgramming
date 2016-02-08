
/*
Program to search for a text in a line and print the whole line if it contains
the text searched for.


Algorithm:
1.while(there is a line to read)
  if the given line contains the pattern
    print the line
*/

#include<stdio.h>
#include"strrindex.h"
#include "getline.h"
#define MAXLINE 80

int getLine(char *line,int maxlength);
int searchString(char *line, char *pattern);
main(){

  char line[MAXLINE];
  char *pattern = "me";
  int j;

  while(getLine(line,MAXLINE) > 0){
    if((j = strrindex(line,pattern) ) < 0)
      printf("%s\n", "Pattern:[me] not found.");
    else
      printf("Pattern:[%s] Found at index %d  %s\n",pattern,j,line);
  }


}

/*
Search of string pattern in line
returns -1 if the string pattern did not occur in line
    or else returns the index of the eaerliest occurrence of first character of the pattern
*/
int searchString(char *line, char *pattern){
  size_t i,j,k;

    for(j = 0; line[j] != '\0';j++)
    {
        for(k = 0; pattern[k] != '\0' && line[j+k] && line[j+k] == pattern[k]; k++)
        {

        }
        if(pattern[k] == '\0')
         return j;
    }

  return -1;
}
