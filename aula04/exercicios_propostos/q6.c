#include<stdio.h>

int main(){
  float nota;

  printf("Digite a nota: ");
  scanf("%f", &nota);

  if (nota >= 0 && nota <= 10){
    
  }
  else{
    printf("Nota invalida!");
  }
  while(1);
}