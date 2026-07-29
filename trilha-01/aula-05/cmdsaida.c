#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "");  
  printf("Estou aprendendo a codificar em C.\n");
  printf("Está é a segunda mensagem.\n");
  printf("Nome:\tJoão\n");
  printf("Idade:\t25\n");
  printf("João disse: \"Olá, galera!\"\n");
  printf("O caminho do arquivo é: C:\\Users\\Aluno");

  return 0;
}