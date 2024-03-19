#include <stdio.h>

int main(){
    int A, B, intermediario = 0; 
    puts("Digite os valores de A e B:");
    scanf("%d %d", &A, &B);
    
    if (A > B){
        for (int i = B; i <= A; i++){
            if (i % 3 == 0){
                intermediario += 1;
            }
        }
    }
    else {
        for (int i = A; i <= B; i++){
            if (i % 3 == 0){
                intermediario += 1;
            }
        }
    }
    printf("A quantidade de números divisíveis por 3 é: %d\n", intermediario);
    
    return 0;
}
