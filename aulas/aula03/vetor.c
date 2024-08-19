#include <stdio.h>

int main(void) {
  int vet[10] = {3, 5, 6, 2, 8, 9, 1, 5, 0, 7}; // representação interna: (int *)

  printf("Representação de vetor: \n");
  printf("&vet[0]: %p, vet[0]: %d\n", &vet[0], vet[0]);
  printf("&vet[1]: %p, vet[1]: %d\n", &vet[1], vet[1]);
  printf("&vet[2]: %p, vet[2]: %d\n", &vet[2], vet[2]);

  printf("Representação de ponteiro: \n");
  printf("vet: %p, *vet: %d\n", vet, *vet);
  printf("vet + 1: %p, *(vet + 1): %d\n", vet + 1, *(vet + 1));
  printf("vet + 2: %p, *(vet + 2): %d\n", vet + 2, *(vet + 2));

  int *p = vet; // p = &vet[0];
  printf("Representação de vetor: \n");
  printf("&p[0]: %p, p[0]: %d\n", &p[0], p[0]);
  printf("&p[1]: %p, p[1]: %d\n", &p[1], p[1]);
  printf("&p[2]: %p, p[2]: %d\n", &p[2], p[2]);
  printf("Representação de ponteiro:\n");
  printf("p: %p, *p: %d\n", p, *p); // vet[0]
  printf("p+1: %p, *(p+1): %d\n", p+1, *(p+1)); // vet[1]
  printf("p+2: %p, *(p+2): %d\n", p, *(p+2)); // vet[2]

  int *p2 = &vet[5];
  printf("Representação de vetor: \n");
  printf("&p2[0]: %p, p2[0]: %d\n", &p2[0], p2[0]);
  printf("&p2[1]: %p, p2[1]: %d\n", &p2[1], p2[1]);
  printf("&p2[2]: %p, p2[2]: %d\n", &p2[2], p2[2]);
  printf("Representação de ponteiro:\n");
  printf("p2: %p, *p: %d\n", p2, *p2);
  printf("p2+1: %p, *(p2+1): %d\n", p2+1, *(p2+1));
  printf("p2+2: %p, *(p2+2): %d\n", p2, *(p2+2));

  int n = 5;
  int *pn = &n;
  printf("Representação de ponteiro: \n");
  printf("pn: %p (&n), *pn: %d (n)\n", pn, *pn);
  printf("Representação de vetor: \n");
  printf("&pn[0]: %p (&n), pn[0]: %d (n) \n", &pn[0], pn[0]);

  return 0;
}