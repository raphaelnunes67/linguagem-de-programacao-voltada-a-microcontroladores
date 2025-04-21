// Somar 5 a uma variável usando +=.

#include<stdio.h>

int main(){
  float v1, v2;
  printf("Digite o valor 1: ");
  scanf("%f", &v1);
  printf("Digite o valor 2: ");
  scanf("%f", &v2);
  v2 += v1;
  printf("A soma dos numeros e: %.2f", v2);

}