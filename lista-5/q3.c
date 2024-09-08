#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    int *menor;
    int *maior;
} MinMax;

MinMax encontrar_min_max(int *vetor, int n) {
    MinMax resultado;
    resultado.menor = vetor;
    resultado.maior = vetor;

    for (int i = 1; i < n; i++) {
        if (*(vetor + i) < *resultado.menor) {
            resultado.menor = (vetor + i);
        }
        if (*(vetor + i) > *resultado.maior) {
            resultado.maior = (vetor + i);
        }
    }
    return resultado;
}

int main() {
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int *vetor = (int*) malloc(n * sizeof(int));
    srand(time(NULL));

    printf("Vetor gerado: ");
    for (int i = 0; i < n; i++) {
        vetor[i] = rand() % 100;
        printf("%d ", vetor[i]);
    }
    printf("\n");

    MinMax resultado = encontrar_min_max(vetor, n);
    printf("Menor valor: %d, Endereço: %p\n", *resultado.menor, (void*)resultado.menor);
    printf("Maior valor: %d, Endereço: %p\n", *resultado.maior, (void*)resultado.maior);

    free(vetor);
    return 0;
}
