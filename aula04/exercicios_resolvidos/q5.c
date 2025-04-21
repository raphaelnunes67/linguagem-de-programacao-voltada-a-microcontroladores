// Usar const para representar o valor de PI e calcular a área de um círculo.

#include<stdio.h>

int main(){
  const float PI = 3.14;
  float r;

  printf("Digite o valors do raio: ");
  scanf("%f", &r);
  printf("A area do circulo e: %.2f", (PI*r*r));
}