#include <stdio.h>

int main() {
    int numero, digito1, digito2, digito3;

    printf("Digite um número de três dígitos: ");
    scanf("%d", &numero);

    digito1 = numero / 100;
    digito2 = (numero / 10) % 10;
    digito3 = numero % 10;

    int numero_invertido = (digito3 * 100) + (digito2 * 10) + digito1;

    printf("O número invertido é: %d\n", numero_invertido);

    return 0;
}
