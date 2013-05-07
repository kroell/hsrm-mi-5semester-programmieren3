#include <stdio.h>
#include <string.h>

char *rotiereLinks(char *s, int n);
char *rotiereRechts(char *s, int n);
void strdel(char *s);

void strdel(char *s){
  int i;
  for(i=0;*(s+i) != '\0'; i++){
    *(s+i) = '\0';
  }
}

char* rotiereLinks(char *str, int n){
  char *reader = str;
  char *writer = str;
  char *speicher = malloc((sizeof(char) * (n)));
  char *sp2 = speicher;
  int i = n;

  while(i > 0){
    *speicher++ = *reader++;
    i--;
  }
  /* D steht im Speicher */
  speicher = sp2;

  while(*reader){
    *writer++ = *reader++;
  }
  printf("\nString2: %s\n", str);
  
 
  printf("sp2: %s\n",sp2);
  while(*speicher){
    *writer++ = *speicher++;
  }
  *writer = '\0';

  return str;
}


char *rotiereRechts(char *s, int n){

  char copy[]="";
  strcpy(copy,s);
  strdel(s);
  int i;
  int j = 1;

  for (i=0;*(copy+i) !='\0'; i++){
    *(s+j) = *(copy+i);
    j++;
  }
  
  *(s+0) = *(copy+(i-1));
  *(s+(j-1)) = '\0';
  
  if (n>1){
    rotiereRechts(s,(n-1));
  }

  return s;
}



int main (void){

  char s[]="Dies";
  char s2[]="Dies";

  printf("\nString: %s\n", s);
  printf("Rotiere Rechts: %s\n",rotiereRechts(s,97));

  printf("\nString: %s\n", s2);
  printf("Rotiere Links: %s\n", rotiereLinks(s2,1));

  return 0;
}
