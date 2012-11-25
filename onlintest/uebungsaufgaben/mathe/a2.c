/* PI Annaeherungsverfahren von Achimdes */
/* Aufgabe 2 */

#include <stdio.h>
#include <math.h>


static double piArchimedes (double e);

/*Potenzieren*/
double _pow(double basis, double exp){
  double ret = 1;
  int i;
  
  if (exp == 0){
    return 1;
  }

  for (i = 0; i < exp; i++){
    ret *= basis;
  }
  return ret;
}

/*Betrag*/
double _abs(double d){
  if(d<0){
    return d *= -1;
  }
  return d;
}

/* Pi Ausrechnen HELPER*/
double _piArchimedes(double ep, double u, double i){

  double ret = 0;

  /*Berechnung*/
  double a = _pow(2,i-2);
  double b = u/(6*a);
  double c = 1-(_pow(b,2));
  double d = sqrt(c);
  double e = 2+2*d;
  double f = sqrt(e);
  double g = 2*u;

  ret = g/f;

  if (_abs(ret-u) <= ep){
    return ret;
  }
  return _piArchimedes (ep,ret,i+1);
}

/* Pi Ausrechnen*/
double piArchimedes(double ep){
  return _piArchimedes(ep,3,2);
}


int main(void){
  int ep = 0.001;
  printf("Ergb: %f\n",piArchimedes(ep));

  return 0;
}
