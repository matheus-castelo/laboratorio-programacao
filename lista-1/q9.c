#include <stdio.h>

int main() {
    int valor, antecessor, sucessor;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    antecessor = valor - 1;
    sucessor = valor + 1;

    printf("O antecessor de %d é: %d\n", valor, antecessor);
    printf("O sucessor de %d é: %d\n", valor, sucessor);

    return 0;
}
