#include <stdio.h>

int main() {
  // CALCULO E CADASTRO SEM REPETIÇÃO (Abordagem Limitada)
  int id1, id2, id3;

  printf("--- Sistema de Cadastro de Equipamentos ---\n\n");

  // Cadastro do Equipamento 1
  printf("Digite o ID do 1o equipamento: ");
  scanf("%d", &id1);
  printf("Sucesso: Equipamento %d registrado. \n\n", id1);

  // Cadastro do Equipamento 2
  printf("Digite o ID do 2o equipamento: ");
  scanf("%d", &id2);
  printf("Sucesso: Equipamento %d registrado. \n\n", id2);

  // Cadastro do Equipamento 3
  printf("Digite o ID do 3o equipamento: ");
  scanf("%d", &id3);
  printf("Sucesso: Equipamento %d registrado. \n\n", id3);

  return 0;
}