#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
  setlocale(LC_ALL, "");

  char nomePersonagem[50];
  int idadePersonagem;
  float alturaPersonagem;

  printf("Por favor, digite o seu nome: ");
  scanf("%s", nomePersonagem);

  printf("Agora, digite a sua idade: ");
  scanf(" %d", &idadePersonagem);

  printf("Por fim, preciso da sua altura: ");
  scanf(" %f", &alturaPersonagem);

  printf("Nosso personagem se chama %s, e tem %d anos de idade!\n Ele tem %.2f metros de altura", nomePersonagem, idadePersonagem, alturaPersonagem);

  return 0;
}