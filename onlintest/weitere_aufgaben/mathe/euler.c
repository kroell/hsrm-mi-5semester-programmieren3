#include <stdio.h>
#include <math.h>

double euler (double e);
double helper(double e,double a, double n);

double euler(double e){
  double a = 1;
  double n = 1;
  return helper(e,a,n);
}

double helper(double e, double a, double n){
  double ret;
  double temp = 1+(1/n);
  ret = ((a + pow(temp,n)) / 2);

  if (((a-ret)*-1) < e){
    return ret;
  }
  return helper(e,ret,n+1);
}

int main (void){
  double e = 0.00000001;
  printf("%f\n", euler(e));
  return 0;
}
