/*n-te Wurzel*/

#include <stdlib.h>
#include <stdio.h>

double ep = 0.0000001;

double _pow(double basis, int exp){
  double ret = 1;
  int i;

  if (exp == 0)return 1;

  for (i = 0; i < exp; i++){
    ret *= basis;
  }
  printf("potenz: %f\n", ret);
  return ret;
}

double _abs(double d){
  if (d < 0)
    return -d;
  
  return d;
}

double _nte (double x, double a, double n){
  double ret;

  ret = a - (_pow(a,n)-x)/(n*_pow(a,(n-1)));

  if (_abs(a-ret)>ep)
    return ret;

  return _nte ( x, ret, n+1);
}

double nte(double x){
  
  return _nte (x, x, 1);
}


int main(void){
  double x = 15;

  printf("ergebnis: %f\n", nte(x));
  return 0;
}
