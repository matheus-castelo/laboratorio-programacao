#include <stdio.h>

void concatena(char *dest, char *orig) {
    while (*dest != '\0') {
        dest++;
    }
    while (*orig != '\0') {
        *dest = *orig;
        dest++;
        orig++;
    }
    *dest = '\0';
}

int main() {
    char str1[100], str2[100];
    printf("Digite a primeira string: ");
    fgets(str1, 100, stdin);
    printf("Digite a segunda string: ");
    fgets(str2, 100, stdin);

    concatena(str1, str2);
    printf("Strings concatenadas: %s", str1);

    return 0;
}
