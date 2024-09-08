#include <stdio.h>

void bubble_sort(int *vetor, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (*(vetor + j) > *(vetor + j + 1)) {
                int temp = *(vetor + j);
                *(vetor + j) = *(vetor + j + 1);
                *(vetor + j + 1) = temp;
            }
        }
    }
}

int main() {
    int vetor[5] = {5, 2, 9, 1, 5};
    bubble_sort(vetor, 5);

    printf("Vetor ordenado:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(vetor + i));
    }
    printf("\n");

    return 0;
}
