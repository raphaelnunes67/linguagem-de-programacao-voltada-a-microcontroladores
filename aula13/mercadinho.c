#include<stdio.h>
#include<string.h>

#define QUANTIDADE_TOTAL_PRODUTOS 2
int produtos_cadastrados = 0;

struct Produto{
  char nome[51];
  char codigo[11];
  float preco;
  int quantidade; 
};
struct Produto estoque[QUANTIDADE_TOTAL_PRODUTOS];

enum {
  CADASTRAR_PRODUTO = 1,
  LISTAR_PRODUTOS,
  CONSULTAR_POR_INDICE,
  PESQUISAR_POR_CODIGO,
  EDITAR_PRODUTO_POR_CODIGO,
  APAGAR_PRODUTO_POR_CODIGO,
  CALCULAR_VALOR_TOTAL_ESTOQUE,
  SAIR
};

void limpar_tela(){
  printf("\033[2J""\033[1;1H");
  return;
}

void cadastrar_produto(){
  
  if (produtos_cadastrados >= QUANTIDADE_TOTAL_PRODUTOS){
    limpar_tela();
    printf("Quantidade maxima de produtos cadastrada!\n");
    return;
  }
  printf("Digite o nome do produto %d: ", produtos_cadastrados + 1);
  fgets(estoque[produtos_cadastrados].nome, sizeof(estoque[produtos_cadastrados].nome),stdin);
  fflush(stdin);
  estoque[produtos_cadastrados].nome[strcspn(estoque[produtos_cadastrados].nome, "\n")] = 0;
  printf("Digite o codigo do produto %d: ", produtos_cadastrados + 1);
  fgets(estoque[produtos_cadastrados].codigo, sizeof(estoque[produtos_cadastrados].codigo),stdin);
  estoque[produtos_cadastrados].codigo[strcspn(estoque[produtos_cadastrados].codigo, "\n")] = 0;
  fflush(stdin);
  float preco = 0.0;
  while(1){
    printf("Digite o preco do produto %d: ", produtos_cadastrados + 1);
    scanf("%f", &preco);
    if (preco <= 0.0 || preco > 1000.0){
      printf("Preço invalido!\n");
      fflush(stdin);
      continue;
    }
    estoque[produtos_cadastrados].preco = preco;
    break;
  }
  int quantidade = 0;
  while(1){
    printf("Digite a quantidade de itens do produto %d: ", produtos_cadastrados + 1);
    scanf("%d", &quantidade);
    if(quantidade <= 0 || quantidade > 100){
      printf("Quantidade invalida!\n");
      fflush(stdin);
      continue;
    }
    estoque[produtos_cadastrados].quantidade = preco;
    break;
  }
  produtos_cadastrados++;
  limpar_tela();
  printf("Produto cadastrado com sucesso!\n");

}

void listar_produtos(){
  limpar_tela();
  printf("Produtos disponiveis: \n\n");
  for (int i = 0; i < produtos_cadastrados; i++){
    printf("PRODUTO %d:\n", i + 1);
    printf("NOME: %s\n", estoque[i].nome);
    printf("CODIGO: %s\n", estoque[i].codigo);
    printf("PRECO: R$ %.2f\n", estoque[i].preco);
    printf("QUANTIDADE: %d unidades\n\n", estoque[i].quantidade);
  }
}

void consultar_por_indice(){
  int indice;
  printf("Digite o indice do produto: ");
  scanf("%d", &indice);

  if (indice > produtos_cadastrados || indice < 1){
    limpar_tela();
    printf("Indice invalido!\n");
    return;
  }
  limpar_tela();
  printf("\nPRODUTO %d:\n", indice);
  printf("NOME: %s\n", estoque[indice - 1].nome);
  printf("CODIGO: %s\n", estoque[indice - 1].codigo);
  printf("PRECO: R$ %.2f\n", estoque[indice - 1].preco);
  printf("QUANTIDADE: %d unidades\n\n", estoque[indice - 1].quantidade);
}

void pesquisar_por_codigo(){
  char codigo [11];
  printf("Digite o codigo do produto: ");
  fgets(codigo, sizeof(codigo),stdin);
  codigo[strcspn(codigo, "\n")] = 0;
  fflush(stdin);
  for (int i = 0; i < produtos_cadastrados; i++){
    if (strcmp(codigo, estoque[i].codigo) == 0){
      limpar_tela();
      printf("\nPRODUTO %d:\n", i + 1);
      printf("NOME: %s\n", estoque[i].nome);
      printf("CODIGO: %s\n", estoque[i].codigo);
      printf("PRECO: R$ %.2f\n", estoque[i].preco);
      printf("QUANTIDADE: %d unidades\n\n", estoque[i].quantidade);
      return;
    }
  }
  limpar_tela();
  printf("\nProduto nao encontrado!\n");
}

void editar_produto_por_codigo(){
  char codigo[11];
  printf("Digite o codigo do produto a ser editado: ");
  fgets(codigo, sizeof(codigo), stdin);
  codigo[strcspn(codigo, "\n")] = 0;
  fflush(stdin);
  
  for (int i = 0; i < produtos_cadastrados; i++){
    if (strcmp(codigo, estoque[i].codigo) == 0){
      printf("Produto encontrado. Digite os novos dados:\n");
      
      printf("Digite o novo nome: ");
      fgets(estoque[i].nome, sizeof(estoque[i].nome), stdin);
      estoque[i].nome[strcspn(estoque[i].nome, "\n")] = 0;
      fflush(stdin);
      
      float preco = 0.0;
      while(1){
        printf("Digite o novo preco: ");
        scanf("%f", &preco);
        if (preco <= 0.0 || preco > 1000.0){
          printf("Preço invalido!\n");
          fflush(stdin);
          continue;
        }
        estoque[i].preco = preco;
        break;
      }
      
      int quantidade = 0;
      while(1){
        printf("Digite a nova quantidade: ");
        scanf("%d", &quantidade);
        if(quantidade <= 0 || quantidade > 100){
          printf("Quantidade invalida!\n");
          fflush(stdin);
          continue;
        }
        estoque[i].quantidade = quantidade;
        break;
      }
      limpar_tela();
      printf("Produto editado com sucesso!\n");
      fflush(stdin);
      return;
    }
  }
  limpar_tela();
  printf("Produto nao encontrado!\n");
}

void apagar_produto_por_codigo(){
  char codigo[11];
  printf("Digite o codigo do produto a ser apagado: ");
  fgets(codigo, sizeof(codigo), stdin);
  codigo[strcspn(codigo, "\n")] = 0;
  fflush(stdin);
  
  for (int i = 0; i < produtos_cadastrados; i++){
    if (strcmp(codigo, estoque[i].codigo) == 0){
      for (int j = i; j < produtos_cadastrados - 1; j++){
        strcpy(estoque[j].nome, estoque[j+1].nome);
        strcpy(estoque[j].codigo, estoque[j+1].codigo);
        estoque[j].preco = estoque[j+1].preco;
        estoque[j].quantidade = estoque[j+1].quantidade;
      }
      produtos_cadastrados--;
      limpar_tela();
      printf("Produto removido com sucesso!\n");
      return;
    }
  }
  printf("Produto nao encontrado!\n");
}

void calcular_valor_total_estoque(){
  float valor_total = 0.0;
  
  for (int i = 0; i < produtos_cadastrados; i++){
    valor_total += estoque[i].preco * estoque[i].quantidade;
  }
  limpar_tela();
  printf("Valor total do estoque: R$ %.2f\n", valor_total);
}

int main(){
  printf("Bem-vindo ao Mercadinho! \n\n");
  int opcao;
  do{
    printf("MENU \n\n");
    printf("1 - Cadastrar produto\n");
    printf("2 - Listar produtos\n");
    printf("3 - Consultar produto por indice\n");
    printf("4 - Pesquisar produto por codigo\n");
    printf("5 - Editar produto por codigo\n");
    printf("6 - Apagar produto por codigo\n");
    printf("7 - Calcular valor total do estoque\n");
    printf("8 - Sair\n");
    printf("Selecione uma opcao: ");
    scanf("%d", &opcao);
    getchar();
    fflush(stdin);
    limpar_tela();
    
    switch (opcao){
      case CADASTRAR_PRODUTO:{
        cadastrar_produto();
        break;
      }
      case LISTAR_PRODUTOS:{
        listar_produtos();
        break;
      }
      case CONSULTAR_POR_INDICE:{
        consultar_por_indice();
        break;
      }
      case PESQUISAR_POR_CODIGO: {
        pesquisar_por_codigo();
        break;
      }
      case EDITAR_PRODUTO_POR_CODIGO:{
        editar_produto_por_codigo();
        break;
      }

      case APAGAR_PRODUTO_POR_CODIGO:{
        apagar_produto_por_codigo();
        break;
      }
      case CALCULAR_VALOR_TOTAL_ESTOQUE:{
        calcular_valor_total_estoque();
        break;
      }
      default:{
        printf("Comando nao reconhecido\n");
        break;
      } 
    }
  }while(opcao != SAIR);
  printf("Programa finalizado!");
  return 0;
}