#include <stdio.h>
#include <ctype.h>
#include <string.h>

enum length {length = 10};


int isPalindrom(char *s){
  
  char cp[length] = "";
  int j = 0;

  strcpy(cp,s);
  int len = strlen(s);
  int i = 0;
  
  int counter = 0;

  reverse(cp);
  printf("s: %s\n",s);
  printf("cp: %s\n",cp);

  for (i = 0; *(s+i) != '\0'; i++){
    if (tolower(*(s+i)) == tolower(*(cp +i))){
	counter++;
      }
  }
  if (counter == len){
    return 1;
  }
  return 0;
}

void reverse(char *s){
  int c,i,j;
  for(i=0, j=strlen(s)-1; i<j; i++, j--){
	c = s[i];
	s[i] = s[j];
	s[j] = c;
  }
}

int main(void){
  
  char s[length] = "1ReiTtier1";
  int ret = isPalindrom(s);
  printf ("palindrom: %d\n", ret);
 
  return 0;
}
