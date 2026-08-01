#include <stdio.h>

// função de entrada de dados
int coletarNumero() {
  int numero;
  printf("Digite um número inteiro: ");
  scanf("%d", &numero);
  return numero;
}

// função de processamento
int calcularDobro(int x) {
  int resultado = x * 2;

  return resultado;
}

// função de saída de dados
void exibirResultados(int numero, int dobro) {
  printf("O dobro de %d é: %d\n", numero, dobro);
}

// Fluxo principal do programa
int main() {
  int num1, num2, num3;
  int dobro1, dobro2, dobro3;

  // fluxo principal chama a coleta de dados
  printf("--- Primeiro Número ---\n");
  num1 = coletarNumero();

  printf("--- Segundo Número ---\n");
  num2 = coletarNumero();

  printf("--- Terceiro Número ---\n");
  num3 = coletarNumero();

  // fluxo principal chama o processamento
  dobro1 = calcularDobro(num1);
  dobro2 = calcularDobro(num2);
  dobro3 = calcularDobro(num3); 

  // fluxo principal chama a saída de dados
  printf("\n--- Resultados ---\n");
  exibirResultados(num1, dobro1);
  exibirResultados(num2, dobro2);
  exibirResultados(num3, dobro3);

  return 0;
}