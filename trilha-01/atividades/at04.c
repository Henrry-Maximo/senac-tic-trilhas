#include <stdio.h>
#include <locale.h>

// Atividade 04: Compra no Exterior
int main() {
  // setlocale(LC_ALL, "Portuguese_Brazil.1252");
  float real, dolar, cotacao = 5.42;

  printf("\n=== PROGRAMA DE CONVERSÃO DE REAL PARA DOLAR ===\n");
  
  printf("\nEntre com o valor em R$: \n");
  scanf("%f", &real);

  dolar = real / cotacao;

  printf("\nValor em real R$ %.2f.\n", real);
  printf("Valor em dólar $ %.2f.\n", dolar);

  printf("\n>>> Conversão realizada com sucesso! <<<\n");

  return 0;
}