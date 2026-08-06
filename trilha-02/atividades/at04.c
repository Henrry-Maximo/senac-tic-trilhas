#include <stdio.h>

// At4: Sorveteria em Promoção
int main() {
  // variaveis
  float gramas, total;

  printf("\n=== PROGRAMA PARA CALCULAR TOTAL DE COMPRA EM SORVETERIA ===\n");

  printf("\nInforme a quantidade (em gramas): ");
  scanf("%f", &gramas);

  printf("\n>>> RESULTADO <<<\n");

  if (gramas <= 0) {
    printf("\nPeso Invalido!\n");
  } else if (gramas < 1000) {
    total = (gramas / 100) * 3.50;
  } else {
    total = (gramas / 100) * 3.00;
  }
  
  printf("\nO total eh R$ %.2f\n", total);
  
  printf("\n=== PROGRAMA ENCERRADO ===\n");

  return 0;
}