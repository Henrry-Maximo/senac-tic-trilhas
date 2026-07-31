#include <stdio.h>
#include <string.h>

#define CATEGORIAS 5

int main() {
  printf("--- MINI SISTEMA DE ORÇAMENTO FAMILIAR ---\n\n");

  char nomes_categories[CATEGORIAS][30] = {
    "Habilitação",
    "Alimentação",
    "Transporte",
    "Educação",
    "Lazer"
  };

  float despesas[CATEGORIAS];

  float total_despesas = 0.0;
  int indice_maior = 0;

  printf(">>> Preencha as despesas do mês (R$): \n");
  for(int i = 0; i < CATEGORIAS; i++) {
    printf("- Gasto com %s: ", nomes_categories[i]);
    scanf("%f", &despesas[i]);

    total_despesas = total_despesas + despesas[i];

    if (despesas[i] > despesas[indice_maior]) {
      indice_maior = i;
    }
  };

  // 2. EXIBIÇÃO DO PAINEL FINANCEIRO
  printf("\n=====================================\n");
  printf("\n            Resumo do Mês           \n");
  printf("\n===================================\n");

  for(int i = 0; i < CATEGORIAS; i++) {
    printf("%-15s : R$ %.2f\n", nomes_categories[i], despesas[i]);
  }

  printf("-------------------------------------\n");
  printf("Total de Despesas: R$ %.2f\n\n", total_despesas);

  printf(">>> ATENÇÃO FINANCEIRA: \n");
  printf("O seu maior gasto foi '%s', totalizando R$ %.2f.\n", nomes_categories[indice_maior], despesas[indice_maior]);

  return 0;
}
