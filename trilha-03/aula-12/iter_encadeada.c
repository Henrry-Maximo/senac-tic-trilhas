#include <stdio.h>

int main() {
  // planejamento de projeto (repeticação encadeada)
  printf("--- Gerador de Calendário do Projeto --- \n\n");

  // LAÇO EXTERNO (as "fileiras" do nosso cinema)
  // Controla as Sprints (1 a 3)
  for (int sprint = 1; sprint <= 3; sprint++) {
    printf("\n>>> Iniciando a SPRINT %d\n", sprint);

    // LAÇO INTERNO (as "poltronas" de cada fileira)
    // Observe a identação: este 'for' está dentro do 'for' de cima!
    for (int dia = 1; dia <= 5; dia++) {
      // Este código roda 15 vezes no total (3 sprints * 5 dias)
      printf("   - Planejando as tarefas do Dia %d...\n", dia);
    }

    printf("<< Fechamento da SPRINT %d concluído.\n", sprint);
  } 

  return 0;
}