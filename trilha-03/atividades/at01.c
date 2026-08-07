#include <stdio.h>

// At01: Tabuada
int main() {
  // variaveis
  int number;

  printf("\n\n-------- PROGRAMA PARA FAZER A TABUADA DE UM DETERMINADO NUMERO --------\n");

  printf("\nInforme o numero: ");
  scanf("%d", &number);

  printf("\n>>>>>>> RESULTADOS <<<<<<<\n");

  for (int i = 0; i < 10; i++) {
    printf("\n%d x %d = %d", number, i + 1, number * (i + 1));
  }

  printf("\n\n-------- PROGRAMA ENCERRADO --------\n");

  return 0;
}