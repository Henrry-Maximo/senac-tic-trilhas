#include <stdio.h>

// Atividade 08: Açaiteria
int main() {
  int amout_P, amout_M, amout_G;
  float discount, total;

  printf("\n=== PROGRAMA PARA CALCULAR VENDA DE ACAI ===\n");

  printf("\nDigite a quantidade para o tamanho P: ");
  scanf("%d", &amout_P);

  printf("Digite a quantidade para o tamanho M: ");
  scanf("%d", &amout_M);

  printf("Digite a quantidade para o tamanho G: ");
  scanf("%d", &amout_G);

  printf("Digite o desconto a ser aplicado: ");
  scanf("%f", &discount);

  float total_P = amout_P * 13.50;
  float total_M = amout_M * 15.00;
  float total_G = amout_G * 17.50;

  total = ((total_P + total_M + total_G) * discount) / 100; 

  printf("\n>>> RESULTADOS <<<\n");

  printf("\nSeu pedido foi registrado.");
  printf("\n- Acai P: %d", amout_P);
  printf("\n- Acai M: %d", amout_M);
  printf("\n- Acai G: %d", amout_G);

  printf("\n\nDesconto de %.0f%% aplicado.\n", discount);
  printf("Total R$ %.2f.\n", total);

  printf("\n>>> FIM DO PROGRAMA <<<\n");

  return 0;
}