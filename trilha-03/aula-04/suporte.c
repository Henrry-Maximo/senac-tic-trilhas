#include <stdio.h>

int main() {
  // SISTEMA DE PROCESSAMENTO DE CHAMADOS (tickets)
  int chamados_pendentes;

  // 1. Nossa VARIÁVEL DE CONTROLE (O "clicker")
  // Inicializamos com 1, pois vamos processar o 1º chamado
  int chamados_concluidos = 1;

  printf("--- Iniciando o sistema de suporte ---");
  printf("Quantos chamdos estão pendentes hoje? ");
  scanf("%d", &chamados_pendentes);

  printf("\nProcessando fila...\n");

  // 2. Nossa CONDIÇÃO DE PARADA
  // Continua enquanto o número de concluídos for menor ou igual ao de pendentes

  while (chamados_concluidos <= chamados_pendentes) {
    // Execução da Tarefa
    printf("Conectando ao banco de dados...\n");
    printf("Sucesso: Chamado %d movido para 'Finalizado'.\n\n", chamados_concluidos);
    
    // 3. Atualizando a variável de controle (o momento do "click")
    // Se esquecermos essa linha , o sistema trava!
    chamados_concluidos = chamados_concluidos + 1;
  }

  printf("--- Todos os %d chamados foram atualizados. Fila zerada! --- \n", chamados_pendentes);

  return 0;
}