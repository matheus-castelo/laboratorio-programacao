#include <stdio.h>

int main() {
    int dividendo, divisor;
    
    do {
        printf("Digite um dividendo: ");
        scanf("%d", &dividendo);
        printf("Digite um divisor: ");
        scanf("%d", &divisor);
    } while (divisor == 0);

    float resultado = (float)dividendo / divisor;
    printf("O resultado é %.2f\n", resultado);

    return 0;
}
