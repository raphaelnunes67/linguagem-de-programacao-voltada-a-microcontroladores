// Crie um script para:
// Converter temperatura Celsius para Fahrenheit: F = (C × 1.8) + 32.

#include<stdio.h>

int main(){
  float temp_c;
  printf("Digite a temperatura em Celsius: ");
  scanf("%f", &temp_c);

  float temp_f = (temp_c * 1.8) + 32;
  printf("A temperatura em Fahrenheit e: %.2f", temp_f);
}