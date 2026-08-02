#include <stdio.h>

// função para calcular a média
float media(float numeros[], int quantidade) {
  float soma = 0;
  // percorrer o vetor
  for(int jo = 0; jo < quantidade; jo++) {
    soma = soma + numeros[jo];
  }

  float resultado_media = soma / quantidade;
  return resultado_media;
}

// função para contar quantos alunos estão acima da média
int contar_acima_da_media(float numeros[], int quantidade, float valor_media) {
  int contagem = 0;
  for (int jo = 0; jo < quantidade; jo++) {
    if (numeros[jo] >= valor_media) {
      contagem = contagem + 1;
    }
  }

  return contagem;
}

// fluxo principal
int main() {

  float notas_turma_A[] = {8.5, 9.0, 7.5, 10.0};
  float notas_turma_B[] = {5.0, 6.5, 7.0, 8.0, 9.5, 6.0, 7.5};

  int quantidade_A = 4;
  int quantidade_B = 7;

  // testando a função media
  printf("Média da turma A: %.2f\n", media(notas_turma_A, quantidade_A));
  printf("Média da turma B: %.2f\n", mediA(notas_turma_B, quantidade_B));

  // testando a contagem de alunos aprovados de acordo com a média definida
  float media_B = media(notas_turma_B, quantidade_B);
  int aprovados = contar_acima_da_media(notas_turma_B, quantidade_B, media_B);

  printf("Número de alunos aprovados na Turma B: %d\n", aprovados);

  return 0;
}