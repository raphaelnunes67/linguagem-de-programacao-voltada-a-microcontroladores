#include <stdio.h>
int main() {

  int valor = 100;
  printf("Endereco da variavel: %x\n", &valor);
  printf("Endereco da variavel: %x\n", &valor + 2);
  printf("Valor da variavel: %d\n", valor);
}