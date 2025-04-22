// Crie um script para:
// Calcular a área de um triângulo: A = b·h / 2

#include<stdio.h>

int main(){
  float base, altura;
  printf("Digite o valor da base: ");
  scanf("%f", base);
  printf("Digte o valor da altura: ");
  scanf("%f", altura);

  float area = (base * altura) / 2;

  printf("A area e: %.2f", base);
}