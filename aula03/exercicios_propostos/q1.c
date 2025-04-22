// Crie um script para:
// Calcular o volume de um cubo: V = l^3.

#include<stdio.h>

int main(){
  float lado;
  printf("Digite o tamanho do lado: ");
  scanf("%f", &lado);

  printf("O volume do cubo é %.2f", lado * lado * lado);
}