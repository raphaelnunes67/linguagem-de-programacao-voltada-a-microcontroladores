#include <stdio.h>

void imprimirArray(int arr[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int meuArray[] = {10, 20, 30, 40, 50};
    int tamanho = sizeof(meuArray) / sizeof(meuArray[0]); // Calcula o tamanho do array

    imprimirArray(meuArray, tamanho); // Passa o array e o tamanho
    return 0;
}