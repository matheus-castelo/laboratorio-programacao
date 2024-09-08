#include <stdio.h>

int main() {
    char str[100];
    printf("Digite uma string: ");
    fgets(str, 100, stdin);

    char *ptr = str;
    int count = 0;
    while (*ptr != '\0') {
        count++;
        ptr++;
    }

    printf("Tamanho da string: %d\n", count - 1);
    return 0;
}
