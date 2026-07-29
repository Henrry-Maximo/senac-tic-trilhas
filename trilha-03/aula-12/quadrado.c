#include <stdio.h>

int main() {
  // desenhando um quadrado 5x5

  int tamanho = 5;

  printf("--- Desenhando um Quadrado --- \n\n");

  // LAÇO EXTERNO controla as linhas  (altura - Eixo Y)
  for (int linha = 1; linha <= tamanho; linha++) {

    // LAÇO INTERNO controla as colunas (largura - Eixo X)
    for (int coluna = 1; coluna <= tamanho; coluna++) {
      // Imprime lado a lado, sem pular linhas
      printf("* ");
    }

    // após imprimir todas as colunas de uma linha, damos um print com \n para quebrar 
    // a linha e formar o quadrado de forma perfeita!
    printf("\n");
  } 

  return 0;
}