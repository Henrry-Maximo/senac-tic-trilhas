#include <stdio.h>
#define TAM_ORIGEM 10

int main() {
  printf("--- SISTEMA DE FILTRAGEM BANCARIA ---\n\n");

  int transacoes[TAM_ORIGEM] = {150, -20, 300, -5, 450, -10, 600, -15, 750, -25};
  int depositos_validos[TAM_ORIGEM] = {0};

  int qtd_validos = 0;

  printf(">>> Processando Lote de Transações Bancárias...\n");
  for(int i = 0; i < TAM_ORIGEM; i++) {
    if(transacoes[i] > 0) {
      depositos_validos[qtd_validos] = transacoes[i];
      qtd_validos++;
      // qtd_validos = qtd_validos + 1;
    }
  }

  printf("\n>>> Foram encontrados %d depósitos válidos:\n", qtd_validos);
  for(int j = 0; j < qtd_validos; j++) {
    printf("- Depósito %d: R$ %d\n", j + 1, depositos_validos[j]);
  }

  return 0;
}