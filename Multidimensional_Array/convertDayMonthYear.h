#ifndef CONVERT_DAY_MONTH_YEAR_H
#define CONVERT_DAY_MONTH_YEAR_H

/* set day_of_year from month and day */
int day_of_year(int year, int month, int day);
/*month_day: set month and day from day_of_year */
void month_day(int year, int day_of_year, int *month, int *day);

#endif
