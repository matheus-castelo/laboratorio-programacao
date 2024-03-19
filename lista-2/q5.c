#include <stdio.h>

int main() {
    int numero1, numero2, n;
    
    do {
        printf("Observação: Digite 0 se quiser parar. Se quiser continuar, digite qualquer coisa diferente de 0\n");
        scanf("%d", &n);
        printf("Digite respectivamente um numero  e outro numero \n");
        scanf("%d %d", &numero1, &numero2);
        if (numero1 > numero2) {
            printf("Primeiro numero digitado é maior que o segundo numero \n");
        } else if (numero1 == numero2) {
            printf("Os dois são iguais\n");
        } else {
            printf("O segundo numero digitado é maior que o primeiro numero \n");
        }
    } while (n != 0);

    return 0;
}
