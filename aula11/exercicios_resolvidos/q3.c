#include<stdio.h>
#include <stdbool.h>

bool par(int numero){
  return numero % 2 == 0 ? true : false;
}

int main(){

  int n1;
  printf("Digite o numero: ");
  scanf("%d", &n1);

  if (par(n1)){
    printf("O numero e par");
  }
  else{
    printf("O numero e impar");
  }
  return 0;
}