#include<iostream>
#include<string>
class Aluno {
  private:
    std::string nome;
  public:
    int idade;
    Aluno(std::string n, int i, float a){
      nome = n;
      idade = i;
    }
    std::string pegar_nome_aluno(){
      return nome;
    }
};
int main(){
  Aluno aluno1 ("Altair", 23, 1.80);
  Aluno aluno2 ("David", 19, 1.90);
  std::cout << aluno1.pegar_nome_aluno();
  std::cout << aluno2.pegar_nome_aluno();
  std::cout << aluno1.idade;
}