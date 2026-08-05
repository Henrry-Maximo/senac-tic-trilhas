#include <stdio.h>

// Atividade 09: Meta Pessoal
int main() {
  char desc[50];
  float valor_atingir, salario, despesa_mensal;

  
  printf("\n=== PROGRAMA PARA AVALIAR META PESSOAL ===\n");
  
  printf("\nInforme a descricao da meta: ");
  scanf("%s", desc);

  printf("Informe o valor necessario para atingi-la: ");
  scanf("%f", &valor_atingir);

  printf("Informe seu salario mensal: ");
  scanf("%f", &salario);

  printf("Informe o total de despesas mensais: ");
  scanf("%f", &despesa_mensal);

  float saldo = salario - despesa_mensal;
  float reserva = (saldo * 30) / 100;
  float disponivel = saldo - reserva;
  float prazo = valor_atingir / disponivel;

  printf("\n>>> RESULTADOS <<<\n");

  printf("\nMeta: %s (R$ %.2f)", desc, valor_atingir);
  printf("\nSalario: R$ %.2f - Despesas: R$ %.2f\n", salario, despesa_mensal);

  printf("\nSaldo apos despesas: R$ %.2f", saldo);
  printf("\nReserva fixa (30%%): R$ %.2f", reserva);
  printf("\nValor disponivel para a meta: R$ %.2f por mes", disponivel);
  printf("\nPrazo estimado para atingir a meta: %.2f meses\n", prazo);

  printf("\n>>> FIM DO PROGRAMA <<<\n");

  return 0;
}