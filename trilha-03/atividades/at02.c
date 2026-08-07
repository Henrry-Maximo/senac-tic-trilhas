#include <stdio.h>

// At01: Calculadora
int main() {
  // variaveis
  float value1, value2, result;
  int option;

  printf("\n\n-------- PROGRAMA CALCULADORA SIMPLES --------\n");
  

  printf("\n>>>>>>> RESULTADOS <<<<<<<\n");
  
  do {
    printf("\nMenu de Opcoes: ");
    printf("\n1. Somar");
    printf("\n2. Subtrair");
    printf("\n3. Multiplicar");
    printf("\n4. Dividir");
    printf("\n0. Sair\n");

    printf("\nInforme a operacao desejada: ");
    scanf("%d", &option);

    if (option != 0) {
      printf("Informe o primeiro valor: ");
      scanf("%f", &value1);

      printf("Informe o segundo valor: ");
      scanf("%f", &value2);
    }

    switch (option) {
      case 0:
        printf("\nSaindo do programa...\n");
        break;
      case 1:
        result = value1 + value2;
        printf("\nResultado: %.2f + %.2f = %.2f\n", value1, value2, result);
        break;
      case 2:
        result = value1 - value2;
        printf("\nResultado: %.2f - %.2f = %.2f\n", value1, value2, result);
        break;
      case 3:
        result = value1 * value2;
        printf("\nResultado: %.2f * %.2f = %.2f\n", value1, value2, result);
        break;
      case 4:
        if (value1 != 0 && value2 != 0) {
          result = value1 / value2;
          printf("\nResultado: %.2f / %.2f = %.2f\n", value1, value2, result);
          break;
        }
        
        printf("\nDivisao por zero nao permitida.\n");
        break;
      default:
        printf("\nOpcao invalida!\n");
    }

  } while (option != 0);

  printf("\n\n-------- PROGRAMA ENCERRADO --------\n");

  return 0;
}