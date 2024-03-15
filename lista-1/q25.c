#include <stdio.h>

int main () {
    int horas;
 puts("Digite um tempo inteiro em horas: ");
 scanf("%d", &horas);
 printf("O tempo que voce forneceu, tem %d minutos ou %d segundos", horas*60, horas*60*60);

 

return 0;
}