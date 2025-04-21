#include<stdio.h>

int main(){
  int idade;

  printf("Digite a idade da pessoa: ");
  scanf("%d", &idade);
  if (idade < 0){
    printf("Digite uma idade valida!");
  }
  else if (idade <= 12){
    printf("Crianca");
  }else if(idade > 12 && idade < 18 && idade < 60){
    printf("Adulto");
  }
  else{
    printf("Idoso");
  }
}