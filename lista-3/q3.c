#include <stdio.h>

int main() {
    char str[100];
    int count = 0;
    printf("Digite uma string: ");
    fgets(str, 100, stdin);
    
    char *ptr = str;
    while (*ptr != '\0') {
        count++;
        ptr++;
    }

    printf("Quantidade de caracteres: %d\n", count - 1);
    return 0;
}
