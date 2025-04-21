/*
Crie um script para:
Calcular o IMC e classificar:
▶ IMC < 18.5: ”Baixo peso”;
▶ 18.5 ≤ IMC < 25 → ”Peso normal”
▶ 25 ≤ IMC < 30 → ”Excesso de peso”
▶ 30 ≤ IMC < 35 → ”Obesidade”
▶ IMC ≥ 35 → ”Obesidade extrema”
*/

#include<stdio.h>

const float BAIXO_PESO = 18.5;
const float PESO_NORMAL_INFERIOR = 18.5;
const float PESO_NORMAL_SUPERIOR = 24.9;
const float EXCESSO_PESO_INFERIOR = 25;
const float EXCESSO_PESO_SUPERIOR = 29.9;
const float OBESIDADE = 30;
const float OBESIDADE_EXTREMA = 35;

int main(){
  float peso;
  float altura;
  printf("Informe o peso: ");
  scanf("%f", &peso);
  printf("Informe a altura: ");
  scanf("%f", &altura);

  float imc = peso / (altura * altura); 
  printf("\nO valor do IMC e: %f\n", imc);

  if(imc < BAIXO_PESO){
    printf("Baixo peso!\n");
  }else if (imc >= PESO_NORMAL_INFERIOR && imc <= PESO_NORMAL_SUPERIOR){
    printf("Peso normal!\n");
  }else if (imc >= EXCESSO_PESO_INFERIOR && imc <= EXCESSO_PESO_SUPERIOR){
    printf("Excesso de peso\n");
  }else if (imc >= OBESIDADE && imc <= OBESIDADE_EXTREMA){
    printf("Obesidade\n");
  }else if(imc > OBESIDADE_EXTREMA){
    printf("Obesidade extrema\n");
  }
}