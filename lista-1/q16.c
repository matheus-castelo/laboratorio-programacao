#include <stdio.h>

int main() {
    float valor_hora_aula, salario_bruto, salario_liquido;
    int horas_trabalhadas_mes;
    float percentual_inss, desconto_inss;

    printf("Digite o valor da hora aula: R$ ");
    scanf("%f", &valor_hora_aula);

    printf("Digite o número de horas trabalhadas no mês: ");
    scanf("%d", &horas_trabalhadas_mes);

    printf("Digite o percentual de desconto do INSS: ");
    scanf("%f", &percentual_inss);

    salario_bruto = valor_hora_aula * horas_trabalhadas_mes;

    desconto_inss = (percentual_inss / 100) * salario_bruto;

    salario_liquido = salario_bruto - desconto_inss;

    printf("Salário bruto: R$ %.2f\n", salario_bruto);
    printf("Desconto do INSS: R$ %.2f\n", desconto_inss);
    printf("Salário líquido: R$ %.2f\n", salario_liquido);

    return 0;
}
