#include <stdio.h>

int main() {
  // EXEMPLO 1: Comando WHILE com Incremento (Contador Crescente)
  int total_servidores = 5;
  int contador = 1; // Nosso ponto de partida

  printf("--- Iniciando Inicialização dos Servidores ---\n\n");

  // A instrução WHILE (Enquanto)
  while (contador <= total_servidores) {
    
    // O bloco de codigo que sera repetido
    printf("Iniciando o servidor numero %d...\n", contador);
    // A peça mais importante: O Incremento! 
    contador++;
    // contador = contador + 1;
  }

  printf("\nTodos os servidores estao online e operacionais!\n");

  return 0;
}