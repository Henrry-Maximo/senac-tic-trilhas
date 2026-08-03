#include <stdio.h>

// Atividade 02: Churrasco de Domingo
int main() {
  int pessoas;

  printf("\n=== PROGRAMA DISTRIBUIÇÃO CHURRASCO DE DOMINGO ===\n");
  printf("Digite a quantidade de pessoas: \n");
  scanf("%d", &pessoas);

  float carne_kilo = (pessoas * 300.0) / 1000;
  float linguica_kilo = (pessoas * 200.0) / 1000;
  float frango_kilo = (pessoas * 150.0) / 1000;

  float carne_reais = carne_kilo * 50;
  float linguica_reais = linguica_kilo * 28;
  float frango_reais = frango_kilo * 22;

  float total_reais = carne_reais + linguica_reais + frango_reais;
  float contribuicao_por_pessoa_reais = total_reais / pessoas;

  printf("\n=== QUANTIDADE ===\n");
  printf("Carne: %.1f kg - Linguiça: %.2f kg - Frango: %.2f kg\n", carne_kilo, linguica_kilo, frango_kilo);

  printf("\n=== CUSTO TOTAL ===\n");
  printf("Carne: R$ %.2f - Linguiça: R$ %.2f - Frango: R$ %.2f\n", carne_reais, linguica_reais, frango_reais);

  printf("\nCUSTO TOTAL DO CHURRASCO: R$ %.2f\n", total_reais);
  printf("Cada pessoa deve contribuir com: R$ %.2f", contribuicao_por_pessoa_reais);

  return 0;
}
