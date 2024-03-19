#include <stdio.h>

int main(){
    int A, B;
    puts("Digite respectivamente os valores de A e B");
    scanf("%d %d", &A, &B);
    
    if (A > B){
        for (int i = B; i <= A; i++){
            if (i % 4 == 0){
                printf("%d\n", i * i);
            }
        }
    }
    else{
        for (int i = A; i <= B; i++){
            if (i % 4 == 0){
                printf("%d\n", i * i);
            }
        }
    }
    
    return 0;
}
