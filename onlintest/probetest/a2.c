#include <stdio.h>
#include <string.h>

enum length {length = 10};
enum boolean {TRUE = 1, FALSE = 0};


/* Umwandlung aller Gross- in Kleinbuchstaben */
int tallToLow(int c){
  int j = c + 32;
  
  if (c >= 65 && c <= 90){
    c += j-c;
  }

return c; 
}

/* String leeren */
char *strdel(char *s){
  int z;
  
  for (z=0; *(s+z) != '\0'; z++){
    *(s+z) = '\0';
  }
  return s;
}

int str_del_lowervowels(char *s){
  int i;
  int j;
  char h [length] = "";
  int counter = 0;
  int counter_vokale = 0;
  
  printf ("Alter String: %s\n", s);

  /*String kopieren nach h*/
  strcpy (h,s);

  printf ("Kopie: %s\n", h);

  /*String s loeschen*/
  strdel(s);

  printf ("s nach Löschung: %s\n", s);

  /*Anzahl Vokale zaehlen und alten String ueberschreiben*/
  for (i=0; *(h+i) != '\0'; i++){
    if (*(h+i) == 'a' || *(h+i) == 'e' || *(h+i) == 'i' || *(h+i) == 'o' || *(h+i) == 'u'){
      counter_vokale++;
    }
    else{
      *(s+j) = *(h+i);
      j++;
    }
    counter ++;
  }
  printf ("Neuer String: %s\n", s);
  printf ("counter_vokale: %d\n", counter_vokale);

  /*Rueckgabe */
  return counter_vokale;
}

int str_del_uppervowels(char *s){
  int i;
  int j;
  char h [length] = "";
  int counter = 0;
  int counter_vokale = 0;
  
  printf ("Alter String: %s\n", s);

  /*String kopieren nach h*/
  strcpy (h,s);
  printf ("Kopie: %s\n", h);

  /*String s loeschen*/
  strdel(s);

  /*Anzahl Vokale zaehlen und alten String ueberschreiben*/
  for (i=0; *(h+i) != '\0'; i++){
    if (*(h+i) == 'A' || *(h+i) == 'E' || *(h+i) == 'I' || *(h+i) == 'O' || *(h+i) == 'U') {
      counter_vokale++;
    }
    else{
      *(s+j) = *(h+i);
      j++;
    }
    counter ++;
  }
  printf ("Neuer String: %s\n", s);
  printf ("counter_vokale: %d\n", counter_vokale);

  /*Rueckgabe */
  return counter_vokale;
}

int str_del_vowels(char *s){
  int i;
  int j;
  char h [length] = "";
  int counter = 0;
  int counter_vokale = 0;
  
  printf ("Alter String: %s\n", s);

  /*String kopieren nach h*/
  strcpy (h,s);
  printf ("Kopie: %s\n", h);

  /*String s loeschen*/
  strdel(s);

  /*Anzahl Vokale zaehlen und alten String ueberschreiben*/
  for (i=0; *(h+i) != '\0'; i++){
    if (*(h+i) == 'A' || *(h+i) == 'E' || *(h+i) == 'I' || *(h+i) == 'O' || *(h+i) == 'U' || *(h+i) == 'a' || *(h+i) == 'e' || *(h+i) == 'i' || *(h+i) == 'o' || *(h+i) == 'u'){
      counter_vokale++;
    }
    else{
      *(s+j) = *(h+i);
      j++;
    }
    counter ++;
  }
  printf ("Neuer String: %s\n", s);
  printf ("counter_vokale: %d\n", counter_vokale);

  /*Rueckgabe */
  return counter_vokale;
}



int main (void){

  char string1[length] = "hsAEsIdO";
  char string2[length] = "bacde";
  char string3[length] = "hsAEsido";
  char string_temp [length] = "";

  strcpy(string_temp, string3);
  
  /*str_del_lowervowels(string2);*/
  /*str_del_uppervowels(string1);*/
  str_del_vowels(string3);

  return 0;
}
