// Crie um programa que:

// Leia três números inteiros do usuário e implemente uma função que
// retorne o menor número entre eles. Exiba o menor número no console.

#include<iostream>

int menor_numero(int n1, int n2, int n3){
  return n1 < n2 ? n1 < n3 ? n1 : n3 : n2 < n3 ? n2 : n3; 
}

int main(){
  int n1, n2, n3;
  std::cout << "Digite o numero 1: ";
  std::cin >> n1;
  std::cout << "Digite o numero 2: ";
  std::cin >> n2; 
  std::cout << "Digite o numero 3: ";
  std::cin >> n3; 
  int menor = menor_numero(n1, n2, n3);
  std::cout << "O menor numero e: " << menor;
}