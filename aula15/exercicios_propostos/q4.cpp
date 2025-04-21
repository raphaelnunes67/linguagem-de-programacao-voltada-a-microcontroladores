// Leia uma string do usuário, implemente uma função que inverta a
//string e exiba a string invertida no console.


#include <iostream>
#include <string>

int main (){
  std::string palavra;
  std::cout << "Digite a string: ";
  std::getline(std::cin, palavra);

  char *p = &palavra[0];

  for(int i = palavra.length(); i >= 0; i--){
    std::cout << *(p + i);
  }
}