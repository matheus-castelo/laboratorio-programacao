/* Elabore um programa que apresente os quadrados dos n ́umeros inteiros m ́ultiplos de 4 existentes na
faixa de valores de 15 a 90.*/

#include <stdio.h>

int main(){
    for (int i =15 ; i<=90 ; i++){
        if (i%4 ==0){
            printf("%d \n", i*i);
        }
    }
    
    
    return 0;
}