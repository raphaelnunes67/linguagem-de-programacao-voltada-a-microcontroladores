#include <stdio.h>

float media_numeros(float n1, float n2, float n3){
  return (n1 + n2 + n3) / 3;
}
int main(){
  float num1, num2, num3;
  printf("Digite o valor 1: ");
  scanf("%f", &num1);
  printf("Digite o valor 2: ");
  scanf("%f", &num2);
  printf("Digite o valor 3: ");
  scanf("%f", &num3);
  float resultado = media_numeros(num1, num2, num3);
  printf("\n%.2f\n", resultado);
}
