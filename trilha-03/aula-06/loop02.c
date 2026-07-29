#include <stdio.h>

int main() {
  // TÉCNICA 2: O perigo da Lógica Invertida
  // int tempo_restante = 2;
  int tempo_restante = 100;
  pritnf("\n --- Reiniciando o Servidor ---\n\n");

  // A condição pede: rode enquanto o tempo for MAIOR que zero
  while (tempo_restante > 0) {
    printf("O servidor será reiniciado em %d segundos...\n", tempo_restante);
    // ERRO FATAL: Queremos descer para zero, mas estamos SOMANDO!
    // tempo_restante++;
    tempo_restante--;
  }

  return 0;
}