#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

// At03: Controle de Temperatura
int main() {
  // variaveis
  int temp[60], i = 0, menor = INT_MAX, maior = INT_MIN;
  bool aviso = false;

  printf("\n\n-------- PROGRAMA CONTROLAR TEMPERATURA --------\n\n");

  do {
    printf("Informe a temperatura (%d): ", i + 1);
    scanf("%d", &temp[i]);
    
    if (temp[i] == 0) break;

    if (temp[i] < -50 || temp[i] > 60) {
      aviso = true;
    } else {
      if (maior < temp[i]) {
        maior = temp[i];
      }

      if (menor > temp[i]) {
        menor = temp[i];
      }
    }

    // printf("\n%.d\n", temp[i]);
    i = i + 1;
  } while (&temp[i] != 0);
  
  printf("\n>>>>>>> RESULTADOS <<<<<<<\n");

  if (aviso) {
    printf("\nTemperatura invalida.");
  }

  printf("\nMaior temperatura: %d", maior);
  printf("\nMenor temperatura: %d\n", menor);

  printf("\n\n-------- PROGRAMA ENCERRADO --------\n");

  return 0;
}