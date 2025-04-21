// Crie um programa que:
// Leia uma string do usuário e implemente uma função que conte o
// número de caracteres na string. Exiba o resultado no console.

#include<iostream>
#include<string>

int contador_de_caracteres(std::string t, char l){
  int count = 0;
  for (auto i = 0; i < t.length(); i++){
    if(t[i] == l){
      count = count + 1;
    }
  }
  return count;
}

int main(){
  std::string texto;
  char letra;
  std::cout << "Digite o texto: ";
  std::getline(std::cin, texto);
  std::cout << "Digite o caracter para realizar a contagem: ";
  std::cin >> letra;
  int count = contador_de_caracteres(texto, letra);
  std::cout << "Contagem: "<< count;
}