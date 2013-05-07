#include <stdio.h>
#include <ctype.h>
#include <string.h>

char *reverse(char *s);
char* drehum(char *str);

char *reverse(char *s){
  int c,i,j;
  for(i=0, j=strlen(s)-1; i<j; i++, j--){
    c = *(s+i);
    *(s+i) = *(s+j);
    *(s+j) = c;
  }
  return s;
}

char* drehum(char *str){
  char *p1 =str;
  char *p2 = str+(strlen(str)-1);
  char c;
  while(p1 <= p2){
    c = *p2;
    *p2 = *p1;
    *p1 = c;
    p1++;
    p2--;
  }
  return str;
}

int main(void){  
  char c[] = "Hello World!";
  printf("Vorher: %s\n", c);
  printf("Nachher: %s\n", reverse(c));

  char str[]="halilo";
  printf("\nVorher: %s", str);
  printf("\nNachher: %s\n", drehum(str));

  return 0;
}
