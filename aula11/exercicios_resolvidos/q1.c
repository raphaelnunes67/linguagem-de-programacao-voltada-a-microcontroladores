#include<stdio.h>

float media(float num1, float num2, float num3){
  return (num1 + num2 + num3) / 3;
}

int main(){
  float n1, n2, n3;
  printf("Digite o numero 1: ");
  scanf("%f", &n1);
  printf("Digite o numero 2: ");
  scanf("%f", &n2);
  printf("Digite o numero 3: ");
  scanf("%f", &n3);

  printf("A media dos numeros e: %.2f", media(n1, n2, n3));
  return 0;
}