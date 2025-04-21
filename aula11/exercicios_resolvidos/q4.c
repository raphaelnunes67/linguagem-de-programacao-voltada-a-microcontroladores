#include<stdio.h>

int main(){
  char string[1001];
  char c;
  char *p = &string[0];
  printf("Digite a string (limite 1000 caracteres): ");
  fgets(string, sizeof(string), stdin);

  fflush(stdin);
  printf("Digite o caracter para informarmos a ocorrencia: ");
  scanf("%c", &c);

  int count = 0;
  printf("%c", *p);
  for (int i = 0; *(p + i) != '\0'; i++){
    if (*(p + i) == c){
      count++;
    }
  }
  printf("O caracter \"%c\" se repete %d vezes", c, count);

  return 0;
}