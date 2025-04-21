#include<stdio.h>

int main(){
  float peso, altura;
  printf("Digite seu peso em Kg: ");
  scanf("%f", peso);
  printf("Digte sua altura em metros: ");
  float imc = peso / altura * altura;
  printf("O seu IMC é: %.2f", imc);
} 