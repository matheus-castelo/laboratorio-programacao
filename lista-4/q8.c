#include <stdio.h>

char* busca_char(char *str, char c) {
    while (*str != '\0') {
        if (*str == c) return str;
        str++;
    }
    return NULL;
}

int main() {
    char str[100], c;
    printf("Digite uma string: ");
    fgets(str, 100, stdin);
    printf("Digite o caractere a ser buscado: ");
    scanf(" %c", &c);

    char *res = busca_char(str, c);
    if (res) {
        printf("Caractere encontrado no endereço: %p\n", (void*)res);
    } else {
        printf("Caractere não encontrado\n");
    }
    return 0;
}
