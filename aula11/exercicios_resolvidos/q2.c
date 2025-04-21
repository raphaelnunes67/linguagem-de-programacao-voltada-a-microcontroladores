#include<stdio.h>

int main(){

  int n1, n2;
  int *p;
  printf("Digite o numero 1: ");
  scanf("%d", &n1);
  printf("Digite o numero 2: ");
  scanf("%d", &n2);

  p = &n1;
  printf("Digite o novo numero 1: ");
  scanf("%d", &*p);
  p = &n2;
  printf("Digite o novo numero 2: ");
  scanf("%d", &*p);

  printf("O numero 1 e: %d\n", n1);
  printf("O numero 2 e: %d\n", n2);
  return 0;

}