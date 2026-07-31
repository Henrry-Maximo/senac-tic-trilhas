#include <stdio.h>

void imprimirCabecalho(void) {
  printf("===============================================\n");
  printf("      >>>> SISTEMA DE NOTAS <<<<\n");
  printf("===============================================\n");
}

void verificarAvanco() {
  char opcao;

  printf("Avançar para próxima tela? (S/N): ");
  scanf(" %c", &opcao);
  if (opcao == 'S' || opcao == 's') {
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
  }
}

int main()
{

  printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

  imprimirCabecalho();
  printf("TELA DE CADASTRO DE ALUNOS\n\n");
  verificarAvanco();

  imprimirCabecalho();
  printf("TELA DE CONSULTA DE ALUNOS\n\n");
  verificarAvanco();

  imprimirCabecalho();
  printf("TELA DE ALTERAÇÃO DE ALUNOS\n\n");
  verificarAvanco();

  return 0;
}