#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
  setlocale(LC_ALL, "Portuguese_Brazil.1252");

  // primeiro a multiplicação, depois a soma
  int resultado = 2 + 3 * 4;
  printf("O resutado de 2 + 3 * 4 eh: %d\n", resultado);

  // exemplo com a mesma prioridade (esquerda pra direita)
  int resultado2 = 10 / 2 * 5; // 10 / 2 = 5, depois 5 * 5 = 25
  printf("O resutado de 10 / 2 * 5 eh: %d\n", resultado2);

  // forçando a soma com parenteses
  int resultadoComParenteses = (2 + 3) * 4;
  printf("O resutado de (2 + 3) * 4 eh: %d\n", resultadoComParenteses);

  // exemplo: cálculo de média
  float media = (9.0 + 8.0 + 7.5) / 3;
  printf("A média eh: %.2f\n", media);

  return 0;
}