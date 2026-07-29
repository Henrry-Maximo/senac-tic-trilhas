#include <stdio.h>

int main() {
  // Vamos testar com o salário
  float salario_mensal = 3500.0;

  // Faixas de IR (valores simplificados baseado em 2025)
  printf("Analisando o salario de: %.2f\n", salario_mensal);

  // Faixas de IR (valores simplificados baseados 2026)
  if (salario_mensal <= 2112.00 ) {
    // primeira verificação
    printf("Faixa 1: Isento de Imposto de Renda");
  } else if (salario_mensal <= 2826.65) {
    // só entra aqui se a primeira verificação for falsa
    printf("Faixa 2: Aliquota de IR = 7.5%%. \n");
  } else if (salario_mensal <= 3751.05) {
    // só entra aqui se as duas primeiras forem falsa
    printf("Faixa 3: Aliquota de IR = 15%%. \n");
  } else if (salario_mensal <= 4664.68) {
    // só entra aqui se as três primeiras forem falsas
    printf("Faixa 4: Aliquota de IR = 22.5%%. \n");
  } else {
    // se NENHUMA das anteriores forem VERDADEIRAS, cai nessa
    printf("Faixa  5: Aliquota de 27.5%%. \n");
  }

  printf("Fim da analise.\n");

  return 0;
}