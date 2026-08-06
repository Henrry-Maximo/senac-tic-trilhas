#include <stdio.h>
#include <string.h>

// At02: Semaforo
int main() {
  // variaveis
  char cor[20];

  printf("\n=== PROGRAMA PARA FISCALIZAR ACOES DO PEDESTRE NO SEMAFORO ===\n");

  printf("\nInforme a cor do semaforo (vermelho, verde ou roxo): ");
  scanf("%s", cor);

  printf("\n>>> RESULTADO <<<\n");

  if (strcmp(cor, "vermelho") == 0 || strcmp(cor, "Vermelho") == 0) {
    printf("\nEspere!\n");
  } else if (strcmp(cor, "verde") == 0 || strcmp(cor, "Verde") == 0) {
    printf("\nAtravesse.\n");
  } else {
    printf("\nFarol inoperante.\n");
  }

  printf("\n=== PROGRAMA ENCERRADO ===\n");

  return 0;
}