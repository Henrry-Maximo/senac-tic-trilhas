#include <stdio.h>

int main() {
  // CONTAGEM REGRESSIVA PARA REINICIALIZACAO (Contador Decrescente)
  printf("--- ATENCAO: Reiniciando o Servidor ---\n\n");

  // Inicio alto (inicialização); Limite baixo (condição); Passo negativo (decremento)
  for (int segundo = 5; segundo > 0; segundo--) {
    printf("O servidor será reiniciado em %d...\n", segundo);
    sleep(1); // Pausa o programa por 1 segundo
  }

  printf("\nSISTEMA REINICIADO.\n");
  return 0;
}