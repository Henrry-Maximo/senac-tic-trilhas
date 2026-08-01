#include <stdio.h>

void funcaoA() {
  int valor = 10;
  printf("Função A: %d\n", valor);
}

void funcaoB() {
  int valor = 20;
  printf("Função B: %d\n", valor);
}

void funcao() {
  int x = 10;
  printf("%d", x);
}

int main() {
  // printf("%d", x);
  funcao();

  funcaoA();
  funcaoB();

  return 0;
}