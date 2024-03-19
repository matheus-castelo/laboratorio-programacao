/* Escreva um programa que apresente o somat ́orio de todos os n ́umeros divis ́ıveis por 3 pertencentes ao
intervalo [0,100] e o somat ́orio de todos os n ́umeros divis ́ıveis por 5 pertencentes ao intervalo ]100,200].
Obs.: Utilize apenas um la ̧co de repeti ̧c ̃ao.*/
#include <stdio.h>

int main(){
    int somatorio3, somatorio5;
    for (int i=1 ; i<=200 ; i++){
        if (i<=100 && i%3==0){
            somatorio3 += 1;
        }
        if (i<=200 && i%5==0){
            somatorio5 += 1;
        }
    }
    printf("Somatorio 3:%d  e Somatorio 5: %d",somatorio3,somatorio5);
    
}