#include<stdio.h>

int main(){
  int valor_inicial, valor_final;

  printf("Digite o valor inicial: ");
  scanf("%d", &valor_inicial);
  printf("Digite o valor final: ");
  scanf("%d", &valor_final);

  for (int i = valor_inicial; i <= valor_final; i++){
    printf("%d \n", i);
  }
}
