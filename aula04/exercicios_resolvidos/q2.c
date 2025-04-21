// Ler dois números inteiros e imprimir o maior.

#include<stdio.h>


int main(){
  float n1, n2;

  printf("Digite o numero 1: ");
  scanf("%f", &n1);
  printf("Digite o numero 2: ");
  scanf("%f", &n2);

  if (n1 > n2){
    printf("O maior numero e: %.2f", n1);
  }
  else{
    printf("O maior numero e: %.2f", n2);
  }
}