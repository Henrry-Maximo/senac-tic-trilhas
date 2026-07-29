#include <stdio.h>
#include <stdbool.h>

int main() {
  // Dados do Cliente
  float renda = 6000.0;
  int idade = 25;
  bool historico_bom = true; // true = 1

  printf("--- Analise de Credito Especial (Versão Simplificada) ---\n");

  if ((renda > 5000.0) && (idade > 21) && (historico_bom == true)) {
    printf("Resultado: Cliente ELEGIVEL ao credito especial.\n");
  } else {
    printf("Resultado: Cliente NAO ELEGIVEL.\n");
  };

  return 0;
}