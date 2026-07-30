#include <stdio.h>

int main() {
  printf("--- CONCEITOS DE VETOR NA PRATICA ---\n\n");

  float temperaturas[5];

  // Inicializando individualmente com respectivo valor as posições do vetor
  temperaturas[0] = 22.5;
  temperaturas[1] = 23.0;
  temperaturas[2] = 21.8;
  temperaturas[3] = 24.5;
  temperaturas[4] = 22.5;

  printf("A temperatura do primeiro dia foi: %.1f graus\n", temperaturas[0]);
  printf("A temperatura do último dia foi: %.1f graus\n", temperaturas[4]);

  int tamanho_declarado = 5;
  long tamanho_em_bytes = sizeof(temperaturas);

  printf("\n--- ESTATISTICAS DE MEMORIA ---\n");
  printf("Tamanho declarado (quantidade de itens): %d posicoes\n", tamanho_declarado);
  printf("Tamanho real na memoria (sizeof): %ld bytes\n", tamanho_em_bytes);

  return 0;
}