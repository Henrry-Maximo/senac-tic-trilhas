#include <stdio.h>

// At01: Orçamento Familiar
int main() {
  // variaveis
  float ganhos = 0.0, gastos = 0.0;

  printf("\n=== PROGRAMA PARA INFORMAR SOBRE ORCAMENTO FAMILIAR ===\n");

  printf("\nInforme o total de ganhos: ");
  scanf("%f", &ganhos);

  printf("Informe o total de gastos: ");
  scanf("%f", &gastos);

  printf("\n>>> RESULTADO <<<\n");

  if (ganhos >= gastos) {
    printf("\nVoce esta dentro do orcamento!\n");
  } else {
    printf("\nVoce esta fora do orcamento! Nao gaste mais.\n");
  }

  printf("\n=== PROGRAMA ENCERRADO ===\n");

  return 0;
}