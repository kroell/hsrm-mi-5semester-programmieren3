#include <stdio.h>
#include <string.h>


enum length {length = 10};

int toLower(char c){
  if (c >= 65 && c <= 90) return c +32;
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

int isVowel(char c){
  if (c == 'a' || c =='e' || c == 'i' || c == 'o' || c == 'u'){
    return 1;
  }
  return 0;
}


int str_del_lowervowels (char*s){
  int i = 0;
  int j = 0;
  int counter = 0;
  char neu [length] = "";

  printf ("Alter String: %s\n", s);
  strcpy (neu,s);
  printf ("Kopie: %s\n", neu);
  strdel (s);


  for (i = 0; *(neu+i) != '\0'; i++){
    if (isVowel(*(neu+i)) == 0){
      s[j] = neu[i];
      j++;
    }
    else{
      counter++;
    }
  }

  printf("Neuer string: %s\n",s);
  printf("anzahl vokale: %d\n", counter);
  return counter;
}




int main(void){

  char string1[length] = "hsAEsIdO";
  char string2[length] = "bacde";
  char string3[length] = "hsAEsido";
  char string_temp [length] = "";

  strcpy(string_temp, string3);
  
  str_del_lowervowels(string2);
  /*str_del_uppervowels(string1);*/
  /*str_del_vowels(string3);*/


  return 0;
}
