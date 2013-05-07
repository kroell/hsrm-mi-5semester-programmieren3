#include <stdio.h>
#include <math.h>

float piWallis(double e){
  int start = 1;
  float ret = _help(start, 1, e);
  return ret;
}

float _help(double a, double i, double e){
  double temp = a * (1+(1/4*sqrt(i) -1));

  if (((temp-a)*-1) < e){
    return 2* temp;
  }
  else{
    return _help(temp, i++, e);
  }
}


int main(void){
  float bla = piWallis(0.00000001);
  printf ("Ergebnis: %f\n", bla);
  return 0;
}
