#include <stdio.h>
#include <math.h>

double piA(double e);
double piA_(double a, double i, double e);

double piA(double e){
  return piA_(3,2,e);
}

double piA_(double a, double i, double e){
  double one = pow(2,(i-2));
  double first = (a / (6 * one));
  double snd = pow(first,2);
  double thrd = sqrt(1-snd);
  double fourth = (2 + (2 *thrd));

  double temp = 2 * a / sqrt(fourth);

  if (((a-temp)*-1) < e)
    return temp;
  return piA_(temp,i+1,e);
}

int main(void){
  double e = 0.0000001;
  printf("Ergebnis: %f\n", piA(e));
  return 0;
}
