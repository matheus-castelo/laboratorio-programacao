#include <stdio.h>

int main() {
    float cotacao_dolar, valor_real, valor_dolar;

    printf("Digite a cotação do dólar: ");
    scanf("%f", &cotacao_dolar);
    while(getchar() != '\n'); 

    printf("Digite a quantidade de reais que deseja converter: ");
    scanf("%f", &valor_real);

    valor_dolar = valor_real / cotacao_dolar;

    printf("O valor em dólar é: %.2f\n", valor_dolar);

    return 0;
}
