#include<stdio.h>

int main(){
  int minutos, horas;

  printf("Digite o valor das horas: ");
  scanf("%d", &horas);
  printf("Digite o valor das minutos: ");
  scanf("%d", &minutos);

  printf("Minutos totais: %d", horas * 60 + minutos);

}