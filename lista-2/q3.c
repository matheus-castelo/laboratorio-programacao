#include <stdio.h>

int main() {
    int numero;
    puts("Digite um numero");
    scanf("%d", &numero);
    
    int fatorial = 1;
    for (int i = 1; i <= numero; i++) {
        fatorial *= i;
    }
    
    printf("O fatorial de %d é: %d\n", numero, fatorial);
    
    return 0;
}
