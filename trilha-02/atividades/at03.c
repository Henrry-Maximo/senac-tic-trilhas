#include <stdio.h>
#include <string.h>

// At03: Dia por Extenso
int main() {
  // variaveis
  int dia;

  printf("\n=== PROGRAMA PARA ESCREVER O DIA DA SEMANA POR EXTENSO ===\n");

  printf("\nInforme o numero do dia da semana: ");
  scanf("%d", &dia);

  printf("\n>>> RESULTADO <<<\n");

  if (dia == 0) {
    printf("\nDomingo\n");
  } else if (dia == 1) {
    printf("\nSegunda-feira\n");
  } else if (dia == 2) {
    printf("\nTerca-feira\n");
  } else if (dia == 3) {
    printf("\nQuarta-feira\n");
  } else if (dia == 4) {
    printf("\nQuinta-feira\n");
  } else if (dia == 5) {
    printf("\nSexta-feira\n");
  } else if (dia == 6) {
    printf("\nSabado\n");
  } else {
    printf("\nDia da Semana Invalido\n");
  }

  printf("\n=== PROGRAMA ENCERRADO ===\n");

  return 0;
}