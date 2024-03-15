#include <stdio.h>

int main() {
    int sexo;
    float altura, peso; 

    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);

    printf("Digite seu sexo: 0 para mulher, 1 para homem: ");
    scanf("%d", &sexo);

    if (sexo == 0) {
        peso = 62.1 * altura - 44.7;
        printf("Seu peso ideal é: %.2f\n", peso);
    } else if (sexo == 1) {
        peso = 72.7 * altura - 58;
        printf("Seu peso ideal é: %.2f\n", peso);
    } else {
        printf("Opção de sexo inválida.\n");
    }

    return 0;
}
