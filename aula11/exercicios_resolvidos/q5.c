#include<stdio.h>

unsigned long int calcula_fatorial(unsigned long int num){
  if (num == 0 || num == 1){
    return 1;
  }
  return num * calcula_fatorial(num - 1);
}

int main(){
  unsigned long int num;
  printf("Digite o numero para calcular o fatorial: ");
  scanf("%d", &num);
  
  unsigned long int fatorial = calcula_fatorial(num);
  printf("O fatorial e: %ld", fatorial);
  return 0;
}