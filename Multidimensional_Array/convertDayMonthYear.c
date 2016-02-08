/*
Convert day to month and day
Convert month and day to day



*/


static numberofdays[2][13] ={
  {0,31,28,31,30,31,30,31,31,30,31,30,31},
  {0,31,29,31,30,31,30,31,31,30,31,30,31}
};
/* set day_of_year from month and day */
int day_of_year(int year, int month, int day){
  int leap,i;

  leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
  for(i = 1; i < month; i++)
    day +=numberofdays[leap][i];
  return day;
}

/*month_day: set month and day from day_of_year */
void month_day(int year, int day_of_year, int *month, int *day){
  int leap,i;

  leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

  for(i = 1; day_of_year - numberofdays[leap][i] > 0; i++)
    day_of_year -= numberofdays[leap][i];

  *month = i;
  *day = day_of_year;

}
