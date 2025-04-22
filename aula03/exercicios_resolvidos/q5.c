// Crie um script para:
// Calcular a energia potencial: Ep = mgh.

#include<stdio.h>

int main(){
  const float gravidade = 9.81;

  float altura, massa;
  printf("Digite a altura em metros: ");
  scanf("%f", &altura);
  printf("Digite a massa em kg: ");
  scanf("%f", &massa);

  float energia_potencial = massa * gravidade * altura;

  printf("A energia potencial e %.2f J");


}