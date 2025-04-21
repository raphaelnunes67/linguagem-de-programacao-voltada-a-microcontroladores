#include <stdio.h>

char * estado (int num){
  if (num < 0){
    return "Negativo\0";
  }
  else if (num > 0){
    return "Positivo\0";
  }
  else{
    return "Zero\0";
  }
}

int main(){
  int num;
  printf("Digite o numero: ");
  scanf("%d", &num);
  char * p = estado(num);
  printf("O numero e: ");
  for (int i = 0; *(p+i) != '\0'; i++){
    printf("%c", *(p+i));
  }
}