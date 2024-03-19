/* Escreva um programa que mostre a diferen ̧ca entre pr ́e-incrementar e p ́os-incrementar usando o ope-
rador –.*/

#include <stdio.h>
int main(){
    int num;
    puts("Digite um numero: ");
    scanf("%d", &num);
    printf("1- Pós Incrementado: %d \n", num--);
    printf("2- Pré Incrementado: %d \n", --num);
    return 0;
}