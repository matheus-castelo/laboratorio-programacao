#include <stdio.h>

void operacao(int a, int b, char op) {
    if (op == '+') {
        printf("Soma: %d\n", a + b);
    } else if (op == '*') {
        printf("Multiplicação: %d\n", a * b);
    } else {
        printf("Operação inválida!\n");
    }
}

int main() {
    int a, b;
    char op;
    printf("Digite dois números: ");
    scanf("%d %d", &a, &b);
    printf("Digite o código da operação (+ ou *): ");
    scanf(" %c", &op);

    operacao(a, b, op);
    return 0;
}
