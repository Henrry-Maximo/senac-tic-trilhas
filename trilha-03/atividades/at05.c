#include <stdio.h>
#include <string.h>

// At04: Desafio da Soletração
int main() {
  // variaveis
  char palavra[50], caracteres[50], nova_palavra[50];
  int i = 0;

  printf("\n\n-------- PROGRAMA DE DESAFIO DA SOLETRACAO --------\n\n");

  printf("\nInforme a palavra: ");
  scanf(" %s", palavra);

  do {
    printf("Informe cada letra da palavra digitada (%d): ", i + 1);
    scanf(" %c", &caracteres[i]);
    
    if (caracteres[i] == '0') break;

    // for ()
    
    i = i + 1;
  } while (i < sizeof(palavra));

  printf("\n>>>>>>> RESULTADOS <<<<<<<\n");

  // for (int j = 0; j <= i; j++) {
  //   if (j > 0) printf(" ");
  //   palavra[j] = caracteres[j];
  // }
  // palavra[i + 1] = '\0';

  printf("\n\n-------- PROGRAMA ENCERRADO --------\n");

  return 0;
}