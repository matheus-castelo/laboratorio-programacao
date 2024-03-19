#include <stdio.h>

int main()
{
    int numero;
    
    do {
        printf("Digite um numero entre 1 e 7 (ou 0 para sair): ");
        scanf("%d", &numero);
        
        if (numero < 1 || numero > 7) {
            printf("Numero de dia nao valido.\n");
        } else {
            switch(numero) {
                case 1:
                    printf("Domingo\n");
                    break;
                case 2:
                    printf("Segunda\n");
                    break;
                case 3:
                    printf("Terca\n");
                    break;
                case 4:
                    printf("Quarta\n");
                    break;
                case 5:
                    printf("Quinta\n");
                    break;
                case 6:
                    printf("Sexta\n");
                    break;
                case 7:
                    printf("Sabado\n");
                    break;
            }
        }
    } while (numero != 0);
    
    return 0;
}
