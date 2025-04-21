#include<stdio.h>

int main(){
  int valor;
  while (1){
    printf("\nDigite um numero: ");
    scanf("%d", &valor);

    if (valor == -1){
      break;
    }

    printf("\nvalor e: %d", valor);
  }
  printf("\nTerminou!");
}