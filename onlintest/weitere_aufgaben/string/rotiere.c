#include <stdio.h>
#include <string.h>

size_t _strlen (const char *s){
  int i;
  int counter = 0;
  for (i=0; *(s+i) != '\0'; i++){
    counter++;
  }
  return counter;
}

void strdel(char *s){
  int i;
  for (i=0; *(s+i) != '\0'; i++){
    *(s+i) = '\0';
  }
}

char *rotiereLinks(char *s, int n){
  char c[20] = "";
  strcpy (c,s);
  strdel(s);

  int i;
  int j = 0;
  for (i=1; *(c+i) != '\0'; i++){
    *(s+j) = *(c+i);
    j++;
  }
  *(s+(j)) = *(c+0);
  *(s+(i)) = '\0';

  if (n > 1){
    rotiereLinks(s,n-1);
  }  
  return s;
}

char *rotiereRechts(char *s, int n){
  char c[20] = "";
  strcpy (c,s);
  strdel(s);

  int i;
  int j = 1;
  for (i=0; *(c+i) != '\0'; i++){
    *(s+j) = *(c+i);
    j++;
  }
  *(s+(j-1)) = '\0';
  *(s+0) = *(c+(i-1));

  /* so oft rotiereRechts aufrufen wie gewuenscht */
  if (n > 1){
    rotiereRechts(s,n-1);
  }  
  return s;
}

int main (void){

  char s[]="Dies ist ein Text";
  char s2[]="Dies ist ein Text";

  printf("\nString: %s\n", s);
  printf("Rotiere Rechts: %s\n",rotiereRechts(s,10));

  printf("\nString: %s\n", s2);
  printf("Rotiere Links: %s\n", rotiereLinks(s2,15));

  return 0;
}
