#include <stdio.h>

int main() {
    int numero1, numero2;

    printf("Digite dois números inteiros separados por espaço: ");
    scanf("%d %d", &numero1, &numero2);

    const char *multiplo = (numero1 % numero2 == 0) ? "sim" : "não";

    printf("O primeiro número é múltiplo do segundo? %s\n", multiplo);

    return 0;
}
