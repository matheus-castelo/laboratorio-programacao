#include <stdio.h>

int main(){
    long long int fatorial = 1; 
    
    for (int i = 1; i <= 10; i++){
        if (i % 2 != 0){
            fatorial = 1;
            for (int j = i; j >= 1; j--){
                fatorial *= j;
            }
            printf("O fatorial de %d é: %lld\n", i, fatorial);
        }
    }
    
    return 0;
}