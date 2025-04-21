#include<stdio.h>

int main(){
  int n;
  int fatorial;
  printf ("Digite um numero: ");
  scanf ("%d", &n);
  int i = 1;
  fatorial = n;
  while(i < n){
    fatorial = fatorial * i;
    printf("\n%d", fatorial);
    i = i + 1;
  }
  printf("\n%d", fatorial);
}