#include <stdio.h>
#include <string.h>

char* drehum(char *str);


int main(void){
  char str[]="halilo";
  printf("String %s", str);
  printf("\nDrehum: %s\n", drehum(str));
  return 0;
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
