#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "");

  const char nomeImutavel[] = "GOD";

  char nomePersonagem[] = "Xatom!";
  char cidade[] = "Aldeia";

  // %s marcador de lugar (máscara de string)
  /*
  printf("Nosso heroi %s mora em %s. \n", nomePersonagem, cidade);
  printf("%s\n", nomePersonagem);
  printf("%s\n", cidade);
  */

  printf("O nome que não muda é %s. \n", nomeImutavel);
  // se tentarmos alterar o valor de uma constante, o compilador mostrará um erro (warning)
  // nomeImutavel = "Henrique"; 

  return 0;
}