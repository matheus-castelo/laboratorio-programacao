#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Digite uma string: ");
    fgets(str, 100, stdin);

    int len = strlen(str);
    char *start = str, *end = str + len - 2, temp; // -2 para não incluir '\0'

    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }

    printf("String invertida: %s", str);
    return 0;
}
