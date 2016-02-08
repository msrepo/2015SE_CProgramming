#include<stdio.h>


main(){
int i;
float celcius1, fahrenheit1 = 0;
float celcius2, fahrenheit2 = 10;
int x[10];  //you can acces from x[0] to x[9]
float fahrenheit[10] = {0.0, 10.0, 20.0, 30.0, 40.0, 50.0, 60.0, 70.0, 80, 90.0},
  celcius[10]; //10 variables of type float
  int a;
  scanf("%d",&a);

  char name[20] = {'s','a','n', ' ','\t','\n','d','i','p'};


  char name2[20] = "sandip";
  char name3[a];
  //this is equivalent to char name[2] = {'s','a','n','d','i','p','\0'};

for(i = 0; i <20; i++)
  putchar(name[i]);

  printf("%s\n",name);
  printf("%s\n", name2);
  printf("%c %d\n",'\0', '\0');
  printf("%s\n",name3);

for(i = 0; i <10 ;i++){
  celcius[i] = 5.0/9.0 * (fahrenheit[i] - 32.0);
  printf("%.0f Celcius = %f fahrenheit\n",celcius[i],fahrenheit[i]);
}

fahrenheit[45] = 3.4; //should not do this













}
