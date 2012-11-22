#include <stdio.h>

int calc(int basis, int potenz){
  int i, ret;
  ret = 0;
  for (i=0; i<potenz; i++){
    ret *= basis;
  }
  return ret;
}

int quadrat(int a){
  return calc(a,2);
}

int kubrik(int a){
  return calc(a,3);
}

int hoch4(int a){
  return calc(a,4);
}

int main (void){
  

  return 0;
}
