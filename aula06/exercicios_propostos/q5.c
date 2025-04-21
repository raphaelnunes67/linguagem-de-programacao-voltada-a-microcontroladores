#include<stdio.h>

int main(){
  int valor;

  printf("Digite o numero: ");
  scanf("%d", &valor);
  printf("Resultado: %d", valor >> 2);
  printf("\nResultado: %d", valor / 4);

  return 0;

}