#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// At6: Qual eh a cor?
int main()
{
  // variaveis
  char cor1[30], cor2[30], resultado[15];
  bool coresCompativeis = false;

  printf("\n=== PROGRAMA PARA INFORMAR COR RESULTANTE ===\n");

  printf("\nInforme a primeira cor (vermelho, azul): ");
  scanf("%s", cor1);

  printf("Informe a segunda cor (vermelho, azul): ");
  scanf("%s", cor2);

  if(
      strcmp(cor1, "Vermelho") == 0 || strcmp(cor1, "vermelho") == 0 
      && 
      strcmp(cor2, "Azul") == 0 || strcmp(cor2, "azul") == 0
    ) {
      coresCompativeis = true;
      strcpy(resultado, "Roxo");
    } else if (
      strcmp(cor1, "Azul") == 0 || strcmp(cor1, "azul") == 0 
      && 
      strcmp(cor2, "Vermelho") == 0 || strcmp(cor2, "vermelho") == 0
    ) {
      coresCompativeis = true;
      strcpy(resultado, "Roxo");
    } else {
      strcpy(resultado, "Apenas cores primárias são aceitas.");
    }

  printf("\n>>> RESULTADO <<<\n");

  if (coresCompativeis) {
    printf("\nA combinacao resulta em %s", resultado);
  } else {
    printf("\nApenas cores primarias sao aceitas.");
  }

  printf("\n\n=== PROGRAMA ENCERRADO ===\n");

  return 0;
}