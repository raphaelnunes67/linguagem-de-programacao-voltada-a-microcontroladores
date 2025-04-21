#include<stdio.h>

int main(){
  int valor_inicial, valor_final;

  printf("Digite o valor inicial: ");
  scanf("%d", &valor_inicial);
  printf("Digite o valor final: ");
  scanf("%d", &valor_final);
  int i = valor_inicial;
  int soma = 0;
  while(i < valor_final){
    soma = soma + i;
    i++;
  }
  printf("Soma: %d", soma);

}