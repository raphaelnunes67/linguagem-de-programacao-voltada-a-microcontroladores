
// Verificar se um número é par e maior que 10.

#include<stdio.h>

int main(){
  int n;
  printf("Digite o numero: ");
  scanf("%d", &n);

  printf("O resto e %d", n%2);

  if (n % 2 == 0 && n < 10){
    printf("E menor que 10 e par!");
  }
  else{
    printf("E maior que 10 ou impar!");
  }
}
