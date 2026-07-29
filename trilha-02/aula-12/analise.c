#include <stdio.h>
#include <stdbool.h>

bool clienteEstaInadimplente(int dias_atraso) {
  if (dias_atraso > 0) {
    return true; // retorna o valor 1
  } else {
    return false; // retorna o valor 0
  }
}

int main() {
  int dias_cliente_A = 0;
  int dias_cliente_B = 35;

  printf("Analisando Cliente A:\n");

  if (clienteEstaInadimplente(dias_cliente_A)) {
    printf("Acao: Enviar email de cobranca.\n\n");
  } else {
    printf("Acao: Enviar email de agradecimento.\n\n");
  }

  printf("Anlisando Cliente B:\n");
  if (clienteEstaInadimplente(dias_cliente_B)) {
    printf("Acao: Enviar email de cobranca.\n\n");
  } else {
    printf("Acao: Enviar email de agradecimento.\n\n");
  }
}