#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    const char *paridade = (numero % 2 == 0) ? "par" : "ímpar";

    printf("O número %d é %s.\n", numero, paridade);

    return 0;
}
