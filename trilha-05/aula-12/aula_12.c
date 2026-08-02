#include <stdio.h>

void lerNotas(int notas[], int tamanho) {
  printf("Digite as 5 notas:\n");
  for(int i = 0; i < tamanho; i++) {
    scanf("%d", &notas[i]);
  }
}

float calcularMedia(int notas[], int tamanho) {
  int soma = 0;
  for (int j = 0; j < tamanho; j++) {
    soma = soma + notas[j];
  }
  return (float) soma / tamanho;
}

int contarAcima(int notas[], int tamanho, float media) {
  int contador = 0;
  for (int k = 0; k < tamanho; k++) {
    if (notas[k] >= media) {
      contador = contador + 1;
    }
  }
  return contador;
}

int main() {
  int notas[5];
  
  lerNotas(notas, 5);

  float media = calcularMedia(notas, 5);
  int aprovados = contarAcima(notas, 5, media);

  // exibir resultados
  printf("Média:%.2f\n", media);
  printf("Alunos aprovados (acima ou igual a média): %d\n", aprovados);

  return 0;
}