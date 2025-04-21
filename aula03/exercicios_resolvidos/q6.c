#include<stdio.h>

int main(){
  float raio;
  const float pi = 3.14;
  printf("Digite o raio do circulo: ");
  scanf("%f", &raio);
  
  float area = raio * raio * pi;

  printf("O raio e %.2f", pi);

}