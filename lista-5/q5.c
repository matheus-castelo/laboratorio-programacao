#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    float *vetor;
    int tamanho;
} VetorFloat;

void preencher_vetor(VetorFloat *v) {
    srand(time(NULL));
    for (int i = 0; i < v->tamanho; i++) {
        v->vetor[i] = (float)(rand() % 100) / 10;
    }
}

float somar_elementos(VetorFloat *v) {
    float soma = 0;
    for (int i = 0; i < v->tamanho; i++) {
        soma += v->vetor[i];
    }
    return soma;
}

int main() {
    int n;
    printf("Digite a quantidade de elementos: ");
    scanf("%d", &n);

    VetorFloat v;
    v.tamanho = n;
    v.vetor = (float*) malloc(n * sizeof(float));

    preencher_vetor(&v);
    float soma = somar_elementos(&v);

    printf("Soma dos elementos: %.2f\n", soma);

    free(v.vetor);
    return 0;
}
