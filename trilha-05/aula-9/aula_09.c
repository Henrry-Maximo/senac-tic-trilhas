#include <stdio.h>
// função para classificar número (retorna código númerico)
int classificar_numero(int x) {
  if (x > 0) {
    return 1; // 1 representa POSITIVO
  }
  if (x < 0) {
    return -1; // -1 representa NEGATIVO
  } else {
    return 0; // 0 representa ZERO
  }
}

// função para calcular idade em meses (retorna -1 para erro)
int calcular_idade_em_meses(int idade_anos) {
  if (idade_anos < 0) {
    return -1; // Código de erro
  }

  return idade_anos * 12;
}

// função para exibir a classificação (separar lógica da exibição)
void exibir_classificacao(int numero) {
  int resultado = classificar_numero(numero);

  printf("Analisando o número %d: ", numero);

  if (resultado == 1) {
    printf("Positivo\n");
  } else if (resultado == -1) {
    printf("Negativo\n");
  } else {
    printf("ZEROOO\n");
  }
}

// função para exibir idade em meses
void exibir_idade_em_meses(int idade_anos) {
  int resultado = calcular_idade_em_meses(idade_anos);

  if (resultado < 1) {
    printf("ERRO: Idade não pode ser negativo!\n");
  } else {
    pritnf("%d\n", resultado);
  }
}

// fluxo principal
int main() {
  // Testes da classificação de números
  exibir_classificacao(15);
  exibir_classificacao(-8);
  exibir_classificacao(0);

  pritnf("\n");

  // Testes da calculadora de idade
  exibir_idade_em_meses(-5);
  exibir_idade_em_meses(23);

  return 0;
}