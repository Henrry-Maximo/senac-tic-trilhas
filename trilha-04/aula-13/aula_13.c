#include <stdio.h>

#define DIAS 3

int main() {
  int vendas[DIAS] = {0};
  // int vendas[DIAS]; // PROBLEMA
  for(int i = 0; i < DIAS; i++) {
    printf("Digite a venda do dia %d: ", i + 1);
    scanf("%d", &vendas[i]);
  }

  for(int i = 0; i < DIAS; i++) {
    // int dobro = i * 2; // ERRO: confundir valor com índice do vetor
    int dobro = vendas[i] * 2;
    printf("Dobro das vendas do dia %d: R$ %d\n", i + 1, dobro);
  }

  return 0;
}