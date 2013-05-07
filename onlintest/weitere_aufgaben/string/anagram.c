#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isAnagram(char *s1, char *s2){

  char *reader1 = s1;
  char *reader2 = s2;
  int len1 = strlen(s1);
  int len2 = strlen(s2);
  int counter = 0;
  int i = 0;
  
  while (*reader1){
    char c = *reader1;
    while (*reader2){
      if (tolower(c) == tolower(*reader2)){
	if (i < 1){
	  counter++;
	  i++;
	}
      }
      *reader2++;
    }
    i = 0;
    *reader1++;
    reader2 = s2;
  }

  if (counter == len1 && counter == len2)
    return 1;
  return 0;
}


int main(void){
  char s1[] = "Alfred Hitchcock der Meister der Spannung";
  char s2[] = "Er schockt durch derartig spannende Filme";
  printf("s1: %s\n",s1);
  printf("s2: %s\n",s2);
  printf("isAnagram: %d\n",isAnagram(s1,s2));
  return 0;
}
