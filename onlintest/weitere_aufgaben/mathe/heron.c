#include <stdio.h>
#include <stdlib.h>

double EPSILON = 0.00000001;

double calcStart(double x){
  return ((1+x)/2);
}

double calcHeron(double start, double x){
  double temp = (start + (x/start)) / 2;
  if ((start - temp) < EPSILON){
      return temp;
  }
  else{
    return calcHeron(temp, x);
  }
}

int main(void){
  double x = 17;
  double startValue = calcStart(x);

  printf ("X: %f \n", x);
  printf ("Startwert %f: \n", startValue);
  printf ("Heron: %f: \n", calcHeron(startValue,x));

  return 0;
}
