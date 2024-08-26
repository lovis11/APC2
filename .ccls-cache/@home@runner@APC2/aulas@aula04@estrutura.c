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

  printf("Entre com o nome da pessoa: \n ");
  int deu_certo = scanf("%[^\n]s", pessoa2.nome);
  printf("Entre com a idade da pessoa: \n ");
    deu_certo = scanf("%d", &pessoa2.idade);
  getchar();
  printf("Entre com M ou F para o gênero da pessoa: \n ");
    deu_certo = scanf("%c", &pessoa2.genero);

  printf("Nome: %s\n", pessoa2.nome);
  printf("Idade: %d\n", pessoa2.idade);
  printf("Gênero: %c\n", pessoa2.genero);
  
  
  return 0;
}