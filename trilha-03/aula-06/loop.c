#include <stdio.h>

int main() {
  // CÓDIGO COM ERRO: O Pesadelo do Looping Infinito
  int alertas_necessarios = 3;
  int contador = 1;

  printf("--- Iniciando o disparo de alertas do projeto ---\n\n");

  // A Codição parece correta...
  while (contador <= alertas_necessarios) {
    
    // o bloco de execução...
    printf("ALERTA %d: O prazo do projeto encerra amanhã!\n", contador);
    
    // ERRO FATAL: Esquecemos de atualizar o contador (contador++)!
    // O código acaba aqui e volta para testar o while
    contador++;
  }

  printf("Disparos concluídos.\n");

  return 0;
}