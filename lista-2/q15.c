/* Elaborar um programa que apresente os resultados das potˆencias do valor de base 3, elevado a um
expoente que varie do valor 0 a 7. */


#include <stdio.h>

int main(){
    int i = 1;
    
    for (i=1 ; i<=7 ; i++){
        printf("%d elevado a 3 = %d \n",i,i*i*i);
    }
    
    
}