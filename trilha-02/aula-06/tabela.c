#include <stdio.h>

int main() {
  printf("--- Validando a Tabela Verdade em C ---\n\n");

  printf("--- Tabela E (&&) ---\n");
  printf("1 && 1 = %d\n", 1 && 1); // Verdadeiro e Vardadeiro
  printf("1 && 0 = %d\n", 1 && 0); // Verdadeiro e Falso
  printf("0 && 1 = %d\n", 0 && 1); // Falso e Vardadeiro
  printf("0 && 0 = %d\n", 0 && 0); // Falso e Falso

  printf("--- Tabela OU (||) ---\n");
  printf("1 || 1 = %d\n", 1 || 1); // Verdadeiro ou Vardadeiro
  printf("1 || 0 = %d\n", 1 || 0); // Verdadeiro ou Falso
  printf("0 || 1 = %d\n", 0 || 1); // Falso ou Vardadeiro
  printf("0 || 0 = %d\n", 0 || 0); // Falso ou Falso

  return 0;
}