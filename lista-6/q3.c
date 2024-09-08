#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    int *vetor;
    int quantidade;
    float media;
} Vetor;

void gerar_vetor(Vetor *v) {
    srand(time(NULL));
    for (int i = 0; i < v->quantidade; i++) {
        v->vetor[i] = rand() % 100;
        printf("%d ", v->vetor[i]);
    }
    printf("\n");
}

void calcular_media(Vetor *v) {
    int soma = 0;
    for (int i = 0; i < v->quantidade; i++) {
        soma += v->vetor[i];
    }
    v->media = (float)soma / v->quantidade;
}

int main() {
    Vetor v;
    printf("Digite a quantidade de elementos: ");
    scanf("%d", &v.quantidade);

    v.vetor = (int*) malloc(v.quantidade * sizeof(int));

    gerar_vetor(&v);
    calcular_media(&v);

    printf("Média dos valores: %.2f\n", v.media);

    free(v.vetor);
    return 0;
}
