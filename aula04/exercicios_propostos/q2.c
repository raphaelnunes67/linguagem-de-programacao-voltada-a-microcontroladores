#include<stdio.h>

int main(){
  float numero;
  printf("Digite o numero: ");
  scanf("%f", numero);


  if (numero > 50 && numero < 100){
    printf("Esta entre 50 e 100");
  }
  else{
    printf("Nao esta entre 50 e 100");
  }

  return 0;
}