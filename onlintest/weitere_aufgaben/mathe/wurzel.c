#include <stdio.h>


const double e = 0.00000001;

double _pow(double basis, double exp){
  double ret = 1;
  int i;

  if (exp == 0) return 1;
  for (i = 0; i < exp; i++){
    ret *= basis;
  }
  return ret;
}

double rootn(double a, double x, double n){
  double temp = a - (((_pow(a,n))-x) / (n * _pow(a,n-1)));

  if (((temp - a)*-1) < e){
    return temp;
  }
  else{
    return rootn(temp, x, n);
  }

}


int main(void){

  double x = 4;
  double n = 2;
  double start = 4;
  
  printf ("2te-Wurzel von 4: %f\n", rootn(start,x,n)); 
 
  return 0;
}
