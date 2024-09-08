#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *vetor;
    int tamanho;
    int min;
    int max;
} Vetor;

Vetor encontrar_min_max(int *vetor, int n) {
    Vetor resultado;
    resultado.vetor = vetor;
    resultado.tamanho = n;
    resultado.min = vetor[0];
    resultado.max = vetor[0];

    for (int i = 1; i < n; i++) {
        if (vetor[i] < resultado.min) resultado.min = vetor[i];
        if (vetor[i] > resultado.max) resultado.max = vetor[i];
    }
    return resultado;
}

void normalizar(Vetor *v) {
    for (int i = 0; i < v->tamanho; i++) {
        v->vetor[i] = (v->vetor[i] - v->min) / (v->max - v->min);
    }
}

int main() {
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int *vetor = (int*) malloc(n * sizeof(int));

    printf("Digite os elementos do vetor: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    Vetor v = encontrar_min_max(vetor, n);
    normalizar(&v);

    printf("Vetor normalizado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);
    return 0;
}
