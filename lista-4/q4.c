#include <stdio.h>

int main() {
    int vetor[5];
    for (int i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Valores e seus endereços:\n");
    for (int i = 0; i < 5; i++) {
        printf("Valor: %d, Endereço: %p\n", vetor[i], (void*)&vetor[i]);
    }

    return 0;
}
