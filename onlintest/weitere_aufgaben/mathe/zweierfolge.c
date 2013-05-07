#include <stdio.h>
#include <math.h>

double zweierfolge(double e, double a, double n);


double zweierfolge(double e, double a, double n){
  double ret;

  double temp = (2/((2*n)-1));
  double temp2 = pow(temp,2);
  double temp3 = pow(n,2);
  double temp4 = ((2*temp3) - (2*n) + 1);
  double temp5 = (a/(n+1));

  ret = temp2 * temp4 + temp5;

  if (((ret - a)*-1) < e){
    return ret;
  }
  return zweierfolge(e,ret,n+1);
}

int main(void){
  printf("%f\n", zweierfolge(0.0000001, 20, 2));
  return 0;
}
