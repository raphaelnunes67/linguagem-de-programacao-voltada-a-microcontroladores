// Crie um script que:
// Implemente um programa que use uma estrutura para representar um
// livro e permita cadastrar e exibir informações de 3 livros.

#include <stdio.h>

typedef struct {
    char titulo[100];
    char autor[100];
    int ano;
} Livro;

int main() {
    Livro livros[3];

    for (int i = 0; i < 3; i++) {
        printf("Cadastro do livro %d:\n", i + 1);
        printf("Titulo: ");
        scanf(" %[^\n]", livros[i].titulo);
        printf("Autor: ");
        scanf(" %[^\n]", livros[i].autor);
        printf("Ano: ");
        scanf("%d", &livros[i].ano);
        printf("\n");
    }

    printf("Informacoes dos livros cadastrados:\n");
    for (int i = 0; i < 3; i++) {
        printf("Livro %d:\n", i + 1);
        printf("Titulo: %s\n", livros[i].titulo);
        printf("Autor: %s\n", livros[i].autor);
        printf("Ano: %d\n\n", livros[i].ano);
    }

    return 0;
}