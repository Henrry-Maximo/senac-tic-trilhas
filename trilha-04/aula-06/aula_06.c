#include <stdio.h>

// Boa Prática: definindo o tamanho do nosso estoque
#define TAM 5

int main() {
  printf("--- SISTEMA DE GESTAO DE ESTOQUE ---\n\n");

  char setores[TAM] = {'A', 'B', 'C', 'D', 'E'};
  float precos[TAM] = {150.0, 89.90, 45.50, 200.00, 10.99};
  
  printf(">>> Visão Geral: \n");
  printf("Preço do 1o produto (Setor %c): R$ %.2f\n", setores[0], precos[0]);
  printf("Preço do último produto (Setor %c): R$ %.2f\n", setores[TAM-1], precos[TAM-1]);

  // Substituição direta do valor
  printf("O produto do índice 2 custa R$ %.2f\n\n", precos[2]);
  precos[2] = 22.75;
  printf("Agora o produto do índice 2 custa R$ %.2f\n\n", precos[2]);

  // O perigo causar um comportamento indefinido:
  precos[10] = 999.99;

  return 0;
}