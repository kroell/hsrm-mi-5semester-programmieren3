#include <stdio.h>
#include <string.h>

int isVokal(char c){
  if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
    return 1;
  }
  return 0;
}

int isVokal2(char c){
  if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
    return 1;
  }
  return 0;
}

int isVokal3(char c){
  if  (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
    return 1;
  }
  return 0;
}

void strdel(char *s){
  int i;
  for (i=0;*(s+i)!='\0'; i++){
    *(s+i) = '\0';
  }
}

char *_strcpy(char *dest, char * src){
  int i;
  for (i=0; *(src+i)!='\0'; i++){
    *(dest+i) = *(src+i);
  }
  printf("i: %d\n",i);
  *(dest+i) = *(src+i);
  return dest;
}

int str_del_lowervowels(char *s){
  int counter = 0;
  int i;
  int j=0;
  char copy[10] = "";

  printf ("String vorher: %s\n", s);
  _strcpy(copy,s);
  printf ("String copy: %s\n", copy);
  strdel(s);
  printf ("String geleert: %s\n", s);
  
  for (i=0; *(copy+i) != '\0'; i++){
    if (isVokal(*(copy+i))){
      counter++;
    }
    else{
      *(s+j) = *(copy+i);
      j++;
    }
  }

  printf ("String nachher: %s\n", s);
  return counter;
}

int str_del_uppervowels(char *s){
  int counter = 0;
  int i;
  int j=0;
  char copy[10] = "";

  printf ("String vorher: %s\n", s);
  _strcpy(copy,s);
  printf ("String copy: %s\n", copy);
  strdel(s);
  printf ("String geleert: %s\n", s);
  
  for (i=0; *(copy+i) != '\0'; i++){
    if (isVokal2(*(copy+i))){
      counter++;
    }
    else{
      *(s+j) = *(copy+i);
      j++;
    }
  }

  printf ("String nachher: %s\n", s);
  return counter;
}

int str_del_vowels(char *s){
  int counter = 0;
  int i;
  int j=0;
  char copy[10] = "";

  printf ("String vorher: %s\n", s);
  _strcpy(copy,s);
  printf ("String copy: %s\n", copy);
  strdel(s);
  printf ("String geleert: %s\n", s);
  
  for (i=0; *(copy+i) != '\0'; i++){
    if (isVokal3(*(copy+i))){
       counter++;
    }
    else{
      *(s+j) = *(copy+i);
      j++;
    }
  }

  printf ("String nachher: %s\n", s);
  return counter;
}


int main(void){
  char s[10] = "abcde";
  char s2[10] = "abAcdE";
  int count = str_del_vowels(s2);
  printf ("Count: %d\n", count);
  return 0;
}
