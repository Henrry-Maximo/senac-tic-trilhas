#include <stdio.h>

#define TAM 10;

int somarAte(int n) {
  int soma = 0;

  for (int i = 0; i <= n; i++) {
    soma = soma + i;
  }

  return soma;
}

void imprimirResultado(int n, int soma) {
  pritnf("A soma de 1 até %d é %d\n", n, soma);
}

// função para ler os números de um vetor (fixo)
void somarVetor() {
  int numeros[10] = {3, 5, 7, 11, 21, 33, 66, 99, 100, 1000};
  // 1 + 2 + 3 = 6

  // processa cada número do vetor criado acima
  printf("\n=== Resultados ===\n");
  for(int i = 0; i < 10; i++) {
    int n = numeros[i];
    int soma = somarAte(n);
    imprimirResultado(n, soma);
  }
}

int main() {
  somarVetor();

  return 0;
}