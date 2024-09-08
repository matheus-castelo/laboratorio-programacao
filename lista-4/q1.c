#include <stdio.h>

int main() {
    int a, b, *p1, *p2, soma;
    p1 = &a;
    p2 = &b;

    printf("Digite dois números: ");
    scanf("%d %d", p1, p2);

    soma = *p1 + *p2;
    printf("Soma: %d\n", soma);
    printf("Endereço da soma: %p\n", (void*)&soma);

    return 0;
}
