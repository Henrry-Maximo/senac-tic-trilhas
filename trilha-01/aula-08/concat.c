#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
  setlocale(LC_ALL, "");

  /*
  char nomePersonagem[] = "Xatom";
  char cidade[] = "Aldeia";
  char hobby[] = "jogar \"The Last of Us - Part II\"";
  */

  char s1[] = "Falaê ";
  char s2[] = "galera ";
  char s3[] = "da Trilha \"Pensamento Computacional em C\"";

  // concatenando através da função strcat - s2 é concatenado à s1
  strcat(s1, s2);
  strcat(s1, s3); 

  printf("%s\n", s1);

  // printf("Nosso heroi %s, mora em %s e gosta de %s !!!\n", nomePersonagem, cidade, hobby);

  return 0;
}