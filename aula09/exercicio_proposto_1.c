#include <stdio.h>
#include <stdbool.h>

int main() {
    int opcao;
    float vetor[20];
    bool run = true;
    bool vetorPreenchido = false;

    while (run) {
        printf("\nSelecione uma das opcoes abaixo:\n");
        printf("1 - Inserir o vetor de 20 posicoes\n");
        printf("2 - Mostrar a media dos valores do vetor\n");
        printf("3 - Informar o maior numero dentro do vetor\n");
        printf("4 - Informar o menor numero dentro do vetor\n");
        printf("5 - Multiplicar todos os valores por 2\n");
        printf("6 - Substituir todos os valores negativos por 0\n");
        printf("7 - Organizar o vetor do maior para o menor\n");
        printf("8 - Organizar o vetor do menor para o maior\n");
        printf("9 - Imprimir o vetor\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: {
                printf("Insira os valores do vetor:\n");
                for (int i = 0; i < 20; i++) {
                    printf("Elemento %d: ", i + 1);
                    scanf("%f", &vetor[i]);
                }
                vetorPreenchido = true;
                break;
            }

            case 2: {
                if (vetorPreenchido) {
                    float soma = 0;
                    for (int i = 0; i < 20; i++) {
                        soma += vetor[i];
                    }
                    printf("Media dos valores: %.2f\n", soma / 20);
                } else {
                    printf("O vetor ainda nao foi preenchido!\n");
                }
                break;
            }

            case 3: {
                if (vetorPreenchido) {
                    float maior = vetor[0];
                    for (int i = 1; i < 20; i++) {
                        if (vetor[i] > maior) {
                            maior = vetor[i];
                        }
                    }
                    printf("Maior valor: %.2f\n", maior);
                } else {
                    printf("O vetor ainda nao foi preenchido!\n");
                }
                break;
            }

            case 4: {
                if (vetorPreenchido) {
                    float menor = vetor[0];
                    for (int i = 1; i < 20; i++) {
                        if (vetor[i] < menor) {
                            menor = vetor[i];
                        }
                    }
                    printf("Menor valor: %.2f\n", menor);
                } else {
                    printf("O vetor ainda nao foi preenchido!\n");
                }
                break;
            }

            case 5: {
                if (vetorPreenchido) {
                    for (int i = 0; i < 20; i++) {
                        vetor[i] *= 2;
                    }
                    printf("Todos os valores foram multiplicados por 2.\n");
                } else {
                    printf("O vetor ainda nao foi preenchido!\n");
                }
                break;
            }

            case 6: {
                if (vetorPreenchido) {
                    for (int i = 0; i < 20; i++) {
                        if (vetor[i] < 0) {
                            vetor[i] = 0;
                        }
                    }
                    printf("Todos os valores negativos foram substituidos por 0.\n");
                } else {
                    printf("O vetor ainda nao foi preenchido!\n");
                }
                break;
            }

            case 7: {
                if (vetorPreenchido) {
                    for (int i = 0; i < 19; i++) {
                        for (int j = i + 1; j < 20; j++) {
                            if (vetor[i] < vetor[j]) {
                                float temp = vetor[i];
                                vetor[i] = vetor[j];
                                vetor[j] = temp;
                            }
                        }
                    }
                    printf("Vetor organizado do maior para o menor.\n");
                } else {
                    printf("O vetor ainda nao foi preenchido!\n");
                }
                break;
            }

            case 8: {
                if (vetorPreenchido) {
                    for (int i = 0; i < 19; i++) {
                        for (int j = i + 1; j < 20; j++) {
                            if (vetor[i] > vetor[j]) {
                                float temp = vetor[i];
                                vetor[i] = vetor[j];
                                vetor[j] = temp;
                            }
                        }
                    }
                    printf("Vetor organizado do menor para o maior.\n");
                } else {
                    printf("O vetor ainda nao foi preenchido!\n");
                }
                break;
            }

            case 9: {
                if (vetorPreenchido) {
                    printf("Vetor: ");
                    for (int i = 0; i < 20; i++) {
                        printf("%.2f ", vetor[i]);
                    }
                    printf("\n");
                } else {
                    printf("O vetor ainda nao foi preenchido!\n");
                }
                break;
            }

            case 0: {
                run = false;
                printf("Saindo do programa...\n");
                break;
            }

            default: {
                printf("Opcao invalida! Tente novamente.\n");
                break;
            }
        }
    }

    return 0;
}