#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    int *vetor;
    int tamanho;
} VetorInt;

void preencher_vetor(VetorInt *v) {
    srand(time(NULL));
    for (int i = 0; i < v->tamanho; i++) {
        v->vetor[i] = rand() % 100;
    }
}

float calcular_erro_medio_quadratico(VetorInt *a, VetorInt *b) {
    float soma = 0;
    for (int i = 0; i < a->tamanho; i++) {
        soma += pow(a->vetor[i] - b->vetor[i], 2);
    }
    return soma / a->tamanho;
}

int main() {
    int n;
    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &n);

    VetorInt a, b;
    a.tamanho = n;
    b.tamanho = n;
    a.vetor = (int*) malloc(n * sizeof(int));
    b.vetor = (int*) malloc(n * sizeof(int));

    preencher_vetor(&a);
    preencher_vetor(&b);

    printf("Erro médio quadrático: %.2f\n", calcular_erro_medio_quadratico(&a, &b));

    free(a.vetor);
    free(b.vetor);
    return 0;
}
