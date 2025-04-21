#include<stdio.h>

int main(){
  int valor;
  printf("Digite o valor para modificar: ");
  scanf("%d", &valor);

  printf("Terceiro bit acionado: %d", valor | 1 << 2);

  return 0;
}