#include <stdio.h>

int main() {
    int numero, digito1, digito2, digito4, digito5;

    printf("Digite um número de cinco dígitos: ");
    scanf("%d", &numero);

    digito1 = numero / 10000;
    digito2 = (numero % 10000) / 1000;
    digito4 = (numero % 100) / 10;
    digito5 = numero % 10;

    if (digito1 == digito5 && digito2 == digito4) {
        printf("%d é um palíndromo.\n", numero);
    } else {
        printf("%d não é um palíndromo.\n", numero);
    }

    return 0;
}
