#include<stdio.h>

int main(){

  int n1, n2, n3;
  printf("Digite o numero 1: ");
  scanf("%d", &n1);
  printf("Digite o numero 2: ");
  scanf("%d", &n2);
  printf("Digite o numero 3: ");
  scanf("%d", &n3);

  int maior = (n1 > n2) ? (n1 > n3) ? n1: n3 : (n2 > n3) ? n2 : n3;

  printf("O numero maior e: %d", maior);

  return 0;

}