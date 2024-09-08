#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int N;
    printf("Digite o valor de N: ");
    scanf("%d", &N);

    int *X = (int*) malloc(N * sizeof(int));
    int *F = (int*) calloc(N, sizeof(int));
    srand(time(NULL));

    printf("Vetor X:\n");
    for (int i = 0; i < N; i++) {
        X[i] = rand() % N;
        printf("%d ", X[i]);
        F[X[i]]++;
    }
    printf("\n");

    printf("Frequências (vetor F):\n");
    for (int i = 0; i < N; i++) {
        printf("%d: %d vezes\n", i, F[i]);
    }

    free(X);
    free(F);
    return 0;
}
