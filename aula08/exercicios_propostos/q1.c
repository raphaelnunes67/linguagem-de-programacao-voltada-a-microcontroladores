#include<stdio.h>
int main(){
  float vetor[10];
  int i;
  float maior;
  // Le os valores
  for ( i= 0; i < 10; i = i + 1){
    printf("Digite o numero %d: ", i + 1);
    scanf("%f", &vetor[i]);
  }
  maior = vetor[0];
  for (i  = 1; i < 10; i ++){
    if (vetor[i] > maior){
      maior = vetor[i];
    }
    printf("O valor da posicao %d: %.2f\n", i + 1, vetor[i]);
  }
  printf("O maior e: %f", maior);
}