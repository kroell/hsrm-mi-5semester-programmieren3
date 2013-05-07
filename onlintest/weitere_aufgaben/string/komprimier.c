#include <stdio.h>
#include <string.h>

void kompri(char *str);
int stellenAnz(int i);
char* convert(int z);

void kompri(char *str){
  char *reader = str;
  char *writer = str;
  int i = 0;

  /*String durchlaufen*/
  while(*reader){
    /*Aktueller Buchstaben*/
    char c = *reader;
    while(c == *reader){
      reader++;
      i++;
    }
    /*Aktueller Buchstabe wird geschrieben*/
    *writer++ = c;
   
    if(i > 1){
      char *s = convert(i);
      while(*s){
	/*an der jeweils naechsten Stelle die Zahl schreiben*/
      *writer++ = *s--;
      }
    }
    /*i zuruecksetzen*/
    i = 0;
  }
  /*Schliessende Null nicht vergessen*/
  *writer = '\0';
}

char* convert(int z){
  /*speicherplatz reservieren*/
  int stellen = stellenAnz(z);
  char *str = malloc(sizeof(char) * stellen);

  char *writer = str;
  while(z > 0){
    *writer++ = (char)((z%10)+48);
    z = z / 10;
  }
  printf("%s\n", writer-1);
  return (writer-1);
}

int stellenAnz(int i){
  int anz = 0;
  while(i > 0){
    i= i / 10;
    anz++;
  }
  return anz;
}

int main(void){
  char str[] = "abbccc";
  printf("vorher: %s\n", str);
  kompri(str);
  printf("nachher: %s\n", str);
  
  return 0;
}
