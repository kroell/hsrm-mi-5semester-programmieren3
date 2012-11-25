#include <stdio.h>
#include <stdlib.h>

double e = 0.0000001;

double start(double x){
  return ((1+x)/2);
}

double heron(double a, double x){
  double ret;

  ret = ( (a + (x/a)) / 2 );

  if ((a - ret) <= e){
    return ret;
  }
  return heron(ret, x);
}

int main(void){
  double x;
  scanf ("%lg\n", &x);
  printf ("x: %f\n", x);

  double start_value = start(x);
  printf ("Ergebnis: %f\n",heron(start_value, x));

  return 0;
}
