#include <stdio.h>
// Incluindo stdbool.h para usar bool, true e false de forma mais legível
#include <stdbool.h>

// cliente_ativo = 0;
// valor_carrinho = 500.0;
// if (!cliente_ativo && valor_carrinho >= 600)
// if !(cliente_ativo && valor_carrinho >= 600)
// if (cliente_ativo && valor_carrinho >= 600)

int main() {

  // --- Cliente 1: Maria ---
  // Maria está com o cadastro em dia.
  bool cadastro_maria_ativo = true; // em C, "true" é igual a 1
  
  // --- Cliente 1: João ---
  // João não completa seu cadastro há muito tempo.
  bool cadastro_joao_ativo = false; // em C, "false" é igual a 0

  // Nossa variavel de decisão
  bool precisa_de_contato;

  printf("--- Verificação de clientes inativos ---\n\n");

  // Analisando Maria:
  // A regra é: precisa de contato se o cadastro NÃO (!) estiver aberto.
  // !cadastro_maria_ativo -> !(1) -> resulta em 0 (Falso)
  precisa_de_contato = !cadastro_maria_ativo;
  printf("Cliente Maria precisa de contato? (0=Nao, 1=Sim): %d\n", precisa_de_contato);

  // Analisando João:
  // !cadastro_joao_ativo -> !(0) -> resulta em 1 (Verdadeiro)
  precisa_de_contato = !cadastro_joao_ativo;
  printf("Cliente Joao precisa de contato? (0=Nao, 1=Sim): %d\n", precisa_de_contato);

  return 0;
}