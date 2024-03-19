#include <stdio.h>

int main() {
    int Jose = 150;
    int Pedro = 110;
    int contador = 0;
    
    do {
        contador++;
        Jose += 2;  
        Pedro += 3;
    } while (Pedro <= Jose); 
    
    printf("Pedro será maior que José em %d anos.\n", contador);
    
    return 0;
}
