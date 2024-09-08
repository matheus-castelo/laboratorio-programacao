#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIN 5
#define COL 5

int main() {
    int **matriz = (int**) malloc(LIN * sizeof(int*));
    for (int i = 0; i < LIN; i++) {
        matriz[i] = (int*) malloc(COL * sizeof(int));
    }

    int x, count = 0;
    srand(time(NULL));

    // Gera matriz aleatória e exibe
    printf("Matriz gerada:\n");
    for (int i = 0; i < LIN; i++) {
        for (int j = 0; j < COL; j++) {
            matriz[i][j] = rand() % 10;  // Valores entre 0 e 9
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Pede valor a ser procurado
    printf("Digite um valor para buscar: ");
    scanf("%d", &x);

    // Conta quantas vezes aparece
    for (int i = 0; i < LIN; i++) {
        for (int j = 0; j < COL; j++) {
            if (matriz[i][j] == x) {
                count++;
            }
        }
    }

    printf("O valor %d aparece %d vezes na matriz.\n", x, count);

    for (int i = 0; i < LIN; i++) {
        free(matriz[i]);
    }
    free(matriz);
    return 0;
}
