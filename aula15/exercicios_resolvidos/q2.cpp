// Crie um programa que:
// Leia uma string do usuário e implemente uma função que conte o
// número de caracteres na string. Exiba o resultado no console.

#include<iostream>
#include<string>

int main(){

  std::string texto;

  std::cout << "Digite o texto: ";

  std::getline(std::cin, texto);

  std::cout << "O texto possui " << texto.length() << " caracteres";

}