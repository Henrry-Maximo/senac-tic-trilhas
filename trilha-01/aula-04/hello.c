
// caixa de ferramentas padrão 
#include <stdio.h>
#include <locale.h>

// portão de entrada
int main() {
  setlocale(LC_ALL, "Portuguese_Brazil.1252");
  printf("Olá, mundo do Henrique");
  return 0; // convenção da linguagem C pra dizer sucesso
}