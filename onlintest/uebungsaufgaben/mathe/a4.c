/* Annaeherung eulerische Zahl */
/* Aufgabe 4 */

#include <stdio.h>
#include <stdlib.h>

double a_alt;
double a_neu;
double n;
double e = 0.0001;

double potenz(double basis, double exp){
  double i, ret;
  ret = 1;
  for (i=0; i<exp; i++){
    ret *= basis;
  }
  return ret;
}

double absolut(double value){
  if (value < 0){
    return value *= -1;
  }
  return value;
}

double euler(double e){
  double newpotenz = potenz(1+(1/n),n);
  a_neu = (a_alt + newpotenz)/2;

  if ((absolut(a_alt - a_neu)) < e){
    return a_neu;
  }
  else{
    a_alt = a_neu;
    n += 1;
    euler (e);
  }
  return a_neu;
}



int main (void){
  a_alt = 1;
  n = 1;

  double erg = euler(e);
  printf ("Ergebnis: %f\n", erg);

  return 0;
}
