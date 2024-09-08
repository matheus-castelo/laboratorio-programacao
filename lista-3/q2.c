#include <stdio.h>
#include <string.h>

int main() {
    char str[100], c, *ptr;
    printf("Digite uma string: ");
    fgets(str, 100, stdin);
    printf("Digite um caractere: ");
    scanf(" %c", &c);

    ptr = strchr(str, c);
    if (ptr) {
        printf("Caractere encontrado!\n");
    } else {
        printf("Caractere não encontrado!\n");
    }
    return 0;
}
