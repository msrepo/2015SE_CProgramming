#include<stdio.h>
#include"convertDayMonthYear.h"


main(){

    int month, day;
    printf("March 1st of non-leap-year(1981) is %d day.\n",day_of_year(1981,3,1) );

    month_day(1981,60,&month,&day);
    printf("60th day of 1981 is %d month and %d day.\n",month,day);


}
