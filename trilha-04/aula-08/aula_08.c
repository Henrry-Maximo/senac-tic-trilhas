#include <stdio.h>

#define TAM 5

int main () {
  
  // 
  float notas_treinamento[TAM];
  float soma = 0.0;

  printf("Por favor, digite as notas dos %d novos funcionários.\n\n", TAM);
  for(int i = 0; i < TAM; i++) {
    printf("Digite a nota do funcionário %d: ", i + 1);
    scanf("%f", &notas_treinamento[i]);
  }

  printf("\n --- RELATÓRIO DE NOTAS --- \n");
  printf("Notas registradas no sistema: ");
  for(int i = 0; i < TAM; i++) {
    printf("[%.1f] ", notas_treinamento[i]);
    soma = soma + notas_treinamento[i];
  }

  float media = soma / TAM;

  printf("\n\nA média geral da turma foi: %.2f\n", media);

  return 0;
}