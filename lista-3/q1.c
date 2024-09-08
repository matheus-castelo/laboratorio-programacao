#include <stdio.h>
#include <stdlib.h>
#include <float.h>

#define TAM 15

int main() {
    float *vetor = (float*) malloc(TAM * sizeof(float));
    float menor = FLT_MAX, maior = FLT_MIN, soma;
    
    for (int i = 0; i < TAM; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%f", &vetor[i]);
        if (vetor[i] < menor) menor = vetor[i];
        if (vetor[i] > maior) maior = vetor[i];
    }
    
    soma = menor + maior;
    printf("Soma do menor e maior elemento: %.2f\n", soma);
    
    free(vetor);
    return 0;
}
