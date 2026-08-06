#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// At9: Mensalidade Universidade
int main() {
  // variaveis
  char curso[60], isencao[6];
  int porcentagem;
  float total, mensalidade;
  bool mensagem = false;

  printf("\n=== PROGRAMA PARA CALCULAR MENSALIDADE DE ACORDO COM O CURSO ===\n");

  printf("\nInforme a sigla do curso: ");
  scanf("%s", curso);

  printf("Informe se eh isento (sim/nao): ");
  scanf("%s", isencao);

  printf("Informe o desconto (em porcentagem): ");
  scanf("%d", &porcentagem);

  printf("\n>>> RESULTADO <<<\n\n");

  if (strcmp(curso, "SI") == 0) {
    mensalidade = 900.00;
    mensagem = true;

    if (strcmp(isencao, "nao") == 0) {
      total = mensalidade - ((mensalidade * porcentagem) / 100);
    } else {
      total = 0.00;
    }

  } else if (strcmp(curso, "ADS") == 0) {
    mensalidade = 750.00;
    mensagem = true;

    if (strcmp(isencao, "nao") == 0) {
      total = mensalidade - ((mensalidade * porcentagem) / 100);
    } else {
      total = 0.00;
    }

  } else if (strcmp(curso, "CS") == 0) {
    mensalidade = 1.150;
    mensagem = true;

    if (strcmp(isencao, "nao") == 0) {
      total = mensalidade - ((mensalidade * porcentagem) / 100);
    } else {
      total = 0.00;
    }

  } else if (strcmp(curso, "EC") == 0) {
    mensalidade = 1.300;
    mensagem = true;

    if (strcmp(isencao, "nao") == 0) {
      total = mensalidade - ((mensalidade * porcentagem) / 100);
    } else {
      total = 0.00;
    }

  } else if (strcmp(curso, "ES") == 0) {
    mensalidade = 950.00;
    mensagem = true;

    if (strcmp(isencao, "nao") == 0) {
      total = mensalidade - ((mensalidade * porcentagem) / 100);
    } else {
      total = 0.00;
    }

  } else  {
    printf("Curso nao encontrado");
  }

  if (mensagem == true) {
    printf("Valor da mensalidade: \n");
    printf("R$ %.2f", total);
  }

  printf("\n\n=== PROGRAMA ENCERRADO ===\n");

  return 0;
}