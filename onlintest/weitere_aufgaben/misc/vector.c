#include <stdio.h>
#include <math.h>

int calcScalar(int v1[], int v2[]);

int calcScalar(int v1[], int v2[]){
  return v1[0] * v2[0] + v1[1] * v2[1];
}

int main(void){
  int v1[] = {1,2};
  int v2[] = {3,4};
  printf("%d\n", calcScalar(v1,v2));

  return 0;
}
