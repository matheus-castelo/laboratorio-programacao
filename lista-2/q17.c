#include <stdio.h>

int main() {
    int celsius;

    printf("Celsius    Fahrenheit\n");
    printf("---------------------\n");

    for (int celsius = 10; celsius <= 100; celsius += 10) {
        double fahrenheit = (celsius * 9.0 / 5.0) + 32;
        printf("%d          %.2lf\n", celsius, fahrenheit);
    }

    return 0;
}
