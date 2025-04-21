#include<stdio.h>
#include<string.h>

int main(){
  char texto[] = "Microcontroladores";
  char texto2[5];
  int tamanho = strlen(texto);
  printf("Tamanho do texto: %d\n", tamanho);
  strcpy(texto2, texto);
  printf("Texto copiado: %s\n", texto2);
  
  char nome[20];
  // Nao recomendado
  printf("Digite seu nome: ");
  scanf("%s", nome);
  printf("Nome capturado com scanf: %s\n", nome);

  fflush(stdin);

  char nome2[10];
  printf("Digite seu nome: ");
  fgets(nome2, sizeof(nome2), stdin);
  printf("Nome capturado com fgets: %s\n", nome2);
  
}