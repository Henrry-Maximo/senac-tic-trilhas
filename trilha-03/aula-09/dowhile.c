#include <stdio.h>

int main() {
  int quantidade_caixas;

  printf("--- Sistema de Controle de Estoque --- \n\n");

  // Preciso pedir a quantidade FORA do laço while para poder testar
  // printf("Digite a quantidade de caixas recebidas: ");
  // scanf("%d", &quantidade_caixas);

  // while (quantidade_caixas <= 0)
  // o 'do' garante que o bloco será executado pelo menos uma vez
  do {
    // 1. Executamos a ação sem precisar repetir código
    printf("Digite a quantidade de caixas recebidas: ");
    scanf("%d", &quantidade_caixas);

    if (quantidade_caixas <= 0) {
      printf("Erro: A quantidade deve ser maior que zero. Tente novamente.\n\n");  
    }

    // printf("Erro: A quantidade deve ser maior que zero. Tente novamente.\n\n");

    // printf("Digite a quantidade de caixas recebidas: ");
    // scanf("%d", &quantidade_caixas);

    // 2. Avaliamos a condição final
    // ATENÇÃO: No C, o do-while OBRIGATORIAMENTE termina com ponto e vírgula!
  } while (quantidade_caixas <= 0);

  printf("\nSucesso! %d caixas registradas no estoque.\n", quantidade_caixas);
  return 0;
}