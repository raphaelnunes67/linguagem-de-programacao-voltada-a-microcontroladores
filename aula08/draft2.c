#include<stdio.h>

int main(){
  int valor = 10;
  int vet[5];
  int matriz[5][2];
  printf("tamanho do int: %d\n", sizeof(int));
  printf("tamanho do short int: %d\n", sizeof(short int));
  printf("tamanho do char: %d\n", sizeof(char));
  printf("tamanho do unsigned int: %d\n", sizeof(unsigned int));
  printf("tamanho da variavel tipo int: %d\n", sizeof(valor));
  printf("tamanho do vetor tipo int com tamanho 5: %d\n", sizeof(vet));
  printf("tamanho da matriz tipo int com 5 linhas e 2 colunas: %d\n", sizeof(matriz));
  printf("tamanho do vetor: %d\n", sizeof(vet)/ sizeof(int));
  // popular o vetor
  for (int i = 0; i < sizeof(vet)/ sizeof(vet[0]); i++){
    printf("Digite o valor da posicao: %d\n", i + 1);
    scanf("%d", &vet[i]);
  }
  //imprimir o vetor
  for (int i = 0; i < sizeof(vet)/ sizeof(int); i++){
    printf("Valor da posicao %d: %d\n", i + 1, vet[i]);
  }

}