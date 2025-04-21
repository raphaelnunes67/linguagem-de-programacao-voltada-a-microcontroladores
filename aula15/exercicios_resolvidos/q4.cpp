#include<iostream>
#include <string>
#include<string.h>
#include<algorithm>
int main(){
  std::string texto;
  std::string texto_reverso;
  std::cout << "Digite o texto: ";
  std::getline(std::cin, texto);
  
  std::cout << "Tamanho do texto: " << texto.length() << "\n";
  texto_reverso = texto;
  reverse(texto_reverso.begin(), texto_reverso.end());

  std::cout << "Texto digitado: " << texto << "\n";
  std::cout << "Texto reverso: " << texto_reverso << "\n";

  for (auto i = 0; i < texto.length(); i++){
    texto[i] = tolower(texto[i]);
    texto_reverso[i] = tolower(texto_reverso[i]);
  }

  if (texto == texto_reverso){
    std::cout << "Palindromos";
  }
  else{
    std::cout << "Nao e palindromo";
  }
  return 0;
}