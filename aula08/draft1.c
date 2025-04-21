#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  // srand(time(NULL));
  // printf("Time: %d", time(NULL));
  // int max = 100, min = 50;
  // int numero = (rand() % (max - min + 1)) + min;
  // printf("\nNumero: %d", numero);

  time_t tempo_inicial = time(NULL);
  while (1){
    if (difftime(time(NULL), tempo_inicial) >= 2){
      printf("Passou pelo menos 2s\n");
      tempo_inicial = time(NULL);
    }
    
  }  
  return 0;

  // int vetor[3][3] = {
  //   {1 , 2, 3},
  //   {2, 3, 4},
  //   {2 ,3, 21}
  // };
  // printf("Valor da posicao 2: %d" , vetor[2]);
  
  // vetor[2] = 100;

  // printf("\nValor da posicao 2: %d" , vetor[2]);

  // for (int i = 0; i < 3; i++){
  //   for(int j = 0; j<3; j++){
  //     printf("O valor da linha %d e coluna %d e: %d\n", i + 1, j + 1, vetor[i][j]);
  //   }
  // }
}