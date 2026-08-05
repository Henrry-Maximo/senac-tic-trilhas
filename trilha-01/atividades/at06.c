#include <stdio.h>
#include <locale.h>

// Atividade 06: Cuidando da Saúde
int main() {
  // setlocale(LC_ALL, "Portuguese_Brazil.1252");
  
  char name[30];
  float weight, height, imc;

  printf("\n=== PROGRAMA PARA CUIDAR DA SAÚDE ===\n");

  printf("\nInforme seu nome: ");
  scanf("%s", &name);

  printf("Informe sua altura: ");
  scanf("%f", &height);

  printf("Informe seu peso: ");
  scanf("%f", &weight);

  imc = weight / (height * height);

  printf("\n>>> RESULTADOS <<<\n");

  printf("\n%s, seu IMC é de %.4f\n", name, imc);

  printf("\n>>> FIM DO PROGRAMA <<<\n");

  return 0;
}