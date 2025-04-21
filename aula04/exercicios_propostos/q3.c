#include<stdio.h>

int main(){

  float a, b, c;

  printf("Digite o valor de (a): ");
  scanf("%f", &a);
  printf("Digite o valor de (b): ");
  scanf("%f", &b);
  printf("Digite o valor de (c): ");
  scanf("%f", &c);

  float delta = b*b - 4*a*c;

  if (delta >= 0){
    printf("As raizes sao reais");
  }
  else{
    printf("As raizes nao sao reais");
  }

  return 0;
}