/* Erster Buchstabe groß */
/* Aufgabe 3 */


#include <stdio.h>
#include <stdlib.h>

/*Gross- zu Kleinbuchstaben */
int tallToLow(int c){
  int j = c+32;
  if (c >= 'A' && c <= 'Z')
    c += j-c;

  return c;
}

/* Klein- zu Grossbuchstaben */
int lowToTall(int c){
  int j = c-32;
  if (c >= 'a' && c <= 'z')
    c += j-c;

  return c;
}

/* erster Buchstabe gross */
void nurVorneGross(char *s){
  int i;
  char tmp[50] = ""; 

  /* in tmp alles klein schreiben */
  for (i=0; *(s+i)!=0;i++){
    *(tmp+i) = tallToLow(*(s+i));
  }

  /* erster Buchstabe gross */
  for (i=0; *(s+i)!=0; i++){
    if (i == 0){
      *(tmp+i)=lowToTall(*(tmp+i));
    }
    /* erster Buchstabe des Worts nach Space auch gross */
    if (*(tmp+i) == ' '){
      int next = i+1;
      *(tmp+next) = lowToTall(*(tmp+next));
    }
  }

  printf ("nachher: %s\n",tmp);
}


int main(void){
  char *s = "SOEREN KROELL";
  printf ("vorher: %s\n", s);

  nurVorneGross(s);
  return 0;
}
