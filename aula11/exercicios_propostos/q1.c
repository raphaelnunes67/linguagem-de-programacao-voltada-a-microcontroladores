#include<stdio.h>
#include<math.h>
float calc_area_circulo(float raio){
  return 3.14 * pow(raio, 2);
}
float calc_comprimento_circulo(float raio){
  return 4 * 3.14 * raio;
}
int main(){
  float raio;
  printf("Digite o valor do raio: ");
  scanf("%f", &raio);
  printf("A area do circulo e: %.2f\n", calc_area_circulo(raio));
  printf("O comprimento do circulo e: %.2f", calc_comprimento_circulo(raio));
  return 0;
}