#include<stdio.h>

int main(){
  float n1, n2;
  char operacao;
  printf("Digite o primeiro numero: ");
  scanf("%f", &n1);
  getchar();

  printf("Digite a operacao: ");
  operacao = getchar();

  printf("Digite o segundo numero: ");
  scanf("%f", &n2);

  switch (operacao)
  {
    case '+':{
      printf("Resultado: ", n1 + n2);
      break;
    }
    case '-':{
      printf("Resultado: %.2f", n1 - n2);
      break;
    }
    case '*':{
      printf("Resultado: %.2f", n1 * n2);
      break;
    }
    case '/':{
      printf("Resultado: %.2f", n1 / n2);
      break;
    }
    case '^':{
      float acumulador = 1;
      for (int i = 0; i < n2; i++){
        acumulador = acumulador * n1;
      }
      printf("Resultado: %.2f", acumulador);
      break;
    }
    default:{
      printf("Operacao nao reconhecida");
      break;
    }
      
  }
}