#include <stdio.h>

int main() {
    int a = 16;
    int b = 3;

    // Opérateurs arithmétiques
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);

    // Opérateurs logiques / comparaisons
    printf("\na == b : %d\n", (a == b));   // 1 = vrai, 0 = faux
    printf("a > b  : %d\n", (a > b));      // 1 = vrai, 0 = faux

    return 0;
}
