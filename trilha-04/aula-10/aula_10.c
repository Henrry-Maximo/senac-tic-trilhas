#include <stdio.h>

#define TAM 5 // Tamanho da nossa equipe por exemplo

int main() {
  float notas[TAM];
  float soma = 0.0;
  float media;

  for(int i = 0; i < TAM; i++) {
    printf("Digite a nota do funcionário %d:", i + 1);
    scanf("%f", &notas[i]);
  }

  float maior_nota = notas[0];
  float menor_nota = notas[0];

  int indice_maior = 0;
  int indice_menor = 0;

  for(int i = 0; i < TAM; i++) {
    soma = soma + notas[i];

    if (notas[i] > maior_nota) {
      maior_nota = notas[i];
      indice_maior = i;
    }

    if (notas[i] < menor_nota) {
      menor_nota = notas[i];
      indice_menor = i;
    }
  }

  media = soma / TAM;

  // 3. RELATÓRIO FINAL (Saída)
  printf("\n--- RELATÓRIO EXECUTIVO ---\n");
  printf("A media geral da equipe foi: %.2f\n", media);
  printf("A MAIOR nota foi %.2f, alcançada pelo funcionário %d (indice %d).\n", maior_nota, indice_maior);
  printf("A MENOR nota foi %.2f, pertencente ao funcionário %d (indice %d).\n", menor_nota, indice_menor);

  return 0;
}