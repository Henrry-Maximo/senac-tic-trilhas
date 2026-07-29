#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
  setlocale(LC_ALL, "Portuguese_Brazil.1252");

  int num1, num2;

  printf("--- Mini Calculadora --- \n");
  printf("Digite o primeiro número: ");
  scanf(" %d", &num1);

  printf("Digite o segundo número: ");
  scanf(" %d", &num2);

  printf("Os dois números digitados são: %d e %d!\n\n", num1, num2);

  int soma = num1 + num2;
  int subtracao = num1 - num2;
  int multiplicacao = num1 * num2;
  float divisao = (float) num1 / num2;

  printf("\n--- Resultados da Calculadora ---\n");
  printf("%d + %d = %d\n", num1, num2, soma);
  printf("%d - %d = %d\n", num1, num2, subtracao);
  printf("%d * %d = %d\n", num1, num2, multiplicacao);
  printf("%d / %d = %.2f\n", num1, num2, divisao);

  return 0;
}