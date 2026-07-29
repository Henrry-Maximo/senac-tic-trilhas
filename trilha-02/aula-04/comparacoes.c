#include <stdio.h>

int main() {
  // a == b;
  // a != b;
  // a <= b;
  // a >= b;

  // definindo a regra de negócio
  float limite_prioridade = 1000.0;

  // dados dos clientes
  float divida_cliente_A = 500.0;
  float divida_cliente_B = 1500.0;
  float divida_cliente_C = 1000.0;

  // variavel que vai guardar o resultado da nossa pergunta
  int eh_prioritario;

  printf("--- Analise de Cobranca Prioritaria ---\n");
  printf("Regra: Divida > %.2f\n\n", limite_prioridade);

  // analisando cliente A
  eh_prioritario = divida_cliente_A > limite_prioridade; // 500.0 > 1000.0 ? Falso.
  printf("Cliente A (Divida R$%.2f) e prioritario? (0=Nao, 1=Sim): %d\n", divida_cliente_A, eh_prioritario);

  // analisando cliente B
  eh_prioritario = divida_cliente_B > limite_prioridade; // 1500.0 > 1000.0 ? True.
  printf("Cliente B (Divida R$%.2f) e prioritario? (0=Nao, 1=Sim): %d\n", divida_cliente_B, eh_prioritario);

  // analisando cliente C
  eh_prioritario = divida_cliente_C > limite_prioridade; // 1000.0 > 1000.0 ? Falso.
  printf("Cliente C (Divida R$%.2f) e prioritario? (0=Nao, 1=Sim): %d\n", divida_cliente_C, eh_prioritario);

  // e se a regra fosse se maior ou igual?
  eh_prioritario = (divida_cliente_C >= limite_prioridade); // 1000.0 >= 1000.0 ? True.
  printf("Cliente C (Divida R$%.2f) e prioritario? (0=Nao, 1=Sim): %d\n", divida_cliente_C, eh_prioritario);

  return 0;
}