#include <stdio.h>

int main(void) {
  printf("Exercício 1: a)\n");
  int vet[8] = {4,6,3,8,2,5,9,1};
  int i = 0;
  for (i = 0; i < 8; i++) {
    printf("vet[%d]: %d\n", i, *(vet+1));
  }
  printf("Exercício 1: b)\n");
  char string [50] = "Avaliação 2";
  int j = 0;
  while (string[j] != '\0') {
    printf("%c", *(string+j));
    j++;
  }

  return 0;
}