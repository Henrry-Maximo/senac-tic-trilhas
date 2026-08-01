#include <stdio.h>

// TIPO 1: Sem Entrada / Sem Saída
void exibir_3_linhas_separadoras() {
  printf("---------------------------------------------------\n");
  printf("---------------------------------------------------\n");
  printf("---------------------------------------------------\n");
}

// TIPO 2: Com Entrada / Sem Saída
void saudarUsuario(char nome[]) {
  printf("Olá, %s! Seja bem-vindo(a) ao Sistema de Funções!\n", nome);
}

// TIPO 3: Sem Entrada / Com saída
float obter_pi() {
  printf("Retornando o valor de PI...\n");
  float pi = 3.14159;
  return pi;
}

// TIPO 3: Com Entrada / Com Saída
float somar_gastos(float gasto1, float gasto2, float gasto3) {
  float total = gasto1 + gasto2 + gasto3;
  return total;
}

int main() {
  // --- COMPARANDO O USO DE CADA TIPO DE FUNÇÃO

  // Tipo 1 (apenas chamo a função)
  // exibir_3_linhas_separadoras();
  // exibir_3_linhas_separadoras();

  // Tipo 2 (Chamo a função passando um argumento)
  // saudarUsuario("Henrique Maximo");
  // saudarUsuario("Josue Professor");

  // Tipo 3 (Chamo a função e preciso armazenar o retorno)
  // float valor_de_pi = obter_pi();
  // printf("Valor de PI ===> %f\n", valor_de_pi);

  // Tipo 4 (Passo os argumentos e PRECISO armazenar o retorno)
  float total_gastos = somar_gastos(150, 50, 80);
  printf("Meus gastos de hoje: R$ %.2f\n", total_gastos);

  return 0;
}