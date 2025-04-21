#include<stdio.h>

int main(){
  float nota_1, nota_2, nota_3;
  printf("Digite a nota 1: ");
  scanf("%f", &nota_1);
  printf("Digite a nota 2: ");
  scanf("%f", &nota_2);
  printf("Digite a nota 3: ");
  scanf("%f", &nota_3);

  float media_p = (nota_1 * 2 + nota_2 * 3 + nota_3 * 5) / (2 + 3 + 5);

  printf("A media ponderada e: %.2f", media_p);

}