#include<stdio.h>

float temp_f(float f){

  return f * 9/5 + 32;

}

int main(){
  float temperatura;
  printf("Digite a temperatura em C: ");
  scanf("%f", &temperatura);

  printf("A temperatura em F e: %.2f", temp_f(temperatura));

  return 0;
}