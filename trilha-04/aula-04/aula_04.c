#include <stdio.h>

#define TAMANHO 5

int main() {
  printf("--- SIMULANDO UMA PILHA COM VETOR --- \n\n");

  int pilha[TAMANHO];
  int topo = -1;

  topo = topo + 1; // O topo agora é 0
  pilha[topo] = 10;
  printf("Documento %d adicionado no topo (índice %d).\n", pilha[topo], topo);

  topo = topo + 1; // O topo agora é 1
  pilha[topo] = 20;
  printf("Documento %d adicionado no topo (índice %d).\n", pilha[topo], topo);
  
  topo = topo + 1; // O topo agora é 2
  pilha[topo] = 30;
  printf("Documento %d adicionado no topo (índice %d).\n", pilha[topo], topo);

  printf("--- PROCESSANDO A PILHA (LIFO) ---\n");

  printf("Assinando o documento: %d\n", pilha[topo]);
  topo = topo - 1; // "Apagamos" o acesso ao índice 2

  printf("Assinando o documento: %d\n", pilha[topo]);
  topo = topo - 1; // "Apagamos" o acesso ao índice 1

  printf("\nDocumentos restantes na pilha: %d\n", topo + 1);

  return 0;
}