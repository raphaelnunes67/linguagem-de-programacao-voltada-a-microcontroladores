// Crie um script para:
// Ler um valor em reais e exibir o valor convertido em dólar (usar cotação fixa).

#include<stdio.h>

int main(){

  float valor_reais;
  const float cotacao_dolar = 5.7654;
  printf("Digite o valor em reais ");
  scanf("%f", &valor_reais);

  printf("O valor em real e %.2f", valor_reais / cotacao_dolar );
}