#include <stdio.h>
#include <string.h>
#include <ctype.h>

void nurVorneGross(char *s){
  int i;
  int j=0;
  char c[40] = "";

  for (i=0; *(s+i) != '\0'; i++){
    *(c+i) = tolower(*(s+i));
  }
  
  *(s+0) = toupper(*(c+0));
  
  for (i=1; *(s+i) != '\0'; i++){
    *(s+i) = *(c+i);
  } 
  printf("lower: %s\n",c);
  printf("final: %s\n",s);
}


int main (void){
  
  char c[50] = "ALLESKLEIN";
  nurVorneGross(c);

  return 0;
}
