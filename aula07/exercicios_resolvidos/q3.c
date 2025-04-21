#include<stdio.h>

int main(){

  int num;

  do
  {
    printf("Digite um numero: ");
    scanf("%d", &num);

  } while (num < 0);
  
  printf("Programa finalizado!");

}