#include <stdio.h>

typedef struct {
    float nota1;
    float nota2;
    float media;
} Aluno;

void calcular_media(Aluno *a) {
    a->media = (a->nota1 + a->nota2) / 2;
}

void calcular_media_turma(Aluno alunos[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        calcular_media(&alunos[i]);
    }
}

int main() {
    Aluno alunos[3];

    for (int i = 0; i < 3; i++) {
        printf("Digite a primeira nota do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota1);
        printf("Digite a segunda nota do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota2);
    }

    calcular_media_turma(alunos, 3);

    for (int i = 0; i < 3; i++) {
        printf("Média do aluno %d: %.2f\n", i + 1, alunos[i].media);
    }

    return 0;
}
