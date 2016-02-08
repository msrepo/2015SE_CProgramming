#include"strrindex.h"
#include<stdio.h>
/*
Function: strrindex(s,t)
returns
  the position of the rightmost occurrence of t in s
  or -1 if there are none

Algorithm:
1.search for an occurrence
2.if not found
    return -1
  else
    store the index into current value
    while(search for another occurrence does not return -1)
      store the index into current value
    return current index value

*/
int strlindex(char *s, char *t);

int strrindex(char *s, char *t){
  int rindex = strlindex(s,t);

  int temp;
  if(rindex != -1)
    while((temp = strlindex(s+rindex+1,t)) != -1){
            rindex += temp+1;
    }

  return rindex;
  }



int strlindex(char *s, char *t){
  int i,j,k;
  for(i = 0; s[i] != '\0'; i++){
    for(j=i,k=0; t[k] != '\0' && s[j+k] != '\0' && s[j+k] == t[k]; k++)
      ; //do nothing
    if(t[k] == '\0')
      return j;
  }
  return -1;
}
