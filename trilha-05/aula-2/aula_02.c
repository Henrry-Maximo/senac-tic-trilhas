#include <stdio.h>

// Função que recebe um valor que retorna um valor mais dez
int adicionarBonus(int valor) {
  int resultado = valor + 10;

  return resultado;
}

int main() {

  // int r1 = 5 + 10;
  int r1 = adicionarBonus(5);
  int r2 = adicionarBonus(12);
  int r3 = adicionarBonus(20);
  // int r2 = 10 + 10;
  // int r3 = 15 + 10;

  // printf("%d\n", r1);
  // printf("%d\n", r2);
  // printf("%d\n", r3);

  return 0;
}