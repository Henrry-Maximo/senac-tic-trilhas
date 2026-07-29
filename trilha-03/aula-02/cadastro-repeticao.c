#include <stdio.h>

int main() {
  // CADASTRO COM ESTRUTURA DE REPETIÇÃO (Abordagem Escalável)
  int qtde_equip = 5;
  int contador = 1;
  int id_equip;

  printf("--- Sistema de Cadastro Automático de Equipamentos ---\n\n");

  // o bloco abaixo será reutilizado várias vezes
  while (contador <= qtde_equip) {
    printf("Digite o ID do %do equipamento", contador);
    scanf("%d", &id_equip);

    printf("Sucesso: Equipamento %d registrado no sistema.\n\n", id_equip);

    contador++; // Prepara a variável para a próxima rodada
  }

  return 0;
}