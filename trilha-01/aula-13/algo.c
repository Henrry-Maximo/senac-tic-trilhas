#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
  setlocale(LC_ALL, "Portuguese_Brazil.1252");

  // Entrada de Dados
  float valorTotalConta;
  int totalPessoas;

  printf("--- Divisor de Contas ---\n");
  printf("Qual o valor total da conta? ");
  scanf("%f", &valorTotalConta);

  printf("A conta ser� dividida por quantas pessoas? ");
  scanf("%d", &totalPessoas);
  
  // Processamento (o carebro do programa é aqui)
  float valorPorPessoa = valorTotalConta / totalPessoas;

  // Saída
  printf("\n--- Resultado Final --- \n");
  printf("Cada pessoa deve pagar: R$ %.2f\n", valorPorPessoa);

  return 0;
}