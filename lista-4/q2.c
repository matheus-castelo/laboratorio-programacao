#include <stdio.h>

void troca(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;
    printf("Digite dois números: ");
    scanf("%d %d", &a, &b);

    troca(&a, &b);
    printf("Valores trocados: a = %d, b = %d\n", a, b);

    return 0;
}
