#include<stdio.h>

int main(){
  float base, altura;
  printf("Digite a base do retângulo: ");
  scanf("%f", &base);
  printf("Digite a altura do retângulo: ");
  scanf("%f", &altura);

  float perimetro = 2 * (base + altura);
  printf("O perimetro e: %.2f", perimetro);
}