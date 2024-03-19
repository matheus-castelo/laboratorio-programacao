/* Elaborar um programa que apresente a m ́edia aritm ́etica dos n ́umeros inteiros existentes entre uma
faixa especificada pelo usu ́ario.*/
#include <stdio.h>

int main(){
    float A,B, somatorio;
    puts("Digite A e B (maior primeiro)");
    scanf("%f %f", &A,&B);
    
    for (int i= (int)B; i<= (int) A; i++){
        somatorio +=i;
    }
    printf("%.2f",somatorio/(A-B));
    
    return 0;
}