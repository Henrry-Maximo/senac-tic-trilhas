#include <stdio.h>

#define TAM 3

int main() {
  printf("--- SISTEMA DE GESTÃO CORPORATIVA --- \n\n");

  // 1. O Padrão Acumulador e Exibição
  int vendas_diarias[TAM] = {1500, 3200, 2100};
  int soma_vendas = 0; // Nosso balde começa vazio

  printf(">>> Relatório de Vendas (Em Coluna): \n");
  for(int i = 0; i < TAM; i++) {
    printf("Venda do dia %d: R$ %d\n", i + 1, vendas_diarias[i]);
    soma_vendas = soma_vendas + vendas_diarias[i]; // Acumulando os valores
  }

  printf("Faturamento Total: R$ %d\n\n", soma_vendas);

  // Exibindo em linha
  printf(">>> Vendas Consolidadas (Em Linha): ");
  for(int i = 0; i < TAM; i++) {
    printf("[%d] ", vendas_diarias[i]);
  }

  printf("\n\n");

  // 2. Percorrendo vetores de caracteres (String Simples)
  char sigla_estado[] = "SP";
  printf(">>> Analisando a sigla letra por letra:\n");
  for(int i = 0; i < TAM; i++) {
    printf("Letra %d: %c \n", i + 1, sigla_estado[i]);
  }

  // 3. Exercício Guiado: Imprimir lista de nomes de bairros de SP
  // Em C, uma lista de palavras é uma matriz (vetor de vetores de letras)
  // O princípio de iteração com o laço 'for' é o mesmo!
  char bairros_sp[TAM][20] = {"Pinheiros", "Mooca", "Santana"};

  prinf(">>> Rotas de Entrega (Bairro de SP): \n");
  for(int i = 0; i < TAM; i++) {
    printf("- Rota %d: %s\n", i + 1, bairros_sp[i]);
  }

}