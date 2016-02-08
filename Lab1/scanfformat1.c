#include<stdio.h>
/* program to show use of scanf formatting options
  scanf function description
  Similiar to printf, scanf takes optional modifiers along with conversion specifier

  When scanf searches for input stream for a value to be read,
  it always skips whitespace, except in %c format character.
  %c reads a character from input, no matter what.

  Conversion modifiers
  hh value is to be stored in a char
  h short int
  l long int, double
  ll long long int
  L  long double


  Conversion character
  d value to be read as decimal number
  i like %d, except numbers represented as octals or hexadecimals also can be read
  u corresponding argument should be unsigned int
  o,x
  e,f,g floating point numbers (3.24e-3)
  c
  s read sequence of characters. the sequence begins with first non-whitespace
        character and is terminated by the first whitespace character.
  [...] characters enclosed within brackets indicate that a character string
        is to be read as in %s. The characters within the brackets indicate
        permissible characters in the string. if any character other than specified
        in the brackets is encountered, the string is terminated.
        Also, see [^]





*/

main(){
  int i;
  char c;
  unsigned hour, minute,second; //unsigned automatically means unsigned int

//whitespace character inside format string match arbitrary number of whitespace
  printf("\nEnter a number and a character:" );
  scanf("%i%c",&i,&c);
  printf("The number you entered was %d and the character was \'%c\'.\n",
            i,c );


//any nonformat characters that were specified in the format string of
//the scanf call is expected to match the input            
  printf("\nEnter date in hour:min:sec format:");
  scanf("%d:%d:%d",&hour,&minute,&second);
  printf("The time is %d hour, %d minute and %d second. \n",hour,minute,second );

}
