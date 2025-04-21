// Crie um programa que:
// Leia n números do tipo float e armazene em um array
// O programa deve conter um loop infinito para coletar os números e
// caso o número de entrada seja -1 a média dos números deve ser calculada e 
// mostrada. Para criar um array dinâmico, utilize as funções realloc e free. 

#include <stdio.h>
#include <stdlib.h>

int main(){
  int index_value = 1;
  float received_value;
  float *values = NULL;

  while (1){
    printf("Digite o valor %d ou digite -1 para calcular a media: ", index_value);
    scanf("%f", &received_value);
    if (received_value == -1){
      if (index_value == 1){
        printf("Nenhum valor informado");
        break;
      }
      printf("Valores informados: ");
      float med;
      for (int i = 0; i <= (index_value - 2); i++){
        med = med + values[i];
        printf("%.2f ", values[i]);
      }
      med = med / (index_value - 2);
      printf("\nMedia e: %.2f", med);
      free(values);
      break;
    }
    float *new_values = realloc(values, index_value * sizeof(float));
    values = new_values;
    values[index_value - 1] = received_value;
    index_value++;
  }
  while (1); // Trava o programa para visualização do valor final
}