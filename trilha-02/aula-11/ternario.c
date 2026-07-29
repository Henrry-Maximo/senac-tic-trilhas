#include <stdio.h>

int main() {
  float vendas = 1250.0;
  float bonus;

  // --- Versão com if-else (tradicional) ---

  if (vendas > 1000.0) {
    bonus = 500;
  } else {
    bonus = 100;
  }

  printf("Com if-else, para vendas de R$%.2f, o bonus e: R$%2.f\n", vendas, bonus);

  // --- Versão com Operator Ternário (concisa) ---
  // bonus = (condicao) ? valor_se_verdadeiro : valor_se_falso;
  bonus = (vendas > 1000.0) ? 500.0 : 100.0;
  printf("Com if-else, para vendas de R$%.2f, o bonus e: R$%2.f\n", vendas, bonus);

  // --- Testando com outro valor ---
  printf("Testando com vendas baixas --- \n");
  vendas = 800.0;
  bonus = (vendas > 1000.0) ? 500.0 : 100.0;
  printf("Com if-else, para vendas de R$%.2f, o bonus e: R$%2.f\n", vendas, bonus);

  return 0;
}