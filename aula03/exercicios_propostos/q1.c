#include<stdio.h>

int main(){
  float lado;
  printf("Digite o tamanho do lado: ");
  scanf("%f", &lado);

  printf("O volume do cubo é %.2f", lado * lado * lado);
}