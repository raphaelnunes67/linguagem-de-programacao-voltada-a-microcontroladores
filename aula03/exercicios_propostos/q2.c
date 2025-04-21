#include<stdio.h>
#include<math.h>

int main(){
  float altura;
  const float gravidade = 9.81;
  printf("Digite a altura em metros: ");
  scanf("%f", &altura);

  printf("O tempo de queda e %.2fs", sqrt(2*altura/gravidade));
}