//Crie um script para:
// Converter km/h para m/s: vms = vkmh/3.6 

#include<stdio.h>

int main(){
  float v_kmh;
  printf("Digite o valor da valocidade em km/h: ");
  scanf("%f", &v_kmh);

  printf("A velocidade em m/s e: %.2f", v_kmh / 3.6);
}