#include <stdio.h>

int main() {
  int opcao = 2; // vamos simular que o usuário escolheu a opção 2

  printf("Opcao selecionada: %d\n", opcao);
  printf("--------------------------------\n");

  switch(opcao) {
    case 1:
      printf("Acao: Executando a rotina de CADASTRO de funcionario.\n");
      break; // saí do switch
    case 2:
      printf("Acao: Executando a rotina de EDICAO de funcionario.\n");
      break; // saí do switch
    case 3:
      printf("Acao: Executando a rotina de EXCLUSÃO de funcionario.\n");
      break; // saí do switch
    case 4:
      printf("Acao: Executando a rotina de CONSULTA de funcionario.\n");
      break; // saí do switch
    default:
      printf("Acao: Opcao Invalida! Por favor, tente novamente.\n");
      // o último break é opcional, mas é uma boa prática
  }

  printf("--------------------------------------\n");
  printf("Operacao finalizada.\n");

  return 0;
}