#include <stdio.h>
#include<string.h>

enum {
  MINIMO_EXCELENTE = 9,
  MINIMO_APROVADO = 7,
  MINIMO_RECUPERACAO = 5
};

union AlunoTemp 
{ 
  int nota;
  char nome[50];
  
};

struct Aluno{
  float nota;
  int matricula;
  char nome[50];
};

int main(){
  int v [50];
  struct Aluno turma [50];

  for (int i = 0; i < 2; i++){
    printf("Digite o nome do aluno %d: ", i+1);
    fgets(turma[i].nome, sizeof(turma[i].nome), stdin);
    printf("Digite a nota do aluno %d: ", i+1);
    scanf("%f", &turma[i].nota);
    printf("Digite a matricula do aluno %d: ", i+1);
    scanf("%d", &turma[i].matricula);
    fflush(stdin);
  }
  printf("Nome do aluno 2: %s\n", turma[1].nome);
  printf("Nome do aluno 3: %s\n", turma[2].nome);
  printf("Nota do aluno 3: %f\n", turma[2].nota);
  turma[2].nota = 10;
  printf("Nota do aluno 3: %f", turma[2].nota);
}
