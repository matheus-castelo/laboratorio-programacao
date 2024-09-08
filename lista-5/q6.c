#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    int *vetor;
    int tamanho;
} VetorInt;

void preencher_vetor(VetorInt *v) {
    srand(time(NULL));
    for (int i = 0; i < v->tamanho; i++) {
        v->vetor[i] = rand() % 100;
    }
}

float calcular_media(VetorInt *v) {
    int soma = 0;
    for (int i = 0; i < v->tamanho; i++) {
        soma += v->vetor[i];
    }
    return (float)soma / v->tamanho;
}

int comparar(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

float calcular_mediana(VetorInt *v) {
    qsort(v->vetor, v->tamanho, sizeof(int), comparar);
    if (v->tamanho % 2 == 0) {
        return (v->vetor[v->tamanho / 2 - 1] + v->vetor[v->tamanho / 2]) / 2.0;
    } else {
        return v->vetor[v->tamanho / 2];
    }
}

int calcular_moda(VetorInt *v) {
    int max_count = 0, moda = v->vetor[0], count = 1;
    for (int i = 1; i < v->tamanho; i++) {
        if (v->vetor[i] == v->vetor[i - 1]) {
            count++;
        } else {
            if (count > max_count) {
                max_count = count;
                moda = v->vetor[i - 1];
            }
            count = 1;
        }
    }
    return moda;
}

int main() {
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    VetorInt v;
    v.tamanho = n;
    v.vetor = (int*) malloc(n * sizeof(int));

    preencher_vetor(&v);

    printf("Média: %.2f\n", calcular_media(&v));
    printf("Mediana: %.2f\n", calcular_mediana(&v));
    printf("Moda: %d\n", calcular_moda(&v));

    free(v.vetor);
    return 0;
}
