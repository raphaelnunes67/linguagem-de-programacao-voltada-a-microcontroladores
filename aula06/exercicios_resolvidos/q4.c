#include<stdio.h>

int main(){
  int valor;
  printf("Digite o valor para modificar: ");
  scanf("%d", &valor);
  printf("Deslocamento triplo a esquerda: %d", valor << 3);
}