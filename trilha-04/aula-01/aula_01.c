#include <stdio.h>

int main() {
  // O jeito ANTIGO (Inviável para grandes quantidades)
  // float nota1, nota2, nota3, nota4, nota5;

  // O jeito NOVO (Declarando uma colenção - Vetor - para 5 alunos)
  float notas[5];
  float soma = 0.0;

  printf("--- Sistema de Notas (Com Vetor e For) ---\n");

  // O laço 'for' atua como nosso assistente, passando de gaveta em gaveta
  for (int i = 0; i < 5; i++) {
    printf("Digite a nota do aluno %d: ", i + 1);

    // Lemos o dado e guardamos diretamente na gaveta 'i' do vetor
    scanf("%f", &notas[i]);

    // Aproveitamos para somar as notas
    soma = soma + notas[i];
  }

  // Calculando a média
  float media = soma / 5;
  printf("\nA média da turma foi: %.2f\n", media);

  return 0;
}