#include <stdio.h>
#include <string.h>

// At5: Boletim Escolar
int main()
{
  // variaveis
  float nota1, nota2, nota3, media;
  int faltas;
  char status[50];

  printf("\n=== PROGRAMA PARA INFORMAR CLASSIFICACAO DO ALUNO ===\n");

  printf("\nInforme a primeira nota do aluno: ");
  scanf("%f", &nota1);

  printf("Informe a segunda nota do aluno: ");
  scanf("%f", &nota2);

  printf("Informe a terceira nota do aluno: ");
  scanf("%f", &nota3);

  printf("Informe a quantidade de faltas do aluno: ");
  scanf("%d", &faltas);

  media = (nota1 + nota2 + nota3) / 3;

  printf("\n>>> RESULTADO <<<\n");

  if (media < 0 || media > 10 || faltas < 0) {
    printf("Parametros Invalidos!");
  } else {
    if (faltas > 4)
    {
      strcpy(status, "Reprovado por Falta.");
    }
    else if (media >= 8 && media < 10)
    {
      strcpy(status, "Aprovado com Sucesso.");
    }
    else if (media >= 6 && media < 8)
    {
      strcpy(status, "Aprovado.");
    }
    else if (media < 6)
    {
      strcpy(status, "Recuperacao.");
    }
    else if (media == 0)
    {
      strcpy(status, "Desistente.");
    }

    printf("\nMedia: %.2f", media);
    printf("\nSituacao: %s", status);
  }

  printf("\n\n=== PROGRAMA ENCERRADO ===\n");

  return 0;
}