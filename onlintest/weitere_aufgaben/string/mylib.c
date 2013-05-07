#include <stdio.h>
#include <strings.h>

int _tolower(int c);
int my_strcasecmp(const char *s1, const char *s2);

int _tolower(int c){
  if (c >=65 & c<= 90) return c+32;
  return c;
}

int my_strcasecmp(const char *s1, const char *s2){
  /* solange s1 lang ist und *s1 == *s2 */
  while (*s1 != 0 && _tolower(*s1) == _tolower(*s2)){
    s1++;
    s2++;
  }
  /* *s1 und *s2 zeigen jeweils auf den ungleichen char */
  printf("s1: %c %d\n",*s1, *s1); /*e 101*/
  printf("s2: %c %d\n",*s2, *s2); /*a 97*/
 
  if (*s2 == 0){
    if (*s1 != 0) return (*s1); 
    else return (_tolower(*s1) - _tolower(*s2)); /*101 - 97 = 4*/
  }
  else if (*s1 == 0){
    if (*s2 != 0) return (-*s2);
    else return (_tolower(*s2) - _tolower(*s1));
  }
  else if (*s1 != 0 && *s2 != 0) return (_tolower(*s1) - _tolower(*s2));
  
  return 0;
}

int main(void){
  char s1[] = "hello";
  char s2[] = "hallo";

  printf("org: %d\n",strcasecmp(s1,s2)); /* 4 */
  printf("nachbau: %d\n",my_strcasecmp(s1,s2)); /* 4 */
  return 0;
}
