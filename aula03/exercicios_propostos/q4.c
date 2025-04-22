//Crie um script para:
// Calcular a pressão: P = F / A

#include<stdio.h>

int main(){
  float forca;
  float area;
  printf("Digite o valor da força em N: ");
  scanf("%f", &forca);
  printf("Digite o valor da area em m2: ");
  scanf("%f", &area);

  printf("A pressão em N/m2 e: %.2f", forca / area);
}