#include <stdio.h>

int main() {
  // DEMONSTRAÇÃO DO COMANDO CONTINUE (Pular iteração)

  printf("\n --- Inciando Fechamento Financeiro --- \n\n");

  
  for (int venda = 1; venda <= 15; venda++) {
    if (venda == 7) {
      printf(">>> Venda %d foi cancelada. Pulando esta venda... \n\n", venda);
      continue; // o CONTINUE ignora o resto do bloco (fluxo) e volta para o topo
    }

    // Esta linha não será executda para a venda 7
    printf("Processando cálculo de impostos de venda %d...\n\n", venda);
  }  

  printf("--- Fechamento Financeiro Concluído --- \n");

  return 0;
}