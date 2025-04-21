
/*Conte quantas letras maiúsculas existem em uma string usando ponteiros 
(use a função isupper() de ctype.h). */

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
  int count = 0;
  char *p; // cria o ponteiro
  char string [1000]; // cria a string de entrada
  printf("Infome o texto: ");
  fgets(string, sizeof(string), stdin);
  fflush(stdin);
  p = &string[0]; // aponta para primeiro item
  for (int i = 0; *(p+i) != '\0'; i++){
    if (isupper(*(p+i)) == 1){
      count = count + 1;
    }
  }
  printf("A quantidade de letras maiusculas e: %d", count);
  return 0;
}