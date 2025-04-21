// Crie um programa que:
// Implemente uma classe Aluno com as seguintes características:
// ▶ Atributos: nome, nota1, nota2, nota3, frequência (porcentagem).
// ▶ Métodos:
// ▶ Um construtor que receba nome, as três notas e frequência.
// ▶ Um método para calcular a média das notas.
// ▶ Um método para verificar se o aluno está aprovado (média >= 7.0 e
// frequência >= 75%).
// ▶ Um método para exibir os dados do aluno, incluindo nome, notas,
// média e situação (aprovado ou reprovado).
// ▶ Crie um programa principal que demonstre o uso da classe, permitindo
// cadastrar e exibir informações de pelo menos 3 alunos.

#include<iostream>
#include<string>

class Aluno {
  private:
    std::string nome;
    float nota1, nota2, nota3;
    int frequencia;
  public:
    int idade;
    Aluno(std::string n, float n1, float n2, float n3, int f){
      nome = n;
      nota1 = n1;
      nota2 = n2;
      nota3 = n3;
      frequencia = f;
    }
    float calc_media(){
      return (nota1 + nota2 + nota3) / 3;
    }

    int esta_aprovado(){
      if (calc_media() >= 7.0 && frequencia >= 75){
        return 1;
      } 
      return 0;
    }

    void escreva_dados_aluno(){
      std::cout << "Nome: " << nome << "\n";
      std::cout << "Nota 1: " << nota1 << "\n";
      std::cout << "Nota 2: " << nota2 << "\n";
      std::cout << "Nota 3: " << nota3 << "\n";
      std::cout << "Media: " << calc_media() << "\n";
      esta_aprovado() ? std::cout << "Aprovado\n" : std::cout << "Reprovado\n";
    }
};

int main(){
  Aluno aluno1 ("Altair", 5, 8, 8, 80);
  Aluno aluno2 ("David", 10, 7, 9, 74);
  aluno1.escreva_dados_aluno();
  aluno2.escreva_dados_aluno();
}