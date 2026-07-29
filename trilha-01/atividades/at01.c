#include <stdio.h>
#include <locale.h>

// Atividade 01: Estudante Universitário
int main() {
  setlocale(LC_ALL, "Portuguese_Brazil.1252");
  char name[30], course[50], hobby[100];
  int semester;

  printf("\nPrograma de apresentação do estudante...\n");

  printf("Digite seu nome: ");
  scanf("%s", name);

  printf("Digite seu curso: ");
  scanf("%s", course);

  printf("Digite seu semestre: ");
  scanf("%d", &semester);

  printf("Digite seu hobby: ");
  fgets(hobby, sizeof(hobby), stdin);

  printf("\n--- Resultado ---\n");
  printf("Prazer, eu sou o(a) %s!\nAtualmente estou no %d° semestre de %s e\nmeu hobby favorito é %s.", name, semester, course, hobby);

  return 0;
}