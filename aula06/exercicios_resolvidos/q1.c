#include<stdio.h>

int main(){

  int v1, v2;

  printf("Digite o numero 1: ");
  scanf("%d", &v1);
  printf("Digite o numero 2: ");
  scanf("%d", &v2);

  int resultado = (v1 > v2) ? v1 : v2;
  printf ("O resultado da expressao e: %d", (v1 > v2));
  printf("\nO maior valor e %d", resultado);
  return 0;
}