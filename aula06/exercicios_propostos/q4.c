#include<stdio.h>

int main(){
  float v1, v2;
  printf("Digite o numero 1: ");
  scanf("%f", &v1);

  printf("Digite o numero 2: ");
  scanf("%f", &v2);
  v2 += v1;
  printf("A soma e:%.2f ", v2);
}