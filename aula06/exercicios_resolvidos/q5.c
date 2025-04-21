#include<stdio.h>

int main(){
  int valor1, valor2;
  printf("Digite o valor1: ");
  scanf("%d", &valor1);
  printf("Digite o valor2: ");
  scanf("%d", &valor2);
  printf("Operacao and entre os numeros: %d", valor1 & valor2);
}