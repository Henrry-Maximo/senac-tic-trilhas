#include <stdio.h>
#include <unistd.h> // Biblioteca util para usar a funcao sleep()

int main() {
  // EXEMPLO 2: Comando WHILE com Decremento (Contagem Regressiva)
  int tempo_restante = 5; // Nosso ponto de partida agora eh o topo
  printf("--- Alerta Critico de Sistema ---\n\n");

  // O laço continua rodando enquanto o tempo for MAIOR que zero
  while (tempo_restante > 0) {
    printf("O sistema será desligado em %d segundos...\n", tempo_restante);

    // Simula a espera de 1 segundo do relógio
    sleep(1);
    // sleep(0.5);
    
    // A peça chave: O Decremento!
    tempo_restante--;
  }

  printf("\nSISTEMA DESLIGADO PARA MANUTENCAO!.\n");

  return 0;
}