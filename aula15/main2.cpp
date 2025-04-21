#include<iostream>
#include<string>
class Animal{
  public:
    std::string nome;
};
class Cachorro: public Animal{

  public:
    void latir(){
      std::cout << "AU AU\n";
    }
};
int main(){
  Cachorro cachorro1;
  cachorro1.nome;
}