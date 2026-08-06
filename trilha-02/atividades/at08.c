#include <stdio.h>
#include <string.h>
#include <math.h>

float calcular(float value1, float value2, char operation[30]) {
  float result;

  if (strcmp(operation, "soma") == 0) {
    result = value1 + value2;
  } else if (strcmp(operation, "subtracao") == 0) {
    result = value1 - value2;
  } else if (strcmp(operation, "multiplicacao") == 0) {
    result = value1 * value2;
  } else if (strcmp(operation, "divisao") == 0) {
    result = value1 / value2;
  } else if (strcmp(operation, "resto") == 0) {
    result = (int) value1 % (int) value2;
  } else if (strcmp(operation, "potencia") == 0) {
    result = pow(value1, value2);
  }

  return result;
}

// At8: Calculadora com Menu 
int main() {
  // variaveis
  float value1, value2, result;
  char operation[30];

  printf("\n=== PROGRAMA CALCULADORA ===\n");

  printf("\n\nMenu\n");
  printf("1. soma\n");
  printf("2. subtracao\n");
  printf("3. multiplicacao\n");
  printf("4. divisao\n");
  printf("5. resto\n");
  printf("6. potencia\n");
  
  printf("\nInforme o tipo da operacao: ");
  scanf("%s", operation);

  printf("Informe o primeiro valor: ");
  scanf("%f", &value1);

  printf("Informe o segundo valor: ");
  scanf("%f", &value2);

  // chamada
  result = calcular(value1, value2, operation);

  printf("\n\n>>> RESULTADO <<<\n");

  if (strcmp(operation, "soma") == 0) {
    printf("\n%.1f + %.1f = %.1f", value1, value2, result);
  } else if (strcmp(operation, "subtracao") == 0) {
    printf("\n%.1f - %.1f = %.1f", value1, value2, result);
  } else if (strcmp(operation, "multiplicacao") == 0) {
    printf("\n%.1f * %.1f = %.1f", value1, value2, result);
  } else if (strcmp(operation, "divisao") == 0) {
    printf("\n%.1f / %.1f = %.1f", value1, value2, result);
  } else if (strcmp(operation, "resto") == 0) {
    printf("\n%.1f mod %.1f = %.1f", value1, value2, result);
  } else if (strcmp(operation, "potencia") == 0) {
    printf("\n%.1f ^ %.1f = %.1f", value1, value2, result);
  } else {
    printf("\nOperacao nao suportada");
  }
  
  printf("\n\n=== PROGRAMA ENCERRADO ===\n");

  return 0;
}