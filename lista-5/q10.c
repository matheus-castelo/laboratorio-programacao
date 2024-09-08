#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    int **matriz;
    int dimensao;
} MatrizNxN;

void preencher_vetores(int *X, int *Y, int n) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        X[i] = rand() % n;
        Y[i] = rand() % n;
    }
}

void preencher_matriz(MatrizNxN *m, int *X, int *Y, int n) {
    for (int i = 0; i < n; i++) {
        m->matriz[X[i]][Y[i]]++;
    }
}

void imprimir_matriz(MatrizNxN *m) {
    for (int i = 0; i < m->dimensao; i++) {
        for (int j = 0; j < m->dimensao; j++) {
            printf("%d ", m->matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Digite o valor de N: ");
    scanf("%d", &n);

    int *X = (int*) malloc(n * sizeof(int));
    int *Y = (int*) malloc(n * sizeof(int));

    preencher_vetores(X, Y, n);

    MatrizNxN m;
    m.dimensao = n;
    m.matriz = (int**) calloc(n, sizeof(int*));
    for (int i = 0; i < n; i++) {
        m.matriz[i] = (int*) calloc(n, sizeof(int));
    }

    preencher_matriz(&m, X, Y, n);
    printf("Matriz de coocorrências:\n");
    imprimir_matriz(&m);

    for (int i = 0; i < n; i++) {
        free(m.matriz[i]);
    }
    free(m.matriz);
    free(X);
    free(Y);
    return 0;
}
