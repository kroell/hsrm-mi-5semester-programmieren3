#include <stdio.h>
#include <math.h>

const double e = 0.0000001;

double _pow(double basis, double exp){

  double ret = 1;
  int i;

  if (exp == 0) return 1;
  for (i=0;i<exp;i++){
    ret *= basis;
  }
  return ret;
}

double wurzel (double start, double x, double n){  
  double temp = start - (((_pow(start,n)) - x) / (n * _pow(start,n-1)));

  if (((temp-start)*-1) <= e){
    return temp;
  }
  return wurzel(temp,x,n);
}

int main(void){
  double n = 2;
  double x = 4;
  double start = 4;

  printf("Erg: %f\n", wurzel (start, x, n));
  return 0;
}
