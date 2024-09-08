#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 100

void selection_sort(int *vetor, int n) {
    int i, j, min, temp;
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (vetor[j] < vetor[min])
                min = j;
        }
        temp = vetor[i];
        vetor[i] = vetor[min];
        vetor[min] = temp;
    }
}

void bubble_sort(int *vetor, int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

int main() {
    int *vetor = (int*) malloc(TAM * sizeof(int));
    srand(time(NULL));

    for (int i = 0; i < TAM; i++) {
        vetor[i] = rand() % 100;
    }

    printf("Vetor original:\n");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Selection Sort
    selection_sort(vetor, TAM);
    printf("Vetor ordenado (Selection Sort):\n");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Gerar novo vetor e ordenar com Bubble Sort
    for (int i = 0; i < TAM; i++) {
        vetor[i] = rand() % 100;
    }
    bubble_sort(vetor, TAM);
    printf("Vetor ordenado (Bubble Sort):\n");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);
    return 0;
}
