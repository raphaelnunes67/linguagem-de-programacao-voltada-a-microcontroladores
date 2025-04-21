// Crie um programa que:

// Leia dois números inteiros do usuário, implemente uma função que
// receba esses dois números e retorne o maior deles. Exiba o maior
// número no console.

#include <iostream>


double retornaMaior(double n1, double n2){
  return n1 > n2 ? n1 : n2;
}

int main(){
  double num1, num2;
  std::cout << "Digite o primeiro numero: ";
  std::cin >> num1;
  std::cout << "Digite o segundo numero: ";
  std::cin >> num2;

  std::cout << "O maior e: " << retornaMaior(num1, num2); 
}