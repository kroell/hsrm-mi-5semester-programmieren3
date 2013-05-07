#include <stdio.h>

const double E = 0.00000001;

double start(double x){
  return ((1+x)/2);
}

double calc(double a, double x){
  double temp = (a+(x/a))/2;

  if ((a - temp) < E){
    return temp;
  }
  else{
    return calc (temp, x);
  }
}

int main(void){
  double x = 16;
  double temp = start(x);
  double value = calc(temp, x);
  printf ("Wurzel: %f\n", value);
  return 0;
}
