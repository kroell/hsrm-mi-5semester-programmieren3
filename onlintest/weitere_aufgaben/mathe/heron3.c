#include <stdio.h>

const double e = 0.0000001;

double start(double x){
  return ((1+x)/2);
}

double heron(double w, double x){
  double temp = ((w+(x/w))/2);
  if ((w-temp) < e)
    return temp;
  return heron(temp,x);
}

int main(void){
  double x = 123.4;
  printf("Heron: %f\n", heron(start(x),x));

  return 0;
}
