#include <stdio.h>

int main() {
  // LEITURA DE SENSORES (contador CRESCENTE)
  printf("--- Sistema de Monitoramento IoT ---\n\n");

  // A estrutura OR empacota: Inicialização; Condição; Atualização
  for(int sensor = 1; sensor <= 5; sensor++) {
    // Tudo o que está aqui dentro repetirá exatamente 5 vezes
    printf("Realizando leitura de temperatura do Sensor %d...\n", sensor);
  }

  printf("\n--- Leitura dos 5 sensores concluída com sucesso! ---\n");

  return 0;
}