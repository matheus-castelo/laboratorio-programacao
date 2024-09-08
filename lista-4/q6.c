#include <stdio.h>

void copia(char *dest, char *orig) {
    while (*orig != '\0') {
        *dest = *orig;
        dest++;
        orig++;
    }
    *dest = '\0';
}

int main() {
    char str1[100], str2[100];
    printf("Digite uma string: ");
    fgets(str1, 100, stdin);

    copia(str2, str1);
    printf("Cópia da string: %s", str2);

    return 0;
}
