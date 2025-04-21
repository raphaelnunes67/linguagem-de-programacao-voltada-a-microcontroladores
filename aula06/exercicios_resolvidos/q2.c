#include<stdio.h>

int main(){
  int n;
  printf("Digite o numero: ");
  scanf("%d", &n);
  char e_par = n % 2 == 0 ? 'P': 'I';
  printf("O numero e: ");
  putchar(e_par);
  return 0;
}