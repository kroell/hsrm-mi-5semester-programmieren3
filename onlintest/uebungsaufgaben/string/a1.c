#include <stdio.h>
#include <stdlib.h>

static int isPalindrom(char *s);

/* Laenge String  */
int _strlen(char *s){
  int i;
  int size = 0;
  for (i=0; *(s+i) != 0; i++){
    size++;
  }
  return size;
}

/* Klein- zu Grossbuchstaben */
int tallToLow(int c){
  int j = c+32;

  if (c >= 'A' && c <= 'Z'){
    c += j-c;
  }
  return c;
}

/* return 0 = kein Palimdrom */
int isPalindrom(char *s){
  int size = _strlen(s);
  
  char temp[50] = "";
  char temp_[50] = "";

  int i,j;
  int counter = 0;
  
  /* alles klein schreiben und in temp_ speichern */
  for (i=0; *(s+i) != 0; i++)
    *(temp_+i) = tallToLow(*(s+i));

  /* Kopie von temp_ erstellen */
  for (i=0; *(temp_+i) != 0; i++)
    *(temp+i) = *(temp_+i);
  
  for (i=0; i < size; i++){ 
    j = (size-1)-i;
    if (*(temp_+i) == *(temp+j)){
      counter++;
    } 
  }

  if (counter == size)
    return 1;

  return 0;
}

int main(void){
  int erg;
  char *v = "anna";
  char *s = "1ReiTtier1";
  char *w = "rotor";
  erg = isPalindrom(s);

  if (erg > 0)
    printf ("'%s' ist EIN Palindrom\n",s);
  else
    printf ("'%s' ist KEIN Palindrom\n",s);

  return 0;
}
