#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
  // configurar caracteres especiais (�, �, etc)
  setlocale(LC_ALL, "");

  char nomePersonagem[50];

  printf("Por favor, digite o seu nome: ");
  // usar o scanf para ouvir o teclado e guardar na variavel
  // scanf("%s", nomePersonagem);

  fgets(nomePersonagem, sizeof(nomePersonagem), stdin);

  printf("Nosso personagem se chama %s !", nomePersonagem);

  return 0;
}