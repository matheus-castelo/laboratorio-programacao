#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], result[200];
    printf("Digite a primeira string: ");
    fgets(str1, 100, stdin);
    printf("Digite a segunda string: ");
    fgets(str2, 100, stdin);

    // Usando strcat()
    strcpy(result, str1);
    strcat(result, str2);
    printf("Concatenada (strcat): %s", result);

    // Sem strcat()
    char *ptr1 = str1, *ptr2 = str2;
    int i = 0;
    while (*ptr1 != '\0') {
        result[i++] = *ptr1++;
    }
    while (*ptr2 != '\0') {
        result[i++] = *ptr2++;
    }
    result[i] = '\0';
    printf("Concatenada (manual): %s", result);
    return 0;
}
