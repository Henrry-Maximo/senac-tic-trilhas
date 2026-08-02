#include <stdio.h>

float calcularMedia(int notas[], int tamanho) {
  int soma = 0;
  for (int i = 0; i < tamanho; i++) {
    soma = soma + notas[i];
  }

  return (float) soma / tamanho;
}

int classificarAluno(int notas[], int tamanho) {
  float media = calcularMedia(notas, tamanho);

  if (media >= 7) {
    return 1; // 1 significa que o aluno está aprovado
  } else {
    return 0; // 0 significa que o aluno está reprovado
  }
}

int encontraMaiorNota(int notas[], int tamanho) {
  int maior = notas[0];
  for(int i = 0; i < tamanho; i++) {
    if (notas[i] > maior) {
      maior = notas[i];
    }
  }

  return maior;
}

void exibirBoletim(int notas[], int tamanho) {
  float media = calcularMedia(notas, tamanho);
  int maior = encontraMaiorNota(notas, tamanho);

  int resultado = classificarAluno(notas, tamanho);
  printf("\n=== BOLETIM DO ALUNO ===\n");
  printf("Notas: ");
  for(int i = 0; i < tamanho; i++) {
    printf("%d ", notas[i]);
  }

  printf("\n");

  printf("Maior nota: %d\n", maior);
  printf("Média: %.2f\n", media);

  if (resultado == 1) {
    printf("Situação: APROVADO\n");
  } else {
    printf("Situação: REPROVADO\n");
  }

  printf("===========================");
}

void lerNotas(int notas[], int tamanho) {
  printf("\n==== DIGITE AS NOTAS DO ALUNO ===\n");
  for (int i = 0; i < tamanho; i++) {
    printf("Digite a %dª nota: ", i + 1);
    scanf("%d", &notas[i]);
    // validando se a nota está entre 0 e 10
    while(notas[i] < 0 || notas[i] > 10) {
      printf("Nota Inválida! Digite um valor entre 0 e 10");
      scanf("%d", notas[i]);
    }
  }

}

int main() {
  int tamanho;

  // perguntar quantas notas o aluno possuí
  printf("Quantas notas o aluno possui: ");
  scanf("%d", &tamanho);

  // criar um vetor com o tamanho informado
  int notas[tamanho];
  lerNotas(notas, tamanho);

  // int resultado = classificarAluno(notas, tamanho);
  exibirBoletim(notas, tamanho);

  return 0;
}