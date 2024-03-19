/* Elaborar um programa que mostre os resultados da tabuada de um n ́umero inteiro qualquer, a qual
deve ser apresentada de acordo com sua forma tradicional. */
#include <stdio.h>

int main(){
    int numeroTabuada, resultado;
    puts("Digite um numero");
    scanf("%d", &numeroTabuada);
    
    for (int i =1 ; i<=10 ; i++){
        resultado = i*numeroTabuada;
        printf("%d * %d = %d \n", i,numeroTabuada, resultado);
    }
    
    return 0;
}