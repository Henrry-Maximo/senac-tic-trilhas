#include <stdio.h>
#include <string.h>

// At04: Caixa Mercado
int main() {
  // variaveis
  int values[60], value_invalited, i = 0, total = 0, parcelas;
  char aviso[30];

  printf("\n\n-------- PROGRAMA PARA SIMULAR UM CAIXA DE MERCADO --------\n\n");

  do {
    printf("Informe o preco do produto (%d): ", i + 1);
    scanf("%d", &values[i]);
    
    if (values[i] == 0) break;

    if (values[i] < 0) {
      value_invalited = values[i];
      printf("\nValor invalido.\n\n");
    } else {
      total += values[i];
    }

    i = i + 1;
  } while (&values[i] != 0);

  printf("\nInforme a quantidade de parcelar: ");
  scanf("%d", &parcelas);

  printf("\n>>>>>>> RESULTADOS <<<<<<<\n");
  
  if (parcelas == 0 || parcelas == 1) {
    printf("\nPagamento a vista: R$ %d\n", total);
  } else if (parcelas > 1) {
    if (value_invalited) {
      printf("\nValor invalido: %d", value_invalited);
    }
    printf("\nTotal da compra: %d", total);
    printf("\nParcelado em %dx de R$ %d", parcelas, total / parcelas);
  }

  printf("\n\n-------- PROGRAMA ENCERRADO --------\n");

  return 0;
}