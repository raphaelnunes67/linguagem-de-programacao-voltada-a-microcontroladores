#include<stdio.h>

int main(){
  int valor;

  printf("Digite o numero: ");
  scanf("%d", &valor);

  int esta_ligado = (valor >> 3) & 1;
  printf("Resultado: %d", esta_ligado);
  
  return 0;
}