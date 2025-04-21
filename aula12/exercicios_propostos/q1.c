// Crie um script que:
// Defina um enumerador para os dias da semana e imprima o nome do
// dia correspondente a um número.

#include <stdio.h>

enum DiasDaSemana { DOMINGO, SEGUNDA, TERCA, QUARTA, QUINTA, SEXTA, SABADO };
enum {
    LOW, HIGH
};

int main() {
    int dia;
    printf("Digite um numero (0 a 6): ");
    scanf("%d", &dia);

    if (dia < 0 || dia > 6) {
        printf("Numero invalido.\n");
    } else {
        switch (dia) {
            case DOMINGO: printf("Domingo\n"); break;
            case SEGUNDA: printf("Segunda\n"); break;
            case TERCA: printf("Terca\n"); break;
            case QUARTA: printf("Quarta\n"); break;
            case QUINTA: printf("Quinta\n"); break;
            case SEXTA: printf("Sexta\n"); break;
            case SABADO: printf("Sabado\n"); break;
        }
    }

    return 0;
}