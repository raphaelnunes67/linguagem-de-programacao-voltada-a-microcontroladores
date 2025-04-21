#include<stdio.h>


void escreve_array(int *p, int size){
  for (int i = 0; i < size; i++){
    printf("%d\n", *(p+i));
  }
}

int main(){
  int v1 = 10, v2 = 20, v3 = 30;
  int vet [5] = {10, 20, 30};
  int vet2 [400] = {10, 20, 30};
  escreve_array(vet, sizeof(vet) / sizeof(vet[0]));
  escreve_array(vet2, sizeof(vet2) / sizeof(vet2[0]));

  // printf("Valor da variavel v1: %d\n", v1);
  // printf("Valor da variavel v2: %d\n", v2);
  // printf("Valor da variavel v3: %d\n", v3);
  // MODIFICAR O VALOR DE DUAS VARIAVEIS USANDO PONTEIROS
  // int *ptr = &v1;
  // int *p; //criação
  // p = &v1; // Aponta para v1
  // *p = 20; // edita o valor de v1
  // printf("Valor da variavel v1: %d\n", *p); // coleta
  // p = &v2; // Aponta para v2
  // *p = 20; // edita o valor de v2
  // p = &v3; // Aponta para v3
  // *p = 20; // edita o valor de v3
  // printf("Valor da variavel v1: %d\n", v1);
  // printf("Valor da variavel v2: %d\n", v2);
  // printf("Valor da variavel v3: %d\n", v3);
  // int *p;
  // p = &vet[0];

  // printf("Endereco vet: %d\n", &vet);
  // printf("Endereco vet 0: %d\n", &vet[0]);
  // printf("Valor apontado por p: %d\n", *p);

  // for (int i = 0; i < 5; i++){
  //   printf("%d\n", *(p+i));
  // }

}