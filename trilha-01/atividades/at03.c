#include <stdio.h>

int main() {
  float media, nota1, nota2, nota3;
  char nome[20];

  printf("\n=== PROGRAMA PARA CALCULAR MÉDIA DE ALUNO ===\n");

  printf("\nInforme o nome do aluno: ");
  scanf("%s", &nome);

  printf("\nInforme a primeira nota: ");
  scanf("%f", &nota1);

  printf("Informe a segunda nota: ");
  scanf("%f", &nota2);

  printf("Informe a terceira nota: ");
  scanf("%f", &nota3);

  media = (nota1 + nota2 + nota3) / 5;

  printf("\n=== RESULTADO ===\n" );
  printf("O(A) estudante %s ficou com média %.2f\n", nome, media);

  return 0;
}