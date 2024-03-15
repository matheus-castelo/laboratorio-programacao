#include <stdio.h>
#include <math.h>

int main() {
    int x, n;
    double produto;

    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    produto = x * pow(2, n);

    printf("O produto de %d por 2 elevado a %d é: %.0f\n", x, n, produto);

    return 0;
}
