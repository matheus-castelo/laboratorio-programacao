#include <stdio.h>

int main() {
    float comprimento, largura, altura, volume;

    printf("Digite o comprimento da caixa: ");
    scanf("%f", &comprimento);

    printf("Digite a largura da caixa: ");
    scanf("%f", &largura);

    printf("Digite a altura da caixa: ");
    scanf("%f", &altura);

    volume = comprimento * largura * altura;

    printf("O volume da caixa retangular é: %.2f\n", volume);

    return 0;
}
