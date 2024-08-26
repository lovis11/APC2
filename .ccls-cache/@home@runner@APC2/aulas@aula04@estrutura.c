#include <stdio.h>

struct Pessoa {
  char nome[100];      // 100 bytes
  int idade;           // 4 bytes
  char genero; //M, F  // 1 byte
};                     

int main(void) {
  struct Pessoa pessoa1 = {"João", 30, 'M'};
  //struct Pessoa pessoa1 = {.nome = "João", .idade = 30, .genero = 'M'};

  printf("Nome: %s\n", pessoa1.nome);
  printf("Idade: %d\n", pessoa1.idade);
  printf("Gênero: %c\n", pessoa1.genero);
  
  struct Pessoa pessoa2;

  printf("Entre com o nome da pessoa: ");
  int deu_certo = scanf("%[^\n]s", pessoa2.nome);
  printf("Entre com a idade da pessoa: ");
    deu_certo = scanf("%d", &pessoa2.idade);
  getchar();
  printf("Entre com M ou F para o gênero da pessoa: ");
    deu_certo = scanf("%c", &pessoa2.genero);
  if (pessoa2.genero == 'M') {
    pessoa2.genero = 'M';
    printf("Nome: %s\n", pessoa2.nome);
    printf("Idade: %d\n", pessoa2.idade);
    printf("Gênero: %c\n", pessoa2.genero);
  } else if (pessoa2.genero == 'F') {
    pessoa2.genero = 'F';
    printf("Nome: %s\n", pessoa2.nome);
    printf("Idade: %d\n", pessoa2.idade);
    printf("Gênero: %c\n", pessoa2.genero);
  } else {
    printf("Caractere inválido!\n");
  } 

  struct Pessoa *p_pessoa;
  p_pessoa = &pessoa1;
  // (*ponteiro_pessoa).genero;
  printf("Nome: %s\n", (*p_pessoa).nome);
  printf("Idade: %d\n", (*p_pessoa).idade);
  printf("Gênero: %c\n", (*p_pessoa).genero);
  
  
  return 0;
}