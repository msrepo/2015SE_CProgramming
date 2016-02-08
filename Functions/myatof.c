#include "myatof.h"
#include<ctype.h>
#include<float.h>
#include<math.h>
#include<stdio.h>
/*
K and R C Chapter6 Functions and Program Structure
Functions returning non-integer type

Function : double myatof(char *s)

converts string s to its double precision floating point equivalent
It handles optional sign and decimal point and presence or absence of either
integer part or fractional part

Algorithm:
ignore whitespace in the beginning
if first non-whitespace is either + or -
  set sign to +1 or -1
if first non-whitespace is a digit
  start converting digits into integer-part until a non-digit is seen
  store into int_part
if the next character is a decimal dot
    read further.
    if the read value is a digit
      start converting digits into fractional-part until a non-digit is seen
      store into fract_part
else //that is any non-convertible character is seen
  return not-a-number

return sign * int_part+fract_part
*/
double myatof(char *s){
  double fract_part = 0.0, fract_multplier_weight = 1.0;
  int sign = 1,i,int_part = 0;

  //ignore blankspace
  for(;isspace(*s);s++)
    ; //do nothing

  if(*s == '-')
    sign = -1;
  if(*s == '-' || *s == '+')
    s++;
  for(;isdigit(*s);s++)
    {
      int_part = 10 * int_part + (*s - '0');
      //printf("%i\n",int_part);
    }
  if(*s == '.')
    {
      s++;
      for(i = 1;isdigit(*s);s++,i++)
        {
          fract_multplier_weight /= 10.0;
          fract_part += fract_multplier_weight * (*s - '0');
        }

    }

    return sign * int_part + fract_part;

}
