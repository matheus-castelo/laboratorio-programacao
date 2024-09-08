#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main() {
    int *numeros = (int*) malloc(3 * sizeof(int));
    srand(time(NULL));

    for (int i = 0; i < 3; i++) {
        numeros[i] = rand() % 20;  // Entre 0 e 19
        printf("Número %d: %d\n", i + 1, numeros[i]);
    }

    float media_aritmetica = (numeros[0] + numeros[1] + numeros[2]) / 3.0;
    float media_geometrica = cbrt(numeros[0] * numeros[1] * numeros[2]);

    printf("Média aritmética: %.2f\n", media_aritmetica);
    printf("Média geométrica: %.2f\n", media_geometrica);

    free(numeros);
    return 0;
}
