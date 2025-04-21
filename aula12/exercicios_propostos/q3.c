// Crie um script que:
// Defina uma estrutura para representar um ponto no plano cartesiano
// (x,y) e calcule a distância entre dois pontos.

#include<stdio.h>
#include<math.h>

struct Ponto{
  float x;
  float y;
};

int main(){
  struct Ponto pontos [2]; 
  for (int i = 0; i < 2; i++){
    printf("Digite o valor da coordenada X do ponto %d: ", i + 1);
    scanf("%f", &pontos[i].x);
    printf("Digite o valor da coordenada Y do ponto %d: ", i + 1);
    scanf("%f", &pontos[i].y);
  }
  float distancia = sqrt(pow(pontos[1].x - pontos[0].x, 2) + pow(pontos[1].y - pontos[0].y, 2));
  printf("A distancia e: %.5f", distancia);
  return 0;
}