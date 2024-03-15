#include <stdio.h>

int main() {
    int numero, absoluto;

    printf("Digite um valor inteiro: ");
    scanf("%d", &numero);

    absoluto = (numero >= 0) ? numero : -numero;

    printf("O valor absoluto é: %d\n", absoluto);

    return 0;
}
