#include <stdio.h>

// definição da função (criação)
int calcularArea(int base, int altura) {
  int area = base * altura;

  return area;
}

int main() {
  // Chamadas da função (usar a função criada)
  int a1 = calcularArea(5, 10);
  int a2 = calcularArea(7, 3);

  printf("Área 1: %d\n", a1);
  printf("Área 2: %d\n", a2);
}