#include <stdio.h>

int main() {
  float media_aluno = 8.5; // Vamos começar com uma nota para aprovação
  // Colocar nota baixa para testar o ELSE

  printf("A media do aluno eh: %.1f\n", media_aluno);

  // Aqui está nossa bifurcação, onde o programa toma a decisão

  if(media_aluno >= 7.0) {
    // Caminho do VERDADEIRO
    // Este bloco só executa se a condição em cima for verdadeira
    printf("Status: Aluno Aprovado!\n");
  } else {
    // Caminho do FALSO
    printf("Status: Aluno Reprovado!\n");
  }

  printf("Fim da analise de hoje.\n");

  return 0;
}