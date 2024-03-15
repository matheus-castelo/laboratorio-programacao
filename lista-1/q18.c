#include <stdio.h>

int main() {
    float raio, diametro, circunferencia, area;
    const float pi = 3.14159;

    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    diametro = 2 * raio;
    circunferencia = 2 * pi * raio;
    area = pi * raio * raio;

    printf("Diâmetro do círculo: %.2f\n", diametro);
    printf("Circunferência do círculo: %.2f\n", circunferencia);
    printf("Área do círculo: %.2f\n", area);

    return 0;
}
