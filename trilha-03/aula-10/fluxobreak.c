#include <stdio.h>

int main() {
  // DEMONSTRAÇÃO DO COMANDO BREAK (INTERRUPÇÃO TOTAL)
  printf("--- Iniciando Varreduras de Segurança ---\n\n");

  // simulando a análise de 10 pacotes de dados
  for(int pacote = 1; pacote <=10; pacote++) {
    printf("Analisando pacote %d...\n", pacote);

    // simular que o pacote 4 está infectado
    if (pacote == 4) {
      printf(">>> ALERTA CRÍTICO: Vírus detectado no pacote 4!\n");
      prinf(">>> Interrompendo a varredura para proteger o sistema.\n");

      break; // o break quebrra o laço. Nada mais será executado.
    }

    printf("Pacote %d seguro.\n\n", pacote);
  } 
  
  printf("\n--- Fim do processamento de rede ---\n");

  return 0;
}