#include <stdio.h>

// BOA PRÁTICA: Definindo o tamanho do nosso vetor de forma global!
#define DIAS 7 

int main() {
  printf("--- SISTEMA DE TEMPERATURAS SEMANAIS ---\n\n");

  // 1. O perigo do lixo na memória (Declarado sem inicializar)
  float lixo[DIAS];
  printf("Exemplo do que fica armazenado na posição 0: %f\n\n", lixo[0]);

  // 2. Inicialização com Zeros (Limpando o terreno)
  float previsao[DIAS] = {0.0};
  printf("Previsão zerada (posição 0): %.1f\n\n", previsao[0]);

  // 3. Inicialização Literal (Homegeneidade: apenas floats)
  // Preenchendo as temperaturas reais da semana
  float temperaturas[DIAS] = {28.5, 30.0, 31.2, 29.8, 27.5, 25.0, 26.4};
  
  // 4. Inicialização de um vetor de caracteres (Dias da semana simplificados)
  char iniciais_dias[DIAS] = {'D', 'S', 'T', 'Q', 'Q', 'S', 'S'}; 

  // Exibindo os dados casados!
  printf("--- Relatório Meteorologico ---\n");
  printf("Dia %c: %.1f graus\n", iniciais_dias[0], temperaturas[0]); // Domingo
  printf("Dia %c: %.1f graus\n", iniciais_dias[2], temperaturas[2]); // Terça
  printf("Dia %c: %.1f graus\n", iniciais_dias[6], temperaturas[6]); // Sábado
  
  return 0;
}