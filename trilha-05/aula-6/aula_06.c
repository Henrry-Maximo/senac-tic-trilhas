#include <stdio.h>

// função com retorno
float comDesconto(float valor, float taxa) {
  float desconto = valor * taxa;
  float precoFinal = valor - desconto;
  return precoFinal;
}

int main() {
  float resultado = comDesconto(100, 0.1);
  printf("Preço final: %.2f\n", resultado);

  return 0;
}