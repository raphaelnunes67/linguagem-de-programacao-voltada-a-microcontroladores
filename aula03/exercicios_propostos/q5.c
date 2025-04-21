#include<stdio.h>

int main(){
  float salario;

  printf("Digite o salario bruto: ");
  scanf("%f", &salario);

  printf("O desconto do INSS e %.2f", 0.08 * salario);
}