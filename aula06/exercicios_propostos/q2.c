#include<stdio.h>

int main(){
  int valor;

  printf("Digite o numero: ");
  scanf("%d", &valor);

  valor = ~valor;

  printf("Valor invertido: %d", valor);

}