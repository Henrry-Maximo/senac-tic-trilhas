#include <stdio.h>
#include <string.h> // Obrigatório para manipular textos

#define TAM 5

int main() {
  printf("--- SISTEMA DE LOGÍSTICA AVANÇADO ---\n\n");

  char cidades[TAM][30] = {"SÃO PAULO", "CAMPINAS", "VOTUPORANGA", "OSASCO"};

  char mensagem_final[250] = "";
  
  strcat(mensagem_final, "Hoje realizaremos entregas nas cidades de: ");

  for(int i = 0; i < TAM; i++) {
    if (strcmp(cidades[i], "VOTUPORANGA") == 0) {
      continue;
    }

    strcat(mensagem_final, cidades[i]);

    if (i < TAM - 1) {
      strcat(mensagem_final, ", ");
    } else {
      strcat(mensagem_final, ".");
    }
  }

  printf(">>> E-mail gerado automaticamente:\n");
  printf("%s\n\n", mensagem_final);

  return 0;
}