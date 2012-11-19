/***************************************/
/* heron.c                             */
/*                                     */
/* Berechnung einer Quadratwurzel      */
/* mittels Heronverfahren              */
/***************************************/

#include <stdio.h>
#include <stdlib.h>

double e = 0.0000001;
double x_alt;
double x_neu;

/* Berechnet a0 */
double calc_startvalue(double x)
{
  return ((1+x)/2);
}

/* Berechnet die Quadratwurzel mit derm Heron Verfahren */
double calc_heron (double x)
{  
  x_neu = ((x_alt + (x/x_alt)) / 2);

  /* Wenn sich die beiden Werte nur um einen Wert kleiner Epsilon unterscheiden */
  /* ist die Berechnung beendet */
  if ((x_alt-x_neu) <= e)
  {
    printf("Ergebnis: %e\n", x_neu);
    return x_neu;
  }
  /* Ansonsten wird der alte Wert durch den neuen ersetzt und die Funktion */
  /* rekursiv erneut aufgerufen */
  else
  {
    x_alt = x_neu;
    calc_heron (x);
  }
}

int main (void)
{
  double x;
  scanf ("%lg\n", &x);
  x_alt = calc_startvalue(x);
  calc_heron(x);

  return 0; 
}
