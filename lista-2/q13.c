/* Elabore um programa que calcule o somat ́orio de todos os n ́umeros pares pertencentes a faixa A,B
especificada pelo usu ́ario. O programa deve funcionar tanto para A > B quanto para B > A.*/

#include <stdio.h>
int main(){
    int A,B, somatorio;
    puts("Digite respectivamente A e B");
    scanf("%d %d", &A, &B);
    
    if (A>B){
        for (int i=B; i<A; i++){
            if (i%2==0){
                somatorio += i;
            }
        }
    }
    else{
        for (int i=A ; i<B ; i++){
            if (i%2==0){
                somatorio += i;
            }
        }
    }
    printf("Somatorio: %d", somatorio);
    
}