#include <stdio.h>

int main(void) {
  int matriz[3][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
  };

  int *ptr = (int *)matriz;

  int linha = 3;
  int coluna = 4;

  for (int i = 0; i < linha * coluna; i++) {
    if (*ptr % 2 == 0) {
      *ptr = 0;
    }
    ptr++;
  }

  ptr = (int *)matriz;

  printf("Matriz alterada:\n");
  for (int i = 0; i < linha; i++) {
    for (int j = 0; j < coluna; j++) {
      printf("%d ", *(ptr + i * coluna + j));
    }
    printf("\n");
  }

  return 0;
}