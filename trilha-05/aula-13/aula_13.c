#include <stdio.h>

int fatorial(int n) {
  int resultado = 0;

  for (int i = 0; i <= n; i++) {
    resultado *= i;
  }

  return resultado;
}

int main() {
  int valor = fatorial(5);
  printf("fatorial: %d\n", valor);

  return 0;
}