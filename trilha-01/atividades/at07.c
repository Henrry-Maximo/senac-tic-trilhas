#include <stdio.h>
#include <locale.h>

// Atividade 07: Você Lê Rápido?
int main() {
 // setlocale(LC_ALL, "Portuguese_Brazil.1252");

  char name[30], book[50];
  int totalPages;
  float totalReadingTime , readingTimePerPage;

  printf("\n=== PROGRAMA PARA CALCULAR QUANTO TEMPO LEVERA PARA LER UM LIVRO ===\n");

  printf("\nInforme seu nome: ");
  scanf("%s", name);

  printf("Informe o nome do livro: ");
  scanf("%s", book);
  // fgets(book, sizeof(book), stdin);

  printf("Informe a quantidade de paginas: ");
  scanf("%d", &totalPages);

  printf("Informe a quantidade tempo em segundos (que levara para ler): ");
  scanf("%f", &readingTimePerPage);

  totalReadingTime = (totalPages * readingTimePerPage) / 3600;

  printf("\n>>> RESULTADOS <<<\n");

  printf("\n%s, voce finalizara a leitura do livro %s em aproximadamente %.2f horas.\n", name, book, totalReadingTime);

  printf("\n>>> FIM DO PROGRAMA <<<\n");

  return 0;
}