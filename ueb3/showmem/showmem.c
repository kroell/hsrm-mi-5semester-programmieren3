/* Aufgabe 1 - ShowMem() */

#include <stdio.h>

int main(void)
{
  int i=42;
  char c=’a’;
  char ca[2] = {’b’, ’c’};
  short sa[3] = {0, 8, 15};
  char *cp = &c;
  int *ip = &i;
  *ip = 17;
  ip = (int *) sa;
  *ip= 0x12121212;
  *cp++ += 1;
  *cp++ = ’x’;
  *cp++ = ’y’;
  *cp++ = ’z’;

  printf("i:%d c:%c ca:%c,%c sa:%d,%d,%d\n",i, c, ca[0], ca[1], sa[0],sa[1],sa[2]);
 
return 0;
}

