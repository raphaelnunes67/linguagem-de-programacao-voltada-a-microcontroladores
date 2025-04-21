#include<stdio.h>

int main(){
  int quantidade_numeros;
  printf("Digite a quantidade de numeros: ");
  scanf("%d", &quantidade_numeros);

  float valor_informado;
  float soma = 0.0; // Acumulador soma
  int i = 0;
  while(i < quantidade_numeros){
    printf("Digite o numero %d: ", i + 1);
    scanf("%f", &valor_informado);
    soma = valor_informado + soma;
    i++;
  }
  float media = soma / quantidade_numeros;
  printf("\nmedia e: %.2f", media);

}