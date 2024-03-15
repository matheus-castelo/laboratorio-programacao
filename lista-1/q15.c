#include <stdio.h>

int main() {
    float salario_diario = 50.25;
    int dias_trabalhados;
    float salario_bruto, salario_liquido, gratificacao, desconto_ir;

    printf("Digite o número de dias trabalhados pelo vendedor: ");
    scanf("%d", &dias_trabalhados);

    salario_bruto = salario_diario * dias_trabalhados;

    if (dias_trabalhados <= 10) {
        gratificacao = 0;
    } else if (dias_trabalhados <= 20) {
        gratificacao = salario_bruto * 0.20;
    } else {
        gratificacao = salario_bruto * 0.30;
    }

    desconto_ir = salario_bruto * 0.10;
    
    salario_liquido = salario_bruto + gratificacao - desconto_ir;

    printf("Salário bruto: R$ %.2f\n", salario_bruto);
    printf("Gratificação: R$ %.2f\n", gratificacao);
    printf("Desconto de Imposto de Renda: R$ %.2f\n", desconto_ir);
    printf("Salário líquido a ser pago ao vendedor: R$ %.2f\n", salario_liquido);

    return 0;
}
