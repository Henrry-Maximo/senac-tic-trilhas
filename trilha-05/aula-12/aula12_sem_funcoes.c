#include <stdio.h>

int main() {
  int notas[5];

  // PROBLEMA 1: código repetitivo
  printf("Digite as 5 notas:\n");
  scanf("%d", &notas[0]);
  scanf("%d", &notas[1]);
  scanf("%d", &notas[2]);
  scanf("%d", &notas[3]);
  scanf("%d", &notas[4]);

  // PROBLEMA 2: dificuldade para mudar o tamanho
  int soma = 0;
  soma = soma + notas[0];
  soma = soma + notas[1];
  soma = soma + notas[2];
  soma = soma + notas[3];
  soma = soma + notas[4];

  float media = (float)soma / 5;

  // PROBLEMA 3: código confuso e difícil de ler
  int cont = 0;
  if (notas[0] > media) {
    cont++;
  }
  if (notas[1] > media) {
    cont++;
  }
  if (notas[2] > media) {
    cont++;
  }
  if (notas[3] > media) {
    cont++;
  }
  if (notas[4] > media) {
    cont++;
  }

  // exibir resultados
  printf("Média:%.2f\n", media);
  printf("Acima da média: %d\n", cont);

  return 0;
}