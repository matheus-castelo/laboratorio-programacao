#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    printf("Digite a primeira string: ");
    fgets(str1, 100, stdin);
    printf("Digite a segunda string: ");
    fgets(str2, 100, stdin);

    // Usando strcmp()
    if (strcmp(str1, str2) == 0) {
        printf("As strings são iguais (strcmp)\n");
    } else {
        printf("As strings são diferentes (strcmp)\n");
    }

    // Sem strcmp()
    char *ptr1 = str1, *ptr2 = str2;
    while (*ptr1 == *ptr2 && *ptr1 != '\0' && *ptr2 != '\0') {
        ptr1++;
        ptr2++;
    }
    if (*ptr1 == '\0' && *ptr2 == '\0') {
        printf("As strings são iguais (manual)\n");
    } else {
        printf("As strings são diferentes (manual)\n");
    }
    return 0;
}
