#include <stdio.h>
#include <string.h>

// At7: Nota de Corte
int main() {
  // variaveis
  float nota_candidato, nota_corte, nota_min_aprovacao;
  char aviso[30];

  printf("\n=== PROGRAMA PARA INFORMAR A SITUACAO DE UM CANDIDATO DE VESTIBULAR ===\n");

  printf("\nInforme a nota do candidato: ");
  scanf("%f", &nota_candidato);

  printf("Informe a nota de corte: ");
  scanf("%f", &nota_corte);

  printf("Informe a nota minima para aprovacao: ");
  scanf("%f", &nota_min_aprovacao);

  if (nota_candidato < nota_corte) {
    strcpy(aviso, "Reprovado");
  } else if (nota_candidato >= nota_min_aprovacao) {
    strcpy(aviso, "Aprovado");
  } else if (nota_candidato > nota_corte && nota_candidato < nota_min_aprovacao) {
    strcpy(aviso, "Lista de espera");
  }

  printf("\n>>> RESULTADO <<<\n");

  printf("\nSituacao candidato: ");
  printf("\n%s", aviso);

  printf("\n\n=== PROGRAMA ENCERRADO ===\n");

  return 0;
}