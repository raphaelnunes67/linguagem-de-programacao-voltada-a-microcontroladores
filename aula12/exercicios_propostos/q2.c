// Crie um script que:
// Crie uma união que possa armazenar um inteiro, um float ou um
// caractere, e demonstre seu uso.

#include <stdio.h>

union Dados {
    int inteiro;
    float flutuante;
    char caractere;
};

int main() {
    union Dados dado;

    dado.inteiro = 42;
    printf("Inteiro: %d\n", dado.inteiro);

    dado.flutuante = 3.14;
    printf("Float: %.2f\n", dado.flutuante);

    dado.caractere = 'A';
    printf("Caractere: %c\n", dado.caractere);

    return 0;
}