#include <stdio.h>
#include <stdlib.h>

enum length {length = 50};

/* Länge String */
size_t _strlen(const char *s){
  int i;
  int size = 0;
  
  for (i = 0; *(s+i) != '\0'; i++){
    size++;
  }
  return size;
}

/* String kopieren */
char *_strcpy(char *dest, const char *src){
  int i = 0;
  
  for (i = 0; *(src+i) != '\0'; i++){
    *(dest+i) = *(src+i);
  }
  /* '\0' ans Ende setzen */
  *(dest+i)  = *(src+i);
  return dest;
}

/* Umdrehen der Konsonanten */
void umdrehen(char *w){
  char temp[length] = "";
  int size;
  int i;
  int j = 0;

  _strcpy (temp, w);
  size = _strlen(w);
 
  for (i=1; i <= size ; i++){
    int v = size - i;
    *(temp+j) = *(w+v);
    j++;
  }

  printf("Bearbeitet: %s\n",temp);
}

int main(void){
  char *wort = "Soeren Kroell";
  
  printf ("Unbearbeitet: %s\n",wort);
  umdrehen (wort);

  return 0;
}
