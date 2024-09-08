#include <stdio.h>
#include <limits.h>

int main() {
    int num, menor = INT_MAX;
    int *p = &num;

    while (1) {
        printf("Digite um número (negativo para parar): ");
        scanf("%d", p);

        if (*p < 0) break;
        if (*p < menor) menor = *p;
    }

    printf("Menor número fornecido: %d\n", menor);
    return 0;
}
