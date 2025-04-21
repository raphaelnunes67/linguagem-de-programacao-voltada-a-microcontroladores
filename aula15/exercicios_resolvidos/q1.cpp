// Crie um programa que:
// Leia dois número inteiros do usuário e implemente uma função que
// retorne a soma desses números. Exiba o resultado no console.


#include<iostream>


int soma_numeros(int n1, int n2){
  return n1 + n2;
}

int main(){
  int n1, n2;
  std::cout << "Digite o numero 1: ";
  std::cin >> n1;
  std::cout << "Digite o numero 2: ";
  std::cin >> n2; 
  int soma = soma_numeros(n1, n2);
  std::cout << "A soma dos numeros e: " << soma;
}