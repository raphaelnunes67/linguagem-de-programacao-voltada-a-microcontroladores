// Crie um script para:
// Calcular o desconto em um produto: Vfinal = V − (V · d%).

#include<stdio.h>

int main(){
  float valor_produto, desconto;
  printf("Digite o valor do produto: ");
  scanf("%f", &valor_produto);

  printf("Digite o valor do desconto: ");
  scanf("%f", &desconto);

  printf("Valor final do produto: %.2f", valor_produto - (valor_produto * desconto));

}