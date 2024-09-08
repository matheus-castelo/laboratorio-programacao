#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int **matriz;
    int dimensao;
} MatrizQuadrada;

int somar_diagonal_principal(MatrizQuadrada *m) {
    int soma = 0;
    for (int i = 0; i < m->dimensao; i++) {
        soma += m->matriz[i][i];
    }
    return soma;
}

void preencher_matriz(MatrizQuadrada *m) {
    srand(time(NULL));
    for (int i = 0; i < m->dimensao; i++) {
        for (int j = 0; j < m->dimensao; j++) {
            m->matriz[i][j] = rand() % 100;
        }
    }
}

void imprimir_matriz(MatrizQuadrada *m) {
    for (int i = 0; i < m->dimensao; i++) {
        for (int j = 0; j < m->dimensao; j++) {
            printf("%d ", m->matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Digite a dimensão da matriz: ");
    scanf("%d", &n);

    MatrizQuadrada m;
    m.dimensao = n;
    m.matriz = (int**) malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        m.matriz[i] = (int*) malloc(n * sizeof(int));
    }

    preencher_matriz(&m);
    printf("Matriz gerada:\n");
    imprimir_matriz(&m);

    int soma = somar_diagonal_principal(&m);
    printf("Somatório da diagonal principal: %d\n", soma);
    printf("O somatório é %s\n", (soma % 2 == 0) ? "par" : "ímpar");

    for (int i = 0; i < n; i++) {
        free(m.matriz[i]);
    }
    free(m.matriz);
    return 0;
}
