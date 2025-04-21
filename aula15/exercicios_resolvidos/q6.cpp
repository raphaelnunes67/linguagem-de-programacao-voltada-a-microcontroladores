// Crie um programa que:
// Implemente uma classe Calculadora que realize operações
// matemáticas:
// ▶ A classe deve ter m´etodos para soma, subtração, multiplicação e
// divisão.
// ▶ Adicione um método para calcular a potência de um número passando
// o expoente.
// ▶ Adicione um método para calcular a radiciação de um número
// passando o radicando.
// ▶ Crie um programa principal que demonstre o uso da classe, permitindo
// ao usuário escolher a operação e inserir os números.

#include <iostream>
#include <math.h>

class Calculadora{
  public:
  float soma(float n1, float n2){
    return n1 + n2;
  }
  float subtracao(float n1, float n2){
    return n1 - n2;
  }
  float multiplicacao(float n1, float n2){
    return n1 * n2;
  }
  float divisao(float n1, float n2){
    try{
      return n1 / n2;
    }
    catch(const std::exception& e){
      std::cout << "Divisao por 0 nao pode\n";
      std::cout << "Erro: " << e.what();
    }
  }
  float potenciacao(float n1, float n2){
    return pow(n1, n2);
  }
  float radiciacao(float n1, float n2){
    return pow(n1, 1/n2);
  }
};

int main(){
  Calculadora calculadora;
  int opcao;
  int rodar = 1;
  float n1, n2;
  for(;rodar;){
    std::cout << "Calculadora!\n";
    std::cout << "1 - Somar dois numeros\n";
    std::cout << "2 - Subtrair dois numeros\n";
    std::cout << "3 - Multiplicar dois numeros\n";
    std::cout << "4 - Dividir dois numeros\n";
    std::cout << "5 - Elevar um numero a outro\n";
    std::cout << "6 - Tirar a raiz enesima de um numero\n";
    std::cout << "7 - Sair\n";
    std::cin >> opcao;
    switch (opcao){
      case 1:{
        std::cout << "Digite a primeira parcela: ";
        std::cin >> n1;
        std::cout << "Digite a segunda parcela: ";
        std::cin >> n2;
        std::cout << "A soma dos numeros e: " << calculadora.soma(n1, n2);
        break;
      }
      case 2: {
        std::cout << "Digite o minuendo: ";
        std::cin >> n1;
        std::cout << "Digite o subtraendo: ";
        std::cin >> n2;
        std::cout << "A subtracao dos numeros e: " << calculadora.subtracao(n1, n2);
        break;
      }
      case 3: {
        std::cout << "Digite a primeira parcela: ";
        std::cin >> n1;
        std::cout << "Digite a segunda parcela: ";
        std::cin >> n2;
        std::cout << "A multiplicacao dos numeros e: " << calculadora.multiplicacao(n1, n2);
        break;
      }

      case 4: {
        std::cout << "Digite dividendo: ";
        std::cin >> n1;
        std::cout << "Digite o divisor: ";
        std::cin >> n2;
        std::cout << "A divisao dos numeros e: " << calculadora.divisao(n1, n2);
        break;
      }
      case 5: {
        std::cout << "Digite a base: ";
        std::cin >> n1;
        std::cout << "Digite o expoente: ";
        std::cin >> n2;
        std::cout << "A potenciacao e: " << calculadora.potenciacao(n1, n2);
        break;
      }
      case 6: {
        std::cout << "Digite o radicando: ";
        std::cin >> n1;
        std::cout << "Digite o indice: ";
        std::cin >> n2;
        std::cout << "A raiz enesima e: " << calculadora.radiciacao(n1, n2);
        break;
      }
      case 7:{
        rodar = 0;
        break;
      }
    }
  }


}
