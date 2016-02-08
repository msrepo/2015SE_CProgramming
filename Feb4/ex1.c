int printf(char *format,...); //prototype for printf

#     include"multiply.exe"
#define PI 22/7
//this is a start of main funciton
main(){
  float result;
  float radius = 2.34;

  float circumference = 2*PI*radius;

  printf("%f is the circumference of circle of radius %f\n",
    circumference,radius);
  //this is a main body
  result = multiply(3.4,4.5);

  printf("%f\n",result);
}
