#include <stdio.h>

int main() {
  // SISTEMA DE CAIXA - PROJETO FINAL

  // 1. MODELO SEQUENCIAL (preparando terreno)
  float total_compra = 0.0;
  float valor_produto = 0.0;

  printf("--- SISTEMA DE CAIXA ABERTO ---\n");
  printf("Digite '0' no valor do produto para finalizar a compra.\n\n");

  // 2. MODELO ITERATIVO (repetição indeterminada com DO-WHILE)
  do {
    // Sequencial dentro da repetição
    printf("Digite o valor do produto: R$ ");
    scanf("%f", &valor_produto);

    // 3. MODELO CONDICIONAL (analisando os dados e controlando o fluxo)
    if (valor_produto == 0) {
      printf(">> Fechando o carrinho...\n");
      break; // Interrompe o iterativo (aula 10)
    } else if (valor_produto < 0) {
      printf(">> ERRO: O valor não pode ser negativo. Tente novamente.\n\n");
      continue; // Pula a etapa, ignora a soma e volta para o topo (aula 10)
    }

    // acumulador (sequencial) - só chega aqui se for um valor válido e positivo
    total_compra = total_compra + valor_produto;
  } while (1); // '1' em C significa Verdadeiro. O loop é mantido até o 'break' ser acionado

  // --- FIM DO LAÇO ITERATIVO ---
  
  // Retorno ao MODELO SEQUENCIAL e CONDICIONAL FINAL
  printf("\nSubtotal da compra: R$ %.2f\n", total_compra);
  if (total_compra >= 200.0) {
    float desconto = total_compra * 0.10; // 10% de desconto
    float total_pagar = total_compra - desconto;

    printf("Parabéns! Cliente ganhou R$ %.2f de desconto (10%%).\n", desconto);
    printf("Total a pagar: R$ %.2f\n", total_pagar);
  } else {
    printf("Total a pagar: R$ %.2f\n", total_compra);
  }

  return 0;
}