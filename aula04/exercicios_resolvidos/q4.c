/*
Verificar se um ponto está dentro ou fora de uma circunferência.
Equação: (x - a)² + (y - b)² = r²;
*/ 

#include<stdio.h>
#include<math.h>

int main(){

  float cx, cy, r, x, y;

  printf("Digite a coordenada X do centro da circunferencia: ");
  scanf("%f", &cx);
  printf("Digite a coordenada Y do centro da circunferencia: ");
  scanf("%f", &cy);
  printf("Digite o valor do raio: ");
  scanf("%f", &r);
  printf("Digite a coordenada X: ");
  scanf("%f", &x);
  printf("Digite a coordenada Y: ");
  scanf("%f", &y);

  if(pow((x - cx), 2) + pow((y - cy), 2) < pow(r, 2)){
    printf("O ponto esta dentro da circunferencia");
  }
  else{
    printf("O ponto esta fora ou sobre a circunferencia");
  }
}