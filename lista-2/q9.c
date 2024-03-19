#include <stdio.h>

int main() {
    int termo1 = 1;
    int termo2 = 1;
    int proximo_termo;

    printf("%d\n", termo1);
    printf("%d\n", termo2);

    for (int i = 0; i < 18; i++) {
        proximo_termo = termo1 + termo2;
        printf("%d\n", proximo_termo);
        termo1 = termo2;
        termo2 = proximo_termo;
    }

    return 0;
}
