#include <stdio.h>

typedef struct {
    float nota1;
    float nota2;
    float media;
} Aluno;

void calcular_media(Aluno *a) {
    a->media = (a->nota1 + a->nota2) / 2;
}

int main() {
    Aluno aluno;
    
    printf("Digite a primeira nota: ");
    scanf("%f", &aluno.nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &aluno.nota2);
    
    calcular_media(&aluno);
    
    printf("Média do aluno: %.2f\n", aluno.media);
    
    return 0;
}
