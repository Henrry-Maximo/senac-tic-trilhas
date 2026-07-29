#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
  setlocale(LC_ALL, "");

  char nomeProduto[] = "Teclado Gamer";
  float precoProduto = 99.50;

  printf("Produto: %s\n", nomeProduto);
  printf("Preço: R$%.2f\n", precoProduto);

  return 0;
}