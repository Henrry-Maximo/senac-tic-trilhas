#include <stdio.h>

// função sem paramêtros
void mostrarMenu() {
  printf("1 - Iniciar\n");
  printf("2 - Configurações\n");
  printf("3 - Sair\n");
  printf("\n");
}

int main() {
  
  mostrarMenu();
  printf("O usuário já escolheu uma opção pela primeira vez...\n");
  mostrarMenu();
  printf("O usuário já escolheu uma opção pela segunda vez...\n");
  mostrarMenu();
  printf("O usuário já escolheu uma opção pela terceira vez...\n");

  return 0;
}