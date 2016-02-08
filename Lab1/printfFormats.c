#include<stdio.h>
/* program to show use of different formatting options available in C.
    - declaration and initialization of available variable types in C.

    See Chapter 16 of Programming in C by Stephen Kochan
    for further details.
*/
main(){
    char c = 'W';
    char string[] = "abcdefghijklmnopqrstuvwxyz";

    int i = 3342421;
    short int si = 2300;
    long int li = 12341231L;

    unsigned int ui = 1322344;
    unsigned long int uli = 1231231312;

//what if we assign negative value to unsigned type
    unsigned short int usi2= -5232;
    unsigned int i2 = -1;

    unsigned short int usi = 65473;

    float f = 5234.232F;
    float f1 = 321231.23234E-32;
    double d = 723121.243211231;
    double d1 = 5234.232;
    double d2 = 321231.23234E-32;
    double d3 = 22231.2342e+301;


    printf("Integers:\n" );
    printf("%i %o %x %u\n",i,i,i,i );
    //print value of i in decimal, octal, hexadecimal and unsigned form
    printf("%x %X %#x %#X\n",i,i,i,i);
    //print corresponding hexadecimal value with/without leading 0x(0X)
    printf("%+i % i %010i %.7i\n",i,i,i,i);
    // force sign to appear
    //add a leading space in front of positive value
    //minimum field-width of 10 digits, fill empty space with a zero
    //for integers, %.7i means %7i, i.e minimum field-width of 7 digits
    printf("%i %o %x %u\n",si,si,si,si );
    printf("%i %o %x %u\n", ui,ui,ui,ui);


    printf("\nFloats and Doubles:\n" );
    printf("%f %e %g\n",f,f,f); //f was initialized as f = 5234.232F;
    //above line shows inaccuracy and imprecise representation of float types
    printf("%f %e %g\n", f1,f1,f1);//f1 = 321231.23234E-32;
    printf("%f %e %g\n",d,d,d );//double d = 723121.243211231;
    printf("%.9f\n",d );
    //above line shows how double type can store decimal digits more precisely
    //than float type
    printf("%f %e %g\n",d1,d1,d1 );//double d1 = 5234.232;
    //printf("%f %e %g\n",d3,d3,d3 );//double d1 = 22231.2342e+301;

    //what if we provide inadequate parameters to printf??
    printf("%f %e %g\n",d,d);
    //in above line,only two parameters have been provided instead of 3 required
    //the result may be different for other compilers
    //The compiler may not complain, but printed unwanted value.
    //Such silent errors are harmful, since we will have no idea that
    //we got incorrect output.[semantic error]
    //Also beaware of excess parameters
    //printf("%f %e %g",d,d,d,d);

    printf("\nCharacters:\n");
    printf("%c\n",c);
    printf("%3c%3c\n",c,c );
    printf("%d\n",c );


    printf("\nStrings:\n" );
    printf("%s\n",string);
    printf("%.5s\n", string); //print only first 5 characters from the string
    printf("%30s\n", string);
    //occupy minimum column width of 30
    //which means there will be 3 blankspace at the start
    printf("%20.5s\n", string);
    //occupy minimum column width of 20 and print only 5 characters
    printf("%-20.5s\n", string);
    //(Left justify)occupy minimum column width of 20 and print only 5 characters

    printf("\nErrors:\n" );
    printf("%d %u\n", usi2,usi2);
    printf("%d %u\n", i2,i2);
}
