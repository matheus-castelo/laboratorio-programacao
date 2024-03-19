#include <stdio.h>

int main() {
    int voto, total_votos = 0, votos_paulo = 0, votos_renata = 0, votos_branco = 0, votos_nulos = 0;

    while (1) {
        printf("Digite o numero do candidato (5 para Paulo, 7 para Renata, 0 para voto em branco, negativo para encerrar): ");
        scanf("%d", &voto);

        if (voto < 0)
            break;
        else if (voto == 5)
            votos_paulo++;
        else if (voto == 7)
            votos_renata++;
        else if (voto == 0)
            votos_branco++;
        else
            votos_nulos++;

        total_votos++;
    }

    float percentual_paulo = (float)votos_paulo / total_votos * 100;
    float percentual_renata = (float)votos_renata / total_votos * 100;
    float percentual_branco = (float)votos_branco / total_votos * 100;
    float percentual_nulos = (float)votos_nulos / total_votos * 100;

    printf("\nRelatorio de votacao:\n");
    printf("Votos em Paulo: %.2f\n", percentual_paulo);
    printf("Votos em Renata: %.2f\n", percentual_renata);
    printf("Votos em branco: %.2f\n", percentual_branco);
    printf("Votos nulos: %.2f\n", percentual_nulos);

    if (votos_paulo > votos_renata)
        printf("Paulo foi eleito presidente!\n");
    else if (votos_renata > votos_paulo)
        printf("Renata foi eleita presidente!\n");
    else
        printf("Houve empate entre Paulo e Renata. Reconte os votos!\n");

    return 0;
}
