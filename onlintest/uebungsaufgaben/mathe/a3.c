/* Annaherung an 2 - Zweierfolge */
/* Aufgabe 3*/

#include <stdio.h>
#include <stdlib.h>

double potenzieren(double basis, int exp){
  double ret = 1;
  int i;
  if (exp == 0) return 1;
  for (i=0; i<exp; i++){
    ret *= basis;
  }
  return ret;
}

double absolut (double value){
  if (value < 1){
    return value *= -1;
  }
  return value;
}


double _zweierfolge(double e, double a, double n){
  double ret;
  ret = potenzieren((2/(double)(2*n-1)),2) * (2*n*n-2*n+1) + ((a-1)/((double)n+1));

  if (absolut(ret - a) < e){
    return ret;
  }

  return _zweierfolge(e,ret, n+1);
}

double zweierfolge (double e, double start){
  double n = start;
  return _zweierfolge(e, start, n);
}


int main (void){
  double start = 33;
  double e = 0.0001;
  
  printf("Ergebnis: %f\n",zweierfolge (e,start));
  return 0;
}

