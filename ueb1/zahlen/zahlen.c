#include <stdio.h>
#include <stdlib.h>

/* Global deklariert wird c mit 0 initialisiert */
int c;
int a,b;

int main(void)
{  
  int i;

  /* Innerhalb der Funktion muss es mit 0 initialisiert werden, sonst wird irgend ein Wert zugewiesen */
  /*int c=0;*/

  for (i=0; i<17 ; i++)
  {
    printf("\ni: %d\n",i);

    a = i ^ 10;
    printf ("a: %d\n",a);
    b = 17 / (a + 1);
    printf ("b: %d\n",b);
    c = a + b + c;
    printf ("c: %d\n",c);
  }

  /*printf ("Fertig! Ergebnis = %d\n", c);*/

  return 0;
}
