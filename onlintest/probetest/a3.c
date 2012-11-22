/***************************************/
/* a3.c                                */
/*                                     */
/* n-te Wurzel berechnen               */
/*                                     */
/***************************************/

#include <stdio.h>
#include <stdlib.h>

double ai;
double ai_plus1;
double e = 0.0000000001;
double e2 = 0.00000010000;

int potenzieren(int basis, int exponent){
  int i, sum;
  sum = 1;
  for (i=0; i<exponent; i++){
    sum *= basis;
  }

  /*printf ("Potenz: %d\n",sum);*/
  return sum;
}

double calc(int x, int n){
  
  /*printf ("ai: %e\n", ai);*/

  /*Berechnungn*/
  int potenz1 = potenzieren (ai,n);
  double zaehler = potenz1-x;

  int potenz2 = potenzieren (ai,(n-1));
  double nenner = potenz2*n;

  double bruch = zaehler / nenner;

  ai_plus1 = ai - bruch;

  /*printf ("ai_plus1: %e\n", ai_plus1);*/
  
  if ((ai_plus1-ai) <= e){
    printf ("Ergebnis: %e\n", ai_plus1);
    return ai_plus1;
  }
  else{
    /*printf ("Weiter berechnen!\n");
    printf ("ai: %e\n",ai);
    printf ("ai_plus1: %e\n",ai_plus1);*/
    ai = ai_plus1;
    calc(x,n);
  }
  return 0;
}

int main(void){
  int x = 11;
  int n = 3;

  ai = x;
  calc(x,n);
  
  return 0;
}
