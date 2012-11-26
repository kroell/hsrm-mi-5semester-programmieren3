/*um n nach rechts oder links stellen verschieben*/
/*Online-Test Aufgabe 2 vom 26.11.2012 */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/* im Test s ueberschreiben und kein return Wert */
char *verschiebe_links(char *s, int n){

  char temp[100] = "";
  char _temp[100] = "";
   char __temp[100] = "";
  
  strcpy(temp,s);
  strcpy(_temp,s);
  /*  strcpy(__temp,s);*/
  strcat(_temp, s);
  
  int size_s = strlen(s);
  int size_temp = strlen(_temp);
  int i;
  int j = 0;

  for (i=0; i < *(_temp+i)!= 0; i++){
    *(_temp+(j-n)) = *(_temp+i);
    j++;
  }
  for(i=size_s; *(_temp+i) !=0; i++){
    *(_temp+i) = 0;
    }
 
  return _temp;
}

/* im Test s ueberschreiben und kein return Wert */
char *verschiebe_rechts(char *s, int n){
  /* TBD */
  return _temp;
}

int main (void){
  char *string = "hallo";
  int n;
  n = 1;
  printf("n=1: %s\n",verschiebe_rechts(string, n));
  
  n = 2;
  printf("n=2 %s\n",verschiebe_links(string, n));
  
  n = 3;
  printf("n=3 %s\n",verschiebe_links(string, n));

  n = 4;
  printf("n=4 %s\n",verschiebe_links(string, n));

  n = 5;
  printf("n=5 %s\n",verschiebe_links(string, n));

  n = 6;
  printf("n=6 %s\n",verschiebe_links(string, n));
  
  return 0;
}
