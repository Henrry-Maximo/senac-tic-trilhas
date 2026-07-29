#include <stdio.h>

int main() {
  // Projecao de Rendimentos (Modelo Iterativo)
  int meses_totais = 12;
  int mes_atual = 1;

  float saldo_investido = 10000.0;
  float taxa_juros = 0.01;

  printf("--- Relatório de Evolução do Investimento ---\n\n");

  while (mes_atual <= meses_totais) {
    saldo_investido = saldo_investido + (saldo_investido * taxa_juros);
    printf("Mês %d: O saldo atualizado é de R$ %.2f\n", mes_atual, saldo_investido);

    mes_atual = mes_atual + 1;
    // mes_atual += 1;
  }

  printf("\nProjecao finalizada com sucesso!\n");

  return 0;
}