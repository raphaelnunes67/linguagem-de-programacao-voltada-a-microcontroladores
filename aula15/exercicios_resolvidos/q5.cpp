// Crie um programa que:
// Leia um número inteiro do usuário e implemente uma função que
// calcule o quadrado desse número. Exiba o resultado no console.

#include<iostream>

float potenciacao(float n1){
  return pow(n1, 2);
}

int main(){
  float n1, n2;
  std::cout << "Digite o numero: ";
  std::cin >> n1;
  std::cout << "A multiplicacao dos numeros e: " << potenciacao(n1);
  return 0;
}