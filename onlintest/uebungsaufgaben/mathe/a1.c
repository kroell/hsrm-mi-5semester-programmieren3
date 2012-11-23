/* Wallisches Produkt */

/* Auskommentiert ist Variante B */


#include <stdio.h>
#include <stdlib.h>

double ai;
double ai_mineins = 1;
double i = 1;

/* Potenzieren */
double potenz(int basis, int exponent){
  int j, sum;
  sum = 1;
  
  for (j=0;j<exponent;j++){
    sum *= basis;
  }
  return sum;
}

/* Betrag ausrechnen */
double absolut(double value){
  if (value < 0){
    return value *= -1;
  }
  else{
    return value;
  }
}

/*float piWallisHelp (double ai_mineins, double i, double epsilon){
  ai = ai_mineins * (1+(1/(4*potenz(i,2)-1)));

  double abbruch = ai - ai_mineins;
  
  if (absolut(abbruch) < epsilon){
    return 2*ai;
  }
  else{
    return piWallisHelp(ai, i+1, epsilon);
    
  }
}*/

/* Wallisches Produkt errechnen */
float piWallis (double epsilon){
  /*return piWallisHelp(1,1,epsilon);*/
 
  ai = ai_mineins * (1+(1/(4*potenz(i,2)-1)));

  if (absolut(ai - ai_mineins) < epsilon){
    return ret;
  }
  else{
    ai_mineins = ai;
    i = i+1;
    piWallis(epsilon);
    /*return piWallisHelp(ai, i+1, epsilon);*/
  }
  return 2*ai;
}

int main (void){
  double epsilon = 0.0001;
  double erg = piWallis(epsilon);
  printf ("Ergebnis: %f\n", erg);

  return 0;
}
