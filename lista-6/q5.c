#include <stdio.h>

typedef struct {
    char nome[100];
    int idade;
} Professor;

typedef struct {
    char nome[100];
    int codigo;
    Professor professor;
} Disciplina;

void mostrar_disciplina(Disciplina *d) {
    printf("Nome da disciplina: %s\n", d->nome);
    printf("Código da disciplina: %d\n", d->codigo);
    printf("Professor: %s, Idade: %d\n", d->professor.nome, d->professor.idade);
}

int main() {
    Disciplina disciplina;

    printf("Digite o nome da disciplina: ");
    scanf(" %[^\n]", disciplina.nome);
    printf("Digite o código da disciplina: ");
    scanf("%d", &disciplina.codigo);
    
    printf("Digite o nome do professor: ");
    scanf(" %[^\n]", disciplina.professor.nome);
    printf("Digite a idade do professor: ");
    scanf("%d", &disciplina.professor.idade);

    mostrar_disciplina(&disciplina);
    
    return 0;
}
