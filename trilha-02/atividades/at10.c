#include <stdio.h>
#include <string.h>

// At10: Ingressos para o Cinema
int main() {
    // variaveis
    int qtd_inteiras, qtd_meias;
    char dia[20], nacional[6];
    float ingresso, total;

    printf("\n=== PROGRAMA PARA CALCULAR MENSALIDADE DE ACORDO COM O CURSO ===\n");

    printf("\nInforme a quantidade de ingressos inteiras: ");
    scanf("%d", &qtd_inteiras);

    printf("Informe a quantidade de ingressos meias: ");
    scanf("%d", &qtd_meias);

    printf("Informe o dia da semana: ");
    scanf("%s", dia);

    printf("Informe se eh nacional (S para sim, N para nao): ");
    scanf("%s", nacional);

    if (strcmp(nacional, "S") == 0) {
        ingresso = 5.00;
    } else {
        ingresso = 28.50;
    }

    if (strcmp(dia, "quarta-feira") == 0 && strcmp(nacional, "S") == 0) {
        total = (qtd_inteiras + qtd_meias) * ingresso;
    } else if (strcmp(dia, "quarta-feira") == 0 && strcmp(nacional, "N") == 0) {
        ingresso = 14.50;
        total = (qtd_inteiras + qtd_meias) * ingresso;
    } else {
        total = (qtd_inteiras * 28.50) + (qtd_meias * 14.25);
    }

    printf("\n>>> RESULTADO <<<\n\n");

    printf("Total a pagar: ");
    printf("R$ %.2f", total);

    printf("\n\n=== PROGRAMA ENCERRADO ===\n");

    return 0;
}
