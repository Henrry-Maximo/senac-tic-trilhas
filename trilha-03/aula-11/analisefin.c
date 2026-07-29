#include <stdio.h>

int main() {
  // SISTEMA DE AUDITORIA FINANCEIRA
  printf("--- Iniciando Auditoria do Extrato ---\n\n");

  // Nossos "acumuladores" (as pastas AZUL e VERMELHA)
  float total_receitas = 0.0;
  float total_despesas = 0.0;
  float transacao = 0.0;

  // A repeticação será implementada através do DO-WHILE
  do {
    printf("Digite o valor da transação (R$0.00, caso queira finalizar as entradas): ");
    scanf("%f", &transacao);

    // A condição: o 'if' avalia o dado atual da esteira de entrada de dados
    if (transacao > 0) {
      printf("Entrada registrada: R$ %.2f\n", transacao); // Acumulando o lucro da empresa
      total_receitas = total_receitas + transacao;
    } else if (transacao < 0) {
      printf("Saída registrada: R$ %.2f\n", transacao); // Acumulando o gasto da empresa
      total_despesas = total_despesas + transacao;
    }
  } while (transacao != 0);

  // RESULTADO FINAL (executado apenas após o fim da repetição)
  printf("\n--- Balaço Final de Projeto ---\n");
  printf("Total de Receitas (Ganhos): R$ %.2f\n", total_receitas);
  printf("Total de Despesas (Gastos): R$ %.2f\n", total_despesas);

  float saldo_final = total_receitas + total_despesas; // as despesas já são negativas

  if (saldo_final > 0) {
    printf("Status: PROJETO LUCRATIVO (Saldo: R$ %.2f)\n", saldo_final);
  } else if (saldo_final < 0) {
    printf("Status: PROJETO EM PREJUÍZO (Saldo: R$ %.2f)\n", saldo_final);
  } else {
    printf("Status: PROJETO ZERADO (Saldo: R$ %.2f)\n", saldo_final);
  }

  return 0;
}