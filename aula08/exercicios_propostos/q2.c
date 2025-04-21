#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int matriz[4][4];
  int a, b;
  for (a = 0; a < 4; a++)
  {
    for (b = 0; b < 4; b++)
    {
      matriz[a][b] = rand() % 100 + 1;
    }
  }
  printf("matriz 4x4 com numeros aleatorios entre 1 e 100:\n");
  for (a = 0; a < 4; a++){
    for (b = 0; b < 4; b++){
      printf("%d ", matriz[a][b]);
    }
    printf("\n");
  }
  return 0;
}