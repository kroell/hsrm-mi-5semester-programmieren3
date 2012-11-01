#include <stdio.h>
#include <stdlib.h>

/* BERECHNUNG DER VERSCHLUESSELUNG A-Z*/
int calcA(int character)
{
  int sum;
  return sum = ((((character-'A')+13) % 26)+'A');
}

/* BERECHNUNG DER VERSCHLUESSELUNG a-z*/
int calca(int character)
{
  int sum;
  return sum = ((((character-'a')+13) % 26)+'a');
}


int main(void)
{
   int c;
 
   while ((c = getchar()) != EOF) 
   {
     if (c >= 'A' && c <= 'Z')
     {
       c = calcA(c); 
     }
     else if (c >= 'a' && c <= 'z')
     {
       c = calca(c);
     }
     putchar(c);     
   }
   return 0;
}



