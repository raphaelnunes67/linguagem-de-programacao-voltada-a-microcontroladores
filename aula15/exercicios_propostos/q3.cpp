// Crie um programa que:
// Leia três números reais do usuário, implemente uma função que
// calcule a média ponderada desses números. Os pesos são: 2, 3 e 5,
// respectivamente. Exiba a média ponderada no console.

#include <iostream>

double mediaPodenrada(double n1, double n2, double n3){

  return (n1 * 2 + n2 * 3 + n3 * 5) / (2 + 3 + 5);
}

int main (){
  double num1, num2, num3;
  std::cout << "Digite o numero 1: ";
  std::cin >> num1;
  std::cout << "Digite o numero 2: ";
  std::cin >> num2;
  std::cout << "Digite o numero 3: ";
  std::cin >> num3;
  std::cout << "A media ponderada e: " << mediaPodenrada(num1, num2, num3);
}