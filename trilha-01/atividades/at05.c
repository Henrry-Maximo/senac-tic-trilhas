#include <stdio.h>
#include <locale.h>

// Atividade 05: Compra Online
int main() {
  // setlocale(LC_ALL, "Portuguese_Brazil.1252");

  char name[30];
  float price_product, discount_product, total_price_product;

  printf("\n=== PROGRAMA DE COMPRA ONLINE COM DESCONTO ===\n");

  printf("\nInforme seu nome: ");
  scanf("%s", &name);

  printf("Informe o preço do produto: ");
  scanf("%f", &price_product);

  printf("Informe o desconto a ser aplicado: ");
  scanf("%f", &discount_product);

  total_price_product = price_product - ((price_product * discount_product) / 100);

  printf("\n>>> RESULTADOS <<<\n");
  printf("\nOlá %s, sua compra de R$ %.2f foi confirmada!\n", name, price_product);
  printf("Foi aplicado um desconto de %.1f%%.\n", discount_product);
  printf("O total final ficou em R$ %.2f.\n", total_price_product);

  printf("\n>>> FIM DO PROGRAMA <<<\n");

  return 0;
}