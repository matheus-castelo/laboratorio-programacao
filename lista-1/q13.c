#include <stdio.h>

int main() {
    int A, B, temp;
    
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    
    printf("Valores antes da troca: A = %d, B = %d\n", A, B);
    
    
    temp = A;
    A = B;
    B = temp;
    
    printf("Valores após a troca: A = %d, B = %d\n", A, B);
    
    return 0;
}
