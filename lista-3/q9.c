#include <stdio.h>
#include <stdlib.h>

#define DIM 3

int main() {
    int **matriz = (int**) malloc(DIM * sizeof(int*));
    for (int i = 0; i < DIM; i++) {
        matriz[i] = (int*) malloc(DIM * sizeof(int));
    }

    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < DIM; i++) {
        for (int j = 0; j < DIM; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Diagonal principal:\n");
    for (int i = 0; i < DIM; i++) {
        printf("%d ", matriz[i][i]);
    }
    printf("\n");

    for (int i = 0; i < DIM; i++) {
        free(matriz[i]);
    }
    free(matriz);
    return 0;
}
