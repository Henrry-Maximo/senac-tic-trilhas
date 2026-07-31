#include <stdio.h>

#define TAM 3

int main() {
  int matriculas[TAM];
  float notas[TAM];
  float soma = 0.0;
  
  printf("--- SISTEMA DE RANKING ACEMICO ---\n\n");

  // 1. ENTRADA DE DADOS
  for(int i = 0; i < TAM; i++) {
    printf("Digite a matricula do aluno %d: ", i + 1);
    scanf("%d", &matriculas[i]);

    printf("Digite a nota do aluno %d: ", i + 1);
    scanf("%f", &notas[i]);

    // Padrão Acumulador
    soma = soma + notas[i];
  }

  // 2. CÁLCULO DE MÉDIA
  float media = soma / TAM;
  printf("\n>>> A média geral da turma foi: %.2f\n", media);

  // 3. BUSCA LINEAR (Detetive)
  int busca_mat;
  int indice_encontrado = -1;

  printf("\nDigite uma matricula para buscar a nota: ");
  scanf("%d", &busca_mat);

  for(int i = 0; i < TAM; i++) {
    if(matriculas[i] == busca_mat) {
      indice_encontrado = i;
      break;
    }
  }

  // 4. EXIBIÇÃO DO RESULTADO DA BUSCA
  if(indice_encontrado != -1) {
    printf("Aluno Encontrado! A nota da matricula %d e: %.2f\n", busca_mat, notas[indice_encontrado]);
  } else {
    printf("Aviso: A matricula %d não consta no sistema.\n", busca_mat);
  }

  return 0;
}