#include <stdio.h>

int main(){
  int n1 = 20;

  int *p = &n1;

  *p = *p * 2;

  printf("%d", n1);

  return 0;
}