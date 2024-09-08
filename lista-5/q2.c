#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* encontrar_menor(int *vetor, int n) {
    int *menor = vetor;
    for (int i = 1; i < n; i++) {
        if (*(vetor + i) < *menor) {
            menor = (vetor + i);
        }
    }
    return menor;
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

    int *endereco_menor = encontrar_menor(vetor, n);
    printf("Menor valor: %d, Endereço: %p\n", *endereco_menor, (void*)endereco_menor);

    free(vetor);
    return 0;
}
