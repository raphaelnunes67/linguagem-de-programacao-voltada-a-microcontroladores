// Crie um script que:

// Crie uma estrutura para armazenar dados de um aluno (nome, matrícula, notas) e calcule a média das notas.

#include <stdio.h>
#include<string.h>

typedef struct {
  float nota1;
  float nota2;
  int matricula;
  char nome[50];
}Aluno;

int main(){
  Aluno aluno = {7.5, 9.5, 129143, "Dennis Ritchie"};


  printf("Nome do aluno e: %s \n", aluno.nome);
  
  printf("A media do aluno e: %.2f", (aluno.nota1 + aluno.nota2)/2);
  
}