#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int **matriz;
    int linhas;
    int colunas;
} Matriz;

void preencher_matriz(Matriz *m, int limiar) {
    srand(time(NULL));
    for (int i = 0; i < m->linhas; i++) {
        for (int j = 0; j < m->colunas; j++) {
            m->matriz[i][j] = rand() % 100;
            if (m->matriz[i][j] > limiar) {
                m->matriz[i][j] = 1;
            } else {
                m->matriz[i][j] = 0;
            }
        }
    }
}

void imprimir_matriz(Matriz *m) {
    for (int i = 0; i < m->linhas; i++) {
        for (int j = 0; j < m->colunas; j++) {
            printf("%d ", m->matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int linhas, colunas, limiar;
    printf("Digite as dimensões da matriz (linhas colunas): ");
    scanf("%d %d", &linhas, &colunas);
    printf("Digite o limiar: ");
    scanf("%d", &limiar);

    Matriz m;
    m.linhas = linhas;
    m.colunas = colunas;
    m.matriz = (int**) malloc(linhas * sizeof(int*));
    for (int i = 0; i < linhas; i++) {
        m.matriz[i] = (int*) malloc(colunas * sizeof(int));
    }

    preencher_matriz(&m, limiar);
    printf("Matriz binarizada:\n");
    imprimir_matriz(&m);

    for (int i = 0; i < linhas; i++) {
        free(m.matriz[i]);
    }
    free(m.matriz);
    return 0;
}
