#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void komp(char *str);
char *convert(int i);

void komp(char *str){
  int counter = 0;
  char *reader = str;
  char *writer = str;

  while (*reader){
    char c = *reader;
    while (c == *reader){
      reader++;
      counter++;
    }
    *writer++ = c;

    if(counter > 1){
      char s = convert(counter);
      *writer++ = s;
    }
    counter = 0;
  }
  *writer = '\0';
}

char *convert(int i){
  /*char *str = malloc(sizeof(char) * 2);
  char *writer = str;
  while(i > 0){
    *writer++ = (char)((i%10)+48);
    i = i/10;
  }
  return (writer-1);*/
 
  return (char)((i%10)+48);
}

int main(void){
  char str[] = "abbcccccccddd";
  printf("vorher: %s\n", str);
  komp(str);
  printf("nachher: %s\n", str);
  return 0;
}
