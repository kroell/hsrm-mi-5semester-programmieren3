#include <stdio.h>

int main (void){
  int i=1;
  int ia[2];
  short int sa[3] = {1,2,3};
  char ca[6] = "hi";

  printf ("Adresse von i: %p\n", &i);
  printf ("Adresse von ia: %p\n", &ia);
  printf ("Adresse von sa: %p\n",&sa);
  printf ("Adresse von ca: %p\n",&ca);
}
