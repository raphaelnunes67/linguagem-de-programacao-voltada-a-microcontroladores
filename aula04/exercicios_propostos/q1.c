#include<stdio.h>

int main(){
  float valor1, valor2, valor3;

  printf("Digite o valor 1: ");
  scanf("%f", &valor1);
  printf("Digite o valor 2: ");
  scanf("%f", &valor2);
  printf("Digite o valor 3: ");
  scanf("%f", &valor3);

  if (valor1 == valor2 || valor1 == valor3 || valor2 == valor3 ){
    printf("Voce digitou numeros repetidos. Nao pode");
  } 
  else if(valor1 > valor2 && valor1 > valor3){
    printf("O valor 1 (%.2f) e maior", valor1);
  }else if(valor2 > valor3){
    printf("O valor 2 (%.2f) e maior", valor2);
  }
  else{
    printf("O valor 3 (%.2f) e maior", valor3);
  }

}