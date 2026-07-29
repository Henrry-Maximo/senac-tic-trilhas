#include <stdio.h>

int main() {
  // Definindo as regras de negócio
  float RENDA_MINIMA = 4000.0;
  int SCORE_MINIMO = 600;

  // --- Cliente 1: Carlos ---
  float renda_carlos = 5000.0;
  int score_carlos = 750;
  int credito_aprovado_carlos;

  // --- Cliente 2: Juliana ---
  float renda_juliana = 6000.0;
  int score_juliana = 550;
  int credito_aprovado_juliana;
  
  printf("--- Analise de Credito ---\n");
  printf("Regra: Renda > %.2f E Score > %d\n\n", RENDA_MINIMA, SCORE_MINIMO);

  // Analise do Carlos: as duas condições são verdadeiras?
  credito_aprovado_carlos = (renda_carlos > RENDA_MINIMA) && (score_carlos > SCORE_MINIMO);
  printf("Cliente Carlos: Credito Aprovado? (0=Nao, 1=Sim): %d\n", credito_aprovado_carlos);

  // Analise da Juliana: as duas condições são verdadeiras?
  credito_aprovado_juliana = (renda_juliana > RENDA_MINIMA) && (score_juliana > SCORE_MINIMO);
  printf("Cliente juliana: Credito Aprovado? (0=Nao, 1=Sim): %d\n", credito_aprovado_juliana);

  // A = 5;
  // B = 3;
  // (A > B) && (B == 10);
  // (A > B) || (B == 10);

  return 0;
}