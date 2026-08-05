#include <stdio.h>
#include <locale.h>

// Atividade 08: Piloto Kart
int main() {
  // setlocale(LC_ALL, "Portuguese_Brazil.1252");

  int metros, voltas, tempo_segundos_primeira_volta;
  float total_distancia_quilometros, previsao_tempo_minutos_corrida;

  printf("\n=== PROGRAMA PARA AVALIAR PERFORMANCE DO PILOTO ===\n");

  printf("\nInforme o tamanho da pista em metros: ");
  scanf("%d", &metros);

  printf("Informe a quntidade de voltas: ");
  scanf("%d", &voltas);

  printf("Informa o tempo (em segundos) que levou para fazer a primeira volta: ");
  scanf("%d", &tempo_segundos_primeira_volta);

  total_distancia_quilometros = (float) voltas * metros;
  previsao_tempo_minutos_corrida = (float) (tempo_segundos_primeira_volta * voltas) / 60;

  printf("\n>>> RESULTADOS <<<\n");

  printf("\nAnalise Preditiva Concluida\n");
  printf("--");
  printf("\nDistancia total a ser percorrida: %.2f km.\n", total_distancia_quilometros);
  printf("Previsao de conclusao: %.1f minutos.", previsao_tempo_minutos_corrida);

  printf("\n>>> FIM DO PROGRAMA <<<\n");

  return 0;
}