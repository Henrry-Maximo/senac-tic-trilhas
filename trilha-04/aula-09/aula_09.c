#include <stdio.h>
#include <string.h> // Biblioteca essecial para usar o strcmp

#define TAM 4

int main() {
  char produtos[TAM][20] = {"arroz", "feijao", "macarrao", "carne"};
  char alvo[20]; // Variável para guardar o que o usuário quer buscar

  // Nossa convenção: -1 (Assumimos que não achamos até provar o contrário)
  int indice_encontrado = -1;

  printf("Digite o nome do produto que deseja procurar (tudo em minúsculo): ");
  scanf("%s", alvo);

  // Busca linear: PERCORRER E COMPRAR
  for(int i = 0; i < TAM; i++) {
    // Usar strcmp para verificar se o produto atual é igual ao que foi digitado pelo usuário
    if(strcmp(produtos[i], alvo) == 0) {
      indice_encontrado = i; // guardar o endereço da gaveta onde achamos o endereço
      break;
    } 
  }

  if (indice_encontrado != -1) {
    printf("Sucesso! O produto '%s' está na prateleira (indice) %d.\n", alvo, indice_encontrado);
  } else {
    printf("Aviso: O produto '%s' NÃO foi encontrado no estoque.\n", alvo);
  }

  return 0;
}