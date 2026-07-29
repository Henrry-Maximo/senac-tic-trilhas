#include <stdio.h>

int main() {
  // SISTEMA DE GESTÃO DE PROJETOS - Menu Interativo
  // 1. Variável de controle inicializada com um valor que garanta a entrada no loop
  // Incializamos com o valor -1 para garantir que seja diferente de 0 (a opção de sair)
  int opcao_escolhida = -1;

  printf("--- Bem-vindo ao Sistema de Gestão ---\n");

  // 2. A Codição de Parada (Repetição Indeterminada)
  // Lê-se: Enquanto a opção for diferente de 0, continue rodando indeterminadamente
  while (opcao_escolhida != 0) {
    // Exibir o menu
    printf("\nO que você deseja fazer?\n");
    printf("1 - Cadastrar nova tarefa\n");
    printf("2 - Listar tarefas da equipe\n");
    printf("3 - Alterar tarefas da equipe\n");
    printf("0 - Sair do sistema\n");
    printf("Digite o número da opção desejada: ");

    // 3. Interação com o usuário (O evento externo que dita as regras)
    scanf("%d", &opcao_escolhida);

    // 4. Processamento da escolha usando a lógica condicional
    if (opcao_escolhida == 1) {
      printf("\n>>> Abrindo painel de cadastro de tarefas...\n");
    } else if (opcao_escolhida == 2) {
      printf("\n>>> Buscando tarefas pendentes do banco de dados...\n");
    } else if (opcao_escolhida == 3) {
      printf("\n>>> Alterando informações da terefa pendente...\n");
    } else if (opcao_escolhida == 0) {
      printf("\n>>> Salvando os dados e encerrando o sistema. Até logo!\n");
    } else {
      printf("\n>>> Opção Inválida! Por favor, digite [1, 2, 3 ou 0].\n");
    }
  }

  printf("\n --- Sistema Encerrado com Sucesso! ---- \n");

  return 0;
}