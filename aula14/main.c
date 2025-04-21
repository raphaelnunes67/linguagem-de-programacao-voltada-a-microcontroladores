#include<stdio.h>
#include "apoio.h"
#define DEBUG

int main(){
  #ifdef DEBUG
  printf("%d\n", 10);
  #endif
  printf("%d\n", 20);
  printf("%.2f", calc_med(2, 8));
  int x = 12 / 0;

}